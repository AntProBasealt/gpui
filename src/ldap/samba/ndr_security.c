/*
 *  Unix SMB/CIFS implementation.
 *  Group Policy Object Support
 *  Copyright (C) Wilco Baan Hofman 2010
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, see <http://www.gnu.org/licenses/>.
 */

/*
 * This file is a copy of private samba generated sources.
 */

#include "ndr_security.h"

#include "ndr_misc.h"

#include "../adldap_config.h"

#define UNUSED_ARG(x) (void)(x)

static void ndr_print_flags_dom_sid(struct ndr_print *ndr, const char *name, int unused, const struct dom_sid *r)
{
    UNUSED_ARG(unused);

    ndr_print_dom_sid(ndr, name, r);
}

static enum ndr_err_code ndr_push_se_privilege(struct ndr_push *ndr, int ndr_flags, uint64_t r)
{
    UNUSED_ARG(ndr_flags);

    NDR_CHECK(ndr_push_hyper(ndr, NDR_SCALARS, r));
    return NDR_ERR_SUCCESS;
}

static enum ndr_err_code ndr_pull_se_privilege(struct ndr_pull *ndr, int ndr_flags, uint64_t *r)
{
    UNUSED_ARG(ndr_flags);

    uint64_t v;
    NDR_CHECK(ndr_pull_hyper(ndr, NDR_SCALARS, &v));
    *r = v;
    return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_se_privilege(struct ndr_print *ndr, const char *name, uint64_t r)
{
    ndr_print_hyper(ndr, name, r);
    ndr->depth++;
    ndr_print_bitmap_flag(ndr, sizeof(uint64_t), "SEC_PRIV_MACHINE_ACCOUNT_BIT", SEC_PRIV_MACHINE_ACCOUNT_BIT, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint64_t), "SEC_PRIV_PRINT_OPERATOR_BIT", SEC_PRIV_PRINT_OPERATOR_BIT, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint64_t), "SEC_PRIV_ADD_USERS_BIT", SEC_PRIV_ADD_USERS_BIT, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint64_t), "SEC_PRIV_DISK_OPERATOR_BIT", SEC_PRIV_DISK_OPERATOR_BIT, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint64_t), "SEC_PRIV_REMOTE_SHUTDOWN_BIT", SEC_PRIV_REMOTE_SHUTDOWN_BIT, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint64_t), "SEC_PRIV_BACKUP_BIT", SEC_PRIV_BACKUP_BIT, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint64_t), "SEC_PRIV_RESTORE_BIT", SEC_PRIV_RESTORE_BIT, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint64_t), "SEC_PRIV_TAKE_OWNERSHIP_BIT", SEC_PRIV_TAKE_OWNERSHIP_BIT, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint64_t), "SEC_PRIV_INCREASE_QUOTA_BIT", SEC_PRIV_INCREASE_QUOTA_BIT, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint64_t), "SEC_PRIV_SECURITY_BIT", SEC_PRIV_SECURITY_BIT, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint64_t), "SEC_PRIV_LOAD_DRIVER_BIT", SEC_PRIV_LOAD_DRIVER_BIT, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint64_t), "SEC_PRIV_SYSTEM_PROFILE_BIT", SEC_PRIV_SYSTEM_PROFILE_BIT, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint64_t), "SEC_PRIV_SYSTEMTIME_BIT", SEC_PRIV_SYSTEMTIME_BIT, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint64_t), "SEC_PRIV_PROFILE_SINGLE_PROCESS_BIT", SEC_PRIV_PROFILE_SINGLE_PROCESS_BIT, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint64_t), "SEC_PRIV_INCREASE_BASE_PRIORITY_BIT", SEC_PRIV_INCREASE_BASE_PRIORITY_BIT, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint64_t), "SEC_PRIV_CREATE_PAGEFILE_BIT", SEC_PRIV_CREATE_PAGEFILE_BIT, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint64_t), "SEC_PRIV_SHUTDOWN_BIT", SEC_PRIV_SHUTDOWN_BIT, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint64_t), "SEC_PRIV_DEBUG_BIT", SEC_PRIV_DEBUG_BIT, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint64_t), "SEC_PRIV_SYSTEM_ENVIRONMENT_BIT", SEC_PRIV_SYSTEM_ENVIRONMENT_BIT, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint64_t), "SEC_PRIV_CHANGE_NOTIFY_BIT", SEC_PRIV_CHANGE_NOTIFY_BIT, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint64_t), "SEC_PRIV_UNDOCK_BIT", SEC_PRIV_UNDOCK_BIT, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint64_t), "SEC_PRIV_ENABLE_DELEGATION_BIT", SEC_PRIV_ENABLE_DELEGATION_BIT, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint64_t), "SEC_PRIV_MANAGE_VOLUME_BIT", SEC_PRIV_MANAGE_VOLUME_BIT, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint64_t), "SEC_PRIV_IMPERSONATE_BIT", SEC_PRIV_IMPERSONATE_BIT, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint64_t), "SEC_PRIV_CREATE_GLOBAL_BIT", SEC_PRIV_CREATE_GLOBAL_BIT, r);
    ndr->depth--;
}

static enum ndr_err_code ndr_push_lsa_SystemAccessModeFlags(struct ndr_push *ndr, int ndr_flags, uint32_t r)
{
    UNUSED_ARG(ndr_flags);

    NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r));
    return NDR_ERR_SUCCESS;
}

static enum ndr_err_code ndr_pull_lsa_SystemAccessModeFlags(struct ndr_pull *ndr, int ndr_flags, uint32_t *r)
{
    UNUSED_ARG(ndr_flags);

    uint32_t v;
    NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &v));
    *r = v;
    return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_lsa_SystemAccessModeFlags(struct ndr_print *ndr, const char *name, uint32_t r)
{
    ndr_print_uint32(ndr, name, r);
    ndr->depth++;
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "LSA_POLICY_MODE_INTERACTIVE", LSA_POLICY_MODE_INTERACTIVE, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "LSA_POLICY_MODE_NETWORK", LSA_POLICY_MODE_NETWORK, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "LSA_POLICY_MODE_BATCH", LSA_POLICY_MODE_BATCH, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "LSA_POLICY_MODE_SERVICE", LSA_POLICY_MODE_SERVICE, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "LSA_POLICY_MODE_PROXY", LSA_POLICY_MODE_PROXY, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "LSA_POLICY_MODE_DENY_INTERACTIVE", LSA_POLICY_MODE_DENY_INTERACTIVE, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "LSA_POLICY_MODE_DENY_NETWORK", LSA_POLICY_MODE_DENY_NETWORK, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "LSA_POLICY_MODE_DENY_BATCH", LSA_POLICY_MODE_DENY_BATCH, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "LSA_POLICY_MODE_DENY_SERVICE", LSA_POLICY_MODE_DENY_SERVICE, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "LSA_POLICY_MODE_REMOTE_INTERACTIVE", LSA_POLICY_MODE_REMOTE_INTERACTIVE, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "LSA_POLICY_MODE_DENY_REMOTE_INTERACTIVE", LSA_POLICY_MODE_DENY_REMOTE_INTERACTIVE, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "LSA_POLICY_MODE_ALL", LSA_POLICY_MODE_ALL, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "LSA_POLICY_MODE_ALL_NT4", LSA_POLICY_MODE_ALL_NT4, r);
    ndr->depth--;
}

_PUBLIC_ enum ndr_err_code ndr_push_security_ace_flags(struct ndr_push *ndr, int ndr_flags, uint8_t r)
{
    UNUSED_ARG(ndr_flags);

    NDR_CHECK(ndr_push_uint8(ndr, NDR_SCALARS, r));
    return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_security_ace_flags(struct ndr_pull *ndr, int ndr_flags, uint8_t *r)
{
    UNUSED_ARG(ndr_flags);

    uint8_t v;
    NDR_CHECK(ndr_pull_uint8(ndr, NDR_SCALARS, &v));
    *r = v;
    return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_security_ace_flags(struct ndr_print *ndr, const char *name, uint8_t r)
{
    ndr_print_uint8(ndr, name, r);
    ndr->depth++;
    ndr_print_bitmap_flag(ndr, sizeof(uint8_t), "SEC_ACE_FLAG_OBJECT_INHERIT", SEC_ACE_FLAG_OBJECT_INHERIT, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint8_t), "SEC_ACE_FLAG_CONTAINER_INHERIT", SEC_ACE_FLAG_CONTAINER_INHERIT, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint8_t), "SEC_ACE_FLAG_NO_PROPAGATE_INHERIT", SEC_ACE_FLAG_NO_PROPAGATE_INHERIT, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint8_t), "SEC_ACE_FLAG_INHERIT_ONLY", SEC_ACE_FLAG_INHERIT_ONLY, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint8_t), "SEC_ACE_FLAG_INHERITED_ACE", SEC_ACE_FLAG_INHERITED_ACE, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint8_t), "SEC_ACE_FLAG_VALID_INHERIT", SEC_ACE_FLAG_VALID_INHERIT, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint8_t), "SEC_ACE_FLAG_SUCCESSFUL_ACCESS", SEC_ACE_FLAG_SUCCESSFUL_ACCESS, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint8_t), "SEC_ACE_FLAG_FAILED_ACCESS", SEC_ACE_FLAG_FAILED_ACCESS, r);
    ndr->depth--;
}

