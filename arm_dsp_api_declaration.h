
#include "arm_dsp_api.h"

#if ARM_DSP_API_IGNORE_Q7 != 0
#define arm_fir_q7 0
#define arm_fir_init_q7 0
#define arm_mult_q7 0
#define arm_add_q7 0
#define arm_sub_q7 0
#define arm_scale_q7 0
#define arm_abs_q7 0
#define arm_dot_prod_q7 0
#define arm_shift_q7 0
#define arm_offset_q7 0
#define arm_negate_q7 0
#define arm_copy_q7 0
#define arm_fill_q7 0
#define arm_conv_opt_q7 0
#define arm_conv_q7 0
#define arm_conv_partial_opt_q7 0
#define arm_conv_partial_q7 0
#define arm_correlate_opt_q7 0
#define arm_correlate_q7 0
#define arm_fir_sparse_q7 0
#define arm_fir_sparse_init_q7 0
#define arm_power_q7 0
#define arm_mean_q7 0
#define arm_min_q7 0
#define arm_max_q7 0
#endif

#if ARM_DSP_API_IGNORE_Q15 != 0 || ARM_DSP_API_IGNORE_FILTER != 0
#define arm_fir_q15 0
#define arm_fir_fast_q15 0
#define arm_fir_init_q15 0
#define arm_biquad_cascade_df1_q15 0
#define arm_biquad_cascade_df1_init_q15 0
#define arm_biquad_cascade_df1_fast_q15 0
#define arm_fir_decimate_q15 0
#define arm_fir_decimate_fast_q15 0
#define arm_fir_decimate_init_q15 0
#define arm_fir_interpolate_q15 0
#define arm_fir_interpolate_init_q15 0
#define arm_fir_lattice_init_q15 0
#define arm_fir_lattice_q15 0
#define arm_iir_lattice_q15 0
#define arm_iir_lattice_init_q15 0
#define arm_fir_sparse_q15 0
#define arm_fir_sparse_init_q15 0
#define arm_conv_opt_q15 0
#define arm_conv_q15 0
#define arm_conv_fast_q15 0
#define arm_conv_fast_opt_q15 0
#define arm_conv_partial_opt_q15 0
#define arm_conv_partial_q15 0
#define arm_conv_partial_fast_q15 0
#define arm_conv_partial_fast_opt_q15 0
#define arm_lms_init_q15 0
#define arm_lms_q15 0
#define arm_lms_norm_q15 0
#define arm_lms_norm_init_q15 0
#define arm_correlate_opt_q15 0
#define arm_correlate_q15 0
#define arm_correlate_fast_q15 0
#define arm_correlate_fast_opt_q15 0
#endif

#if ARM_DSP_API_IGNORE_Q15 != 0 || ARM_DSP_API_IGNORE_MATRIX != 0
#define arm_mat_add_q15 0
#define arm_mat_cmplx_mult_q15 0
#define arm_mat_trans_q15 0
#define arm_mat_mult_q15 0
#define arm_mat_mult_fast_q15 0
#define arm_mat_sub_q15 0
#define arm_mat_scale_q15 0
#define arm_mat_init_q15 0
#endif

#if ARM_DSP_API_IGNORE_Q15 != 0 || ARM_DSP_API_IGNORE_CONTROLLER != 0
#define arm_pid_init_q15 0
#define arm_pid_reset_q15 0
#endif

#if ARM_DSP_API_IGNORE_Q15 != 0 || ARM_DSP_API_IGNORE_TRANSFORM != 0 || ARM_DSP_API_IGNORE_COMPLEX != 0 || ARM_DSP_API_IGNORE_FFT != 0
#define arm_cfft_q15 0
#endif

#if ARM_DSP_API_IGNORE_Q15 != 0 || ARM_DSP_API_IGNORE_TRANSFORM != 0 || ARM_DSP_API_IGNORE_FFT != 0
#define arm_rfft_init_q15 0
#define arm_rfft_q15 0
#endif

#if ARM_DSP_API_IGNORE_Q15 != 0 || ARM_DSP_API_IGNORE_TRANSFORM != 0 || ARM_DSP_API_IGNORE_DCT != 0
#define arm_dct4_init_q15 0
#define arm_dct4_q15 0
#endif

