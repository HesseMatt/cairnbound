# Cairnbound

A small top-down dungeon game for the original Game Boy (DMG), written in C
with [GBDK-2020](https://github.com/gbdk-2020/gbdk-2020). It is a personal
learning project for the platform, tested in an emulator first.

## Idea

Walk through a short, linear dungeon of a few fixed rooms, defeat the enemies
on the way and reach the **cairn** (a stone waypoint marker) in the last room
to finish the run.

## MVP scope

- Three states: `TITLE` → `DUNGEON` → `END`
- Grid movement in snap steps, one room per screen, no scrolling
- Turn-based bump-attack combat, one enemy type
- 3–5 fixed rooms, HP display
- No save, no sound

## Build

Requires GBDK-2020 with `GBDKDIR` pointing to its install directory.

```sh
mkdir -p build && lcc -o build/cairnbound.gb src/main.c
```

## Status

Early work in progress.
