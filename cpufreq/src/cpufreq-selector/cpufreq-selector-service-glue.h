/* Generated by dbus-binding-tool; do not edit! */


#ifndef __dbus_glib_marshal_cpufreq_selector_service_MARSHAL_H__
#define __dbus_glib_marshal_cpufreq_selector_service_MARSHAL_H__

#include	<glib-object.h>

G_BEGIN_DECLS

#ifdef G_ENABLE_DEBUG
#define g_marshal_value_peek_boolean(v)  g_value_get_boolean (v)
#define g_marshal_value_peek_char(v)     g_value_get_char (v)
#define g_marshal_value_peek_uchar(v)    g_value_get_uchar (v)
#define g_marshal_value_peek_int(v)      g_value_get_int (v)
#define g_marshal_value_peek_uint(v)     g_value_get_uint (v)
#define g_marshal_value_peek_long(v)     g_value_get_long (v)
#define g_marshal_value_peek_ulong(v)    g_value_get_ulong (v)
#define g_marshal_value_peek_int64(v)    g_value_get_int64 (v)
#define g_marshal_value_peek_uint64(v)   g_value_get_uint64 (v)
#define g_marshal_value_peek_enum(v)     g_value_get_enum (v)
#define g_marshal_value_peek_flags(v)    g_value_get_flags (v)
#define g_marshal_value_peek_float(v)    g_value_get_float (v)
#define g_marshal_value_peek_double(v)   g_value_get_double (v)
#define g_marshal_value_peek_string(v)   (char*) g_value_get_string (v)
#define g_marshal_value_peek_param(v)    g_value_get_param (v)
#define g_marshal_value_peek_boxed(v)    g_value_get_boxed (v)
#define g_marshal_value_peek_pointer(v)  g_value_get_pointer (v)
#define g_marshal_value_peek_object(v)   g_value_get_object (v)
#define g_marshal_value_peek_variant(v)  g_value_get_variant (v)
#else /* !G_ENABLE_DEBUG */
/* WARNING: This code accesses GValues directly, which is UNSUPPORTED API.
 *          Do not access GValues directly in your code. Instead, use the
 *          g_value_get_*() functions
 */
#define g_marshal_value_peek_boolean(v)  (v)->data[0].v_int
#define g_marshal_value_peek_char(v)     (v)->data[0].v_int
#define g_marshal_value_peek_uchar(v)    (v)->data[0].v_uint
#define g_marshal_value_peek_int(v)      (v)->data[0].v_int
#define g_marshal_value_peek_uint(v)     (v)->data[0].v_uint
#define g_marshal_value_peek_long(v)     (v)->data[0].v_long
#define g_marshal_value_peek_ulong(v)    (v)->data[0].v_ulong
#define g_marshal_value_peek_int64(v)    (v)->data[0].v_int64
#define g_marshal_value_peek_uint64(v)   (v)->data[0].v_uint64
#define g_marshal_value_peek_enum(v)     (v)->data[0].v_long
#define g_marshal_value_peek_flags(v)    (v)->data[0].v_ulong
#define g_marshal_value_peek_float(v)    (v)->data[0].v_float
#define g_marshal_value_peek_double(v)   (v)->data[0].v_double
#define g_marshal_value_peek_string(v)   (v)->data[0].v_pointer
#define g_marshal_value_peek_param(v)    (v)->data[0].v_pointer
#define g_marshal_value_peek_boxed(v)    (v)->data[0].v_pointer
#define g_marshal_value_peek_pointer(v)  (v)->data[0].v_pointer
#define g_marshal_value_peek_object(v)   (v)->data[0].v_pointer
#define g_marshal_value_peek_variant(v)  (v)->data[0].v_pointer
#endif /* !G_ENABLE_DEBUG */


/* NONE:UINT,STRING,POINTER */
extern void dbus_glib_marshal_cpufreq_selector_service_VOID__UINT_STRING_POINTER (GClosure     *closure,
                                                                                  GValue       *return_value,
                                                                                  guint         n_param_values,
                                                                                  const GValue *param_values,
                                                                                  gpointer      invocation_hint,
                                                                                  gpointer      marshal_data);
