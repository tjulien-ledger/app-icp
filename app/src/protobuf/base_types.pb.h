/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.6-dev */

#ifndef PB_IC_BASE_TYPES_PB_V1_BASE_TYPES_PB_H_INCLUDED
#define PB_IC_BASE_TYPES_PB_V1_BASE_TYPES_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Struct definitions */
typedef PB_BYTES_ARRAY_T(30) ic_base_types_pb_v1_PrincipalId_serialized_id_t;
/* A PB container for a PrincipalId, which uniquely identifies
 a principal. */
typedef struct _ic_base_types_pb_v1_PrincipalId { 
    ic_base_types_pb_v1_PrincipalId_serialized_id_t serialized_id; 
} ic_base_types_pb_v1_PrincipalId;


/* Extensions */
/* Extension field ic_base_types_pb_v1_tui_signed_message was skipped because only "optional"
   type of extension fields is currently supported. */
/* Extension field ic_base_types_pb_v1_tui_signed_display_q2_2021 was skipped because only "optional"
   type of extension fields is currently supported. */

#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define ic_base_types_pb_v1_PrincipalId_init_default {{0, {0}}}
#define ic_base_types_pb_v1_PrincipalId_init_zero {{0, {0}}}

/* Field tags (for use in manual encoding/decoding) */
#define ic_base_types_pb_v1_PrincipalId_serialized_id_tag 1
#define ic_base_types_pb_v1_tui_signed_message_tag 20000
#define ic_base_types_pb_v1_tui_signed_display_q2_2021_tag 20001

/* Struct field encoding specification for nanopb */
#define ic_base_types_pb_v1_PrincipalId_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, BYTES,    serialized_id,     1)
#define ic_base_types_pb_v1_PrincipalId_CALLBACK NULL
#define ic_base_types_pb_v1_PrincipalId_DEFAULT NULL

extern const pb_msgdesc_t ic_base_types_pb_v1_PrincipalId_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define ic_base_types_pb_v1_PrincipalId_fields &ic_base_types_pb_v1_PrincipalId_msg

/* Maximum encoded size of messages (where known) */
#define ic_base_types_pb_v1_PrincipalId_size     32

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
