#ifndef ARM_DSP_API_H
#define ARM_DSP_API_H

#include <sos/api/sos_api.h>
#include <mcu/arch/cmsis/arm_math.h>

#define ARM_DSP_API_T 1

typedef struct {
	sos_api_t sos_api;
	void (*fir)(const arm_fir_instance_q7 * S, q7_t * pSrc, q7_t * pDst, uint32_t blockSize);
	void (*fir_init)(arm_fir_instance_q7 * S, uint16_t numTaps, q7_t * pCoeffs, q7_t * pState, uint32_t blockSize);
	void (*mult)(q7_t * pSrcA, q7_t * pSrcB, q7_t * pDst, uint32_t blockSize);
	void (*add)(q7_t * pSrcA, q7_t * pSrcB, q7_t * pDst, uint32_t blockSize);
	void (*sub)(q7_t * pSrcA, q7_t * pSrcB, q7_t * pDst, uint32_t blockSize);
	void (*scale)(q7_t * pSrc, q7_t scaleFract, int8_t shift, q7_t * pDst, uint32_t blockSize);
	void (*abs)(q7_t * pSrc, q7_t * pDst, uint32_t blockSize);
	void (*dot_prod)(q7_t * pSrcA, q7_t * pSrcB, uint32_t blockSize, q31_t * result);
	void (*shift)(q7_t * pSrc, int8_t shiftBits, q7_t * pDst, uint32_t blockSize);
	void (*offset)(q7_t * pSrc, q7_t offset, q7_t * pDst, uint32_t blockSize);
	void (*negate)(q7_t * pSrc, q7_t * pDst, uint32_t blockSize);
	void (*copy)(q7_t * pSrc, q7_t * pDst, uint32_t blockSize);
	void (*fill)(q7_t value, q7_t * pDst, uint32_t blockSize);
	void (*conv_opt)(q7_t * pSrcA, uint32_t srcALen, q7_t * pSrcB, uint32_t srcBLen, q7_t * pDst, q15_t * pScratch1, q15_t * pScratch2);
	void (*conv)(q7_t * pSrcA, uint32_t srcALen, q7_t * pSrcB, uint32_t srcBLen, q7_t * pDst);
	arm_status (*conv_partial_opt)(q7_t * pSrcA, uint32_t srcALen, q7_t * pSrcB, uint32_t srcBLen, q7_t * pDst, uint32_t firstIndex, uint32_t numPoints, q15_t * pScratch1, q15_t * pScratch2);
	arm_status (*conv_partial)(q7_t * pSrcA, uint32_t srcALen, q7_t * pSrcB, uint32_t srcBLen, q7_t * pDst, uint32_t firstIndex, uint32_t numPoints);
	void (*correlate_opt)(q7_t * pSrcA, uint32_t srcALen, q7_t * pSrcB, uint32_t srcBLen, q7_t * pDst, q15_t * pScratch1, q15_t * pScratch2);
	void (*correlate)(q7_t * pSrcA, uint32_t srcALen, q7_t * pSrcB, uint32_t srcBLen, q7_t * pDst);
	void (*fir_sparse)(arm_fir_sparse_instance_q7 * S, q7_t * pSrc, q7_t * pDst, q7_t * pScratchIn, q31_t * pScratchOut, uint32_t blockSize);
	void (*fir_sparse_init)(arm_fir_sparse_instance_q7 * S, uint16_t numTaps, q7_t * pCoeffs, q7_t * pState, int32_t * pTapDelay, uint16_t maxDelay, uint32_t blockSize);
	void (*power)(q7_t * pSrc, uint32_t blockSize, q31_t * pResult);
	void (*mean)(q7_t * pSrc, uint32_t blockSize, q7_t * pResult);
	void (*min)(q7_t * pSrc, uint32_t blockSize, q7_t * result, uint32_t * index);
	void (*max)(q7_t * pSrc, uint32_t blockSize, q7_t * pResult, uint32_t * pIndex);
} arm_dsp_api_q7_t;


