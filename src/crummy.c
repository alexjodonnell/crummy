#include <flecs.h>
#include <raylib.h>

#include "crummy.h"
#include "colors.h"
#include "core.h"
#include "db.h"

#include "entities.h"
#include "components.h"
#include "systems.h"

char * universe = "theuniverse.crummy";

void init();

int main(int argc, char *argv[])
{
    ecs_world_t *world = ecs_init();

    init();

    ECS_IMPORT(world, CrummyComponents, 0);
    ECS_IMPORT(world, CrummySystems, 0);

    SpawnCrumb(world, (Vector2){0, 512}, RockCrumb);
    SpawnCCamera(world, (Vector2){0, 512});

    ecs_set_target_fps(world, 60);

    while (!WindowShouldClose() && ecs_progress(world, 0))
    {
        BeginDrawing();
        ClearBackground(DUSK);
        EndDrawing();
    }

    ecs_fini(world);

    return 0;
}

void init()
{
    question_or_create_universe(universe);

    InitWindow(WINDOW_WIDTH_PX, WINDOW_HEIGHT_PX, "crummy");

    FontAlagard = LoadFont("assets/alagard.png");
}