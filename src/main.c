#include <stdio.h>
#include <stdlib.h>

#include "pd_api.h"
#include "pd_api/pd_api_gfx.h"
#include "pd_api/pd_api_lua.h"
#include "pd_api/pd_api_sys.h"

static int update(void *userdata);

const int screen_width = 400;
const int screen_height = 240;

typedef struct game_s {
} game_t;


int eventHandler(PlaydateAPI *pd, PDSystemEvent event, uint32_t arg) {
  if (event == kEventInit) {
    pd->system->setUpdateCallback(update, pd);
  }

  return 0;
}

static int update(void *userdata) {
  PlaydateAPI *pd = userdata;
  pd->graphics->clear(kColorWhite);
  return 1;
}
