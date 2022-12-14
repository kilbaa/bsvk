#ifndef BS_DEBUGGING_H
#define BS_DEBUGGING_H

void bs_print(const int info_type, char *format, ...);
bool bsdbg_hilightMeshOnMouseOver(bs_Mesh *mesh, bs_mat4 model, bs_Camera *cam);

void bsdbg_tick();
void bsdbg_init();

#define BS_CLE 0
#define BS_INF 1
#define BS_WAR 2
#define BS_ERR 3

#endif /* BS_DEBUGGING_H */
