#include <gb/gb.h>
#include "tileset.h"
#include "room_01.h"

void draw_metatile(uint8_t n, uint8_t x, uint8_t y){
    set_bkg_tile_xy(x, y, tileset_map[2*n]);
    set_bkg_tile_xy(x+1, y, tileset_map[(2*n)+1] );
    set_bkg_tile_xy(x, y+1, tileset_map[(2*n)+8] );
    set_bkg_tile_xy(x+1, y+1, tileset_map[(2*n)+ 9] );
}

void main(void) {
    
    SHOW_BKG;

    set_bkg_data(tileset_TILE_ORIGIN, tileset_TILE_COUNT, tileset_tiles);
    
    uint8_t x, y;

    for (y = 0; y < ROOM_H; y++) {
        for (x = 0; x < ROOM_W; x++) {
            draw_metatile(room_01[y * ROOM_W + x], x*2, y*2);
        }
    }

    while(1){

        wait_vbl_done();

    }
}