#if ARM_DSP_API_IGNORE_Q15 != 0
#define arm_mult_q15 0
#define arm_add_q15 0
#define arm_sub_q15 0
#define arm_scale_q15 0
#define arm_abs_q15 0
#define arm_dot_prod_q15 0
#define arm_shift_q15 0
#define arm_offset_q15 0
#define arm_negate_q15 0
#define arm_copy_q15 0
#define arm_fill_q15 0
#define arm_power_q15 0
#define arm_mean_q15 0
#define arm_var_q15 0
#define arm_rms_q15 0
#define arm_std_q15 0
#define arm_min_q15 0
#define arm_max_q15 0
#endif

#if ARM_DSP_API_IGNORE_Q15 != 0 || ARM_DSP_API_IGNORE_FASTMATH != 0
#define arm_sin_q15 0
#define arm_cos_q15 0
#define arm_sqrt_q15 0
#endif

#if ARM_DSP_API_IGNORE_Q15 != 0 || ARM_DSP_API_IGNORE_COMPLEX != 0
#define arm_cmplx_conj_q15 0
#define arm_cmplx_mag_squared_q15 0
#define arm_cmplx_mag_q15 0
#define arm_cmplx_dot_prod_q15 0
#define arm_cmplx_mult_real_q15 0
#define arm_cmplx_mult_cmplx_q15 0
#endif

#if ARM_DSP_API_IGNORE_Q31 != 0 || ARM_DSP_API_IGNORE_FILTER != 0
#define arm_fir_q31 0
#define arm_fir_fast_q31 0
#define arm_fir_init_q31 0
#define arm_biquad_cascade_df1_q31 0
#define arm_biquad_cascade_df1_fast_q31 0
#define arm_biquad_cascade_df1_init_q31 0
#define arm_fir_decimate_q31 0
#define arm_fir_decimate_fast_q31 0
#define arm_fir_decimate_init_q31 0
#define arm_fir_interpolate_q31 0
#define arm_fir_interpolate_init_q31 0
#define arm_biquad_cas_df1_32x64_q31 0
#define arm_biquad_cas_df1_32x64_init_q31 0
#define arm_fir_lattice_init_q31 0
#define arm_fir_lattice_q31 0
#define arm_iir_lattice_q31 0
#define arm_iir_lattice_init_q31 0
#define arm_conv_q31 0
#define arm_conv_fast_q31 0
#define arm_conv_partial_q31 0
#define arm_conv_partial_fast_q31 0
#define arm_lms_q31 0
#define arm_lms_init_q31 0
#define arm_lms_norm_q31 0
#define arm_lms_norm_init_q31 0
#define arm_correlate_q31 0
#define arm_correlate_fast_q31 0
#define arm_fir_sparse_q31 0
#define arm_fir_sparse_init_q31 0
#endif

#if ARM_DSP_API_IGNORE_Q31 != 0 || ARM_DSP_API_IGNORE_MATRIX != 0
#define arm_mat_add_q31 0
#define arm_mat_cmplx_mult_q31 0
#define arm_mat_trans_q31 0
#define arm_mat_mult_q31 0
#define arm_mat_mult_fast_q31 0
#define arm_mat_sub_q31 0
#define arm_mat_scale_q31 0
#define arm_mat_init_q31 0
#endif


#if ARM_DSP_API_IGNORE_Q31 != 0 || ARM_DSP_API_IGNORE_CONTROLLER != 0
#define arm_pid_init_q31 0
#define arm_pid_reset_q31 0
#define arm_sin_cos_q31 0
#endif

#if ARM_DSP_API_IGNORE_Q31 != 0 || ARM_DSP_API_IGNORE_TRANSFORM != 0 || ARM_DSP_API_IGNORE_COMPLEX != 0 || ARM_DSP_API_IGNORE_FFT != 0
#define arm_cfft_q31 0
#endif

#if ARM_DSP_API_IGNORE_Q31 != 0 || ARM_DSP_API_IGNORE_TRANSFORM != 0 || ARM_DSP_API_IGNORE_FFT != 0
#define arm_rfft_init_q31 0
#define arm_rfft_q31 0
#endif

