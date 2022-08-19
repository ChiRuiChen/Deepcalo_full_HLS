#ifndef DEFINES_H_
#define DEFINES_H_

#include "ap_int.h"
#include "ap_fixed.h"
#include "nnet_utils/nnet_types.h"
#include <cstddef>
#include <cstdio>

//hls-fpga-machine-learning insert numbers
#define N_INPUT_1_1 57
#define N_INPUT_2_1 6
#define N_OUTPUTS_117 57
#define N_FILT_117 128
#define N_OUTPUTS_2 57
#define N_FILT_2 128
#define N_OUTPUTS_1_5 57
#define N_OUTPUTS_2_5 1
#define N_OUTPUTS_118 57
#define N_FILT_118 128
#define N_OUTPUTS_119 57
#define N_FILT_119 128
#define N_OUTPUTS_6 57
#define N_FILT_6 128
#define N_OUTPUTS_8 57
#define N_FILT_8 128
#define N_OUTPUTS_1_12 128
#define N_INPUT_1_13 15
#define N_LAYER_14 128
#define N_LAYER_16 256
#define N_LAYER_20 128
#define OUT_CONCAT_24 384
#define N_LAYER_25 512
#define N_INPUT_1_29 56
#define N_INPUT_2_29 11
#define N_INPUT_3_29 4
#define N_LAYER_30 1024
#define OUT_HEIGHT_32 56
#define OUT_WIDTH_32 55
#define N_CHAN_32 4
#define OUT_HEIGHT_108 60
#define OUT_WIDTH_108 59
#define N_CHAN_108 4
#define OUT_HEIGHT_36 56
#define OUT_WIDTH_36 55
#define N_FILT_36 16
#define N_LAYER_38 992
#define N_OUTPUTS_1_41 32
#define N_OUTPUTS_1_42 56
#define N_OUTPUTS_2_42 55
#define N_OUTPUTS_3_42 16
#define OUT_HEIGHT_44 28
#define OUT_WIDTH_44 27
#define N_FILT_44 16
#define OUT_HEIGHT_109 30
#define OUT_WIDTH_109 29
#define N_CHAN_109 16
#define OUT_HEIGHT_45 28
#define OUT_WIDTH_45 27
#define N_FILT_45 32
#define N_OUTPUTS_1_47 960
#define N_OUTPUTS_1_49 64
#define N_OUTPUTS_1_50 28
#define N_OUTPUTS_2_50 27
#define N_OUTPUTS_3_50 32
#define OUT_HEIGHT_110 30
#define OUT_WIDTH_110 29
#define N_CHAN_110 32
#define OUT_HEIGHT_52 28
#define OUT_WIDTH_52 27
#define N_FILT_52 32
#define OUT_HEIGHT_56 14
#define OUT_WIDTH_56 13
#define N_FILT_56 32
#define OUT_HEIGHT_111 16
#define OUT_WIDTH_111 15
#define N_CHAN_111 32
#define OUT_HEIGHT_57 14
#define OUT_WIDTH_57 13
#define N_FILT_57 64
#define N_OUTPUTS_1_59 896
#define N_OUTPUTS_1_61 128
#define N_OUTPUTS_1_62 14
#define N_OUTPUTS_2_62 13
#define N_OUTPUTS_3_62 64
#define OUT_HEIGHT_112 16
#define OUT_WIDTH_112 15
#define N_CHAN_112 64
#define OUT_HEIGHT_64 14
#define OUT_WIDTH_64 13
#define N_FILT_64 64
#define OUT_HEIGHT_68 7
#define OUT_WIDTH_68 6
#define N_FILT_68 64
#define OUT_HEIGHT_113 9
#define OUT_WIDTH_113 8
#define N_CHAN_113 64
#define OUT_HEIGHT_69 7
#define OUT_WIDTH_69 6
#define N_FILT_69 128
#define N_OUTPUTS_1_71 768
#define N_OUTPUTS_1_73 256
#define N_OUTPUTS_1_74 7
#define N_OUTPUTS_2_74 6
#define N_OUTPUTS_3_74 128
#define OUT_HEIGHT_114 9
#define OUT_WIDTH_114 8
#define N_CHAN_114 128
#define OUT_HEIGHT_76 7
#define OUT_WIDTH_76 6
#define N_FILT_76 128
#define OUT_HEIGHT_80 3
#define OUT_WIDTH_80 3
#define N_FILT_80 128
#define OUT_HEIGHT_115 5
#define OUT_WIDTH_115 5
#define N_CHAN_115 128
#define OUT_HEIGHT_81 3
#define OUT_WIDTH_81 3
#define N_FILT_81 256
#define N_OUTPUTS_1_84 512
#define N_OUTPUTS_1_85 3
#define N_OUTPUTS_2_85 3
#define N_OUTPUTS_3_85 256
#define OUT_HEIGHT_116 5
#define OUT_WIDTH_116 5
#define N_CHAN_116 256
#define OUT_HEIGHT_87 3
#define OUT_WIDTH_87 3
#define N_FILT_87 256
#define N_SIZE_1_91 2304
#define N_LAYER_92 256
#define N_LAYER_96 256
#define N_LAYER_100 1