_PUBLIC_ enum ndr_err_code ndr_push_security_ace_type(struct ndr_push *ndr, int ndr_flags, enum security_ace_type r)
{
    UNUSED_ARG(ndr_flags);

    NDR_CHECK(ndr_push_enum_uint8(ndr, NDR_SCALARS, r));
    return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_security_ace_type(struct ndr_pull *ndr, int ndr_flags, enum security_ace_type *r)
{
    UNUSED_ARG(ndr_flags);

    uint8_t v;
    NDR_CHECK(ndr_pull_enum_uint8(ndr, NDR_SCALARS, &v));
    *r = v;
    return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_security_ace_type(struct ndr_print *ndr, const char *name, enum security_ace_type r)
{
    const char *val = NULL;

    switch (r) {
        case SEC_ACE_TYPE_ACCESS_ALLOWED: val = "SEC_ACE_TYPE_ACCESS_ALLOWED"; break;
        case SEC_ACE_TYPE_ACCESS_DENIED: val = "SEC_ACE_TYPE_ACCESS_DENIED"; break;
        case SEC_ACE_TYPE_SYSTEM_AUDIT: val = "SEC_ACE_TYPE_SYSTEM_AUDIT"; break;
        case SEC_ACE_TYPE_SYSTEM_ALARM: val = "SEC_ACE_TYPE_SYSTEM_ALARM"; break;
        case SEC_ACE_TYPE_ALLOWED_COMPOUND: val = "SEC_ACE_TYPE_ALLOWED_COMPOUND"; break;
        case SEC_ACE_TYPE_ACCESS_ALLOWED_OBJECT: val = "SEC_ACE_TYPE_ACCESS_ALLOWED_OBJECT"; break;
        case SEC_ACE_TYPE_ACCESS_DENIED_OBJECT: val = "SEC_ACE_TYPE_ACCESS_DENIED_OBJECT"; break;
        case SEC_ACE_TYPE_SYSTEM_AUDIT_OBJECT: val = "SEC_ACE_TYPE_SYSTEM_AUDIT_OBJECT"; break;
        case SEC_ACE_TYPE_SYSTEM_ALARM_OBJECT: val = "SEC_ACE_TYPE_SYSTEM_ALARM_OBJECT"; break;
    }
    ndr_print_enum(ndr, name, "ENUM", val, r);
}

static enum ndr_err_code ndr_push_security_ace_object_flags(struct ndr_push *ndr, int ndr_flags, uint32_t r)
{
    UNUSED_ARG(ndr_flags);

    NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r));
    return NDR_ERR_SUCCESS;
}

static enum ndr_err_code ndr_pull_security_ace_object_flags(struct ndr_pull *ndr, int ndr_flags, uint32_t *r)
{
    UNUSED_ARG(ndr_flags);

    uint32_t v;
    NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &v));
    *r = v;
    return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_security_ace_object_flags(struct ndr_print *ndr, const char *name, uint32_t r)
{
    ndr_print_uint32(ndr, name, r);
    ndr->depth++;
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "SEC_ACE_OBJECT_TYPE_PRESENT", SEC_ACE_OBJECT_TYPE_PRESENT, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "SEC_ACE_INHERITED_OBJECT_TYPE_PRESENT", SEC_ACE_INHERITED_OBJECT_TYPE_PRESENT, r);
    ndr->depth--;
}

static enum ndr_err_code ndr_push_security_ace_object_type(struct ndr_push *ndr, int ndr_flags, const union security_ace_object_type *r)
{
    uint32_t level;
    NDR_PUSH_CHECK_FLAGS(ndr, ndr_flags);
    if (ndr_flags & NDR_SCALARS) {
        /* This token is not used again (except perhaps below in the NDR_BUFFERS case) */
        NDR_CHECK(ndr_push_steal_switch_value(ndr, r, &level));
        NDR_CHECK(ndr_push_union_align(ndr, 4));
        switch (level) {
            case SEC_ACE_OBJECT_TYPE_PRESENT: {
                NDR_CHECK(ndr_push_GUID(ndr, NDR_SCALARS, &r->type));
            break; }

            default: {
            break; }

        }
    }
    return NDR_ERR_SUCCESS;
}