#if ARM_DSP_API_IGNORE_Q31 != 0 || ARM_DSP_API_IGNORE_TRANSFORM != 0 || ARM_DSP_API_IGNORE_DCT != 0
#define arm_dct4_init_q31 0
#define arm_dct4_q31 0
#endif

#if ARM_DSP_API_IGNORE_Q31 !=0
#define arm_mult_q31 0
#define arm_add_q31 0
#define arm_sub_q31 0
#define arm_scale_q31 0
#define arm_abs_q31 0
#define arm_dot_prod_q31 0
#define arm_shift_q31 0
#define arm_offset_q31 0
#define arm_negate_q31 0
#define arm_copy_q31 0
#define arm_fill_q31 0
#define arm_power_q31 0
#define arm_mean_q31 0
#define arm_var_q31 0
#define arm_rms_q31 0
#define arm_std_q31 0
#define arm_min_q31 0
#define arm_max_q31 0
#endif

#if ARM_DSP_API_IGNORE_Q31 != 0 || ARM_DSP_API_IGNORE_FASTMATH != 0
#define arm_sin_q31 0
#define arm_cos_q31 0
#define arm_sqrt_q31 0
#endif

#if ARM_DSP_API_IGNORE_Q31 != 0 || ARM_DSP_API_IGNORE_COMPLEX != 0
#define arm_cmplx_mag_q31 0
#define arm_cmplx_dot_prod_q31 0
#define arm_cmplx_mult_real_q31 0
#define arm_cmplx_conj_q31 0
#define arm_cmplx_mag_squared_q31 0
#define arm_cmplx_mult_cmplx_q31 0
#endif

#if ARM_DSP_API_IGNORE_F32 != 0 || ARM_DSP_API_IGNORE_FILTER != 0
#define arm_fir_f32 0
#define arm_fir_init_f32 0
#define arm_biquad_cascade_df1_f32 0
#define arm_biquad_cascade_df1_init_f32 0
#define arm_conv_f32 0
#define arm_conv_partial_f32 0
#define arm_fir_decimate_f32 0
#define arm_fir_decimate_init_f32 0
#define arm_fir_interpolate_f32 0
#define arm_fir_interpolate_init_f32 0
#define arm_biquad_cascade_df2T_f32 0
#define arm_biquad_cascade_stereo_df2T_f32 0
#define arm_biquad_cascade_df2T_init_f32 0
#define arm_biquad_cascade_stereo_df2T_init_f32 0
#define arm_fir_lattice_init_f32 0
#define arm_fir_lattice_f32 0
#define arm_iir_lattice_f32 0
#define arm_iir_lattice_init_f32 0
#define arm_lms_f32 0
#define arm_lms_init_f32 0
#define arm_lms_norm_f32 0
#define arm_lms_norm_init_f32 0
#define arm_correlate_f32 0
#define arm_fir_sparse_f32 0
#define arm_fir_sparse_init_f32 0
#endif

#if ARM_DSP_API_IGNORE_F32 != 0 || ARM_DSP_API_IGNORE_MATRIX != 0
#define arm_mat_add_f32 0
#define arm_mat_cmplx_mult_f32 0
#define arm_mat_trans_f32 0
#define arm_mat_mult_f32 0
#define arm_mat_sub_f32 0
#define arm_mat_scale_f32 0
#define arm_mat_init_f32 0
#define arm_mat_inverse_f32 0
#endif

#if ARM_DSP_API_IGNORE_F32 != 0 || ARM_DSP_API_IGNORE_CONTROLLER != 0
#define arm_pid_init_f32 0
#define arm_pid_reset_f32 0
#define arm_sin_cos_f32 0
#endif

#if ARM_DSP_API_IGNORE_Q15 != 0 || ARM_DSP_API_IGNORE_TRANSFORM != 0 || ARM_DSP_API_IGNORE_COMPLEX != 0 || ARM_DSP_API_IGNORE_FFT != 0
#define arm_cfft_f32 0
#endif

#if ARM_DSP_API_IGNORE_Q15 != 0 || ARM_DSP_API_IGNORE_TRANSFORM != 0 || ARM_DSP_API_IGNORE_FFT != 0
#define arm_rfft_fast_init_f32 0
#define arm_rfft_fast_f32 0
#endif

