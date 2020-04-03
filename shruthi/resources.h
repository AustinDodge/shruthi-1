// Copyright 2009 Olivier Gillet.
//
// Author: Olivier Gillet (ol.gillet@gmail.com)
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
// -----------------------------------------------------------------------------
//
// Resources definitions.
//
// Automatically generated with:
// make resources


#ifndef SHRUTHI_RESOURCES_H_
#define SHRUTHI_RESOURCES_H_


#include "avrlib/base.h"

#include <avr/pgmspace.h>


#include "avrlib/resources_manager.h"

namespace shruthi {

typedef uint16_t ResourceId;

extern const prog_char* const string_table[];

extern const prog_uint16_t* const lookup_table_table[];

extern const prog_uint32_t* const lookup_table32_table[];

extern const prog_uint8_t* const waveform_table[];

extern const prog_uint8_t* const character_table[];

extern const prog_uint16_t lut_res_lfo_increments[] PROGMEM;
extern const prog_uint16_t lut_res_env_portamento_increments[] PROGMEM;
extern const prog_uint16_t lut_res_oscillator_increments[] PROGMEM;
extern const prog_uint16_t lut_res_fm_frequency_ratios[] PROGMEM;
extern const prog_uint16_t lut_res_scale_just[] PROGMEM;
extern const prog_uint16_t lut_res_scale_pythagorean[] PROGMEM;
extern const prog_uint16_t lut_res_scale_1_4_eb[] PROGMEM;
extern const prog_uint16_t lut_res_scale_1_4_e[] PROGMEM;
extern const prog_uint16_t lut_res_scale_1_4_ea[] PROGMEM;
extern const prog_uint16_t lut_res_scale_bhairav[] PROGMEM;
extern const prog_uint16_t lut_res_scale_gunakri[] PROGMEM;
extern const prog_uint16_t lut_res_scale_marwa[] PROGMEM;
extern const prog_uint16_t lut_res_scale_shree[] PROGMEM;
extern const prog_uint16_t lut_res_scale_purvi[] PROGMEM;
extern const prog_uint16_t lut_res_scale_bilawal[] PROGMEM;
extern const prog_uint16_t lut_res_scale_yaman[] PROGMEM;
extern const prog_uint16_t lut_res_scale_kafi[] PROGMEM;
extern const prog_uint16_t lut_res_scale_bhimpalasree[] PROGMEM;
extern const prog_uint16_t lut_res_scale_darbari[] PROGMEM;
extern const prog_uint16_t lut_res_scale_rageshree[] PROGMEM;
extern const prog_uint16_t lut_res_scale_khamaj[] PROGMEM;
extern const prog_uint16_t lut_res_scale_mimal[] PROGMEM;
extern const prog_uint16_t lut_res_scale_parameshwari[] PROGMEM;
extern const prog_uint16_t lut_res_scale_rangeshwari[] PROGMEM;
extern const prog_uint16_t lut_res_scale_gangeshwari[] PROGMEM;
extern const prog_uint16_t lut_res_scale_kameshwari[] PROGMEM;
extern const prog_uint16_t lut_res_scale_palas_kafi[] PROGMEM;
extern const prog_uint16_t lut_res_scale_natbhairav[] PROGMEM;
extern const prog_uint16_t lut_res_scale_m_kauns[] PROGMEM;
extern const prog_uint16_t lut_res_scale_bairagi[] PROGMEM;
extern const prog_uint16_t lut_res_scale_b_todi[] PROGMEM;
extern const prog_uint16_t lut_res_scale_chandradeep[] PROGMEM;
extern const prog_uint16_t lut_res_scale_kaushik_todi[] PROGMEM;
extern const prog_uint16_t lut_res_scale_jogeshwari[] PROGMEM;
extern const prog_uint16_t lut_res_arpeggiator_patterns[] PROGMEM;
extern const prog_uint16_t lut_res_groove_swing[] PROGMEM;
extern const prog_uint16_t lut_res_groove_shuffle[] PROGMEM;
extern const prog_uint16_t lut_res_groove_push[] PROGMEM;
extern const prog_uint16_t lut_res_groove_lag[] PROGMEM;
extern const prog_uint16_t lut_res_groove_human[] PROGMEM;
extern const prog_uint16_t lut_res_groove_monkey[] PROGMEM;
extern const prog_uint32_t lut_res_tempo_phase_increment[] PROGMEM;
extern const prog_uint8_t wav_res_formant_sine[] PROGMEM;
extern const prog_uint8_t wav_res_formant_square[] PROGMEM;
extern const prog_uint8_t wav_res_sine[] PROGMEM;
extern const prog_uint8_t wav_res_bandlimited_saw_0[] PROGMEM;
extern const prog_uint8_t wav_res_bandlimited_saw_1[] PROGMEM;
extern const prog_uint8_t wav_res_bandlimited_saw_2[] PROGMEM;
extern const prog_uint8_t wav_res_bandlimited_saw_3[] PROGMEM;
extern const prog_uint8_t wav_res_bandlimited_saw_4[] PROGMEM;
extern const prog_uint8_t wav_res_bandlimited_saw_5[] PROGMEM;
extern const prog_uint8_t wav_res_vowel_data[] PROGMEM;
extern const prog_uint8_t wav_res_distortion[] PROGMEM;
extern const prog_uint8_t wav_res_env_expo[] PROGMEM;
extern const prog_uint8_t wav_res_ssm2164_linearization[] PROGMEM;
extern const prog_uint8_t wav_res_division_table[] PROGMEM;
extern const prog_uint8_t wav_res_blep_table[] PROGMEM;
extern const prog_uint8_t wav_res_waves[] PROGMEM;
extern const prog_uint8_t wav_res_wavetables[] PROGMEM;
extern const prog_uint8_t wav_res_version[] PROGMEM;
extern const prog_uint8_t chr_res_special_characters[] PROGMEM;
#define STR_RES_SHAPE 0  // shape
#define STR_RES_PARAMETER 1  // parameter
#define STR_RES_RESONANCE 2  // resonance
#define STR_RES_PRM 3  // prm
#define STR_RES_RANGE 4  // range
#define STR_RES_RNG 5  // rng
#define STR_RES_OP_ 6  // op.
#define STR_RES_OPERATOR 7  // operator
#define STR_RES_DETUNE 8  // detune
#define STR_RES_OSC_MIX 9  // osc mix
#define STR_RES_SUB_OSC_ 10  // sub osc.
#define STR_RES_ENV1TVCF 11  // env1~vcf
#define STR_RES_LFO2TVCF 12  // lfo2~vcf
#define STR_RES_ATTACK 13  // attack
#define STR_RES_ATK 14  // atk
#define STR_RES_DECAY 15  // decay
#define STR_RES_SUSTAIN 16  // sustain
#define STR_RES_RELEASE 17  // release
#define STR_RES_RATE 18  // rate
#define STR_RES_MODULATION 19  // modulation
#define STR_RES_OPERATORS 20  // operators
#define STR_RES_MOD_ 21  // mod.
#define STR_RES_SOURCE 22  // source
#define STR_RES_SRC 23  // src
#define STR_RES_DEST_ 24  // dest.
#define STR_RES_DST 25  // dst
#define STR_RES_AMOUNT 26  // amount
#define STR_RES_AMT 27  // amt
#define STR_RES_MODE 28  // mode
#define STR_RES_OVERDRIVE 29  // overdrive
#define STR_RES__FM 30  // fm
#define STR_RES_FLAVOUR 31  // flavour
#define STR_RES_TIME 32  // time
#define STR_RES_LEVEL 33  // level
#define STR_RES_FDB 34  // fdb
#define STR_RES_FEEDBACK 35  // feedback
#define STR_RES_EQ_ 36  // eq.
#define STR_RES_FDBCK_EQ_ 37  // fdbck eq.
#define STR_RES_TEMPO 38  // tempo
#define STR_RES_BPM 39  // bpm
#define STR_RES_GROOVE 40  // groove
#define STR_RES_DIRECTION 41  // direction
#define STR_RES_PATTERN 42  // pattern
#define STR_RES_DIVISION 43  // division
#define STR_RES_START 44  // start
#define STR_RES_LENGTH 45  // length
#define STR_RES_OCTAVE 46  // octave
#define STR_RES_RAGA 47  // raga
#define STR_RES_PORTA 48  // porta
#define STR_RES_PRT 49  // prt
#define STR_RES_LEGATO 50  // legato
#define STR_RES_TUNING 51  // tuning
#define STR_RES_MIDI_CHAN 52  // midi chan
#define STR_RES_CHN 53  // chn
#define STR_RES_MIDI_OUT 54  // midi out
#define STR_RES_PAUSE 55  // pause
#define STR_RES_STARTPAGE 56  // startpage
#define STR_RES_SNAP 57  // snap
#define STR_RES_OSCILLATOR_1 58  // oscillator 1
#define STR_RES_OSCILLATOR_2 59  // oscillator 2
#define STR_RES_MIXER 60  // mixer
#define STR_RES_FILTER 61  // filter
#define STR_RES_FILTERS 62  // filter+
#define STR_RES_MODE_1 63  // mode 1
#define STR_RES_MODE_2 64  // mode 2
#define STR_RES_MD1 65  // md1
#define STR_RES_MD2 66  // md2
#define STR_RES_ENVELOPE_1 67  // envelope 1
#define STR_RES_ENVELOPE_2 68  // envelope 2
#define STR_RES_SEQUENCER 69  // sequencer
#define STR_RES_ARPEGGIO 70  // arpeggio
#define STR_RES_CH1 71  // ch1
#define STR_RES_CH2 72  // ch2
#define STR_RES_11 73  // 1
#define STR_RES_12 74  // 2
#define STR_RES_STEP_SEQUENCER 75  // step sequencer
#define STR_RES_KEYBOARD 76  // keyboard
#define STR_RES_MIDI 77  // midi
#define STR_RES_SYSTEM 78  // system
#define STR_RES_PERFORMANCE 79  // performance
#define STR_RES_PARAM__1 80  // param. 1
#define STR_RES_PARAM__2 81  // param. 2
#define STR_RES_PR1 82  // pr1
#define STR_RES_PR2 83  // pr2
#define STR_RES_FX_ 84  // fx.
#define STR_RES_FX_PROG_ 85  // fx prog.
#define STR_RES_LPF 86  // lpf
#define STR_RES_BPF 87  // bpf
#define STR_RES_HPF 88  // hpf
#define STR_RES_LPL 89  // lp<
#define STR_RES_BPL 90  // bp<
#define STR_RES_HPL 91  // hp<
#define STR_RES_SLP 92  // +lp
#define STR_RES_SBP 93  // +bp
#define STR_RES_SHP 94  // +hp
#define STR_RES_GLP 95  // >lp
#define STR_RES_GBP 96  // >bp
#define STR_RES_GHP 97  // >hp
#define STR_RES_LP4 98  // lp4
#define STR_RES_LP3 99  // lp3
#define STR_RES_LP2 100  // lp2
#define STR_RES_LP1 101  // lp1
#define STR_RES_HP1 102  // hp1
#define STR_RES_HP2 103  // hp2
#define STR_RES_HP3 104  // hp3
#define STR_RES_BP2 105  // bp2
#define STR_RES_BP4 106  // bp4
#define STR_RES_NOTCH 107  // notch
#define STR_RES_PHASER 108  // phaser
#define STR_RES_H2LP 109  // h2lp
#define STR_RES_H3LP 110  // h3lp
#define STR_RES_NSLP 111  // n+lp
#define STR_RES_PSLP 112  // p+lp
#define STR_RES_LP 113  // lp
#define STR_RES_BP 114  // bp
#define STR_RES_HP 115  // hp
#define STR_RES_AP 116  // ap
#define STR_RES_LIQUID 117  // liquid
#define STR_RES_MS 118  // ms
#define STR_RES_WOBBLY 119  // wobbly
#define STR_RES_WHACKY 120  // whacky
#define STR_RES_PW1 121  // pw1
#define STR_RES_PW2 122  // pw2
#define STR_RES_51 123  // 1
#define STR_RES_52 124  // 2
#define STR_RES_5 125  // 
#define STR_RES_5F 126  // f
#define STR_RES_MIX 127  // mix
#define STR_RES_NOI 128  // noi
#define STR_RES_SUB 129  // sub
#define STR_RES_CUT 130  // cut
#define STR_RES_RES 131  // res
#define STR_RES_VCA 132  // vca
#define STR_RES_CV1 133  // cv1
#define STR_RES_CV2 134  // cv2
#define STR_RES_TR1 135  // tr1
#define STR_RES_A1 136  // a1
#define STR_RES_D1 137  // d1
#define STR_RES_S1 138  // s1
#define STR_RES_R1 139  // r1
#define STR_RES_TR2 140  // tr2
#define STR_RES_A2 141  // a2
#define STR_RES_D2 142  // d2
#define STR_RES_S2 143  // s2
#define STR_RES_R2 144  // r2
#define STR_RES__ATK 145  // atk
#define STR_RES__LF1 146  // lf1
#define STR_RES__LF2 147  // lf2
#define STR_RES__DR1 148  // dr1
#define STR_RES__DR2 149  // dr2
#define STR_RES_IN1 150  // in1
#define STR_RES_IN2 151  // in2
#define STR_RES_OUT 152  // out
#define STR_RES___OFF 153  // off
#define STR_RES_ADD 154  // add
#define STR_RES_PRD 155  // prd
#define STR_RES_MAX 156  // max
#define STR_RES_MIN 157  // min
#define STR_RES__XOR 158  // xor
#define STR_RES_GE 159  // >=
#define STR_RES_LE 160  // <=
#define STR_RES_QTZ 161  // qtz
#define STR_RES_LAG 162  // lag
#define STR_RES_PWM1 163  // pwm1
#define STR_RES_PWM2 164  // pwm2
#define STR_RES_OSC1 165  // osc1
#define STR_RES_OSC2 166  // osc2
#define STR_RES_OSC1S2 167  // osc1+2
#define STR_RES_FINE 168  // fine
#define STR_RES__MIX 169  // mix
#define STR_RES_NOISE 170  // noise
#define STR_RES_SUBOSC 171  // subosc
#define STR_RES_CUTOFF 172  // cutoff
#define STR_RES_RESO 173  // reso
#define STR_RES__VCA 174  // vca
#define STR_RES_CV_1 175  // cv 1
#define STR_RES_CV_2 176  // cv 2
#define STR_RES_TRG_E1 177  // trg e1
#define STR_RES_ATK__1 178  // atk. 1
#define STR_RES_DEC__1 179  // dec. 1
#define STR_RES_SUS__1 180  // sus. 1
#define STR_RES_REL__1 181  // rel. 1
#define STR_RES_TRG_E2 182  // trg e2
#define STR_RES_ATK__2 183  // atk. 2
#define STR_RES_DEC__2 184  // dec. 2
#define STR_RES_SUS__2 185  // sus. 2
#define STR_RES_REL__2 186  // rel. 2
#define STR_RES_ATK1S2 187  // atk1+2
#define STR_RES__LFO_1 188  // lfo 1
#define STR_RES__LFO_2 189  // lfo 2
#define STR_RES__DRM_1 190  // drm 1
#define STR_RES__DRM_2 191  // drm 2
#define STR_RES_DISTRT 192  // distrt
#define STR_RES_CRUSHR 193  // crushr
#define STR_RES_SCMBFL 194  // +cmbfl
#define STR_RES_CMBFL 195  // -cmbfl
#define STR_RES_RINGMD 196  // ringmd
#define STR_RES_DELAY 197  // delay
#define STR_RES_FB_DLY 198  // fb dly
#define STR_RES_DUBDLY 199  // dubdly
#define STR_RES__FBDLY 200  // !fbdly
#define STR_RES__DBDLY 201  // !dbdly
#define STR_RES__16_DL 202  // /16 dl
#define STR_RES__12_DL 203  // /12 dl
#define STR_RES__8_DLY 204  // /8 dly
#define STR_RES_3_16DL 205  // 3/16dl
#define STR_RES_LOOPER 206  // looper
#define STR_RES_PITCH 207  // pitch
#define STR_RES_LGF 208  // l>f
#define STR_RES_HGF 209  // h>f
#define STR_RES_FGL 210  // f>l
#define STR_RES_FGH 211  // f>h
#define STR_RES_GFX 212  // >fx
#define STR_RES_LF1 213  // lf1
#define STR_RES_LF2 214  // lf2
#define STR_RES_SEQ 215  // seq
#define STR_RES__SQ1 216  // sq1
#define STR_RES__SQ2 217  // sq2
#define STR_RES_ARP 218  // arp
#define STR_RES_WHL 219  // whl
#define STR_RES_AFT 220  // aft
#define STR_RES_BND 221  // bnd
#define STR_RES_OFS 222  // ofs
#define STR_RES__CV1 223  // cv1
#define STR_RES__CV2 224  // cv2
#define STR_RES_CV3 225  // cv3
#define STR_RES_CV4 226  // cv4
#define STR_RES_CCA 227  // ccA
#define STR_RES_CCB 228  // ccB
#define STR_RES_BRE 229  // bre
#define STR_RES_PED 230  // ped
#define STR_RES__NOI 231  // noi
#define STR_RES_EN1 232  // en1
#define STR_RES_EN2 233  // en2
#define STR_RES_VEL 234  // vel
#define STR_RES_RND 235  // rnd
#define STR_RES_NOT 236  // not
#define STR_RES_GAT 237  // gat
#define STR_RES_AUD 238  // aud
#define STR_RES_OP1 239  // op1
#define STR_RES_OP2 240  // op2
#define STR_RES_E4 241  // =4
#define STR_RES_E8 242  // =8
#define STR_RES_E16 243  // =16
#define STR_RES_E32 244  // =32
#define STR_RES_LFO_1 245  // lfo 1
#define STR_RES_LFO_2 246  // lfo 2
#define STR_RES_STPSEQ 247  // stpseq
#define STR_RES_STPSQ1 248  // stpsq1
#define STR_RES_STPSQ2 249  // stpsq2
#define STR_RES__ARP 250  // arp
#define STR_RES_MWHEEL 251  // mwheel
#define STR_RES_AFTTCH 252  // afttch
#define STR_RES_BENDER 253  // bender
#define STR_RES_OFFSET 254  // offset
#define STR_RES__CV_1 255  // cv 1
#define STR_RES__CV_2 256  // cv 2
#define STR_RES_CV_3 257  // cv 3
#define STR_RES_CV_4 258  // cv 4
#define STR_RES_CC_A 259  // cc A
#define STR_RES_CC_B 260  // cc B
#define STR_RES_BREATH 261  // breath
#define STR_RES_PEDAL 262  // pedal
#define STR_RES__NOISE 263  // noise
#define STR_RES_ENV_1 264  // env 1
#define STR_RES_ENV_2 265  // env 2
#define STR_RES_VELO 266  // velo
#define STR_RES_RANDOM 267  // random
#define STR_RES_NOTE 268  // note
#define STR_RES_GATE 269  // gate
#define STR_RES_AUDIO 270  // audio
#define STR_RES_OP__1 271  // op. 1
#define STR_RES_OP__2 272  // op. 2
#define STR_RES_E_4 273  // = 4
#define STR_RES_E_8 274  // = 8
#define STR_RES_E_16 275  // = 16
#define STR_RES_E_32 276  // = 32
#define STR_RES_PATCH 277  // patch
#define STR_RES_SEQUENCE 278  // sequence
#define STR_RES_SAVE_MIDI_KBD 279  // save midi/kbd
#define STR_RES_SETTINGS_ 280  // settings?
#define STR_RES_START_FULL_MIDI 281  // start full midi
#define STR_RES_BACKUP_ 282  // backup?
#define STR_RES_BROWSE 283  // browse
#define STR_RES_SAVE 284  // save
#define STR_RES_COMPARE 285  // compare
#define STR_RES_ 286  // ----
#define STR_RES_V 287  // v
#define STR_RES_MUTABLE___YA8_05 288  // mutable   YA.05
#define STR_RES_INSTRUMENTS_671 289  // instruments -1
#define STR_RES_SHRUTHI_CLASSIC 290  // shruthi classic
#define STR_RES_4_KNOBS 291  // (4 knobs)
#define STR_RES_SHRUTHI_XT 292  // shruthi xt
#define STR_RES_CLASSIC_FCD72 293  // classic (fcd72)
#define STR_RES__SHRUTHI_XT 294  // shruthi xt
#define STR_RES_FULL_CONTROL 295  // (full control)
#define STR_RES_LETS_JAM_ 296  // let's jam!
#define STR_RES_EXTERN 297  // extern
#define STR_RES_SUM 298  // sum
#define STR_RES_SYNC 299  // sync
#define STR_RES_RING 300  // ring
#define STR_RES_XOR 301  // xor
#define STR_RES_FUZZ 302  // fuzz
#define STR_RES_GG4 303  // >>4
#define STR_RES_GG8 304  // >>8
#define STR_RES_FOLD 305  // fold
#define STR_RES_BITS 306  // bits
#define STR_RES_DUO 307  // duo
#define STR_RES_2STEPS 308  // 2steps
#define STR_RES_4STEPS 309  // 4steps
#define STR_RES_8STEPS 310  // 8steps
#define STR_RES_SEQMIX 311  // seqmix
#define STR_RES_STP 312  // stp
#define STR_RES___ARP 313  // arp
#define STR_RES__SEQ 314  // seq
#define STR_RES_FREE 315  // free
#define STR_RES_SLAVE 316  // slave
#define STR_RES_MASTER 317  // master
#define STR_RES_1SHOT 318  // 1shot
#define STR_RES_1_1 319  // 1/1
#define STR_RES_1_2 320  // 1/2
#define STR_RES_1_3 321  // 1/3
#define STR_RES_1_4 322  // 1/4
#define STR_RES_1_6 323  // 1/6
#define STR_RES_1_8 324  // 1/8
#define STR_RES__12 325  // /12
#define STR_RES__16 326  // /16
#define STR_RES__24 327  // /24
#define STR_RES__32 328  // /32
#define STR_RES__48 329  // /48
#define STR_RES__96 330  // /96
#define STR_RES_SWING 331  // swing
#define STR_RES_SHUFFLE 332  // shuffle
#define STR_RES_PUSH 333  // push
#define STR_RES__LAG 334  // lag
#define STR_RES_HUMAN 335  // human
#define STR_RES_MONKEY 336  // monkey
#define STR_RES__OFF 337  // off
#define STR_RES_THRU 338  // thru
#define STR_RES___SEQ 339  // seq
#define STR_RES_CTRL 340  // ctrl
#define STR_RES_FULL 341  // full
#define STR_RES_1TV 342  // 1~|
#define STR_RES_2T1 343  // 2~1
#define STR_RES_3T2 344  // 3~2
#define STR_RES_4T3 345  // 4~3
#define STR_RES_5T4 346  // 5~4
#define STR_RES_6T5 347  // 6~5
#define STR_RES_7T6 348  // 7~6
#define STR_RES_8T7 349  // 8~7
#define STR_RES_TRI 350  // tri
#define STR_RES_SQR 351  // sqr
#define STR_RES_S_H 352  // s&h
#define STR_RES_RAMP 353  // ramp
#define STR_RES_STEP 354  // step
#define STR_RES_3 355  // 
#define STR_RES_4 356  // 
#define STR_RES_34 357  // 
#define STR_RES__ 358  // ?
#define STR_RES_PLAYED 359  // played
#define STR_RES_OFF 360  // off
#define STR_RES_ON 361  // on
#define STR_RES_SQ1 362  // sq1
#define STR_RES__TR1 363  // tr1
#define STR_RES_PL1 364  // pl1
#define STR_RES_SQ2 365  // sq2
#define STR_RES__TR2 366  // tr2
#define STR_RES_PL2 367  // pl2
#define STR_RES_CLICK 368  // click
#define STR_RES_GLITCH 369  // glitch
#define STR_RES_BLOW 370  // blow
#define STR_RES_METAL 371  // metal
#define STR_RES_POP 372  // pop
#define STR_RES_NONE 373  // none
#define STR_RES_SAW 374  // saw
#define STR_RES_CSAW 375  // csaw
#define STR_RES_OLDSAW 376  // oldsaw
#define STR_RES_SQUARE 377  // square
#define STR_RES_DPWM 378  // dpwm
#define STR_RES_TRIANG 379  // triang
#define STR_RES_ZSAW 380  // zsaw
#define STR_RES_LPZSAW 381  // lpzsaw
#define STR_RES_PKZSAW 382  // pkzsaw
#define STR_RES_HPZSAW 383  // hpzsaw
#define STR_RES_LPZPULSE 384  // lpzpulse
#define STR_RES_PKZPULSE 385  // pkzpulse
#define STR_RES_HPZPULSE 386  // hpzpulse
#define STR_RES_ZSYNC 387  // zsync
#define STR_RES_ZTRI 388  // ztri
#define STR_RES_PAD 389  // pad
#define STR_RES_QPWM 390  // qpwm
#define STR_RES_FM 391  // fm
#define STR_RES_FMFB 392  // fmfb
#define STR_RES_8BITS 393  // 8bits
#define STR_RES_CRUSH 394  // crush
#define STR_RES___NOISE 395  // noise
#define STR_RES_VOWEL 396  // vowel
#define STR_RES_WAVES 397  // waves
#define STR_RES_TAMPUR 398  // tampur
#define STR_RES_DIGITL 399  // digitl
#define STR_RES_METALL 400  // metall
#define STR_RES_BOWED 401  // bowed
#define STR_RES_SLAP 402  // slap
#define STR_RES_ORGAN 403  // organ
#define STR_RES_MALE 404  // male
#define STR_RES_USER 405  // user
#define STR_RES_BELISH 406  // belish
#define STR_RES_POLATD 407  // polatd
#define STR_RES_CELLO 408  // cello
#define STR_RES_CLPSWP 409  // clpswp
#define STR_RES_FEMALE 410  // female
#define STR_RES_FMTVOC 411  // fmtvoc
#define STR_RES_FRMNT2 412  // frmnt2
#define STR_RES_RES3HP 413  // res3hp
#define STR_RES_ELECTP 414  // electp
#define STR_RES_VIBES 415  // vibes
#define STR_RES_WAVQUENCE 416  // wavquence
#define STR_RES__LPF 417  // lpf
#define STR_RES_SSM 418  // ssm
#define STR_RES_SVF 419  // svf
#define STR_RES_DSP 420  // dsp
#define STR_RES_PVK 421  // pvk
#define STR_RES_4PM 422  // 4pm
#define STR_RES_DLY 423  // dly
#define STR_RES_SP 424  // sp
#define STR_RES_SPLASH 425  // splash
#define STR_RES__FILTER 426  // filter
#define STR_RES_PRESET 427  // preset
#define STR_RES_EQUAL 428  // equal
#define STR_RES_DRUM1 429  // drum1
#define STR_RES_DRUM2 430  // drum2
#define STR_RES_DR1 431  // dr1
#define STR_RES_DR2 432  // dr2
#define STR_RES_JUST 433  // just
#define STR_RES_PYTHAG 434  // pythag
#define STR_RES_1_4_EB 435  // 1/4 eb
#define STR_RES_1_4_E 436  // 1/4 e
#define STR_RES_1_4_EA 437  // 1/4 ea
#define STR_RES_BHAIRA 438  // bhaira
#define STR_RES_GUNAKR 439  // gunakr
#define STR_RES_MARWA 440  // marwa
#define STR_RES_SHREE 441  // shree
#define STR_RES_PURVI 442  // purvi
#define STR_RES_BILAWA 443  // bilawa
#define STR_RES_YAMAN 444  // yaman
#define STR_RES_KAFI 445  // kafi
#define STR_RES_BHIMPA 446  // bhimpa
#define STR_RES_DARBAR 447  // darbar
#define STR_RES_BAGESH 448  // bagesh
#define STR_RES_RAGESH 449  // ragesh
#define STR_RES_KHAMAJ 450  // khamaj
#define STR_RES_MIMAL 451  // mi'mal
#define STR_RES_PARAME 452  // parame
#define STR_RES_RANGES 453  // ranges
#define STR_RES_GANGES 454  // ganges
#define STR_RES_KAMESH 455  // kamesh
#define STR_RES_PALAS_ 456  // palas
#define STR_RES_NATBHA 457  // natbha
#define STR_RES_M_KAUN 458  // m.kaun
#define STR_RES_BAIRAG 459  // bairag
#define STR_RES_B_TODI 460  // b.todi
#define STR_RES_CHANDR 461  // chandr
#define STR_RES_KAUSHI 462  // kaushi
#define STR_RES_JOGESH 463  // jogesh
#define STR_RES_RASIA 464  // rasia
#define LUT_RES_LFO_INCREMENTS 0
#define LUT_RES_LFO_INCREMENTS_SIZE 128
#define LUT_RES_ENV_PORTAMENTO_INCREMENTS 1
#define LUT_RES_ENV_PORTAMENTO_INCREMENTS_SIZE 128
#define LUT_RES_OSCILLATOR_INCREMENTS 2
#define LUT_RES_OSCILLATOR_INCREMENTS_SIZE 97
#define LUT_RES_FM_FREQUENCY_RATIOS 3
#define LUT_RES_FM_FREQUENCY_RATIOS_SIZE 25
#define LUT_RES_SCALE_JUST 4
#define LUT_RES_SCALE_JUST_SIZE 12
#define LUT_RES_SCALE_PYTHAGOREAN 5
#define LUT_RES_SCALE_PYTHAGOREAN_SIZE 12
#define LUT_RES_SCALE_1_4_EB 6
#define LUT_RES_SCALE_1_4_EB_SIZE 12
#define LUT_RES_SCALE_1_4_E 7
#define LUT_RES_SCALE_1_4_E_SIZE 12
#define LUT_RES_SCALE_1_4_EA 8
#define LUT_RES_SCALE_1_4_EA_SIZE 12
#define LUT_RES_SCALE_BHAIRAV 9
#define LUT_RES_SCALE_BHAIRAV_SIZE 12
#define LUT_RES_SCALE_GUNAKRI 10
#define LUT_RES_SCALE_GUNAKRI_SIZE 12
#define LUT_RES_SCALE_MARWA 11
#define LUT_RES_SCALE_MARWA_SIZE 12
#define LUT_RES_SCALE_SHREE 12
#define LUT_RES_SCALE_SHREE_SIZE 12
#define LUT_RES_SCALE_PURVI 13
#define LUT_RES_SCALE_PURVI_SIZE 12
#define LUT_RES_SCALE_BILAWAL 14
#define LUT_RES_SCALE_BILAWAL_SIZE 12
#define LUT_RES_SCALE_YAMAN 15
#define LUT_RES_SCALE_YAMAN_SIZE 12
#define LUT_RES_SCALE_KAFI 16
#define LUT_RES_SCALE_KAFI_SIZE 12
#define LUT_RES_SCALE_BHIMPALASREE 17
#define LUT_RES_SCALE_BHIMPALASREE_SIZE 12
#define LUT_RES_SCALE_DARBARI 18
#define LUT_RES_SCALE_DARBARI_SIZE 12
#define LUT_RES_SCALE_BAGESHREE 19
#define LUT_RES_SCALE_BAGESHREE_SIZE 12
#define LUT_RES_SCALE_RAGESHREE 20
#define LUT_RES_SCALE_RAGESHREE_SIZE 12
#define LUT_RES_SCALE_KHAMAJ 21
#define LUT_RES_SCALE_KHAMAJ_SIZE 12
#define LUT_RES_SCALE_MIMAL 22
#define LUT_RES_SCALE_MIMAL_SIZE 12
#define LUT_RES_SCALE_PARAMESHWARI 23
#define LUT_RES_SCALE_PARAMESHWARI_SIZE 12
#define LUT_RES_SCALE_RANGESHWARI 24
#define LUT_RES_SCALE_RANGESHWARI_SIZE 12
#define LUT_RES_SCALE_GANGESHWARI 25
#define LUT_RES_SCALE_GANGESHWARI_SIZE 12
#define LUT_RES_SCALE_KAMESHWARI 26
#define LUT_RES_SCALE_KAMESHWARI_SIZE 12
#define LUT_RES_SCALE_PALAS_KAFI 27
#define LUT_RES_SCALE_PALAS_KAFI_SIZE 12
#define LUT_RES_SCALE_NATBHAIRAV 28
#define LUT_RES_SCALE_NATBHAIRAV_SIZE 12
#define LUT_RES_SCALE_M_KAUNS 29
#define LUT_RES_SCALE_M_KAUNS_SIZE 12
#define LUT_RES_SCALE_BAIRAGI 30
#define LUT_RES_SCALE_BAIRAGI_SIZE 12
#define LUT_RES_SCALE_B_TODI 31
#define LUT_RES_SCALE_B_TODI_SIZE 12
#define LUT_RES_SCALE_CHANDRADEEP 32
#define LUT_RES_SCALE_CHANDRADEEP_SIZE 12
#define LUT_RES_SCALE_KAUSHIK_TODI 33
#define LUT_RES_SCALE_KAUSHIK_TODI_SIZE 12
#define LUT_RES_SCALE_JOGESHWARI 34
#define LUT_RES_SCALE_JOGESHWARI_SIZE 12
#define LUT_RES_SCALE_RASIA 35
#define LUT_RES_SCALE_RASIA_SIZE 12
#define LUT_RES_ARPEGGIATOR_PATTERNS 36
#define LUT_RES_ARPEGGIATOR_PATTERNS_SIZE 15
#define LUT_RES_GROOVE_SWING 37
#define LUT_RES_GROOVE_SWING_SIZE 16
#define LUT_RES_GROOVE_SHUFFLE 38
#define LUT_RES_GROOVE_SHUFFLE_SIZE 16
#define LUT_RES_GROOVE_PUSH 39
#define LUT_RES_GROOVE_PUSH_SIZE 16
#define LUT_RES_GROOVE_LAG 40
#define LUT_RES_GROOVE_LAG_SIZE 16
#define LUT_RES_GROOVE_HUMAN 41
#define LUT_RES_GROOVE_HUMAN_SIZE 16
#define LUT_RES_GROOVE_MONKEY 42
#define LUT_RES_GROOVE_MONKEY_SIZE 16
#define LUT_RES_TEMPO_PHASE_INCREMENT 0
#define LUT_RES_TEMPO_PHASE_INCREMENT_SIZE 201
#define WAV_RES_FORMANT_SINE 0
#define WAV_RES_FORMANT_SINE_SIZE 256
#define WAV_RES_FORMANT_SQUARE 1
#define WAV_RES_FORMANT_SQUARE_SIZE 256
#define WAV_RES_SINE 2
#define WAV_RES_SINE_SIZE 257
#define WAV_RES_BANDLIMITED_SAW_0 3
#define WAV_RES_BANDLIMITED_SAW_0_SIZE 257
#define WAV_RES_BANDLIMITED_SAW_1 4
#define WAV_RES_BANDLIMITED_SAW_1_SIZE 257
#define WAV_RES_BANDLIMITED_SAW_2 5
#define WAV_RES_BANDLIMITED_SAW_2_SIZE 257
#define WAV_RES_BANDLIMITED_SAW_3 6
#define WAV_RES_BANDLIMITED_SAW_3_SIZE 257
#define WAV_RES_BANDLIMITED_SAW_4 7
#define WAV_RES_BANDLIMITED_SAW_4_SIZE 257
#define WAV_RES_BANDLIMITED_SAW_5 8
#define WAV_RES_BANDLIMITED_SAW_5_SIZE 257
#define WAV_RES_BANDLIMITED_SAW_6 9
#define WAV_RES_BANDLIMITED_SAW_6_SIZE 257
#define WAV_RES_VOWEL_DATA 10
#define WAV_RES_VOWEL_DATA_SIZE 63
#define WAV_RES_DISTORTION 11
#define WAV_RES_DISTORTION_SIZE 256
#define WAV_RES_ENV_EXPO 12
#define WAV_RES_ENV_EXPO_SIZE 257
#define WAV_RES_SSM2164_LINEARIZATION 13
#define WAV_RES_SSM2164_LINEARIZATION_SIZE 64
#define WAV_RES_DIVISION_TABLE 14
#define WAV_RES_DIVISION_TABLE_SIZE 128
#define WAV_RES_BLEP_TABLE 15
#define WAV_RES_BLEP_TABLE_SIZE 128
#define WAV_RES_WAVES 16
#define WAV_RES_WAVES_SIZE 16383
#define WAV_RES_WAVETABLES 17
#define WAV_RES_WAVETABLES_SIZE 324
#define WAV_RES_VERSION 18
#define WAV_RES_VERSION_SIZE 2
#define CHR_RES_SPECIAL_CHARACTERS 0
#define CHR_RES_SPECIAL_CHARACTERS_SIZE 64
typedef avrlib::ResourcesManager<
    ResourceId,
    avrlib::ResourcesTables<
        string_table,
        lookup_table_table> > ResourcesManager; 

}  // namespace shruthi

#endif  // SHRUTHI_RESOURCES_H_