static enum ndr_err_code ndr_pull_security_ace_object_type(struct ndr_pull *ndr, int ndr_flags, union security_ace_object_type *r)
{
    uint32_t level;
    NDR_PULL_CHECK_FLAGS(ndr, ndr_flags);
    if (ndr_flags & NDR_SCALARS) {
        /* This token is not used again (except perhaps below in the NDR_BUFFERS case) */
        NDR_CHECK(ndr_pull_steal_switch_value(ndr, r, &level));
        NDR_CHECK(ndr_pull_union_align(ndr, 4));
        switch (level) {
            case SEC_ACE_OBJECT_TYPE_PRESENT: {
                NDR_CHECK(ndr_pull_GUID(ndr, NDR_SCALARS, &r->type));
            break; }

            default: {
            break; }

        }
    }
    return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_security_ace_object_type(struct ndr_print *ndr, const char *name, const union security_ace_object_type *r)
{
    uint32_t level;
    level = ndr_print_steal_switch_value(ndr, r);
    ndr_print_union(ndr, name, level, "security_ace_object_type");
    switch (level) {
        case SEC_ACE_OBJECT_TYPE_PRESENT:
            ndr_print_GUID(ndr, "type", &r->type);
        break;

        default:
        break;

    }
}

static enum ndr_err_code ndr_push_security_ace_object_inherited_type(struct ndr_push *ndr, int ndr_flags, const union security_ace_object_inherited_type *r)
{
    uint32_t level;
    NDR_PUSH_CHECK_FLAGS(ndr, ndr_flags);
    if (ndr_flags & NDR_SCALARS) {
        /* This token is not used again (except perhaps below in the NDR_BUFFERS case) */
        NDR_CHECK(ndr_push_steal_switch_value(ndr, r, &level));
        NDR_CHECK(ndr_push_union_align(ndr, 4));
        switch (level) {
            case SEC_ACE_INHERITED_OBJECT_TYPE_PRESENT: {
                NDR_CHECK(ndr_push_GUID(ndr, NDR_SCALARS, &r->inherited_type));
            break; }

            default: {
            break; }

        }
    }
    return NDR_ERR_SUCCESS;
}

static enum ndr_err_code ndr_pull_security_ace_object_inherited_type(struct ndr_pull *ndr, int ndr_flags, union security_ace_object_inherited_type *r)
{
    uint32_t level;
    NDR_PULL_CHECK_FLAGS(ndr, ndr_flags);
    if (ndr_flags & NDR_SCALARS) {
        /* This token is not used again (except perhaps below in the NDR_BUFFERS case) */
        NDR_CHECK(ndr_pull_steal_switch_value(ndr, r, &level));
        NDR_CHECK(ndr_pull_union_align(ndr, 4));
        switch (level) {
            case SEC_ACE_INHERITED_OBJECT_TYPE_PRESENT: {
                NDR_CHECK(ndr_pull_GUID(ndr, NDR_SCALARS, &r->inherited_type));
            break; }

            default: {
            break; }

        }
    }
    return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_security_ace_object_inherited_type(struct ndr_print *ndr, const char *name, const union security_ace_object_inherited_type *r)
{
    uint32_t level;
    level = ndr_print_steal_switch_value(ndr, r);
    ndr_print_union(ndr, name, level, "security_ace_object_inherited_type");
    switch (level) {
        case SEC_ACE_INHERITED_OBJECT_TYPE_PRESENT:
            ndr_print_GUID(ndr, "inherited_type", &r->inherited_type);
        break;

        default:
        break;

    }
}

static enum ndr_err_code ndr_push_security_ace_object(struct ndr_push *ndr, int ndr_flags, const struct security_ace_object *r)
{
    NDR_PUSH_CHECK_FLAGS(ndr, ndr_flags);
    if (ndr_flags & NDR_SCALARS) {
        NDR_CHECK(ndr_push_align(ndr, 4));
        NDR_CHECK(ndr_push_security_ace_object_flags(ndr, NDR_SCALARS, r->flags));
        NDR_CHECK(ndr_push_set_switch_value(ndr, &r->type, r->flags & SEC_ACE_OBJECT_TYPE_PRESENT));
        NDR_CHECK(ndr_push_security_ace_object_type(ndr, NDR_SCALARS, &r->type));
        NDR_CHECK(ndr_push_set_switch_value(ndr, &r->inherited_type, r->flags & SEC_ACE_INHERITED_OBJECT_TYPE_PRESENT));
        NDR_CHECK(ndr_push_security_ace_object_inherited_type(ndr, NDR_SCALARS, &r->inherited_type));
        NDR_CHECK(ndr_push_trailer_align(ndr, 4));
    }
    if (ndr_flags & NDR_BUFFERS) {
        NDR_CHECK(ndr_push_set_switch_value(ndr, &r->type, r->flags & SEC_ACE_OBJECT_TYPE_PRESENT));
        NDR_CHECK(ndr_push_security_ace_object_type(ndr, NDR_BUFFERS, &r->type));
        NDR_CHECK(ndr_push_set_switch_value(ndr, &r->inherited_type, r->flags & SEC_ACE_INHERITED_OBJECT_TYPE_PRESENT));
        NDR_CHECK(ndr_push_security_ace_object_inherited_type(ndr, NDR_BUFFERS, &r->inherited_type));
    }
    return NDR_ERR_SUCCESS;
}

static enum ndr_err_code ndr_pull_security_ace_object(struct ndr_pull *ndr, int ndr_flags, struct security_ace_object *r)
{
    NDR_PULL_CHECK_FLAGS(ndr, ndr_flags);
    if (ndr_flags & NDR_SCALARS) {
        NDR_CHECK(ndr_pull_align(ndr, 4));
        NDR_CHECK(ndr_pull_security_ace_object_flags(ndr, NDR_SCALARS, &r->flags));
        NDR_CHECK(ndr_pull_set_switch_value(ndr, &r->type, r->flags & SEC_ACE_OBJECT_TYPE_PRESENT));
        NDR_CHECK(ndr_pull_security_ace_object_type(ndr, NDR_SCALARS, &r->type));
        NDR_CHECK(ndr_pull_set_switch_value(ndr, &r->inherited_type, r->flags & SEC_ACE_INHERITED_OBJECT_TYPE_PRESENT));
        NDR_CHECK(ndr_pull_security_ace_object_inherited_type(ndr, NDR_SCALARS, &r->inherited_type));
        NDR_CHECK(ndr_pull_trailer_align(ndr, 4));
    }
    if (ndr_flags & NDR_BUFFERS) {
        NDR_CHECK(ndr_pull_set_switch_value(ndr, &r->type, r->flags & SEC_ACE_OBJECT_TYPE_PRESENT));
        NDR_CHECK(ndr_pull_security_ace_object_type(ndr, NDR_BUFFERS, &r->type));
        NDR_CHECK(ndr_pull_set_switch_value(ndr, &r->inherited_type, r->flags & SEC_ACE_INHERITED_OBJECT_TYPE_PRESENT));
        NDR_CHECK(ndr_pull_security_ace_object_inherited_type(ndr, NDR_BUFFERS, &r->inherited_type));
    }
    return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_security_ace_object(struct ndr_print *ndr, const char *name, const struct security_ace_object *r)
{
    ndr_print_struct(ndr, name, "security_ace_object");
    if (r == NULL) { ndr_print_null(ndr); return; }
    ndr->depth++;
    ndr_print_security_ace_object_flags(ndr, "flags", r->flags);
    ndr_print_set_switch_value(ndr, &r->type, r->flags & SEC_ACE_OBJECT_TYPE_PRESENT);
    ndr_print_security_ace_object_type(ndr, "type", &r->type);
    ndr_print_set_switch_value(ndr, &r->inherited_type, r->flags & SEC_ACE_INHERITED_OBJECT_TYPE_PRESENT);
    ndr_print_security_ace_object_inherited_type(ndr, "inherited_type", &r->inherited_type);
    ndr->depth--;
}

_PUBLIC_ enum ndr_err_code ndr_push_security_ace_object_ctr(struct ndr_push *ndr, int ndr_flags, const union security_ace_object_ctr *r)
{
    uint32_t level;
    NDR_PUSH_CHECK_FLAGS(ndr, ndr_flags);
    if (ndr_flags & NDR_SCALARS) {
        /* This token is not used again (except perhaps below in the NDR_BUFFERS case) */
        NDR_CHECK(ndr_push_steal_switch_value(ndr, r, &level));
        NDR_CHECK(ndr_push_union_align(ndr, 4));
        switch (level) {
            case SEC_ACE_TYPE_ACCESS_ALLOWED_OBJECT: {
                NDR_CHECK(ndr_push_security_ace_object(ndr, NDR_SCALARS, &r->object));
            break; }

            case SEC_ACE_TYPE_ACCESS_DENIED_OBJECT: {
                NDR_CHECK(ndr_push_security_ace_object(ndr, NDR_SCALARS, &r->object));
            break; }

            case SEC_ACE_TYPE_SYSTEM_AUDIT_OBJECT: {
                NDR_CHECK(ndr_push_security_ace_object(ndr, NDR_SCALARS, &r->object));
            break; }

            case SEC_ACE_TYPE_SYSTEM_ALARM_OBJECT: {
                NDR_CHECK(ndr_push_security_ace_object(ndr, NDR_SCALARS, &r->object));
            break; }

            default: {
            break; }

        }
    }
    if (ndr_flags & NDR_BUFFERS) {
        if (!(ndr_flags & NDR_SCALARS)) {
            /* We didn't get it above, and the token is not needed after this. */
            NDR_CHECK(ndr_push_steal_switch_value(ndr, r, &level));
        }
        switch (level) {
            case SEC_ACE_TYPE_ACCESS_ALLOWED_OBJECT:
                NDR_CHECK(ndr_push_security_ace_object(ndr, NDR_BUFFERS, &r->object));
            break;

            case SEC_ACE_TYPE_ACCESS_DENIED_OBJECT:
                NDR_CHECK(ndr_push_security_ace_object(ndr, NDR_BUFFERS, &r->object));
            break;

            case SEC_ACE_TYPE_SYSTEM_AUDIT_OBJECT:
                NDR_CHECK(ndr_push_security_ace_object(ndr, NDR_BUFFERS, &r->object));
            break;

            case SEC_ACE_TYPE_SYSTEM_ALARM_OBJECT:
                NDR_CHECK(ndr_push_security_ace_object(ndr, NDR_BUFFERS, &r->object));
            break;

            default:
            break;

        }
    }
    return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_security_ace_object_ctr(struct ndr_pull *ndr, int ndr_flags, union security_ace_object_ctr *r)
{
    uint32_t level;
    NDR_PULL_CHECK_FLAGS(ndr, ndr_flags);
    if (ndr_flags & NDR_SCALARS) {
        /* This token is not used again (except perhaps below in the NDR_BUFFERS case) */
        NDR_CHECK(ndr_pull_steal_switch_value(ndr, r, &level));
        NDR_CHECK(ndr_pull_union_align(ndr, 4));
        switch (level) {
            case SEC_ACE_TYPE_ACCESS_ALLOWED_OBJECT: {
                NDR_CHECK(ndr_pull_security_ace_object(ndr, NDR_SCALARS, &r->object));
            break; }

            case SEC_ACE_TYPE_ACCESS_DENIED_OBJECT: {
                NDR_CHECK(ndr_pull_security_ace_object(ndr, NDR_SCALARS, &r->object));
            break; }

            case SEC_ACE_TYPE_SYSTEM_AUDIT_OBJECT: {
                NDR_CHECK(ndr_pull_security_ace_object(ndr, NDR_SCALARS, &r->object));
            break; }

            case SEC_ACE_TYPE_SYSTEM_ALARM_OBJECT: {
                NDR_CHECK(ndr_pull_security_ace_object(ndr, NDR_SCALARS, &r->object));
            break; }

            default: {
            break; }

        }
    }
    if (ndr_flags & NDR_BUFFERS) {
        if (!(ndr_flags & NDR_SCALARS)) {
            /* We didn't get it above, and the token is not needed after this. */
            NDR_CHECK(ndr_pull_steal_switch_value(ndr, r, &level));
        }
        switch (level) {
            case SEC_ACE_TYPE_ACCESS_ALLOWED_OBJECT:
                NDR_CHECK(ndr_pull_security_ace_object(ndr, NDR_BUFFERS, &r->object));
            break;

            case SEC_ACE_TYPE_ACCESS_DENIED_OBJECT:
                NDR_CHECK(ndr_pull_security_ace_object(ndr, NDR_BUFFERS, &r->object));
            break;

            case SEC_ACE_TYPE_SYSTEM_AUDIT_OBJECT:
                NDR_CHECK(ndr_pull_security_ace_object(ndr, NDR_BUFFERS, &r->object));
            break;

            case SEC_ACE_TYPE_SYSTEM_ALARM_OBJECT:
                NDR_CHECK(ndr_pull_security_ace_object(ndr, NDR_BUFFERS, &r->object));
            break;

            default:
            break;

        }
    }
    return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_security_ace_object_ctr(struct ndr_print *ndr, const char *name, const union security_ace_object_ctr *r)
{
    uint32_t level;
    level = ndr_print_steal_switch_value(ndr, r);
    ndr_print_union(ndr, name, level, "security_ace_object_ctr");
    switch (level) {
        case SEC_ACE_TYPE_ACCESS_ALLOWED_OBJECT:
            ndr_print_security_ace_object(ndr, "object", &r->object);
        break;

        case SEC_ACE_TYPE_ACCESS_DENIED_OBJECT:
            ndr_print_security_ace_object(ndr, "object", &r->object);
        break;

        case SEC_ACE_TYPE_SYSTEM_AUDIT_OBJECT:
            ndr_print_security_ace_object(ndr, "object", &r->object);
        break;

        case SEC_ACE_TYPE_SYSTEM_ALARM_OBJECT:
            ndr_print_security_ace_object(ndr, "object", &r->object);
        break;

        default:
        break;

    }
}

_PUBLIC_ enum ndr_err_code ndr_push_security_ace(struct ndr_push *ndr, int ndr_flags, const struct security_ace *r)
{
    NDR_PUSH_CHECK_FLAGS(ndr, ndr_flags);
    if (ndr_flags & NDR_SCALARS) {
        NDR_CHECK(ndr_push_align(ndr, 4));
        NDR_CHECK(ndr_push_security_ace_type(ndr, NDR_SCALARS, r->type));
        NDR_CHECK(ndr_push_security_ace_flags(ndr, NDR_SCALARS, r->flags));
        NDR_CHECK(ndr_push_uint16(ndr, NDR_SCALARS, ndr_size_security_ace(r, ndr->flags)));
        NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->access_mask));
        NDR_CHECK(ndr_push_set_switch_value(ndr, &r->object, r->type));
        NDR_CHECK(ndr_push_security_ace_object_ctr(ndr, NDR_SCALARS, &r->object));
        NDR_CHECK(ndr_push_dom_sid(ndr, NDR_SCALARS, &r->trustee));
        NDR_CHECK(ndr_push_trailer_align(ndr, 4));
    }
    if (ndr_flags & NDR_BUFFERS) {
        NDR_CHECK(ndr_push_set_switch_value(ndr, &r->object, r->type));
        NDR_CHECK(ndr_push_security_ace_object_ctr(ndr, NDR_BUFFERS, &r->object));
    }
    return NDR_ERR_SUCCESS;
}

static void ndr_print_flags_security_ace(struct ndr_print *ndr, const char *name, int unused, const struct security_ace *r)
{
    UNUSED_ARG(unused);

    ndr_print_security_ace(ndr, name, r);
}

_PUBLIC_ void ndr_print_security_ace(struct ndr_print *ndr, const char *name, const struct security_ace *r)
{
    ndr_print_struct(ndr, name, "security_ace");
    if (r == NULL) { ndr_print_null(ndr); return; }
    ndr->depth++;
    ndr_print_security_ace_type(ndr, "type", r->type);
    ndr_print_security_ace_flags(ndr, "flags", r->flags);
    ndr_print_uint16(ndr, "size", (ndr->flags & LIBNDR_PRINT_SET_VALUES)?ndr_size_security_ace(r, ndr->flags):r->size);
    ndr_print_uint32(ndr, "access_mask", r->access_mask);
    ndr_print_set_switch_value(ndr, &r->object, r->type);
    ndr_print_security_ace_object_ctr(ndr, "object", &r->object);
    ndr_print_dom_sid(ndr, "trustee", &r->trustee);
    ndr->depth--;
}

static enum ndr_err_code ndr_push_security_acl_revision(struct ndr_push *ndr, int ndr_flags, enum security_acl_revision r)
{
    UNUSED_ARG(ndr_flags);