#if ARM_DSP_API_IGNORE_Q15 != 0 || ARM_DSP_API_IGNORE_TRANSFORM != 0 || ARM_DSP_API_IGNORE_DCT != 0
#define arm_dct4_init_f32 0
#define arm_dct4_f32 0
#endif

#if ARM_DSP_API_IGNORE_F32 != 0
#define arm_mult_f32 0
#define arm_add_f32 0
#define arm_sub_f32 0
#define arm_scale_f32 0
#define arm_abs_f32 0
#define arm_dot_prod_f32 0
#define arm_offset_f32 0
#define arm_negate_f32 0
#define arm_copy_f32 0
#define arm_fill_f32 0
#define arm_power_f32 0
#define arm_mean_f32 0
#define arm_var_f32 0
#define arm_rms_f32 0
#define arm_std_f32 0
#define arm_min_f32 0
#define arm_max_f32 0
#endif

#if ARM_DSP_API_IGNORE_F32 != 0 || ARM_DSP_API_IGNORE_FASTMATH != 0
#define arm_sin_f32 0
#define arm_cos_f32 0
#endif

#if ARM_DSP_API_IGNORE_F32 != 0 || ARM_DSP_API_IGNORE_COMPLEX != 0
#define arm_cmplx_mag_f32 0
#define arm_cmplx_dot_prod_f32 0
#define arm_cmplx_mult_real_f32 0
#define arm_cmplx_conj_f32 0
#define arm_cmplx_mag_squared_f32 0
#define arm_cmplx_mult_cmplx_f32 0
#endif

#if ARM_DSP_API_IGNORE_F64 != 0
#define arm_biquad_cascade_df2T_f64 0
#define arm_biquad_cascade_df2T_init_f64 0
#define arm_mat_inverse_f64 0
#endif

#if ARM_DSP_API_IGNORE_CONVERSIONS != 0
#define arm_float_to_q31 0
#define arm_float_to_q15 0
#define arm_float_to_q7 0
#define arm_q31_to_q15 0
#define arm_q31_to_q7 0
#define arm_q15_to_float 0
#define arm_q15_to_q31 0
#define arm_q15_to_q7 0
#endif

#define ARM_DSP_SOS_API(name_value) .sos_api = { .name = name_value, .version = 0x0001, .git_hash = SOS_GIT_HASH }

const arm_dsp_api_q7_t arm_dsp_api_q7 = {
	ARM_DSP_SOS_API("arm_dsp_q7"),
	.fir = arm_fir_q7,
	.fir_init = arm_fir_init_q7,
	.mult = arm_mult_q7,
	.add = arm_add_q7,
	.sub = arm_sub_q7,
	.scale = arm_scale_q7,
	.abs = arm_abs_q7,
	.dot_prod = arm_dot_prod_q7,
	.shift = arm_shift_q7,
	.offset = arm_offset_q7,
	.negate = arm_negate_q7,
	.copy = arm_copy_q7,
	.fill = arm_fill_q7,
	.conv_opt = arm_conv_opt_q7,
	.conv = arm_conv_q7,
	.conv_partial_opt = arm_conv_partial_opt_q7,
	.conv_partial = arm_conv_partial_q7,
	.correlate_opt = arm_correlate_opt_q7,
	.correlate = arm_correlate_q7,
	.fir_sparse = arm_fir_sparse_q7,
	.fir_sparse_init = arm_fir_sparse_init_q7,
	.power = arm_power_q7,
	.mean = arm_mean_q7,
	.min = arm_min_q7,
	.max = arm_max_q7
};