void
dbus_glib_marshal_cpufreq_selector_service_VOID__UINT_STRING_POINTER (GClosure     *closure,
                                                                      GValue       *return_value G_GNUC_UNUSED,
                                                                      guint         n_param_values,
                                                                      const GValue *param_values,
                                                                      gpointer      invocation_hint G_GNUC_UNUSED,
                                                                      gpointer      marshal_data)
{
  typedef void (*GMarshalFunc_VOID__UINT_STRING_POINTER) (gpointer     data1,
                                                          guint        arg_1,
                                                          gpointer     arg_2,
                                                          gpointer     arg_3,
                                                          gpointer     data2);
  register GMarshalFunc_VOID__UINT_STRING_POINTER callback;
  register GCClosure *cc = (GCClosure*) closure;
  register gpointer data1, data2;

  g_return_if_fail (n_param_values == 4);

  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = g_value_peek_pointer (param_values + 0);
    }
  else
    {
      data1 = g_value_peek_pointer (param_values + 0);
      data2 = closure->data;
    }
  callback = (GMarshalFunc_VOID__UINT_STRING_POINTER) (marshal_data ? marshal_data : cc->callback);

  callback (data1,
            g_marshal_value_peek_uint (param_values + 1),
            g_marshal_value_peek_string (param_values + 2),
            g_marshal_value_peek_pointer (param_values + 3),
            data2);
}
#define dbus_glib_marshal_cpufreq_selector_service_NONE__UINT_STRING_POINTER	dbus_glib_marshal_cpufreq_selector_service_VOID__UINT_STRING_POINTER

/* NONE:POINTER */
#define dbus_glib_marshal_cpufreq_selector_service_VOID__POINTER	g_cclosure_marshal_VOID__POINTER
#define dbus_glib_marshal_cpufreq_selector_service_NONE__POINTER	dbus_glib_marshal_cpufreq_selector_service_VOID__POINTER

/* NONE:UINT,UINT,POINTER */
extern void dbus_glib_marshal_cpufreq_selector_service_VOID__UINT_UINT_POINTER (GClosure     *closure,
                                                                                GValue       *return_value,
                                                                                guint         n_param_values,
                                                                                const GValue *param_values,
                                                                                gpointer      invocation_hint,
                                                                                gpointer      marshal_data);
void
dbus_glib_marshal_cpufreq_selector_service_VOID__UINT_UINT_POINTER (GClosure     *closure,
                                                                    GValue       *return_value G_GNUC_UNUSED,
                                                                    guint         n_param_values,
                                                                    const GValue *param_values,
                                                                    gpointer      invocation_hint G_GNUC_UNUSED,
                                                                    gpointer      marshal_data)
{
  typedef void (*GMarshalFunc_VOID__UINT_UINT_POINTER) (gpointer     data1,
                                                        guint        arg_1,
                                                        guint        arg_2,
                                                        gpointer     arg_3,
                                                        gpointer     data2);
  register GMarshalFunc_VOID__UINT_UINT_POINTER callback;
  register GCClosure *cc = (GCClosure*) closure;
  register gpointer data1, data2;

  g_return_if_fail (n_param_values == 4);

  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = g_value_peek_pointer (param_values + 0);
    }
  else
    {
      data1 = g_value_peek_pointer (param_values + 0);
      data2 = closure->data;
    }
  callback = (GMarshalFunc_VOID__UINT_UINT_POINTER) (marshal_data ? marshal_data : cc->callback);

  callback (data1,
            g_marshal_value_peek_uint (param_values + 1),
            g_marshal_value_peek_uint (param_values + 2),
            g_marshal_value_peek_pointer (param_values + 3),
            data2);
}
#define dbus_glib_marshal_cpufreq_selector_service_NONE__UINT_UINT_POINTER	dbus_glib_marshal_cpufreq_selector_service_VOID__UINT_UINT_POINTER

G_END_DECLS

#endif /* __dbus_glib_marshal_cpufreq_selector_service_MARSHAL_H__ */

#include <dbus/dbus-glib.h>
static const DBusGMethodInfo dbus_glib_cpufreq_selector_service_methods[] = {
  { (GCallback) cpufreq_selector_service_set_frequency, dbus_glib_marshal_cpufreq_selector_service_NONE__UINT_UINT_POINTER, 0 },
  { (GCallback) cpufreq_selector_service_set_governor, dbus_glib_marshal_cpufreq_selector_service_NONE__UINT_STRING_POINTER, 64 },
  { (GCallback) cpufreq_selector_service_can_set, dbus_glib_marshal_cpufreq_selector_service_NONE__POINTER, 126 },
};

const DBusGObjectInfo dbus_glib_cpufreq_selector_service_object_info = {  1,
  dbus_glib_cpufreq_selector_service_methods,
  3,
"org.consort.CPUFreqSelector\0SetFrequency\0A\0cpu\0I\0u\0frequency\0I\0u\0\0org.consort.CPUFreqSelector\0SetGovernor\0A\0cpu\0I\0u\0governor\0I\0s\0\0org.consort.CPUFreqSelector\0CanSet\0A\0result\0O\0F\0N\0b\0\0\0",
"\0",
"\0"
};