typedef struct {
	sos_api_t sos_api;
	void (*fir)(const arm_fir_instance_q15 * S, q15_t * pSrc, q15_t * pDst, uint32_t blockSize);
	void (*fir_fast)(const arm_fir_instance_q15 * S, q15_t * pSrc, q15_t * pDst, uint32_t blockSize);
	arm_status (*fir_init)(arm_fir_instance_q15 * S, uint16_t numTaps, q15_t * pCoeffs, q15_t * pState, uint32_t blockSize);
	void (*biquad_cascade_df1)(const arm_biquad_casd_df1_inst_q15 * S, q15_t * pSrc, q15_t * pDst, uint32_t blockSize);
	void (*biquad_cascade_df1_init)(arm_biquad_casd_df1_inst_q15 * S, uint8_t numStages, q15_t * pCoeffs, q15_t * pState, int8_t postShift);
	void (*biquad_cascade_df1_fast)(const arm_biquad_casd_df1_inst_q15 * S, q15_t * pSrc, q15_t * pDst, uint32_t blockSize);
	arm_status (*mat_add)(const arm_matrix_instance_q15 * pSrcA, const arm_matrix_instance_q15 * pSrcB, arm_matrix_instance_q15 * pDst);
	arm_status (*mat_cmplx_mult)(const arm_matrix_instance_q15 * pSrcA, const arm_matrix_instance_q15 * pSrcB, arm_matrix_instance_q15 * pDst, q15_t * pScratch);
	arm_status (*mat_trans)(const arm_matrix_instance_q15 * pSrc, arm_matrix_instance_q15 * pDst);
	arm_status (*mat_mult)(const arm_matrix_instance_q15 * pSrcA, const arm_matrix_instance_q15 * pSrcB, arm_matrix_instance_q15 * pDst, q15_t * pState);
	arm_status (*mat_mult_fast)(const arm_matrix_instance_q15 * pSrcA, const arm_matrix_instance_q15 * pSrcB, arm_matrix_instance_q15 * pDst, q15_t * pState);
	arm_status (*mat_sub)(const arm_matrix_instance_q15 * pSrcA, const arm_matrix_instance_q15 * pSrcB, arm_matrix_instance_q15 * pDst);
	arm_status (*mat_scale)(const arm_matrix_instance_q15 * pSrc, q15_t scaleFract, int32_t shift, arm_matrix_instance_q15 * pDst);
	void (*mat_init)(arm_matrix_instance_q15 * S, uint16_t nRows, uint16_t nColumns, q15_t * pData);
	void (*pid_init)(arm_pid_instance_q15 * S, int32_t resetStateFlag);
	void (*pid_reset)(arm_pid_instance_q15 * S);
	void (*mult)(q15_t * pSrcA, q15_t * pSrcB, q15_t * pDst, uint32_t blockSize);
	void (*cfft)(const arm_cfft_instance_q15 * S, q15_t * p1, uint8_t ifftFlag, uint8_t bitReverseFlag);
	arm_status (*rfft_init)(arm_rfft_instance_q15 * S, uint32_t fftLenReal, uint32_t ifftFlagR, uint32_t bitReverseFlag);
	void (*rfft)(const arm_rfft_instance_q15 * S, q15_t * pSrc, q15_t * pDst);
	arm_status (*dct4_init)(arm_dct4_instance_q15 * S, arm_rfft_instance_q15 * S_RFFT, arm_cfft_radix4_instance_q15 * S_CFFT, uint16_t N, uint16_t Nby2, q15_t normalize);
	void (*dct4)(const arm_dct4_instance_q15 * S, q15_t * pState, q15_t * pInlineBuffer);
	void (*add)(q15_t * pSrcA, q15_t * pSrcB, q15_t * pDst, uint32_t blockSize);
	void (*sub)(q15_t * pSrcA, q15_t * pSrcB, q15_t * pDst, uint32_t blockSize);
	void (*scale)(q15_t * pSrc, q15_t scaleFract, int8_t shift, q15_t * pDst, uint32_t blockSize);
	void (*abs)(q15_t * pSrc, q15_t * pDst, uint32_t blockSize);
	void (*dot_prod)(q15_t * pSrcA, q15_t * pSrcB, uint32_t blockSize, q63_t * result);
	void (*shift)(q15_t * pSrc, int8_t shiftBits, q15_t * pDst, uint32_t blockSize);
	void (*offset)(q15_t * pSrc, q15_t offset, q15_t * pDst, uint32_t blockSize);
	void (*negate)(q15_t * pSrc, q15_t * pDst, uint32_t blockSize);
	void (*copy)(q15_t * pSrc, q15_t * pDst, uint32_t blockSize);
	void (*fill)(q15_t value, q15_t * pDst, uint32_t blockSize);
	void (*conv_opt)(q15_t * pSrcA, uint32_t srcALen, q15_t * pSrcB, uint32_t srcBLen, q15_t * pDst, q15_t * pScratch1, q15_t * pScratch2);
	void (*conv)(q15_t * pSrcA, uint32_t srcALen, q15_t * pSrcB, uint32_t srcBLen, q15_t * pDst);
	void (*conv_fast)(q15_t * pSrcA, uint32_t srcALen, q15_t * pSrcB,         uint32_t srcBLen,         q15_t * pDst);
	void (*conv_fast_opt)(q15_t * pSrcA, uint32_t srcALen, q15_t * pSrcB, uint32_t srcBLen, q15_t * pDst, q15_t * pScratch1, q15_t * pScratch2);
	arm_status (*conv_partial_opt)(q15_t * pSrcA, uint32_t srcALen, q15_t * pSrcB, uint32_t srcBLen, q15_t * pDst, uint32_t firstIndex, uint32_t numPoints, q15_t * pScratch1, q15_t * pScratch2);
	arm_status (*conv_partial)(q15_t * pSrcA, uint32_t srcALen, q15_t * pSrcB, uint32_t srcBLen, q15_t * pDst, uint32_t firstIndex, uint32_t numPoints);
	arm_status (*conv_partial_fast)(q15_t * pSrcA, uint32_t srcALen, q15_t * pSrcB, uint32_t srcBLen, q15_t * pDst, uint32_t firstIndex, uint32_t numPoints);
	arm_status (*conv_partial_fast_opt)(q15_t * pSrcA, uint32_t srcALen, q15_t * pSrcB, uint32_t srcBLen, q15_t * pDst, uint32_t firstIndex, uint32_t numPoints, q15_t * pScratch1, q15_t * pScratch2);
	void (*fir_decimate)(const arm_fir_decimate_instance_q15 * S, q15_t * pSrc, q15_t * pDst, uint32_t blockSize);
	void (*fir_decimate_fast)(const arm_fir_decimate_instance_q15 * S, q15_t * pSrc, q15_t * pDst, uint32_t blockSize);
	arm_status (*fir_decimate_init)(arm_fir_decimate_instance_q15 * S, uint16_t numTaps, uint8_t M, q15_t * pCoeffs, q15_t * pState, uint32_t blockSize);
	void (*fir_interpolate)(const arm_fir_interpolate_instance_q15 * S, q15_t * pSrc, q15_t * pDst, uint32_t blockSize);
	arm_status (*fir_interpolate_init)(arm_fir_interpolate_instance_q15 * S, uint8_t L, uint16_t numTaps, q15_t * pCoeffs, q15_t * pState, uint32_t blockSize);
	void (*fir_lattice_init)(arm_fir_lattice_instance_q15 * S, uint16_t numStages, q15_t * pCoeffs, q15_t * pState);
	void (*fir_lattice)(const arm_fir_lattice_instance_q15 * S, q15_t * pSrc, q15_t * pDst, uint32_t blockSize);
	void (*iir_lattice)(const arm_iir_lattice_instance_q15 * S, q15_t * pSrc, q15_t * pDst, uint32_t blockSize);
	void (*iir_lattice_init)(arm_iir_lattice_instance_q15 * S, uint16_t numStages, q15_t * pkCoeffs, q15_t * pvCoeffs, q15_t * pState, uint32_t blockSize);
	void (*lms_init)(arm_lms_instance_q15 * S, uint16_t numTaps, q15_t * pCoeffs, q15_t * pState, q15_t mu, uint32_t blockSize, uint32_t postShift);
	void (*lms)(const arm_lms_instance_q15 * S, q15_t * pSrc, q15_t * pRef, q15_t * pOut, q15_t * pErr, uint32_t blockSize);
	void (*lms_norm)(arm_lms_norm_instance_q15 * S, q15_t * pSrc, q15_t * pRef, q15_t * pOut, q15_t * pErr, uint32_t blockSize);
	void (*lms_norm_init)(arm_lms_norm_instance_q15 * S, uint16_t numTaps, q15_t * pCoeffs, q15_t * pState, q15_t mu, uint32_t blockSize, uint8_t postShift);
	void (*correlate_opt)(q15_t * pSrcA, uint32_t srcALen, q15_t * pSrcB, uint32_t srcBLen, q15_t * pDst, q15_t * pScratch);
	void (*correlate)(q15_t * pSrcA, uint32_t srcALen, q15_t * pSrcB, uint32_t srcBLen, q15_t * pDst);
	void (*correlate_fast)(q15_t * pSrcA, uint32_t srcALen, q15_t * pSrcB, uint32_t srcBLen, q15_t * pDst);
	void (*correlate_fast_opt)(q15_t * pSrcA, uint32_t srcALen, q15_t * pSrcB, uint32_t srcBLen, q15_t * pDst, q15_t * pScratch);
	void (*fir_sparse)(arm_fir_sparse_instance_q15 * S, q15_t * pSrc, q15_t * pDst, q15_t * pScratchIn, q31_t * pScratchOut, uint32_t blockSize);
	void (*fir_sparse_init)(arm_fir_sparse_instance_q15 * S, uint16_t numTaps, q15_t * pCoeffs, q15_t * pState, int32_t * pTapDelay, uint16_t maxDelay, uint32_t blockSize);
	void (*cmplx_conj)(q15_t * pSrc, q15_t * pDst, uint32_t numSamples);
	void (*cmplx_mag_squared)(q15_t * pSrc, q15_t * pDst, uint32_t numSamples);
	q15_t (*sin)(q15_t x);
	q15_t (*cos)(q15_t x);
	arm_status (*sqrt)(q15_t in, q15_t * pOut);
	void (*power)(q15_t * pSrc, uint32_t blockSize, q63_t * pResult);
	void (*mean)(q15_t * pSrc, uint32_t blockSize, q15_t * pResult);
	void (*var)(q15_t * pSrc, uint32_t blockSize, q15_t * pResult);
	void (*rms)(q15_t * pSrc, uint32_t blockSize, q15_t * pResult);
	void (*std)(q15_t * pSrc, uint32_t blockSize, q15_t * pResult);
	void (*cmplx_mag)(q15_t * pSrc, q15_t * pDst, uint32_t numSamples);
	void (*cmplx_dot_prod)(q15_t * pSrcA, q15_t * pSrcB, uint32_t numSamples, q31_t * realResult, q31_t * imagResult);
	void (*cmplx_mult_real)(q15_t * pSrcCmplx, q15_t * pSrcReal, q15_t * pCmplxDst, uint32_t numSamples);
	void (*min)(q15_t * pSrc, uint32_t blockSize, q15_t * pResult, uint32_t * pIndex);
	void (*max)(q15_t * pSrc, uint32_t blockSize, q15_t * pResult, uint32_t * pIndex);
	void (*cmplx_mult_cmplx)(q15_t * pSrcA, q15_t * pSrcB, q15_t * pDst, uint32_t numSamples);
} arm_dsp_api_q15_t;