    NDR_CHECK(ndr_push_enum_uint1632(ndr, NDR_SCALARS, r));
    return NDR_ERR_SUCCESS;
}

static enum ndr_err_code ndr_pull_security_acl_revision(struct ndr_pull *ndr, int ndr_flags, enum security_acl_revision *r)
{
    UNUSED_ARG(ndr_flags);

    uint16_t v;
    NDR_CHECK(ndr_pull_enum_uint1632(ndr, NDR_SCALARS, &v));
    *r = v;
    return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_security_acl_revision(struct ndr_print *ndr, const char *name, enum security_acl_revision r)
{
    const char *val = NULL;

    switch (r) {
        case SECURITY_ACL_REVISION_NT4: val = "SECURITY_ACL_REVISION_NT4"; break;
        case SECURITY_ACL_REVISION_ADS: val = "SECURITY_ACL_REVISION_ADS"; break;
    }
    ndr_print_enum(ndr, name, "ENUM", val, r);
}

_PUBLIC_ enum ndr_err_code ndr_push_security_acl(struct ndr_push *ndr, int ndr_flags, const struct security_acl *r)
{
    uint32_t cntr_aces_0;
    NDR_PUSH_CHECK_FLAGS(ndr, ndr_flags);
    if (ndr_flags & NDR_SCALARS) {
        NDR_CHECK(ndr_push_align(ndr, 4));
        NDR_CHECK(ndr_push_security_acl_revision(ndr, NDR_SCALARS, r->revision));
        NDR_CHECK(ndr_push_uint16(ndr, NDR_SCALARS, ndr_size_security_acl(r, ndr->flags)));
        NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->num_aces));
        for (cntr_aces_0 = 0; cntr_aces_0 < (r->num_aces); cntr_aces_0++) {
            NDR_CHECK(ndr_push_security_ace(ndr, NDR_SCALARS, &r->aces[cntr_aces_0]));
        }
        NDR_CHECK(ndr_push_trailer_align(ndr, 4));
    }
    if (ndr_flags & NDR_BUFFERS) {
        for (cntr_aces_0 = 0; cntr_aces_0 < (r->num_aces); cntr_aces_0++) {
            NDR_CHECK(ndr_push_security_ace(ndr, NDR_BUFFERS, &r->aces[cntr_aces_0]));
        }
    }
    return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_security_acl(struct ndr_pull *ndr, int ndr_flags, struct security_acl *r)
{
    uint32_t size_aces_0 = 0;
    uint32_t cntr_aces_0;
    TALLOC_CTX *_mem_save_aces_0 = NULL;
    NDR_PULL_CHECK_FLAGS(ndr, ndr_flags);
    if (ndr_flags & NDR_SCALARS) {
        NDR_CHECK(ndr_pull_align(ndr, 4));
        NDR_CHECK(ndr_pull_security_acl_revision(ndr, NDR_SCALARS, &r->revision));
        NDR_CHECK(ndr_pull_uint16(ndr, NDR_SCALARS, &r->size));
        NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->num_aces));
        if (r->num_aces > 2000) {
            return ndr_pull_error(ndr, NDR_ERR_RANGE, "value out of range");
        }
        size_aces_0 = r->num_aces;
        NDR_PULL_ALLOC_N(ndr, r->aces, size_aces_0);
        _mem_save_aces_0 = NDR_PULL_GET_MEM_CTX(ndr);
        NDR_PULL_SET_MEM_CTX(ndr, r->aces, 0);
        for (cntr_aces_0 = 0; cntr_aces_0 < (size_aces_0); cntr_aces_0++) {
            NDR_CHECK(ndr_pull_security_ace(ndr, NDR_SCALARS, &r->aces[cntr_aces_0]));
        }
        NDR_PULL_SET_MEM_CTX(ndr, _mem_save_aces_0, 0);
        NDR_CHECK(ndr_pull_trailer_align(ndr, 4));
    }
    if (ndr_flags & NDR_BUFFERS) {
        size_aces_0 = r->num_aces;
        _mem_save_aces_0 = NDR_PULL_GET_MEM_CTX(ndr);
        NDR_PULL_SET_MEM_CTX(ndr, r->aces, 0);
        for (cntr_aces_0 = 0; cntr_aces_0 < (size_aces_0); cntr_aces_0++) {
            NDR_CHECK(ndr_pull_security_ace(ndr, NDR_BUFFERS, &r->aces[cntr_aces_0]));
        }
        NDR_PULL_SET_MEM_CTX(ndr, _mem_save_aces_0, 0);
        for (cntr_aces_0 = 0; cntr_aces_0 < (size_aces_0); cntr_aces_0++) {
        }
    }
    return NDR_ERR_SUCCESS;
}

static void ndr_print_flags_security_acl(struct ndr_print *ndr, const char *name, int unused, const struct security_acl *r)
{
    UNUSED_ARG(unused);

    ndr_print_security_acl(ndr, name, r);
}

_PUBLIC_ void ndr_print_security_acl(struct ndr_print *ndr, const char *name, const struct security_acl *r)
{
    uint32_t cntr_aces_0;
    ndr_print_struct(ndr, name, "security_acl");
    if (r == NULL) { ndr_print_null(ndr); return; }
    ndr->depth++;
    ndr_print_security_acl_revision(ndr, "revision", r->revision);
    ndr_print_uint16(ndr, "size", (ndr->flags & LIBNDR_PRINT_SET_VALUES)?ndr_size_security_acl(r, ndr->flags):r->size);
    ndr_print_uint32(ndr, "num_aces", r->num_aces);
    ndr->print(ndr, "%s: ARRAY(%d)", "aces", (int)r->num_aces);
    ndr->depth++;
    for (cntr_aces_0 = 0; cntr_aces_0 < (r->num_aces); cntr_aces_0++) {
        ndr_print_security_ace(ndr, "aces", &r->aces[cntr_aces_0]);
    }
    ndr->depth--;
    ndr->depth--;
}

_PUBLIC_ enum ndr_err_code ndr_push_security_descriptor_revision(struct ndr_push *ndr, int ndr_flags, enum security_descriptor_revision r)
{
    UNUSED_ARG(ndr_flags);

    NDR_CHECK(ndr_push_enum_uint8(ndr, NDR_SCALARS, r));
    return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_security_descriptor_revision(struct ndr_pull *ndr, int ndr_flags, enum security_descriptor_revision *r)
{
    UNUSED_ARG(ndr_flags);

    uint8_t v;
    NDR_CHECK(ndr_pull_enum_uint8(ndr, NDR_SCALARS, &v));
    *r = v;
    return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_security_descriptor_revision(struct ndr_print *ndr, const char *name, enum security_descriptor_revision r)
{
    const char *val = NULL;

    switch (r) {
        case SECURITY_DESCRIPTOR_REVISION_1: val = "SECURITY_DESCRIPTOR_REVISION_1"; break;
    }
    ndr_print_enum(ndr, name, "ENUM", val, r);
}

_PUBLIC_ enum ndr_err_code ndr_push_security_descriptor_type(struct ndr_push *ndr, int ndr_flags, uint16_t r)
{
    UNUSED_ARG(ndr_flags);

    NDR_CHECK(ndr_push_uint16(ndr, NDR_SCALARS, r));
    return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_security_descriptor_type(struct ndr_pull *ndr, int ndr_flags, uint16_t *r)
{
    UNUSED_ARG(ndr_flags);

    uint16_t v;
    NDR_CHECK(ndr_pull_uint16(ndr, NDR_SCALARS, &v));
    *r = v;
    return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_security_descriptor_type(struct ndr_print *ndr, const char *name, uint16_t r)
{
    ndr_print_uint16(ndr, name, r);
    ndr->depth++;
    ndr_print_bitmap_flag(ndr, sizeof(uint16_t), "SEC_DESC_OWNER_DEFAULTED", SEC_DESC_OWNER_DEFAULTED, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint16_t), "SEC_DESC_GROUP_DEFAULTED", SEC_DESC_GROUP_DEFAULTED, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint16_t), "SEC_DESC_DACL_PRESENT", SEC_DESC_DACL_PRESENT, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint16_t), "SEC_DESC_DACL_DEFAULTED", SEC_DESC_DACL_DEFAULTED, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint16_t), "SEC_DESC_SACL_PRESENT", SEC_DESC_SACL_PRESENT, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint16_t), "SEC_DESC_SACL_DEFAULTED", SEC_DESC_SACL_DEFAULTED, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint16_t), "SEC_DESC_DACL_TRUSTED", SEC_DESC_DACL_TRUSTED, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint16_t), "SEC_DESC_SERVER_SECURITY", SEC_DESC_SERVER_SECURITY, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint16_t), "SEC_DESC_DACL_AUTO_INHERIT_REQ", SEC_DESC_DACL_AUTO_INHERIT_REQ, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint16_t), "SEC_DESC_SACL_AUTO_INHERIT_REQ", SEC_DESC_SACL_AUTO_INHERIT_REQ, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint16_t), "SEC_DESC_DACL_AUTO_INHERITED", SEC_DESC_DACL_AUTO_INHERITED, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint16_t), "SEC_DESC_SACL_AUTO_INHERITED", SEC_DESC_SACL_AUTO_INHERITED, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint16_t), "SEC_DESC_DACL_PROTECTED", SEC_DESC_DACL_PROTECTED, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint16_t), "SEC_DESC_SACL_PROTECTED", SEC_DESC_SACL_PROTECTED, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint16_t), "SEC_DESC_RM_CONTROL_VALID", SEC_DESC_RM_CONTROL_VALID, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint16_t), "SEC_DESC_SELF_RELATIVE", SEC_DESC_SELF_RELATIVE, r);
    ndr->depth--;
}

