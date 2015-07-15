#include <stdbool.h>

#define H5T_val(v) *((hid_t*) Data_custom_val(v))
#define H5T_closed(v) *((bool*) ((char*) Data_custom_val(v) + sizeof(hid_t)))
value alloc_h5t(hid_t id);

H5T_class_t H5T_class_val(value);
value Val_h5t_class(H5T_class_t);
H5T_order_t H5T_order_val(value);
value Val_h5t_order(H5T_order_t);
H5T_sign_t H5T_sign_val(value);
value Val_h5t_sign(H5T_sign_t);
H5T_norm_t H5T_norm_val(value);
value Val_h5t_norm(H5T_norm_t);
H5T_cset_t H5T_cset_val(value);
value Val_h5t_cset(H5T_cset_t);
H5T_str_t H5T_str_val(value);
value Val_h5t_str(H5T_str_t);
H5T_pad_t H5T_pad_val(value);
value Val_h5t_pad(H5T_pad_t);
H5T_cmd_t H5T_cmd_val(value);
value Val_h5t_cmd(H5T_cmd_t);
H5T_bkg_t H5T_bkg_val(value);
value Val_h5t_bkg(H5T_bkg_t);
H5T_cdata_t H5T_cdata_val(value);
value Val_h5t_cdata(H5T_cdata_t*);
H5T_pers_t H5T_pers_val(value);
value Val_h5t_pers(H5T_pers_t);
H5T_direction_t H5T_direction_val(value);
value Val_h5t_direction(H5T_direction_t);
H5T_conv_except_t H5T_conv_except_val(value);
value Val_h5t_conv_except(H5T_conv_except_t);
H5T_conv_ret_t H5T_conv_ret_val(value);
value Val_h5t_conv_ret(H5T_conv_ret_t);