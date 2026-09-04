# GT2 PS1 → Vita Migration Matrix

| PS1 facility | Vita replacement | Phase |
|---|---|---|
| CD sector I/O | `runtime/gtfs` + Vita file/image backend | Boot |
| GTFS / GT2.VOL | Preserve logical sector/file API; backend reads Vita storage | Boot |
| Memory Card | Vita filesystem save slots | Boot/save |
| PadInitDirect / PadRead | SceCtrl input adapter | Boot/input |
| VSync / timers | Vita timing + display sync | Boot |
| GTE | Portable fixed-point implementation, then NEON | Renderer |
| GPU primitives | GT2 command capture → Vita GXM renderer | Renderer |
| SPU / XA / CD audio | Vita audio mixer/decoder | Audio |
| DecDCT | Native software/DSP path as needed | Video/audio |
| PS1 overlays | Static linking + logical dispatcher | Boot |
| MIPS register asm | C/portable helpers; only performance paths use ARM asm | Build |
| PS1 BIOS services | Runtime compatibility layer | Build/runtime |

## Rule

Keep the historical GT2-DECOMP matching build untouched. Vita-specific replacements belong behind the runtime/platform boundary.