_PUBLIC_ enum ndr_err_code ndr_push_security_descriptor(struct ndr_push *ndr, int ndr_flags, const struct security_descriptor *r)
{
    {
        uint32_t _flags_save_STRUCT = ndr->flags;
        ndr_set_flags(&ndr->flags, LIBNDR_FLAG_LITTLE_ENDIAN);
        NDR_PUSH_CHECK_FLAGS(ndr, ndr_flags);
        if (ndr_flags & NDR_SCALARS) {
            NDR_CHECK(ndr_push_align(ndr, 5));
            NDR_CHECK(ndr_push_security_descriptor_revision(ndr, NDR_SCALARS, r->revision));
            NDR_CHECK(ndr_push_security_descriptor_type(ndr, NDR_SCALARS, r->type));
            NDR_CHECK(ndr_push_relative_ptr1(ndr, r->owner_sid));
            NDR_CHECK(ndr_push_relative_ptr1(ndr, r->group_sid));
            NDR_CHECK(ndr_push_relative_ptr1(ndr, r->sacl));
            NDR_CHECK(ndr_push_relative_ptr1(ndr, r->dacl));
            NDR_CHECK(ndr_push_trailer_align(ndr, 5));
        }
        if (ndr_flags & NDR_BUFFERS) {
            if (r->owner_sid) {
                NDR_CHECK(ndr_push_relative_ptr2_start(ndr, r->owner_sid));
                NDR_CHECK(ndr_push_dom_sid(ndr, NDR_SCALARS, r->owner_sid));
                NDR_CHECK(ndr_push_relative_ptr2_end(ndr, r->owner_sid));
            }
            if (r->group_sid) {
                NDR_CHECK(ndr_push_relative_ptr2_start(ndr, r->group_sid));
                NDR_CHECK(ndr_push_dom_sid(ndr, NDR_SCALARS, r->group_sid));
                NDR_CHECK(ndr_push_relative_ptr2_end(ndr, r->group_sid));
            }
            if (r->sacl) {
                NDR_CHECK(ndr_push_relative_ptr2_start(ndr, r->sacl));
                NDR_CHECK(ndr_push_security_acl(ndr, NDR_SCALARS|NDR_BUFFERS, r->sacl));
                NDR_CHECK(ndr_push_relative_ptr2_end(ndr, r->sacl));
            }
            if (r->dacl) {
                NDR_CHECK(ndr_push_relative_ptr2_start(ndr, r->dacl));
                NDR_CHECK(ndr_push_security_acl(ndr, NDR_SCALARS|NDR_BUFFERS, r->dacl));
                NDR_CHECK(ndr_push_relative_ptr2_end(ndr, r->dacl));
            }
        }
        ndr->flags = _flags_save_STRUCT;
    }
    return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_security_descriptor(struct ndr_pull *ndr, int ndr_flags, struct security_descriptor *r)
{
    uint32_t _ptr_owner_sid;
    TALLOC_CTX *_mem_save_owner_sid_0 = NULL;
    uint32_t _ptr_group_sid;
    TALLOC_CTX *_mem_save_group_sid_0 = NULL;
    uint32_t _ptr_sacl;
    TALLOC_CTX *_mem_save_sacl_0 = NULL;
    uint32_t _ptr_dacl;
    TALLOC_CTX *_mem_save_dacl_0 = NULL;
    {
        uint32_t _flags_save_STRUCT = ndr->flags;
        ndr_set_flags(&ndr->flags, LIBNDR_FLAG_LITTLE_ENDIAN);
        NDR_PULL_CHECK_FLAGS(ndr, ndr_flags);
        if (ndr_flags & NDR_SCALARS) {
            NDR_CHECK(ndr_pull_align(ndr, 5));
            NDR_CHECK(ndr_pull_security_descriptor_revision(ndr, NDR_SCALARS, &r->revision));
            NDR_CHECK(ndr_pull_security_descriptor_type(ndr, NDR_SCALARS, &r->type));
            NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_owner_sid));
            if (_ptr_owner_sid) {
                NDR_PULL_ALLOC(ndr, r->owner_sid);
                NDR_CHECK(ndr_pull_relative_ptr1(ndr, r->owner_sid, _ptr_owner_sid));
            } else {
                r->owner_sid = NULL;
            }
            NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_group_sid));
            if (_ptr_group_sid) {
                NDR_PULL_ALLOC(ndr, r->group_sid);
                NDR_CHECK(ndr_pull_relative_ptr1(ndr, r->group_sid, _ptr_group_sid));
            } else {
                r->group_sid = NULL;
            }
            NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_sacl));
            if (_ptr_sacl) {
                NDR_PULL_ALLOC(ndr, r->sacl);
                NDR_CHECK(ndr_pull_relative_ptr1(ndr, r->sacl, _ptr_sacl));
            } else {
                r->sacl = NULL;
            }
            NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_dacl));
            if (_ptr_dacl) {
                NDR_PULL_ALLOC(ndr, r->dacl);
                NDR_CHECK(ndr_pull_relative_ptr1(ndr, r->dacl, _ptr_dacl));
            } else {
                r->dacl = NULL;
            }
            NDR_CHECK(ndr_pull_trailer_align(ndr, 5));
        }
        if (ndr_flags & NDR_BUFFERS) {
            if (r->owner_sid) {
                uint32_t _relative_save_offset;
                _relative_save_offset = ndr->offset;
                NDR_CHECK(ndr_pull_relative_ptr2(ndr, r->owner_sid));
                _mem_save_owner_sid_0 = NDR_PULL_GET_MEM_CTX(ndr);
                NDR_PULL_SET_MEM_CTX(ndr, r->owner_sid, 0);
                NDR_CHECK(ndr_pull_dom_sid(ndr, NDR_SCALARS, r->owner_sid));
                NDR_PULL_SET_MEM_CTX(ndr, _mem_save_owner_sid_0, 0);
                if (ndr->offset > ndr->relative_highest_offset) {
                    ndr->relative_highest_offset = ndr->offset;
                }
                ndr->offset = _relative_save_offset;
            }
            if (r->group_sid) {
                uint32_t _relative_save_offset;
                _relative_save_offset = ndr->offset;
                NDR_CHECK(ndr_pull_relative_ptr2(ndr, r->group_sid));
                _mem_save_group_sid_0 = NDR_PULL_GET_MEM_CTX(ndr);
                NDR_PULL_SET_MEM_CTX(ndr, r->group_sid, 0);
                NDR_CHECK(ndr_pull_dom_sid(ndr, NDR_SCALARS, r->group_sid));
                NDR_PULL_SET_MEM_CTX(ndr, _mem_save_group_sid_0, 0);
                if (ndr->offset > ndr->relative_highest_offset) {
                    ndr->relative_highest_offset = ndr->offset;
                }
                ndr->offset = _relative_save_offset;
            }
            if (r->sacl) {
                uint32_t _relative_save_offset;
                _relative_save_offset = ndr->offset;
                NDR_CHECK(ndr_pull_relative_ptr2(ndr, r->sacl));
                _mem_save_sacl_0 = NDR_PULL_GET_MEM_CTX(ndr);
                NDR_PULL_SET_MEM_CTX(ndr, r->sacl, 0);
                NDR_CHECK(ndr_pull_security_acl(ndr, NDR_SCALARS|NDR_BUFFERS, r->sacl));
                NDR_PULL_SET_MEM_CTX(ndr, _mem_save_sacl_0, 0);
                if (ndr->offset > ndr->relative_highest_offset) {
                    ndr->relative_highest_offset = ndr->offset;
                }
                ndr->offset = _relative_save_offset;
            }
            if (r->dacl) {
                uint32_t _relative_save_offset;
                _relative_save_offset = ndr->offset;
                NDR_CHECK(ndr_pull_relative_ptr2(ndr, r->dacl));
                _mem_save_dacl_0 = NDR_PULL_GET_MEM_CTX(ndr);
                NDR_PULL_SET_MEM_CTX(ndr, r->dacl, 0);
                NDR_CHECK(ndr_pull_security_acl(ndr, NDR_SCALARS|NDR_BUFFERS, r->dacl));
                NDR_PULL_SET_MEM_CTX(ndr, _mem_save_dacl_0, 0);
                if (ndr->offset > ndr->relative_highest_offset) {
                    ndr->relative_highest_offset = ndr->offset;
                }
                ndr->offset = _relative_save_offset;
            }
        }
        ndr->flags = _flags_save_STRUCT;
    }
    return NDR_ERR_SUCCESS;
}