const arm_dsp_api_q15_t arm_dsp_api_q15 = {
	ARM_DSP_SOS_API("arm_dsp_q15"),
	.fir = arm_fir_q15,
	.fir_fast = arm_fir_fast_q15,
	.fir_init = arm_fir_init_q15,
	.biquad_cascade_df1 = arm_biquad_cascade_df1_q15,
	.biquad_cascade_df1_init = arm_biquad_cascade_df1_init_q15,
	.biquad_cascade_df1_fast = arm_biquad_cascade_df1_fast_q15,
	.mat_add = arm_mat_add_q15,
	.mat_cmplx_mult = arm_mat_cmplx_mult_q15,
	.mat_trans = arm_mat_trans_q15,
	.mat_mult = arm_mat_mult_q15,
	.mat_mult_fast = arm_mat_mult_fast_q15,
	.mat_sub = arm_mat_sub_q15,
	.mat_scale = arm_mat_scale_q15,
	.mat_init = arm_mat_init_q15,
	.pid_init = arm_pid_init_q15,
	.pid_reset = arm_pid_reset_q15,
	.mult = arm_mult_q15,
	.cfft = arm_cfft_q15,
	.rfft_init = arm_rfft_init_q15,
	.rfft = arm_rfft_q15,
	.dct4_init = arm_dct4_init_q15,
	.dct4 = arm_dct4_q15,
	.add = arm_add_q15,
	.sub = arm_sub_q15,
	.scale = arm_scale_q15,
	.abs = arm_abs_q15,
	.dot_prod = arm_dot_prod_q15,
	.shift = arm_shift_q15,
	.offset = arm_offset_q15,
	.negate = arm_negate_q15,
	.copy = arm_copy_q15,
	.fill = arm_fill_q15,
	.conv_opt = arm_conv_opt_q15,
	.conv = arm_conv_q15,
	.conv_fast = arm_conv_fast_q15,
	.conv_fast_opt = arm_conv_fast_opt_q15,
	.conv_partial_opt = arm_conv_partial_opt_q15,
	.conv_partial = arm_conv_partial_q15,
	.conv_partial_fast = arm_conv_partial_fast_q15,
	.conv_partial_fast_opt = arm_conv_partial_fast_opt_q15,
	.fir_decimate = arm_fir_decimate_q15,
	.fir_decimate_fast = arm_fir_decimate_fast_q15,
	.fir_decimate_init = arm_fir_decimate_init_q15,
	.fir_interpolate = arm_fir_interpolate_q15,
	.fir_interpolate_init = arm_fir_interpolate_init_q15,
	.fir_lattice_init = arm_fir_lattice_init_q15,
	.fir_lattice = arm_fir_lattice_q15,
	.iir_lattice = arm_iir_lattice_q15,
	.iir_lattice_init = arm_iir_lattice_init_q15,
	.lms_init = arm_lms_init_q15,
	.lms = arm_lms_q15,
	.lms_norm = arm_lms_norm_q15,
	.lms_norm_init = arm_lms_norm_init_q15,
	.correlate_opt = arm_correlate_opt_q15,
	.correlate = arm_correlate_q15,
	.correlate_fast = arm_correlate_fast_q15,
	.correlate_fast_opt = arm_correlate_fast_opt_q15,
	.fir_sparse = arm_fir_sparse_q15,
	.fir_sparse_init = arm_fir_sparse_init_q15,
	.cmplx_conj = arm_cmplx_conj_q15,
	.cmplx_mag_squared = arm_cmplx_mag_squared_q15,
	.sin = arm_sin_q15,
	.cos = arm_cos_q15,
	.sqrt = arm_sqrt_q15,
	.power = arm_power_q15,
	.mean = arm_mean_q15,
	.var = arm_var_q15,
	.rms = arm_rms_q15,
	.std = arm_std_q15,
	.cmplx_mag = arm_cmplx_mag_q15,
	.cmplx_dot_prod = arm_cmplx_dot_prod_q15,
	.cmplx_mult_real = arm_cmplx_mult_real_q15,
	.min = arm_min_q15,
	.max = arm_max_q15,
	.cmplx_mult_cmplx = arm_cmplx_mult_cmplx_q15,
};

