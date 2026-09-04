# GT2-Vita — next integration revision

This package is built from the uploaded GT2-DECOMP source tree plus the Vita runtime boundaries.

## Important

The original GT2 matching build remains under `game/`. Do not mix Vita substitutions into the historical matching configuration.

## First migration work

1. Run `python3 tools/scan_ps1_blockers.py game`
2. Start with startup/CD/GTFS.
3. Replace PS1 memory-card access with the save backend.
4. Remove MIPS register-bound overlay loading.
5. Bring up GTE before attempting full 3D rendering.
6. Implement the Vita renderer after game-side primitive behavior is understood.

No GT2 disc image or copyrighted game assets are included.