//hls-fpga-machine-learning insert layer-precision
typedef ap_fixed<32,16> model_default_t;
typedef nnet::array<ap_fixed<32,16>, 6*1> input_t;
typedef nnet::array<ap_fixed<32,16>, 6*1> layer103_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer117_t;
typedef ap_fixed<6,1> weight117_t;
typedef ap_fixed<6,1> bias117_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer4_t;
typedef ap_fixed<32,16> leaky_re_lu_1_table_t;
typedef nnet::array<ap_fixed<32,16>, 1*1> layer5_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer118_t;
typedef ap_fixed<6,1> weight118_t;
typedef ap_fixed<6,1> bias118_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer119_t;
typedef ap_fixed<6,1> weight119_t;
typedef ap_fixed<6,1> bias119_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer10_t;
typedef ap_fixed<32,16> leaky_re_lu_2_table_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer11_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer12_t;
typedef nnet::array<ap_fixed<32,16>, 15*1> input13_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer14_t;
typedef ap_fixed<16,10> weight14_t;
typedef ap_uint<1> bias14_t;
typedef ap_uint<1> layer14_index;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer16_t;
typedef ap_fixed<16,10> weight16_t;
typedef ap_uint<1> bias16_t;
typedef ap_uint<1> layer16_index;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer18_t;
typedef ap_fixed<32,16> leaky_re_lu_3_table_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer19_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer20_t;
typedef ap_fixed<16,10> weight20_t;
typedef ap_uint<1> bias20_t;
typedef ap_uint<1> layer20_index;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer22_t;
typedef ap_fixed<32,16> leaky_re_lu_table_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer23_t;
typedef ap_fixed<32,16> leaky_re_lu_4_table_t;
typedef nnet::array<ap_fixed<32,16>, 384*1> layer24_t;
typedef nnet::array<ap_fixed<32,16>, 512*1> layer25_t;
typedef ap_fixed<16,10> weight25_t;
typedef ap_uint<1> bias25_t;
typedef ap_uint<1> layer25_index;
typedef nnet::array<ap_fixed<32,16>, 512*1> layer27_t;
typedef nnet::array<ap_fixed<32,16>, 512*1> layer28_t;
typedef ap_fixed<32,16> leaky_re_lu_5_table_t;
typedef nnet::array<ap_fixed<32,16>, 4*1> input29_t;
typedef nnet::array<ap_fixed<32,16>, 1024*1> layer30_t;
typedef ap_fixed<16,10> weight30_t;
typedef ap_uint<1> bias30_t;
typedef ap_uint<1> layer30_index;
typedef nnet::array<ap_fixed<32,16>, 4*1> layer32_t;
typedef nnet::array<ap_fixed<32,16>, 1024*1> layer33_t;
typedef nnet::array<ap_fixed<32,16>, 4*1> layer34_t;
typedef nnet::array<ap_fixed<32,16>, 4*1> layer108_t;
typedef nnet::array<ap_fixed<32,16>, 1024*1> layer35_t;
typedef ap_fixed<32,16> leaky_re_lu_6_table_t;
typedef nnet::array<ap_fixed<32,16>, 16*1> layer36_t;
typedef ap_fixed<6,1> weight36_t;
typedef ap_fixed<6,1> bias36_t;
typedef nnet::array<ap_fixed<32,16>, 992*1> layer38_t;
typedef ap_fixed<16,10> weight38_t;
typedef ap_fixed<16,10> bias38_t;
typedef ap_uint<1> layer38_index;
typedef nnet::array<ap_fixed<32,16>, 992*1> layer104_t;
typedef nnet::array<ap_fixed<32,16>, 16*1> layer40_t;
typedef nnet::array<ap_fixed<32,16>, 32*1> layer41_t;
typedef nnet::array<ap_fixed<32,16>, 16*1> layer42_t;
typedef nnet::array<ap_fixed<32,16>, 16*1> layer43_t;
typedef ap_fixed<32,16> leaky_re_lu_7_table_t;
typedef nnet::array<ap_fixed<32,16>, 16*1> layer44_t;
typedef nnet::array<ap_fixed<32,16>, 16*1> layer109_t;
typedef nnet::array<ap_fixed<32,16>, 32*1> layer45_t;
typedef ap_fixed<6,1> weight45_t;
typedef ap_fixed<6,1> bias45_t;
typedef nnet::array<ap_fixed<32,16>, 960*1> layer47_t;
typedef nnet::array<ap_fixed<32,16>, 960*1> layer105_t;
typedef nnet::array<ap_fixed<32,16>, 32*1> layer48_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer49_t;
typedef nnet::array<ap_fixed<32,16>, 32*1> layer50_t;
typedef nnet::array<ap_fixed<32,16>, 32*1> layer51_t;
typedef ap_fixed<32,16> leaky_re_lu_8_table_t;
typedef nnet::array<ap_fixed<32,16>, 32*1> layer110_t;
typedef nnet::array<ap_fixed<32,16>, 32*1> layer52_t;
typedef ap_fixed<6,1> weight52_t;
typedef ap_fixed<6,1> bias52_t;
typedef nnet::array<ap_fixed<32,16>, 32*1> layer54_t;
typedef nnet::array<ap_fixed<32,16>, 32*1> layer55_t;
typedef ap_fixed<32,16> leaky_re_lu_9_table_t;
typedef nnet::array<ap_fixed<32,16>, 32*1> layer56_t;
typedef nnet::array<ap_fixed<32,16>, 32*1> layer111_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer57_t;
typedef ap_fixed<6,1> weight57_t;
typedef ap_fixed<6,1> bias57_t;
typedef nnet::array<ap_fixed<32,16>, 896*1> layer59_t;
typedef nnet::array<ap_fixed<32,16>, 896*1> layer106_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer60_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer61_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer62_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer63_t;
typedef ap_fixed<32,16> leaky_re_lu_10_table_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer112_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer64_t;
typedef ap_fixed<6,1> weight64_t;
typedef ap_fixed<6,1> bias64_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer66_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer67_t;
typedef ap_fixed<32,16> leaky_re_lu_11_table_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer68_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer113_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer69_t;
typedef ap_fixed<6,1> weight69_t;
typedef ap_fixed<6,1> bias69_t;
typedef nnet::array<ap_fixed<32,16>, 768*1> layer71_t;
typedef nnet::array<ap_fixed<32,16>, 768*1> layer107_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer72_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer73_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer74_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer75_t;
typedef ap_fixed<32,16> leaky_re_lu_12_table_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer114_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer76_t;
typedef ap_fixed<6,1> weight76_t;
typedef ap_fixed<6,1> bias76_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer78_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer79_t;
typedef ap_fixed<32,16> leaky_re_lu_13_table_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer80_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer115_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer81_t;
typedef ap_fixed<6,1> weight81_t;
typedef ap_fixed<6,1> bias81_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer83_t;
typedef nnet::array<ap_fixed<32,16>, 512*1> layer84_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer85_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer86_t;
typedef ap_fixed<32,16> leaky_re_lu_14_table_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer116_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer87_t;
typedef ap_fixed<6,1> weight87_t;
typedef ap_fixed<6,1> bias87_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer89_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer90_t;
typedef ap_fixed<32,16> leaky_re_lu_15_table_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer92_t;
typedef ap_fixed<16,10> weight92_t;
typedef ap_uint<1> bias92_t;
typedef ap_uint<1> layer92_index;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer94_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer95_t;
typedef ap_fixed<32,16> leaky_re_lu_16_table_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer96_t;
typedef ap_fixed<16,10> weight96_t;
typedef ap_uint<1> bias96_t;
typedef ap_uint<1> layer96_index;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer98_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer99_t;
typedef ap_fixed<32,16> leaky_re_lu_17_table_t;
typedef nnet::array<ap_fixed<32,16>, 1*1> layer100_t;
typedef ap_fixed<16,10> weight100_t;
typedef ap_fixed<16,10> bias100_t;
typedef ap_uint<1> layer100_index;
typedef nnet::array<ap_fixed<32,16>, 1*1> result_t;
typedef ap_fixed<32,16> activation_table_t;

#endif