const arm_dsp_api_q31_t arm_dsp_api_q31 = {
	ARM_DSP_SOS_API("arm_dsp_q31"),
	.fir = arm_fir_q31,
	.fir_fast = arm_fir_fast_q31,
	.fir_init = arm_fir_init_q31,
	.biquad_cascade_df1 = arm_biquad_cascade_df1_q31,
	.biquad_cascade_df1_fast = arm_biquad_cascade_df1_fast_q31,
	.biquad_cascade_df1_init = arm_biquad_cascade_df1_init_q31,
	.mat_add = arm_mat_add_q31,
	.mat_cmplx_mult = arm_mat_cmplx_mult_q31,
	.mat_trans = arm_mat_trans_q31,
	.mat_mult = arm_mat_mult_q31,
	.mat_mult_fast = arm_mat_mult_fast_q31,
	.mat_sub = arm_mat_sub_q31,
	.mat_scale = arm_mat_scale_q31,
	.mat_init = arm_mat_init_q31,
	.pid_init = arm_pid_init_q31,
	.pid_reset = arm_pid_reset_q31,
	.mult = arm_mult_q31,
	.cfft = arm_cfft_q31,
	.rfft_init = arm_rfft_init_q31,
	.rfft = arm_rfft_q31,
	.dct4_init = arm_dct4_init_q31,
	.dct4 = arm_dct4_q31,
	.add = arm_add_q31,
	.sub = arm_sub_q31,
	.scale = arm_scale_q31,
	.abs = arm_abs_q31,
	.dot_prod = arm_dot_prod_q31,
	.shift = arm_shift_q31,
	.offset = arm_offset_q31,
	.negate = arm_negate_q31,
	.copy = arm_copy_q31,
	.fill = arm_fill_q31,
	.conv = arm_conv_q31,
	.conv_fast = arm_conv_fast_q31,
	.conv_partial = arm_conv_partial_q31,
	.conv_partial_fast = arm_conv_partial_fast_q31,
	.fir_decimate = arm_fir_decimate_q31,
	.fir_decimate_fast = arm_fir_decimate_fast_q31,
	.fir_decimate_init = arm_fir_decimate_init_q31,
	.fir_interpolate = arm_fir_interpolate_q31,
	.fir_interpolate_init = arm_fir_interpolate_init_q31,
	.biquad_cas_df1_32x64 = arm_biquad_cas_df1_32x64_q31,
	.biquad_cas_df1_32x64_init = arm_biquad_cas_df1_32x64_init_q31,
	.fir_lattice_init = arm_fir_lattice_init_q31,
	.fir_lattice = arm_fir_lattice_q31,
	.iir_lattice = arm_iir_lattice_q31,
	.iir_lattice_init = arm_iir_lattice_init_q31,
	.lms = arm_lms_q31,
	.lms_init = arm_lms_init_q31,
	.lms_norm = arm_lms_norm_q31,
	.lms_norm_init = arm_lms_norm_init_q31,
	.correlate = arm_correlate_q31,
	.correlate_fast = arm_correlate_fast_q31,
	.fir_sparse = arm_fir_sparse_q31,
	.fir_sparse_init = arm_fir_sparse_init_q31,
	.sin_cos = arm_sin_cos_q31,
	.cmplx_conj = arm_cmplx_conj_q31,
	.cmplx_mag_squared = arm_cmplx_mag_squared_q31,
	.sin = arm_sin_q31,
	.cos = arm_cos_q31,
	.sqrt = arm_sqrt_q31,
	.power = arm_power_q31,
	.mean = arm_mean_q31,
	.var = arm_var_q31,
	.rms = arm_rms_q31,
	.std = arm_std_q31,
	.cmplx_mag = arm_cmplx_mag_q31,
	.cmplx_dot_prod = arm_cmplx_dot_prod_q31,
	.cmplx_mult_real = arm_cmplx_mult_real_q31,
	.min = arm_min_q31,
	.max = arm_max_q31,
	.cmplx_mult_cmplx = arm_cmplx_mult_cmplx_q31
};