typedef struct {
	sos_api_t sos_api;
	void (*fir)(const arm_fir_instance_q31 * S, q31_t * pSrc, q31_t * pDst, uint32_t blockSize);
	void (*fir_fast)(const arm_fir_instance_q31 * S, q31_t * pSrc, q31_t * pDst, uint32_t blockSize);
	void (*fir_init)(arm_fir_instance_q31 * S, uint16_t numTaps, q31_t * pCoeffs, q31_t * pState, uint32_t blockSize);
	void (*biquad_cascade_df1)(const arm_biquad_casd_df1_inst_q31 * S, q31_t * pSrc, q31_t * pDst, uint32_t blockSize);
	void (*biquad_cascade_df1_fast)(const arm_biquad_casd_df1_inst_q31 * S, q31_t * pSrc, q31_t * pDst, uint32_t blockSize);
	void (*biquad_cascade_df1_init)(arm_biquad_casd_df1_inst_q31 * S, uint8_t numStages, q31_t * pCoeffs, q31_t * pState, int8_t postShift);
	arm_status (*mat_add)(const arm_matrix_instance_q31 * pSrcA, const arm_matrix_instance_q31 * pSrcB, arm_matrix_instance_q31 * pDst);
	arm_status (*mat_cmplx_mult)(const arm_matrix_instance_q31 * pSrcA, const arm_matrix_instance_q31 * pSrcB, arm_matrix_instance_q31 * pDst);
	arm_status (*mat_trans)(const arm_matrix_instance_q31 * pSrc, arm_matrix_instance_q31 * pDst);
	arm_status (*mat_mult)(const arm_matrix_instance_q31 * pSrcA, const arm_matrix_instance_q31 * pSrcB, arm_matrix_instance_q31 * pDst);
	arm_status (*mat_mult_fast)(const arm_matrix_instance_q31 * pSrcA, const arm_matrix_instance_q31 * pSrcB, arm_matrix_instance_q31 * pDst);
	arm_status (*mat_sub)(const arm_matrix_instance_q31 * pSrcA, const arm_matrix_instance_q31 * pSrcB, arm_matrix_instance_q31 * pDst);
	arm_status (*mat_scale)(const arm_matrix_instance_q31 * pSrc, q31_t scaleFract, int32_t shift, arm_matrix_instance_q31 * pDst);
	void (*mat_init)(arm_matrix_instance_q31 * S, uint16_t nRows, uint16_t nColumns, q31_t * pData);
	void (*pid_init)(arm_pid_instance_q31 * S, int32_t resetStateFlag);
	void (*pid_reset)(arm_pid_instance_q31 * S);
	void (*mult)(q31_t * pSrcA, q31_t * pSrcB, q31_t * pDst, uint32_t blockSize);
	const arm_cfft_instance_q31 * (*cfft_instance)(uint32_t len);
	void (*cfft)(const arm_cfft_instance_q31 * S, q31_t * p1, uint8_t ifftFlag, uint8_t bitReverseFlag);
	arm_status (*rfft_init)(arm_rfft_instance_q31 * S, uint32_t fftLenReal, uint32_t ifftFlagR, uint32_t bitReverseFlag);
	void (*rfft)(const arm_rfft_instance_q31 * S, q31_t * pSrc, q31_t * pDst);
	arm_status (*dct4_init)(arm_dct4_instance_q31 * S, arm_rfft_instance_q31 * S_RFFT, arm_cfft_radix4_instance_q31 * S_CFFT, uint16_t N, uint16_t Nby2, q31_t normalize);
	void (*dct4)(const arm_dct4_instance_q31 * S, q31_t * pState, q31_t * pInlineBuffer);
	void (*add)(q31_t * pSrcA, q31_t * pSrcB, q31_t * pDst, uint32_t blockSize);
	void (*sub)(q31_t * pSrcA, q31_t * pSrcB, q31_t * pDst, uint32_t blockSize);
	void (*scale)(q31_t * pSrc, q31_t scaleFract, int8_t shift, q31_t * pDst, uint32_t blockSize);
	void (*abs)(q31_t * pSrc, q31_t * pDst, uint32_t blockSize);
	void (*dot_prod)(q31_t * pSrcA, q31_t * pSrcB, uint32_t blockSize, q63_t * result);
	void (*shift)(q31_t * pSrc, int8_t shiftBits, q31_t * pDst, uint32_t blockSize);
	void (*offset)(q31_t * pSrc, q31_t offset, q31_t * pDst, uint32_t blockSize);
	void (*negate)(q31_t * pSrc, q31_t * pDst, uint32_t blockSize);
	void (*copy)(q31_t * pSrc, q31_t * pDst, uint32_t blockSize);
	void (*fill)(q31_t value, q31_t * pDst, uint32_t blockSize);
	void (*conv)(q31_t * pSrcA, uint32_t srcALen, q31_t * pSrcB, uint32_t srcBLen, q31_t * pDst);
	void (*conv_fast)(q31_t * pSrcA, uint32_t srcALen, q31_t * pSrcB, uint32_t srcBLen, q31_t * pDst);
	arm_status (*conv_partial)(q31_t * pSrcA, uint32_t srcALen, q31_t * pSrcB, uint32_t srcBLen, q31_t * pDst, uint32_t firstIndex, uint32_t numPoints);
	arm_status (*conv_partial_fast)(q31_t * pSrcA, uint32_t srcALen, q31_t * pSrcB, uint32_t srcBLen, q31_t * pDst, uint32_t firstIndex, uint32_t numPoints);
	void (*fir_decimate)(const arm_fir_decimate_instance_q31 * S, q31_t * pSrc, q31_t * pDst, uint32_t blockSize);
	void (*fir_decimate_fast)(arm_fir_decimate_instance_q31 * S, q31_t * pSrc, q31_t * pDst, uint32_t blockSize);
	arm_status (*fir_decimate_init)(arm_fir_decimate_instance_q31 * S, uint16_t numTaps, uint8_t M, q31_t * pCoeffs, q31_t * pState, uint32_t blockSize);
	void (*fir_interpolate)(const arm_fir_interpolate_instance_q31 * S, q31_t * pSrc, q31_t * pDst, uint32_t blockSize);
	arm_status (*fir_interpolate_init)(arm_fir_interpolate_instance_q31 * S, uint8_t L, uint16_t numTaps, q31_t * pCoeffs, q31_t * pState, uint32_t blockSize);
	void (*biquad_cas_df1_32x64)(const arm_biquad_cas_df1_32x64_ins_q31 * S, q31_t * pSrc, q31_t * pDst, uint32_t blockSize);
	void (*biquad_cas_df1_32x64_init)(arm_biquad_cas_df1_32x64_ins_q31 * S, uint8_t numStages, q31_t * pCoeffs, q63_t * pState, uint8_t postShift);
	void (*fir_lattice_init)(arm_fir_lattice_instance_q31 * S, uint16_t numStages, q31_t * pCoeffs, q31_t * pState);
	void (*fir_lattice)(const arm_fir_lattice_instance_q31 * S, q31_t * pSrc, q31_t * pDst, uint32_t blockSize);
	void (*iir_lattice)(const arm_iir_lattice_instance_q31 * S, q31_t * pSrc, q31_t * pDst, uint32_t blockSize);
	void (*iir_lattice_init)(arm_iir_lattice_instance_q31 * S, uint16_t numStages, q31_t * pkCoeffs, q31_t * pvCoeffs, q31_t * pState, uint32_t blockSize);
	void (*lms)(const arm_lms_instance_q31 * S, q31_t * pSrc, q31_t * pRef, q31_t * pOut, q31_t * pErr, uint32_t blockSize);
	void (*lms_init)(arm_lms_instance_q31 * S, uint16_t numTaps, q31_t * pCoeffs, q31_t * pState, q31_t mu, uint32_t blockSize, uint32_t postShift);
	void (*lms_norm)(arm_lms_norm_instance_q31 * S, q31_t * pSrc, q31_t * pRef, q31_t * pOut, q31_t * pErr, uint32_t blockSize);
	void (*lms_norm_init)(arm_lms_norm_instance_q31 * S, uint16_t numTaps, q31_t * pCoeffs, q31_t * pState, q31_t mu, uint32_t blockSize, uint8_t postShift);
	void (*correlate)(q31_t * pSrcA, uint32_t srcALen, q31_t * pSrcB, uint32_t srcBLen, q31_t * pDst);
	void (*correlate_fast)(q31_t * pSrcA, uint32_t srcALen, q31_t * pSrcB, uint32_t srcBLen, q31_t * pDst);
	void (*fir_sparse)(arm_fir_sparse_instance_q31 * S, q31_t * pSrc, q31_t * pDst, q31_t * pScratchIn, uint32_t blockSize);
	void (*fir_sparse_init)(arm_fir_sparse_instance_q31 * S, uint16_t numTaps, q31_t * pCoeffs, q31_t * pState, int32_t * pTapDelay, uint16_t maxDelay, uint32_t blockSize);
	void (*sin_cos)(q31_t theta, q31_t * pSinVal, q31_t * pCosVal);
	void (*cmplx_conj)(q31_t * pSrc, q31_t * pDst, uint32_t numSamples);
	void (*cmplx_mag_squared)(q31_t * pSrc, q31_t * pDst, uint32_t numSamples);
	q31_t (*sin)(q31_t x);
	q31_t (*cos)(q31_t x);
	arm_status (*sqrt)(q31_t in, q31_t * pOut);
	void (*power)(q31_t * pSrc, uint32_t blockSize, q63_t * pResult);
	void (*mean)(q31_t * pSrc, uint32_t blockSize, q31_t * pResult);
	void (*var)(q31_t * pSrc, uint32_t blockSize, q31_t * pResult);
	void (*rms)(q31_t * pSrc, uint32_t blockSize, q31_t * pResult);
	void (*std)(q31_t * pSrc, uint32_t blockSize, q31_t * pResult);
	void (*cmplx_mag)(q31_t * pSrc, q31_t * pDst, uint32_t numSamples);
	void (*cmplx_dot_prod)(q31_t * pSrcA, q31_t * pSrcB, uint32_t numSamples, q63_t * realResult, q63_t * imagResult);
	void (*cmplx_mult_real)(q31_t * pSrcCmplx, q31_t * pSrcReal, q31_t * pCmplxDst, uint32_t numSamples);
	void (*min)(q31_t * pSrc, uint32_t blockSize, q31_t * pResult, uint32_t * pIndex);
	void (*max)(q31_t * pSrc, uint32_t blockSize, q31_t * pResult, uint32_t * pIndex);
	void (*cmplx_mult_cmplx)(q31_t * pSrcA, q31_t * pSrcB, q31_t * pDst, uint32_t numSamples);
} arm_dsp_api_q31_t;

