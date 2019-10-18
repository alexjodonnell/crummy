#ifndef _SYSTEMS_H
#define _SYSTEMS_H

#include "flecs.h"

typedef struct _crummy_systems
{
    ECS_DECLARE_ENTITY(SpriteRenderer);
    ECS_DECLARE_ENTITY(Mover);
} CrummySystems;

#define CrummySystemsImportHandles(handles)\
    ECS_IMPORT_ENTITY(handles, SpriteRenderer);\
    ECS_IMPORT_ENTITY(handles, Mover);

void CrummySystemsImport(ecs_world_t * world, int flags);

// Public systems
void Input(ecs_rows_t * rows);

#endif