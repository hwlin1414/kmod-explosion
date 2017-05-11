#include <sys/param.h>
#include <sys/module.h>
#include <sys/kernel.h>
#include <sys/systm.h>

static int event_handler(struct module *, int, void *);
static moduledata_t explosion_conf;
DECLARE_MODULE(explosion_mod, explosion_conf, SI_SUB_DRIVERS, SI_ORDER_MIDDLE);

static moduledata_t explosion_conf = {
    "explosion",    /* module name */
    event_handler,  /* event handler */
    NULL            /* extra data */
};

static int event_handler(struct module *module, int event, void *arg) {
    int e = 0; /* Error, 0 for normal return status */
    switch (event) {
        case MOD_LOAD:
            panic("Explosion!!\n");
            break;
        case MOD_UNLOAD:
            break;
        default:
            e = EOPNOTSUPP; /* Error, Operation Not Supported */
            break;
    }
    return(e);
}