typedef struct {
	sos_api_t sos_api;
	void (*fir)(const arm_fir_instance_f32 * S, float32_t * pSrc, float32_t * pDst, uint32_t blockSize);
	void (*fir_init)(arm_fir_instance_f32 * S, uint16_t numTaps, float32_t * pCoeffs, float32_t * pState, uint32_t blockSize);
	void (*biquad_cascade_df1)(const arm_biquad_casd_df1_inst_f32 * S, float32_t * pSrc, float32_t * pDst, uint32_t blockSize);
	void (*biquad_cascade_df1_init)(arm_biquad_casd_df1_inst_f32 * S, uint8_t numStages, float32_t * pCoeffs, float32_t * pState);
	arm_status (*mat_add)(const arm_matrix_instance_f32 * pSrcA, const arm_matrix_instance_f32 * pSrcB, arm_matrix_instance_f32 * pDst);
	arm_status (*mat_cmplx_mult)(const arm_matrix_instance_f32 * pSrcA, const arm_matrix_instance_f32 * pSrcB, arm_matrix_instance_f32 * pDst);
	arm_status (*mat_trans)(const arm_matrix_instance_f32 * pSrc, arm_matrix_instance_f32 * pDst);
	arm_status (*mat_mult)(const arm_matrix_instance_f32 * pSrcA, const arm_matrix_instance_f32 * pSrcB, arm_matrix_instance_f32 * pDst);
	arm_status (*mat_sub)(const arm_matrix_instance_f32 * pSrcA, const arm_matrix_instance_f32 * pSrcB, arm_matrix_instance_f32 * pDst);
	arm_status (*mat_scale)(const arm_matrix_instance_f32 * pSrc, float32_t scale, arm_matrix_instance_f32 * pDst);
	void (*mat_init)(arm_matrix_instance_f32 * S, uint16_t nRows, uint16_t nColumns, float32_t * pData);
	void (*pid_init)(arm_pid_instance_f32 * S, int32_t resetStateFlag);
	void (*pid_reset)(arm_pid_instance_f32 * S);
	void (*mult)(float32_t * pSrcA, float32_t * pSrcB, float32_t * pDst, uint32_t blockSize);
	void (*cfft)(const arm_cfft_instance_f32 * S, float32_t * p1, uint8_t ifftFlag, uint8_t bitReverseFlag);
	arm_status (*rfft_fast_init)(arm_rfft_fast_instance_f32 * S,    uint16_t fftLen);
	void (*rfft_fast)(arm_rfft_fast_instance_f32 * S,   float32_t * p, float32_t * pOut,   uint8_t ifftFlag);
	arm_status (*dct4_init)(arm_dct4_instance_f32 * S, arm_rfft_instance_f32 * S_RFFT, arm_cfft_radix4_instance_f32 * S_CFFT, uint16_t N, uint16_t Nby2, float32_t normalize);
	void (*dct4)(const arm_dct4_instance_f32 * S, float32_t * pState, float32_t * pInlineBuffer);
	void (*add)(float32_t * pSrcA, float32_t * pSrcB, float32_t * pDst, uint32_t blockSize);
	void (*sub)(float32_t * pSrcA, float32_t * pSrcB, float32_t * pDst, uint32_t blockSize);
	void (*scale)(float32_t * pSrc, float32_t scale, float32_t * pDst, uint32_t blockSize);
	void (*abs)(float32_t * pSrc, float32_t * pDst, uint32_t blockSize);
	void (*dot_prod)(float32_t * pSrcA, float32_t * pSrcB, uint32_t blockSize, float32_t * result);
	void (*offset)(float32_t * pSrc, float32_t offset, float32_t * pDst, uint32_t blockSize);
	void (*negate)(float32_t * pSrc, float32_t * pDst, uint32_t blockSize);
	void (*copy)(float32_t * pSrc, float32_t * pDst, uint32_t blockSize);
	void (*fill)(float32_t value, float32_t * pDst, uint32_t blockSize);
	void (*conv)(float32_t * pSrcA, uint32_t srcALen, float32_t * pSrcB, uint32_t srcBLen, float32_t * pDst);
	arm_status (*conv_partial)(float32_t * pSrcA, uint32_t srcALen, float32_t * pSrcB, uint32_t srcBLen, float32_t * pDst, uint32_t firstIndex, uint32_t numPoints);
	void (*fir_decimate)(const arm_fir_decimate_instance_f32 * S, float32_t * pSrc, float32_t * pDst, uint32_t blockSize);
	arm_status (*fir_decimate_init)(arm_fir_decimate_instance_f32 * S, uint16_t numTaps, uint8_t M, float32_t * pCoeffs, float32_t * pState, uint32_t blockSize);
	void (*fir_interpolate)(const arm_fir_interpolate_instance_f32 * S, float32_t * pSrc, float32_t * pDst, uint32_t blockSize);
	arm_status (*fir_interpolate_init)(arm_fir_interpolate_instance_f32 * S, uint8_t L, uint16_t numTaps, float32_t * pCoeffs, float32_t * pState, uint32_t blockSize);
	void (*biquad_cascade_df2T)(const arm_biquad_cascade_df2T_instance_f32 * S, float32_t * pSrc, float32_t * pDst, uint32_t blockSize);
	void (*biquad_cascade_stereo_df2T)(const arm_biquad_cascade_stereo_df2T_instance_f32 * S, float32_t * pSrc, float32_t * pDst, uint32_t blockSize);
	void (*biquad_cascade_df2T_init)(arm_biquad_cascade_df2T_instance_f32 * S, uint8_t numStages, float32_t * pCoeffs, float32_t * pState);
	void (*biquad_cascade_stereo_df2T_init)(arm_biquad_cascade_stereo_df2T_instance_f32 * S, uint8_t numStages, float32_t * pCoeffs, float32_t * pState);
	void (*fir_lattice_init)(arm_fir_lattice_instance_f32 * S, uint16_t numStages, float32_t * pCoeffs, float32_t * pState);
	void (*fir_lattice)(const arm_fir_lattice_instance_f32 * S, float32_t * pSrc, float32_t * pDst, uint32_t blockSize);
	void (*iir_lattice)(const arm_iir_lattice_instance_f32 * S, float32_t * pSrc, float32_t * pDst, uint32_t blockSize);
	void (*iir_lattice_init)(arm_iir_lattice_instance_f32 * S, uint16_t numStages, float32_t * pkCoeffs, float32_t * pvCoeffs, float32_t * pState, uint32_t blockSize);
	void (*lms)(const arm_lms_instance_f32 * S, float32_t * pSrc, float32_t * pRef, float32_t * pOut, float32_t * pErr, uint32_t blockSize);
	void (*lms_init)(arm_lms_instance_f32 * S, uint16_t numTaps, float32_t * pCoeffs, float32_t * pState, float32_t mu, uint32_t blockSize);
	void (*lms_norm)(arm_lms_norm_instance_f32 * S, float32_t * pSrc, float32_t * pRef, float32_t * pOut, float32_t * pErr, uint32_t blockSize);
	void (*lms_norm_init)(arm_lms_norm_instance_f32 * S, uint16_t numTaps, float32_t * pCoeffs, float32_t * pState, float32_t mu, uint32_t blockSize);
	void (*correlate)(float32_t * pSrcA, uint32_t srcALen, float32_t * pSrcB, uint32_t srcBLen, float32_t * pDst);
	void (*fir_sparse)(arm_fir_sparse_instance_f32 * S, float32_t * pSrc, float32_t * pDst, float32_t * pScratchIn, uint32_t blockSize);
	void (*fir_sparse_init)(arm_fir_sparse_instance_f32 * S, uint16_t numTaps, float32_t * pCoeffs, float32_t * pState, int32_t * pTapDelay, uint16_t maxDelay, uint32_t blockSize);
	void (*sin_cos)(float32_t theta, float32_t * pSinVal, float32_t * pCosVal);
	void (*cmplx_conj)(float32_t * pSrc, float32_t * pDst, uint32_t numSamples);
	void (*cmplx_mag_squared)(float32_t * pSrc, float32_t * pDst, uint32_t numSamples);
	arm_status (*mat_inverse)(const arm_matrix_instance_f32 * src, arm_matrix_instance_f32 * dst);
	float32_t (*sin)(float32_t x);
	float32_t (*cos)(float32_t x);
	void (*power)(float32_t * pSrc, uint32_t blockSize, float32_t * pResult);
	void (*mean)(float32_t * pSrc, uint32_t blockSize, float32_t * pResult);
	void (*var)(float32_t * pSrc, uint32_t blockSize, float32_t * pResult);
	void (*rms)(float32_t * pSrc, uint32_t blockSize, float32_t * pResult);
	void (*std)(float32_t * pSrc, uint32_t blockSize, float32_t * pResult);
	void (*cmplx_mag)(float32_t * pSrc, float32_t * pDst, uint32_t numSamples);
	void (*cmplx_dot_prod)(float32_t * pSrcA, float32_t * pSrcB, uint32_t numSamples, float32_t * realResult, float32_t * imagResult);
	void (*cmplx_mult_real)(float32_t * pSrcCmplx, float32_t * pSrcReal, float32_t * pCmplxDst, uint32_t numSamples);
	void (*min)(float32_t * pSrc, uint32_t blockSize, float32_t * pResult, uint32_t * pIndex);
	void (*max)(float32_t * pSrc, uint32_t blockSize, float32_t * pResult, uint32_t * pIndex);
	void (*cmplx_mult_cmplx)(float32_t * pSrcA, float32_t * pSrcB, float32_t * pDst, uint32_t numSamples);
} arm_dsp_api_f32_t;

