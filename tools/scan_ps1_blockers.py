#!/usr/bin/env python3
import os,re,sys
root=sys.argv[1] if len(sys.argv)>1 else "."
rx={
 "mips_asm":r'\basm\s*\(|__asm__|register\s+\w+.*asm\s*\(',
 "cd":r'\b(?:CdInit|CdRead|CdControl|CdSync|CdGetSector|CdSearchFile|CdOpen|CdClose)\b',
 "pad":r'\b(?:PadInitDirect|PadRead|PadInit|PadStop)\b',
 "card":r'\b(?:InitCARD|StartCARD|_bu_init)\b',
 "dct":r'\b(?:DecDCTReset|DecDCTvlc|DecDCTin|DecDCTout)\b',
 "spu":r'\bSpu\w*\b',
 "gpu":r'\b(?:DrawSync|VSync|LoadImage|StoreImage|ClearImage|PutDispEnv|PutDrawEnv)\b',
}
compiled={k:re.compile(v) for k,v in rx.items()}
for dp,_,fn in os.walk(root):
    for f in fn:
        if not f.endswith((".c",".h",".S",".s")): continue
        p=os.path.join(dp,f)
        try:t=open(p,errors="ignore").read()
        except:continue
        found=[k for k,r in compiled.items() if r.search(t)]
        if found: print(f"{os.path.relpath(p,root)}: {', '.join(found)}")
