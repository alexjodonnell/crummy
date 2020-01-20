#include "flecs.h"
#include "raylib.h"

#include "crummy.h"

#include "colors.h"

#include "core.h"

#include "entities.h"
#include "components.h"
#include "systems.h"

int main(int argc, char *argv[])
{
    InitWindow(WORLD_WIDTH, WORLD_HEIGHT, "crummy");

    ecs_world_t *world = ecs_init();

    FontAlagard = LoadFont("assets/alagard.png");

    ECS_IMPORT(world, CrummyComponents, 0);
    ECS_IMPORT(world, CrummySystems, 0);

    // SpawnPlayableCrumb(world, (Vector2){100, 100});
    SpawnCrumb(world, (Vector2){200, 200}, RockCrumb);
    SpawnCrumb(world, (Vector2){300, 300}, RockCrumb);
    SpawnCrumb(world, (Vector2){400, 400}, RockCrumb);

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