static void ndr_print_flags_security_descriptor(struct ndr_print *ndr, const char *name, int unused, const struct security_descriptor *r)
{
    UNUSED_ARG(unused);

    ndr_print_security_descriptor(ndr, name, r);
}

_PUBLIC_ void ndr_print_security_descriptor(struct ndr_print *ndr, const char *name, const struct security_descriptor *r)
{
    ndr_print_struct(ndr, name, "security_descriptor");
    if (r == NULL) { ndr_print_null(ndr); return; }
    {
        uint32_t _flags_save_STRUCT = ndr->flags;
        ndr_set_flags(&ndr->flags, LIBNDR_FLAG_LITTLE_ENDIAN);
        ndr->depth++;
        ndr_print_security_descriptor_revision(ndr, "revision", r->revision);
        ndr_print_security_descriptor_type(ndr, "type", r->type);
        ndr_print_ptr(ndr, "owner_sid", r->owner_sid);
        ndr->depth++;
        if (r->owner_sid) {
            ndr_print_dom_sid(ndr, "owner_sid", r->owner_sid);
        }
        ndr->depth--;
        ndr_print_ptr(ndr, "group_sid", r->group_sid);
        ndr->depth++;
        if (r->group_sid) {
            ndr_print_dom_sid(ndr, "group_sid", r->group_sid);
        }
        ndr->depth--;
        ndr_print_ptr(ndr, "sacl", r->sacl);
        ndr->depth++;
        if (r->sacl) {
            ndr_print_security_acl(ndr, "sacl", r->sacl);
        }
        ndr->depth--;
        ndr_print_ptr(ndr, "dacl", r->dacl);
        ndr->depth++;
        if (r->dacl) {
            ndr_print_security_acl(ndr, "dacl", r->dacl);
        }
        ndr->depth--;
        ndr->depth--;
        ndr->flags = _flags_save_STRUCT;
    }
}

_PUBLIC_ enum ndr_err_code ndr_push_sec_desc_buf(struct ndr_push *ndr, int ndr_flags, const struct sec_desc_buf *r)
{
    NDR_PUSH_CHECK_FLAGS(ndr, ndr_flags);
    if (ndr_flags & NDR_SCALARS) {
        NDR_CHECK(ndr_push_align(ndr, 5));
        NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, ndr_size_security_descriptor(r->sd, ndr->flags)));
        NDR_CHECK(ndr_push_unique_ptr(ndr, r->sd));
        NDR_CHECK(ndr_push_trailer_align(ndr, 5));
    }
    if (ndr_flags & NDR_BUFFERS) {
        if (r->sd) {
            {
                struct ndr_push *_ndr_sd;
                NDR_CHECK(ndr_push_subcontext_start(ndr, &_ndr_sd, 4, -1));
                NDR_CHECK(ndr_push_security_descriptor(_ndr_sd, NDR_SCALARS|NDR_BUFFERS, r->sd));
                NDR_CHECK(ndr_push_subcontext_end(ndr, _ndr_sd, 4, -1));
            }
        }
    }
    return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_sec_desc_buf(struct ndr_pull *ndr, int ndr_flags, struct sec_desc_buf *r)
{
    uint32_t _ptr_sd;
    TALLOC_CTX *_mem_save_sd_0 = NULL;
    NDR_PULL_CHECK_FLAGS(ndr, ndr_flags);
    if (ndr_flags & NDR_SCALARS) {
        NDR_CHECK(ndr_pull_align(ndr, 5));
        NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->sd_size));
        if (r->sd_size > 262144) {
            return ndr_pull_error(ndr, NDR_ERR_RANGE, "value out of range");
        }
        NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_sd));
        if (_ptr_sd) {
            NDR_PULL_ALLOC(ndr, r->sd);
        } else {
            r->sd = NULL;
        }
        NDR_CHECK(ndr_pull_trailer_align(ndr, 5));
    }
    if (ndr_flags & NDR_BUFFERS) {
        if (r->sd) {
            _mem_save_sd_0 = NDR_PULL_GET_MEM_CTX(ndr);
            NDR_PULL_SET_MEM_CTX(ndr, r->sd, 0);
            {
                struct ndr_pull *_ndr_sd;
                NDR_CHECK(ndr_pull_subcontext_start(ndr, &_ndr_sd, 4, -1));
                NDR_CHECK(ndr_pull_security_descriptor(_ndr_sd, NDR_SCALARS|NDR_BUFFERS, r->sd));
                NDR_CHECK(ndr_pull_subcontext_end(ndr, _ndr_sd, 4, -1));
            }
            NDR_PULL_SET_MEM_CTX(ndr, _mem_save_sd_0, 0);
        }
    }
    return NDR_ERR_SUCCESS;
}

static void ndr_print_flags_sec_desc_buf(struct ndr_print *ndr, const char *name, int unused, const struct sec_desc_buf *r)
{
    UNUSED_ARG(unused);

    ndr_print_sec_desc_buf(ndr, name, r);
}

_PUBLIC_ void ndr_print_sec_desc_buf(struct ndr_print *ndr, const char *name, const struct sec_desc_buf *r)
{
    ndr_print_struct(ndr, name, "sec_desc_buf");
    if (r == NULL) { ndr_print_null(ndr); return; }
    ndr->depth++;
    ndr_print_uint32(ndr, "sd_size", (ndr->flags & LIBNDR_PRINT_SET_VALUES)?ndr_size_security_descriptor(r->sd, ndr->flags):r->sd_size);
    ndr_print_ptr(ndr, "sd", r->sd);
    ndr->depth++;
    if (r->sd) {
        ndr_print_security_descriptor(ndr, "sd", r->sd);
    }
    ndr->depth--;
    ndr->depth--;
}

_PUBLIC_ enum ndr_err_code ndr_push_security_GroupAttrs(struct ndr_push *ndr, int ndr_flags, uint32_t r)
{
    UNUSED_ARG(ndr_flags);

    NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r));
    return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_security_GroupAttrs(struct ndr_pull *ndr, int ndr_flags, uint32_t *r)
{
    UNUSED_ARG(ndr_flags);

    uint32_t v;
    NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &v));
    *r = v;
    return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_security_GroupAttrs(struct ndr_print *ndr, const char *name, uint32_t r)
{
    ndr_print_uint32(ndr, name, r);
    ndr->depth++;
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "SE_GROUP_MANDATORY", SE_GROUP_MANDATORY, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "SE_GROUP_ENABLED_BY_DEFAULT", SE_GROUP_ENABLED_BY_DEFAULT, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "SE_GROUP_ENABLED", SE_GROUP_ENABLED, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "SE_GROUP_OWNER", SE_GROUP_OWNER, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "SE_GROUP_USE_FOR_DENY_ONLY", SE_GROUP_USE_FOR_DENY_ONLY, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "SE_GROUP_INTEGRITY", SE_GROUP_INTEGRITY, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "SE_GROUP_INTEGRITY_ENABLED", SE_GROUP_INTEGRITY_ENABLED, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "SE_GROUP_RESOURCE", SE_GROUP_RESOURCE, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "SE_GROUP_LOGON_ID", SE_GROUP_LOGON_ID, r);
    ndr->depth--;
}

_PUBLIC_ enum ndr_err_code ndr_push_security_token(struct ndr_push *ndr, int ndr_flags, const struct security_token *r)
{
    uint32_t cntr_sids_0;
    NDR_PUSH_CHECK_FLAGS(ndr, ndr_flags);
    if (ndr_flags & NDR_SCALARS) {
        NDR_CHECK(ndr_push_align(ndr, 8));
        NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->num_sids));
        NDR_CHECK(ndr_push_uint3264(ndr, NDR_SCALARS, r->num_sids));
        for (cntr_sids_0 = 0; cntr_sids_0 < (r->num_sids); cntr_sids_0++) {
            NDR_CHECK(ndr_push_dom_sid(ndr, NDR_SCALARS, &r->sids[cntr_sids_0]));
        }
        NDR_CHECK(ndr_push_se_privilege(ndr, NDR_SCALARS, r->privilege_mask));
        NDR_CHECK(ndr_push_lsa_SystemAccessModeFlags(ndr, NDR_SCALARS, r->rights_mask));
        NDR_CHECK(ndr_push_trailer_align(ndr, 8));
    }
    if (ndr_flags & NDR_BUFFERS) {
    }
    return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_security_token(struct ndr_pull *ndr, int ndr_flags, struct security_token *r)
{
    uint32_t size_sids_0 = 0;
    uint32_t cntr_sids_0;
    TALLOC_CTX *_mem_save_sids_0 = NULL;
    NDR_PULL_CHECK_FLAGS(ndr, ndr_flags);
    if (ndr_flags & NDR_SCALARS) {
        NDR_CHECK(ndr_pull_align(ndr, 8));
        NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->num_sids));
        NDR_CHECK(ndr_pull_array_size(ndr, &r->sids));
#ifdef NDR_VERSION_GREATER_THAN_1_0_1
        ndr_get_array_size(ndr, &r->sids, &size_sids_0);
#else
        size_sids_0 = ndr_get_array_size(ndr, &r->sids);