const arm_dsp_api_f32_t arm_dsp_api_f32 = {
	ARM_DSP_SOS_API("arm_dsp_f32"),
	.fir = arm_fir_f32,
	.fir_init = arm_fir_init_f32,
	.biquad_cascade_df1 = arm_biquad_cascade_df1_f32,
	.biquad_cascade_df1_init = arm_biquad_cascade_df1_init_f32,
	.mat_add = arm_mat_add_f32,
	.mat_cmplx_mult = arm_mat_cmplx_mult_f32,
	.mat_trans = arm_mat_trans_f32,
	.mat_mult = arm_mat_mult_f32,
	.mat_sub = arm_mat_sub_f32,
	.mat_scale = arm_mat_scale_f32,
	.mat_init = arm_mat_init_f32,
	.pid_init = arm_pid_init_f32,
	.pid_reset = arm_pid_reset_f32,
	.mult = arm_mult_f32,
	.cfft = arm_cfft_f32,
	.rfft_fast_init = arm_rfft_fast_init_f32,
	.rfft_fast = arm_rfft_fast_f32,
	.dct4_init = arm_dct4_init_f32,
	.dct4 = arm_dct4_f32,
	.add = arm_add_f32,
	.sub = arm_sub_f32,
	.scale = arm_scale_f32,
	.abs = arm_abs_f32,
	.dot_prod = arm_dot_prod_f32,
	.offset = arm_offset_f32,
	.negate = arm_negate_f32,
	.copy = arm_copy_f32,
	.fill = arm_fill_f32,
	.conv = arm_conv_f32,
	.conv_partial = arm_conv_partial_f32,
	.fir_decimate = arm_fir_decimate_f32,
	.fir_decimate_init = arm_fir_decimate_init_f32,
	.fir_interpolate = arm_fir_interpolate_f32,
	.fir_interpolate_init = arm_fir_interpolate_init_f32,
	.biquad_cascade_df2T = arm_biquad_cascade_df2T_f32,
	.biquad_cascade_stereo_df2T = arm_biquad_cascade_stereo_df2T_f32,
	.biquad_cascade_df2T_init = arm_biquad_cascade_df2T_init_f32,
	.biquad_cascade_stereo_df2T_init = arm_biquad_cascade_stereo_df2T_init_f32,
	.fir_lattice_init = arm_fir_lattice_init_f32,
	.fir_lattice = arm_fir_lattice_f32,
	.iir_lattice = arm_iir_lattice_f32,
	.iir_lattice_init = arm_iir_lattice_init_f32,
	.lms = arm_lms_f32,
	.lms_init = arm_lms_init_f32,
	.lms_norm = arm_lms_norm_f32,
	.lms_norm_init = arm_lms_norm_init_f32,
	.correlate = arm_correlate_f32,
	.fir_sparse = arm_fir_sparse_f32,
	.fir_sparse_init = arm_fir_sparse_init_f32,
	.sin_cos = arm_sin_cos_f32,
	.cmplx_conj = arm_cmplx_conj_f32,
	.cmplx_mag_squared = arm_cmplx_mag_squared_f32,
	.mat_inverse = arm_mat_inverse_f32,
	.sin = arm_sin_f32,
	.cos = arm_cos_f32,
	.power = arm_power_f32,
	.mean = arm_mean_f32,
	.var = arm_var_f32,
	.rms = arm_rms_f32,
	.std = arm_std_f32,
	.cmplx_mag = arm_cmplx_mag_f32,
	.cmplx_dot_prod = arm_cmplx_dot_prod_f32,
	.cmplx_mult_real = arm_cmplx_mult_real_f32,
	.min = arm_min_f32,
	.max = arm_max_f32,
	.cmplx_mult_cmplx = arm_cmplx_mult_cmplx_f32,
};

const arm_dsp_api_f64_t arm_dsp_api_f64 = {
	ARM_DSP_SOS_API("arm_dsp_f64"),
	.biquad_cascade_df2T = arm_biquad_cascade_df2T_f64,
	.biquad_cascade_df2T_init = arm_biquad_cascade_df2T_init_f64,
	.mat_inverse = arm_mat_inverse_f64,
};

const arm_dsp_conversion_api_t arm_dsp_conversion_api = {
	ARM_DSP_SOS_API("arm_dsp_conversion"),
	.float_to_q31 = arm_float_to_q31,
	.float_to_q15 = arm_float_to_q15,
	.float_to_q7 = arm_float_to_q7,
	.q31_to_q15 = arm_q31_to_q15,
	.q31_to_q7 = arm_q31_to_q7,
	.q15_to_float = arm_q15_to_float,
	.q15_to_q31 = arm_q15_to_q31,
	.q15_to_q7 = arm_q15_to_q7,
};