typedef struct {
	sos_api_t sos_api;
	void (*biquad_cascade_df2T)(const arm_biquad_cascade_df2T_instance_f64 * S, float64_t * pSrc, float64_t * pDst, uint32_t blockSize);
	void (*biquad_cascade_df2T_init)(arm_biquad_cascade_df2T_instance_f64 * S, uint8_t numStages, float64_t * pCoeffs, float64_t * pState);
	arm_status (*mat_inverse)(const arm_matrix_instance_f64 * src, arm_matrix_instance_f64 * dst);
} arm_dsp_api_f64_t;

typedef struct {
	sos_api_t sos_api;
	void (*float_to_q31)(float32_t * pSrc, q31_t * pDst, uint32_t blockSize);
	void (*float_to_q15)(float32_t * pSrc, q15_t * pDst, uint32_t blockSize);
	void (*float_to_q7)(float32_t * pSrc, q7_t * pDst, uint32_t blockSize);
	void (*q31_to_q15)(q31_t * pSrc, q15_t * pDst, uint32_t blockSize);
	void (*q31_to_q7)(q31_t * pSrc, q7_t * pDst, uint32_t blockSize);
	void (*q15_to_float)(q15_t * pSrc, float32_t * pDst, uint32_t blockSize);
	void (*q15_to_q31)(q15_t * pSrc, q31_t * pDst, uint32_t blockSize);
	void (*q15_to_q7)(q15_t * pSrc, q7_t * pDst, uint32_t blockSize);
} arm_dsp_conversion_api_t;

enum {
	ARM_DSP_Q7_API_REQUEST = MCU_API_REQUEST_CODE('d','s','p','0'),
	ARM_DSP_Q15_API_REQUEST = MCU_API_REQUEST_CODE('d','s','p','1'),
	ARM_DSP_Q31_API_REQUEST = MCU_API_REQUEST_CODE('d','s','p','2'),
	ARM_DSP_F32_API_REQUEST = MCU_API_REQUEST_CODE('d','s','p','3'),
	ARM_DSP_CONVERSION_API_REQUEST = MCU_API_REQUEST_CODE('d','s','p','4'),
};

#endif // ARM_DSP_API_H