#endif
        NDR_PULL_ALLOC_N(ndr, r->sids, size_sids_0);
        _mem_save_sids_0 = NDR_PULL_GET_MEM_CTX(ndr);
        NDR_PULL_SET_MEM_CTX(ndr, r->sids, 0);
        for (cntr_sids_0 = 0; cntr_sids_0 < (size_sids_0); cntr_sids_0++) {
            NDR_CHECK(ndr_pull_dom_sid(ndr, NDR_SCALARS, &r->sids[cntr_sids_0]));
        }
        NDR_PULL_SET_MEM_CTX(ndr, _mem_save_sids_0, 0);
        NDR_CHECK(ndr_pull_se_privilege(ndr, NDR_SCALARS, &r->privilege_mask));
        NDR_CHECK(ndr_pull_lsa_SystemAccessModeFlags(ndr, NDR_SCALARS, &r->rights_mask));
        if (r->sids) {
            NDR_CHECK(ndr_check_array_size(ndr, (void*)&r->sids, r->num_sids));
        }
        NDR_CHECK(ndr_pull_trailer_align(ndr, 8));
    }
    if (ndr_flags & NDR_BUFFERS) {
    }
    return NDR_ERR_SUCCESS;
}

static void ndr_print_flags_security_token(struct ndr_print *ndr, const char *name, int unused, const struct security_token *r)
{
    UNUSED_ARG(unused);

    ndr_print_security_token(ndr, name, r);
}

_PUBLIC_ void ndr_print_security_token(struct ndr_print *ndr, const char *name, const struct security_token *r)
{
    uint32_t cntr_sids_0;
    ndr_print_struct(ndr, name, "security_token");
    if (r == NULL) { ndr_print_null(ndr); return; }
    ndr->depth++;
    ndr_print_uint32(ndr, "num_sids", r->num_sids);
    ndr->print(ndr, "%s: ARRAY(%d)", "sids", (int)r->num_sids);
    ndr->depth++;
    for (cntr_sids_0 = 0; cntr_sids_0 < (r->num_sids); cntr_sids_0++) {
        ndr_print_dom_sid(ndr, "sids", &r->sids[cntr_sids_0]);
    }
    ndr->depth--;
    ndr_print_se_privilege(ndr, "privilege_mask", r->privilege_mask);
    ndr_print_lsa_SystemAccessModeFlags(ndr, "rights_mask", r->rights_mask);
    ndr->depth--;
}

_PUBLIC_ enum ndr_err_code ndr_push_security_unix_token(struct ndr_push *ndr, int ndr_flags, const struct security_unix_token *r)
{
    uint32_t cntr_groups_0;
    NDR_PUSH_CHECK_FLAGS(ndr, ndr_flags);
    if (ndr_flags & NDR_SCALARS) {
        NDR_CHECK(ndr_push_uint3264(ndr, NDR_SCALARS, r->ngroups));
        NDR_CHECK(ndr_push_align(ndr, 8));
        NDR_CHECK(ndr_push_uid_t(ndr, NDR_SCALARS, r->uid));
        NDR_CHECK(ndr_push_gid_t(ndr, NDR_SCALARS, r->gid));
        NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->ngroups));
        for (cntr_groups_0 = 0; cntr_groups_0 < (r->ngroups); cntr_groups_0++) {
            NDR_CHECK(ndr_push_gid_t(ndr, NDR_SCALARS, r->groups[cntr_groups_0]));
        }
        NDR_CHECK(ndr_push_trailer_align(ndr, 8));
    }
    if (ndr_flags & NDR_BUFFERS) {
    }
    return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_security_unix_token(struct ndr_pull *ndr, int ndr_flags, struct security_unix_token *r)
{
    uint32_t size_groups_0 = 0;
    uint32_t cntr_groups_0;
    TALLOC_CTX *_mem_save_groups_0 = NULL;
    NDR_PULL_CHECK_FLAGS(ndr, ndr_flags);
    if (ndr_flags & NDR_SCALARS) {
        NDR_CHECK(ndr_pull_array_size(ndr, &r->groups));
        NDR_CHECK(ndr_pull_align(ndr, 8));
        NDR_CHECK(ndr_pull_uid_t(ndr, NDR_SCALARS, &r->uid));
        NDR_CHECK(ndr_pull_gid_t(ndr, NDR_SCALARS, &r->gid));
        NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->ngroups));
#ifdef NDR_VERSION_GREATER_THAN_1_0_1
        ndr_get_array_size(ndr, &r->groups, &size_groups_0);
#else
        size_groups_0 = ndr_get_array_size(ndr, &r->groups);
#endif
        NDR_PULL_ALLOC_N(ndr, r->groups, size_groups_0);
        _mem_save_groups_0 = NDR_PULL_GET_MEM_CTX(ndr);
        NDR_PULL_SET_MEM_CTX(ndr, r->groups, 0);
        for (cntr_groups_0 = 0; cntr_groups_0 < (size_groups_0); cntr_groups_0++) {
            NDR_CHECK(ndr_pull_gid_t(ndr, NDR_SCALARS, &r->groups[cntr_groups_0]));
        }
        NDR_PULL_SET_MEM_CTX(ndr, _mem_save_groups_0, 0);
        if (r->groups) {
            NDR_CHECK(ndr_check_array_size(ndr, (void*)&r->groups, r->ngroups));
        }
        NDR_CHECK(ndr_pull_trailer_align(ndr, 8));
    }
    if (ndr_flags & NDR_BUFFERS) {
    }
    return NDR_ERR_SUCCESS;
}

static void ndr_print_flags_security_unix_token(struct ndr_print *ndr, const char *name, int unused, const struct security_unix_token *r)
{
    UNUSED_ARG(unused);
    
    ndr_print_security_unix_token(ndr, name, r);
}

_PUBLIC_ void ndr_print_security_unix_token(struct ndr_print *ndr, const char *name, const struct security_unix_token *r)
{
    uint32_t cntr_groups_0;
    ndr_print_struct(ndr, name, "security_unix_token");
    if (r == NULL) { ndr_print_null(ndr); return; }
    ndr->depth++;
    ndr_print_uid_t(ndr, "uid", r->uid);
    ndr_print_gid_t(ndr, "gid", r->gid);
    ndr_print_uint32(ndr, "ngroups", r->ngroups);
    ndr->print(ndr, "%s: ARRAY(%d)", "groups", (int)r->ngroups);
    ndr->depth++;
    for (cntr_groups_0 = 0; cntr_groups_0 < (r->ngroups); cntr_groups_0++) {
        ndr_print_gid_t(ndr, "groups", r->groups[cntr_groups_0]);
    }
    ndr->depth--;
    ndr->depth--;
}

_PUBLIC_ enum ndr_err_code ndr_push_security_secinfo(struct ndr_push *ndr, int ndr_flags, uint32_t r)
{
    UNUSED_ARG(ndr_flags);

    NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r));
    return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_security_secinfo(struct ndr_pull *ndr, int ndr_flags, uint32_t *r)
{
    UNUSED_ARG(ndr_flags);

    uint32_t v;
    NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &v));
    *r = v;
    return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_security_secinfo(struct ndr_print *ndr, const char *name, uint32_t r)
{
    ndr_print_uint32(ndr, name, r);
    ndr->depth++;
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "SECINFO_OWNER", SECINFO_OWNER, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "SECINFO_GROUP", SECINFO_GROUP, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "SECINFO_DACL", SECINFO_DACL, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "SECINFO_SACL", SECINFO_SACL, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "SECINFO_LABEL", SECINFO_LABEL, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "SECINFO_ATTRIBUTE", SECINFO_ATTRIBUTE, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "SECINFO_SCOPE", SECINFO_SCOPE, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "SECINFO_BACKUP", SECINFO_BACKUP, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "SECINFO_UNPROTECTED_SACL", SECINFO_UNPROTECTED_SACL, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "SECINFO_UNPROTECTED_DACL", SECINFO_UNPROTECTED_DACL, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "SECINFO_PROTECTED_SACL", SECINFO_PROTECTED_SACL, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "SECINFO_PROTECTED_DACL", SECINFO_PROTECTED_DACL, r);
    ndr->depth--;
}

_PUBLIC_ enum ndr_err_code ndr_push_LSAP_TOKEN_INFO_INTEGRITY(struct ndr_push *ndr, int ndr_flags, const struct LSAP_TOKEN_INFO_INTEGRITY *r)
{
    {
        uint32_t _flags_save_STRUCT = ndr->flags;
        ndr_set_flags(&ndr->flags, LIBNDR_PRINT_ARRAY_HEX);
        NDR_PUSH_CHECK_FLAGS(ndr, ndr_flags);
        if (ndr_flags & NDR_SCALARS) {
            NDR_CHECK(ndr_push_align(ndr, 4));
            NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->Flags));
            NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->TokenIL));
            NDR_CHECK(ndr_push_array_uint8(ndr, NDR_SCALARS, r->MachineId, 32));
            NDR_CHECK(ndr_push_trailer_align(ndr, 4));
        }
        if (ndr_flags & NDR_BUFFERS) {
        }
        ndr->flags = _flags_save_STRUCT;
    }
    return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_LSAP_TOKEN_INFO_INTEGRITY(struct ndr_pull *ndr, int ndr_flags, struct LSAP_TOKEN_INFO_INTEGRITY *r)
{
    uint32_t size_MachineId_0 = 0;
    {
        uint32_t _flags_save_STRUCT = ndr->flags;
        ndr_set_flags(&ndr->flags, LIBNDR_PRINT_ARRAY_HEX);
        NDR_PULL_CHECK_FLAGS(ndr, ndr_flags);
        if (ndr_flags & NDR_SCALARS) {
            NDR_CHECK(ndr_pull_align(ndr, 4));
            NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->Flags));
            NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->TokenIL));
            size_MachineId_0 = 32;
            NDR_CHECK(ndr_pull_array_uint8(ndr, NDR_SCALARS, r->MachineId, size_MachineId_0));
            NDR_CHECK(ndr_pull_trailer_align(ndr, 4));
        }
        if (ndr_flags & NDR_BUFFERS) {
        }
        ndr->flags = _flags_save_STRUCT;
    }
    return NDR_ERR_SUCCESS;
}

static void ndr_print_flags_LSAP_TOKEN_INFO_INTEGRITY(struct ndr_print *ndr, const char *name, int unused, const struct LSAP_TOKEN_INFO_INTEGRITY *r)
{
    UNUSED_ARG(unused);

    ndr_print_LSAP_TOKEN_INFO_INTEGRITY(ndr, name, r);
}

_PUBLIC_ void ndr_print_LSAP_TOKEN_INFO_INTEGRITY(struct ndr_print *ndr, const char *name, const struct LSAP_TOKEN_INFO_INTEGRITY *r)
{
    ndr_print_struct(ndr, name, "LSAP_TOKEN_INFO_INTEGRITY");
    if (r == NULL) { ndr_print_null(ndr); return; }
    {
        uint32_t _flags_save_STRUCT = ndr->flags;
        ndr_set_flags(&ndr->flags, LIBNDR_PRINT_ARRAY_HEX);
        ndr->depth++;
        ndr_print_uint32(ndr, "Flags", r->Flags);
        ndr_print_uint32(ndr, "TokenIL", r->TokenIL);
        ndr_print_array_uint8(ndr, "MachineId", r->MachineId, 32);
        ndr->depth--;
        ndr->flags = _flags_save_STRUCT;
    }
}

_PUBLIC_ size_t ndr_size_LSAP_TOKEN_INFO_INTEGRITY(const struct LSAP_TOKEN_INFO_INTEGRITY *r, int flags)
{
    flags |= LIBNDR_PRINT_ARRAY_HEX;
    return ndr_size_struct(r, flags, (ndr_push_flags_fn_t)ndr_push_LSAP_TOKEN_INFO_INTEGRITY);
}

_PUBLIC_ enum ndr_err_code ndr_push_kerb_EncTypes(struct ndr_push *ndr, int ndr_flags, uint32_t r)
{
    UNUSED_ARG(ndr_flags);

    NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r));
    return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_kerb_EncTypes(struct ndr_pull *ndr, int ndr_flags, uint32_t *r)
{
    UNUSED_ARG(ndr_flags);

    uint32_t v;
    NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &v));
    *r = v;
    return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_kerb_EncTypes(struct ndr_print *ndr, const char *name, uint32_t r)
{
    ndr_print_uint32(ndr, name, r);
    ndr->depth++;
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "KERB_ENCTYPE_DES_CBC_CRC", KERB_ENCTYPE_DES_CBC_CRC, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "KERB_ENCTYPE_DES_CBC_MD5", KERB_ENCTYPE_DES_CBC_MD5, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "KERB_ENCTYPE_RC4_HMAC_MD5", KERB_ENCTYPE_RC4_HMAC_MD5, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "KERB_ENCTYPE_AES128_CTS_HMAC_SHA1_96", KERB_ENCTYPE_AES128_CTS_HMAC_SHA1_96, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "KERB_ENCTYPE_AES256_CTS_HMAC_SHA1_96", KERB_ENCTYPE_AES256_CTS_HMAC_SHA1_96, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "KERB_ENCTYPE_FAST_SUPPORTED", KERB_ENCTYPE_FAST_SUPPORTED, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "KERB_ENCTYPE_COMPOUND_IDENTITY_SUPPORTED", KERB_ENCTYPE_COMPOUND_IDENTITY_SUPPORTED, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "KERB_ENCTYPE_CLAIMS_SUPPORTED", KERB_ENCTYPE_CLAIMS_SUPPORTED, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "KERB_ENCTYPE_RESOURCE_SID_COMPRESSION_DISABLED", KERB_ENCTYPE_RESOURCE_SID_COMPRESSION_DISABLED, r);
    ndr->depth--;
}

_PUBLIC_ enum ndr_err_code ndr_push_security_autoinherit(struct ndr_push *ndr, int ndr_flags, uint32_t r)
{
    UNUSED_ARG(ndr_flags);

    NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r));
    return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_security_autoinherit(struct ndr_pull *ndr, int ndr_flags, uint32_t *r)
{
    UNUSED_ARG(ndr_flags);

    uint32_t v;
    NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &v));
    *r = v;
    return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_security_autoinherit(struct ndr_print *ndr, const char *name, uint32_t r)
{
    ndr_print_uint32(ndr, name, r);
    ndr->depth++;
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "SEC_DACL_AUTO_INHERIT", SEC_DACL_AUTO_INHERIT, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "SEC_SACL_AUTO_INHERIT", SEC_SACL_AUTO_INHERIT, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "SEC_DEFAULT_DESCRIPTOR", SEC_DEFAULT_DESCRIPTOR, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "SEC_OWNER_FROM_PARENT", SEC_OWNER_FROM_PARENT, r);
    ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "SEC_GROUP_FROM_PARENT", SEC_GROUP_FROM_PARENT, r);
    ndr->depth--;
}

#ifndef SKIP_NDR_TABLE_security
static const struct ndr_interface_public_struct security_public_structs[] = {
    {
        .name = "dom_sid",
        .struct_size = sizeof(struct dom_sid ),
        .ndr_push = (ndr_push_flags_fn_t) ndr_push_dom_sid,
        .ndr_pull = (ndr_pull_flags_fn_t) ndr_pull_dom_sid,
        .ndr_print = (ndr_print_function_t) ndr_print_flags_dom_sid,
    },
    {
        .name = "security_ace",
        .struct_size = sizeof(struct security_ace ),
        .ndr_push = (ndr_push_flags_fn_t) ndr_push_security_ace,
        .ndr_pull = (ndr_pull_flags_fn_t) ndr_pull_security_ace,
        .ndr_print = (ndr_print_function_t) ndr_print_flags_security_ace,
    },
    {
        .name = "security_acl",
        .struct_size = sizeof(struct security_acl ),
        .ndr_push = (ndr_push_flags_fn_t) ndr_push_security_acl,
        .ndr_pull = (ndr_pull_flags_fn_t) ndr_pull_security_acl,
        .ndr_print = (ndr_print_function_t) ndr_print_flags_security_acl,
    },
    {
        .name = "security_descriptor",
        .struct_size = sizeof(struct security_descriptor ),
        .ndr_push = (ndr_push_flags_fn_t) ndr_push_security_descriptor,
        .ndr_pull = (ndr_pull_flags_fn_t) ndr_pull_security_descriptor,
        .ndr_print = (ndr_print_function_t) ndr_print_flags_security_descriptor,
    },
    {
        .name = "sec_desc_buf",
        .struct_size = sizeof(struct sec_desc_buf ),
        .ndr_push = (ndr_push_flags_fn_t) ndr_push_sec_desc_buf,
        .ndr_pull = (ndr_pull_flags_fn_t) ndr_pull_sec_desc_buf,
        .ndr_print = (ndr_print_function_t) ndr_print_flags_sec_desc_buf,
    },
    {
        .name = "security_token",
        .struct_size = sizeof(struct security_token ),
        .ndr_push = (ndr_push_flags_fn_t) ndr_push_security_token,
        .ndr_pull = (ndr_pull_flags_fn_t) ndr_pull_security_token,
        .ndr_print = (ndr_print_function_t) ndr_print_flags_security_token,
    },
    {
        .name = "security_unix_token",
        .struct_size = sizeof(struct security_unix_token ),
        .ndr_push = (ndr_push_flags_fn_t) ndr_push_security_unix_token,
        .ndr_pull = (ndr_pull_flags_fn_t) ndr_pull_security_unix_token,
        .ndr_print = (ndr_print_function_t) ndr_print_flags_security_unix_token,
    },
    {
        .name = "LSAP_TOKEN_INFO_INTEGRITY",
        .struct_size = sizeof(struct LSAP_TOKEN_INFO_INTEGRITY ),
        .ndr_push = (ndr_push_flags_fn_t) ndr_push_LSAP_TOKEN_INFO_INTEGRITY,
        .ndr_pull = (ndr_pull_flags_fn_t) ndr_pull_LSAP_TOKEN_INFO_INTEGRITY,
        .ndr_print = (ndr_print_function_t) ndr_print_flags_LSAP_TOKEN_INFO_INTEGRITY,
    },
    { .name = NULL }
};

static const struct ndr_interface_call security_calls[] = {
    { .name = NULL }
};

static const char * const security_endpoint_strings[] = {
    "ncacn_np:[\\pipe\\security]", 
};

static const struct ndr_interface_string_array security_endpoints = {
    .count  = 1,
    .names  = security_endpoint_strings
};

static const char * const security_authservice_strings[] = {
    "host", 
};

static const struct ndr_interface_string_array security_authservices = {
    .count  = 1,
    .names  = security_authservice_strings
};


const struct ndr_interface_table ndr_table_security = {
    .name       = "security",
    .syntax_id  = {
        {0xcbf7d408,0x2d6c,0x11e2,{0xae,0x5b},{0x0b,0x56,0x92,0x79,0x0e,0x18}},
        NDR_SECURITY_VERSION
    },
    .helpstring = NDR_SECURITY_HELPSTRING,
    .num_calls  = 0,
    .calls      = security_calls,
    .num_public_structs = 8,
    .public_structs     = security_public_structs,
    .endpoints  = &security_endpoints,
    .authservices   = &security_authservices
};

#endif /* SKIP_NDR_TABLE_security */
