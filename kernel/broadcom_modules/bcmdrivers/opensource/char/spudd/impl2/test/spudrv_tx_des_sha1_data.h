/*
<:copyright-BRCM:2007:DUAL/GPL:standard

   Copyright (c) 2007 Broadcom Corporation
   All Rights Reserved

Unless you and Broadcom execute a separate written software license
agreement governing use of this software, this software is licensed
to you under the terms of the GNU General Public License version 2
(the "GPL"), available at http://www.broadcom.com/licenses/GPLv2.php,
with the following added to such license:

   As a special exception, the copyright holders of this software give
   you permission to link this software with independent modules, and
   to copy and distribute the resulting executable under terms of your
   choice, provided that you also meet, for each linked independent
   module, the terms and conditions of the license of that module.
   An independent module is a module which is not derived from this
   software.  The special exception does not apply to any modifications
   of the software.

Not withstanding the above, under no circumstances may you combine
this software in any way with any other Broadcom software provided
under a license other than the GPL, without Broadcom's express prior
written consent.

:>
*/
/***************************************************************************
 * File Name  : 
 *
 * Description: 
 *              
 ***************************************************************************/
#ifndef __SPUDRV_TX_DES_SHA1_DATA_H__
#define __SPUDRV_TX_DES_SHA1_DATA_H__

#if defined(CONFIG_BCM_SPU_TEST)
//

// Automatically generated vector file.

//

// Vector format is: {EOP, SOP, PKT_DATA}.

//

// Example vectors:

//     101234567 // EOP = 0, SOP = 1, PKT_DATA = 01234567

//     089abcdef // EOP = 0, SOP = 0, PKT_DATA = 89abcdef

//     213572468 // EOP = 1, SOP = 0, PKT_DATA = 13572468

//

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt0_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x02 

/// ECH pdu_tag        : 0x00 

    0x00020000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0000000f,// 3 SCX   1 

    0x80404830,// 4 SCX   2 

    0x00006400,// 5 SCX   3 

    0xf0ce73c9,// 6 SCX   4 

    0xcbe306fc,// 7 SCX   5 

    0x4522f72b,// 8 SCX   6 

    0xf44c7cb9,// 9 SCX   7 

    0xa2e96778,// 10 SCX   8 

    0x7abd27f8,// 11 SCX   9 

    0xed2b6aaf,// 12 SCX  10 

    0xb42d8298,// 13 SCX  11 

    0x0351a08f,// 14 SCX  12 

    0xd2d33276,// 15 SCX  13 

    0x7f60edde,// 16 SCX  14 

    0x6e285a3a,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 1645 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 516 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 516 

/// BFD lencrypto      : 56 

/// BFD ofstcrypto     : 308 

/// BFD (ofst+len)cry  : 364 

/// BFD ofstiv         : 12 

/// BFD ofsticv        : 1168 

    0x00000204,// 18 BFD   1 

    0x01340038,// 19 BFD   2 

    0x0490000c,// 20 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : 14 

    0x1400bec3,// 21 MFM   1 

    0x1905f929,// 22 MFM   2 

    0xf6e44eee,// 23 MFM   3 

/// BDA is 413 words. 

/// BDA size     is 1645 (0x66d) 

/// BDA id       is 0xd8ea 

    0x066dd8ea,// 24 BDA   1 

/// PAY Generic Data size   : 1645 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x9caaa9d1,// 25 PAY   1 

    0x56560a7d,// 26 PAY   2 

    0xecf9af8d,// 27 PAY   3 

    0x435c473c,// 28 PAY   4 

    0x7cc37371,// 29 PAY   5 

    0xf5a3ae10,// 30 PAY   6 

    0xe4a09d20,// 31 PAY   7 

    0xbf1ca7f5,// 32 PAY   8 

    0xc12575ba,// 33 PAY   9 

    0x41eeb1be,// 34 PAY  10 

    0x8a31985b,// 35 PAY  11 

    0x451fbfdd,// 36 PAY  12 

    0x25d94f67,// 37 PAY  13 

    0xebb2bf6f,// 38 PAY  14 

    0xde846817,// 39 PAY  15 

    0xb77c883f,// 40 PAY  16 

    0x296d1675,// 41 PAY  17 

    0x9b1ac799,// 42 PAY  18 

    0xb0c36c3b,// 43 PAY  19 

    0x8552660b,// 44 PAY  20 

    0xe9b38d10,// 45 PAY  21 

    0xcc1f04f9,// 46 PAY  22 

    0xb7b39b3c,// 47 PAY  23 

    0xab437f85,// 48 PAY  24 

    0xdffc14cd,// 49 PAY  25 

    0x7d5428bc,// 50 PAY  26 

    0xe5b8bd4e,// 51 PAY  27 

    0x4aedc3ea,// 52 PAY  28 

    0xaac9fa9a,// 53 PAY  29 

    0x55cc8e81,// 54 PAY  30 

    0x854fd3b6,// 55 PAY  31 

    0x85d375e6,// 56 PAY  32 

    0x98f10b61,// 57 PAY  33 

    0x467cf6b9,// 58 PAY  34 

    0x553a1338,// 59 PAY  35 

    0x7e6fd9e8,// 60 PAY  36 

    0x4e3f5156,// 61 PAY  37 

    0xca53365b,// 62 PAY  38 

    0xc5023077,// 63 PAY  39 

    0xa1ad3c43,// 64 PAY  40 

    0xfea08e37,// 65 PAY  41 

    0xcaf74e80,// 66 PAY  42 

    0x9b430d50,// 67 PAY  43 

    0x159b20c0,// 68 PAY  44 

    0xa7ac5f96,// 69 PAY  45 

    0xac4c411f,// 70 PAY  46 

    0xe8ff3df2,// 71 PAY  47 

    0xe94a6099,// 72 PAY  48 

    0xc92ec1fa,// 73 PAY  49 

    0x3e515c4c,// 74 PAY  50 

    0x30a8c740,// 75 PAY  51 

    0xe9078e7d,// 76 PAY  52 

    0x63505f11,// 77 PAY  53 

    0x1fb0d0fe,// 78 PAY  54 

    0x527e936f,// 79 PAY  55 

    0x254ffed6,// 80 PAY  56 

    0xfcd843c0,// 81 PAY  57 

    0xd38a29b9,// 82 PAY  58 

    0xa411eecc,// 83 PAY  59 

    0x91d06375,// 84 PAY  60 

    0xeda283ac,// 85 PAY  61 

    0x288bb325,// 86 PAY  62 

    0xd2f420d4,// 87 PAY  63 

    0x6d15f938,// 88 PAY  64 

    0xe9890815,// 89 PAY  65 

    0x0b30a891,// 90 PAY  66 

    0xaea0c448,// 91 PAY  67 

    0xcd026436,// 92 PAY  68 

    0x39cabffd,// 93 PAY  69 

    0x4f915466,// 94 PAY  70 

    0x4a98d2b5,// 95 PAY  71 

    0xd53ffe78,// 96 PAY  72 

    0x4d4ce0b7,// 97 PAY  73 

    0x9263a1bc,// 98 PAY  74 

    0x83bfd807,// 99 PAY  75 

    0xd668acd9,// 100 PAY  76 

    0xa1dfeee0,// 101 PAY  77 

    0x47797ccc,// 102 PAY  78 

    0x2ae82066,// 103 PAY  79 

    0x70498127,// 104 PAY  80 

    0xa9dc9791,// 105 PAY  81 

    0x1e115a2a,// 106 PAY  82 

    0x40faf59c,// 107 PAY  83 

    0xe2849655,// 108 PAY  84 

    0xe8285fd6,// 109 PAY  85 

    0x250e619d,// 110 PAY  86 

    0xf4b434c5,// 111 PAY  87 

    0x6f3b2df8,// 112 PAY  88 

    0xc7749bbc,// 113 PAY  89 

    0x02f520a4,// 114 PAY  90 

    0xb95fb92b,// 115 PAY  91 

    0x60cc749f,// 116 PAY  92 

    0x266c2bed,// 117 PAY  93 

    0x6392a810,// 118 PAY  94 

    0xbb49567f,// 119 PAY  95 

    0x239a930d,// 120 PAY  96 

    0x4e8da708,// 121 PAY  97 

    0xf616c625,// 122 PAY  98 

    0x193afc8d,// 123 PAY  99 

    0x9ab60685,// 124 PAY 100 

    0x0afe614a,// 125 PAY 101 

    0x8e087dab,// 126 PAY 102 

    0xe474fd7a,// 127 PAY 103 

    0x038703bb,// 128 PAY 104 

    0xef0d0731,// 129 PAY 105 

    0x0a8ba17f,// 130 PAY 106 

    0x1bd34399,// 131 PAY 107 

    0xc7f468f9,// 132 PAY 108 

    0xe1d9d0e3,// 133 PAY 109 

    0xcd46a267,// 134 PAY 110 

    0x0f404a36,// 135 PAY 111 

    0xbb60dff6,// 136 PAY 112 

    0xbf3dcf6d,// 137 PAY 113 

    0x6aca2789,// 138 PAY 114 

    0x2a36b3a6,// 139 PAY 115 

    0x42590b53,// 140 PAY 116 

    0xf96d381f,// 141 PAY 117 

    0x4d3b6fa9,// 142 PAY 118 

    0x032e69c3,// 143 PAY 119 

    0xe0affc2a,// 144 PAY 120 

    0xf810cf77,// 145 PAY 121 

    0xde575894,// 146 PAY 122 

    0x007c207e,// 147 PAY 123 

    0xadff0e97,// 148 PAY 124 

    0x8c8071a3,// 149 PAY 125 

    0x65f15b16,// 150 PAY 126 

    0xcb2d9b11,// 151 PAY 127 

    0xbea8ea54,// 152 PAY 128 

    0xc92cb272,// 153 PAY 129 

    0xd3c2c591,// 154 PAY 130 

    0x4f4ddb75,// 155 PAY 131 

    0x3ad549cc,// 156 PAY 132 

    0xe16ea0f4,// 157 PAY 133 

    0x51511e69,// 158 PAY 134 

    0x540418b8,// 159 PAY 135 

    0x7c09d9f4,// 160 PAY 136 

    0xcb9322ae,// 161 PAY 137 

    0x2f7e880f,// 162 PAY 138 

    0x4509c98c,// 163 PAY 139 

    0xdaf8278f,// 164 PAY 140 

    0x114483ea,// 165 PAY 141 

    0x1d130ef7,// 166 PAY 142 

    0xd560849b,// 167 PAY 143 

    0x2a23a7c4,// 168 PAY 144 

    0x604db3df,// 169 PAY 145 

    0x193fb978,// 170 PAY 146 

    0x73d57336,// 171 PAY 147 

    0x2c47f3bb,// 172 PAY 148 

    0x48bed600,// 173 PAY 149 

    0xbf7543bf,// 174 PAY 150 

    0xa6bfddaf,// 175 PAY 151 

    0x8b1fee76,// 176 PAY 152 

    0xab64bac8,// 177 PAY 153 

    0xe108ee60,// 178 PAY 154 

    0xb96a069c,// 179 PAY 155 

    0xe083d68e,// 180 PAY 156 

    0x55ca5e32,// 181 PAY 157 

    0x3945fe08,// 182 PAY 158 

    0xe249ca01,// 183 PAY 159 

    0xda9c7866,// 184 PAY 160 

    0x5a7a4012,// 185 PAY 161 

    0xa1f8e879,// 186 PAY 162 

    0x490ec80f,// 187 PAY 163 

    0x232a812f,// 188 PAY 164 

    0xfcca31ea,// 189 PAY 165 

    0x207e564e,// 190 PAY 166 

    0xc321aa13,// 191 PAY 167 

    0x89977914,// 192 PAY 168 

    0xdf11482c,// 193 PAY 169 

    0x7dfdc86e,// 194 PAY 170 

    0x4a85847e,// 195 PAY 171 

    0x2857e8fe,// 196 PAY 172 

    0xbf8aba2b,// 197 PAY 173 

    0x27b444b1,// 198 PAY 174 

    0x32971315,// 199 PAY 175 

    0xf597a194,// 200 PAY 176 

    0xe3fd3323,// 201 PAY 177 

    0xea7405a5,// 202 PAY 178 

    0x3cd1d177,// 203 PAY 179 

    0xe43e1dec,// 204 PAY 180 

    0x66567923,// 205 PAY 181 

    0x1f391459,// 206 PAY 182 

    0xaf3aca9e,// 207 PAY 183 

    0xd55b0c01,// 208 PAY 184 

    0xf5d354f8,// 209 PAY 185 

    0x79ea0718,// 210 PAY 186 

    0x07cc7715,// 211 PAY 187 

    0x6d5bb49e,// 212 PAY 188 

    0x7ef91c86,// 213 PAY 189 

    0x5391bcee,// 214 PAY 190 

    0x3839e347,// 215 PAY 191 

    0xe15aa8e3,// 216 PAY 192 

    0x2dfd03c6,// 217 PAY 193 

    0xeced8a6e,// 218 PAY 194 

    0x91cd229e,// 219 PAY 195 

    0xeb56e2ce,// 220 PAY 196 

    0xbc4b0657,// 221 PAY 197 

    0x77376f0e,// 222 PAY 198 

    0x0ad5ea60,// 223 PAY 199 

    0xe5975db0,// 224 PAY 200 

    0xcef42566,// 225 PAY 201 

    0x9c80ed9f,// 226 PAY 202 

    0xc2224889,// 227 PAY 203 

    0x146de6eb,// 228 PAY 204 

    0x5ceaf887,// 229 PAY 205 

    0x3af488a0,// 230 PAY 206 

    0x62779917,// 231 PAY 207 

    0x9638d3c5,// 232 PAY 208 

    0x3b0aac70,// 233 PAY 209 

    0x495ef84a,// 234 PAY 210 

    0x330f3d92,// 235 PAY 211 

    0xc0f68c17,// 236 PAY 212 

    0x25c7698d,// 237 PAY 213 

    0xe8a1bc76,// 238 PAY 214 

    0x11210f6f,// 239 PAY 215 

    0x39673477,// 240 PAY 216 

    0xe130f1bc,// 241 PAY 217 

    0x44f4c914,// 242 PAY 218 

    0x8a59f261,// 243 PAY 219 

    0x7826dfa3,// 244 PAY 220 

    0x8cb68a3c,// 245 PAY 221 

    0x8b1e5805,// 246 PAY 222 

    0x40f8a296,// 247 PAY 223 

    0x659e264b,// 248 PAY 224 

    0x1ff48307,// 249 PAY 225 

    0x20cb2988,// 250 PAY 226 

    0xb1a5cd63,// 251 PAY 227 

    0x91fcec90,// 252 PAY 228 

    0x0fa89967,// 253 PAY 229 

    0x8e0e823b,// 254 PAY 230 

    0x91e20a25,// 255 PAY 231 

    0x28e1b865,// 256 PAY 232 

    0x16577c99,// 257 PAY 233 

    0x7a30459c,// 258 PAY 234 

    0x4d41a39e,// 259 PAY 235 

    0x5831450b,// 260 PAY 236 

    0x9209b601,// 261 PAY 237 

    0xebdd799b,// 262 PAY 238 

    0x2cdce2f4,// 263 PAY 239 

    0x212da149,// 264 PAY 240 

    0xfc471472,// 265 PAY 241 

    0x4c135ec6,// 266 PAY 242 

    0x1ea2b7cd,// 267 PAY 243 

    0x6f59ed36,// 268 PAY 244 

    0x293453ef,// 269 PAY 245 

    0x5147ed91,// 270 PAY 246 

    0xc8bb4a89,// 271 PAY 247 

    0xeccf8fa4,// 272 PAY 248 

    0x6e4692cc,// 273 PAY 249 

    0x14222b5f,// 274 PAY 250 

    0x879adf98,// 275 PAY 251 

    0x5b864acb,// 276 PAY 252 

    0x677eb837,// 277 PAY 253 

    0xd3022512,// 278 PAY 254 

    0x76808bac,// 279 PAY 255 

    0x75a71ea2,// 280 PAY 256 

    0x16ec67e4,// 281 PAY 257 

    0x9cbaeb6e,// 282 PAY 258 

    0x2c29cde5,// 283 PAY 259 

    0x0a6a2d86,// 284 PAY 260 

    0x17457a58,// 285 PAY 261 

    0xae35c179,// 286 PAY 262 

    0xe27cfdb2,// 287 PAY 263 

    0x04a802e2,// 288 PAY 264 

    0xeeb7f315,// 289 PAY 265 

    0x97aa9da8,// 290 PAY 266 

    0x58f271ed,// 291 PAY 267 

    0x27529deb,// 292 PAY 268 

    0xb5af5fea,// 293 PAY 269 

    0x2acec009,// 294 PAY 270 

    0xdf95f0ee,// 295 PAY 271 

    0xfec5364d,// 296 PAY 272 

    0x5218ef57,// 297 PAY 273 

    0x60b9f744,// 298 PAY 274 

    0xf4ff0229,// 299 PAY 275 

    0x764d4449,// 300 PAY 276 

    0x7ef3bce8,// 301 PAY 277 

    0x4b434b0e,// 302 PAY 278 

    0x6c80e725,// 303 PAY 279 

    0xf99c0627,// 304 PAY 280 

    0x7ee95ef0,// 305 PAY 281 

    0xc8d1f6a2,// 306 PAY 282 

    0x891492df,// 307 PAY 283 

    0x3cc9d2dd,// 308 PAY 284 

    0x86aad98f,// 309 PAY 285 

    0x3c9b623d,// 310 PAY 286 

    0x8115d771,// 311 PAY 287 

    0x105e316b,// 312 PAY 288 

    0x7c0d5a72,// 313 PAY 289 

    0x3c9af809,// 314 PAY 290 

    0xaaeeee37,// 315 PAY 291 

    0xde7cd786,// 316 PAY 292 

    0x011b5577,// 317 PAY 293 

    0xfdcb7e33,// 318 PAY 294 

    0x49446b81,// 319 PAY 295 

    0xdca09b8f,// 320 PAY 296 

    0x57409123,// 321 PAY 297 

    0x03da37d1,// 322 PAY 298 

    0x0e60be95,// 323 PAY 299 

    0xe8ba99fa,// 324 PAY 300 

    0xc630f062,// 325 PAY 301 

    0xb1d0962c,// 326 PAY 302 

    0x99c7e004,// 327 PAY 303 

    0x6e495e6c,// 328 PAY 304 

    0x3d17b67c,// 329 PAY 305 

    0xd48aaf48,// 330 PAY 306 

    0x4202a338,// 331 PAY 307 

    0xcc409839,// 332 PAY 308 

    0x0062d662,// 333 PAY 309 

    0xf2122129,// 334 PAY 310 

    0x57055f80,// 335 PAY 311 

    0x8ed1b0b4,// 336 PAY 312 

    0x866c3350,// 337 PAY 313 

    0x2c785890,// 338 PAY 314 

    0xb73543c1,// 339 PAY 315 

    0x5269cfe9,// 340 PAY 316 

    0x1f83b2a7,// 341 PAY 317 

    0x29855876,// 342 PAY 318 

    0x95bac161,// 343 PAY 319 

    0x3ab8e012,// 344 PAY 320 

    0xffc7c48a,// 345 PAY 321 

    0xe52e92c9,// 346 PAY 322 

    0xdfd79d1c,// 347 PAY 323 

    0x2b5f3034,// 348 PAY 324 

    0xba0d38ff,// 349 PAY 325 

    0x5dc6ec91,// 350 PAY 326 

    0x8a5d3d7e,// 351 PAY 327 

    0x5e790f66,// 352 PAY 328 

    0xaaadb239,// 353 PAY 329 

    0xcf4d6522,// 354 PAY 330 

    0x2c33f917,// 355 PAY 331 

    0x9ffa0797,// 356 PAY 332 

    0x27b0d393,// 357 PAY 333 

    0xb27ac7a6,// 358 PAY 334 

    0xda5b8699,// 359 PAY 335 

    0xb138cfed,// 360 PAY 336 

    0x8ed7fe8c,// 361 PAY 337 

    0xa173552d,// 362 PAY 338 

    0x30416447,// 363 PAY 339 

    0x06543a03,// 364 PAY 340 

    0x04e6db3f,// 365 PAY 341 

    0x9cb331c3,// 366 PAY 342 

    0xf22f7982,// 367 PAY 343 

    0xe92edae2,// 368 PAY 344 

    0xda842fdd,// 369 PAY 345 

    0x2eb0749b,// 370 PAY 346 

    0xa6fbdc72,// 371 PAY 347 

    0x14e6a943,// 372 PAY 348 

    0x23377791,// 373 PAY 349 

    0xf6001646,// 374 PAY 350 

    0xdb5d4ca7,// 375 PAY 351 

    0xe0850674,// 376 PAY 352 

    0xaa7d2992,// 377 PAY 353 

    0x4ee0b50a,// 378 PAY 354 

    0x76f712f3,// 379 PAY 355 

    0x2c042901,// 380 PAY 356 

    0x780e21f0,// 381 PAY 357 

    0xa9d78b36,// 382 PAY 358 

    0xb44dab84,// 383 PAY 359 

    0x147fc8db,// 384 PAY 360 

    0x7f30e5ea,// 385 PAY 361 

    0x70dbb1eb,// 386 PAY 362 

    0x8d037b5a,// 387 PAY 363 

    0xc3036285,// 388 PAY 364 

    0x5011ac70,// 389 PAY 365 

    0x97b49f8a,// 390 PAY 366 

    0xacbd1b25,// 391 PAY 367 

    0x0a5e39de,// 392 PAY 368 

    0xe7d4e714,// 393 PAY 369 

    0x325cdffe,// 394 PAY 370 

    0x2dfe549c,// 395 PAY 371 

    0x8da7f049,// 396 PAY 372 

    0xe54bb19e,// 397 PAY 373 

    0x11244340,// 398 PAY 374 

    0x83699047,// 399 PAY 375 

    0x8f2080c9,// 400 PAY 376 

    0xd880eaea,// 401 PAY 377 

    0x2d44c2d0,// 402 PAY 378 

    0x950d2852,// 403 PAY 379 

    0xe5db731d,// 404 PAY 380 

    0x6b7aba32,// 405 PAY 381 

    0xb5d07048,// 406 PAY 382 

    0x02b83dec,// 407 PAY 383 

    0x0e383250,// 408 PAY 384 

    0x893d8aef,// 409 PAY 385 

    0x595ff34c,// 410 PAY 386 

    0x4a86352a,// 411 PAY 387 

    0x350fff2d,// 412 PAY 388 

    0xc061cf16,// 413 PAY 389 

    0x1cc82520,// 414 PAY 390 

    0x2fd25313,// 415 PAY 391 

    0xa06bf3e0,// 416 PAY 392 

    0x8a9e7cee,// 417 PAY 393 

    0x61bf5d48,// 418 PAY 394 

    0xb5d489af,// 419 PAY 395 

    0xb39e1e3e,// 420 PAY 396 

    0xe1e750ef,// 421 PAY 397 

    0xcdd2f34c,// 422 PAY 398 

    0x2b2559bd,// 423 PAY 399 

    0x12689cb1,// 424 PAY 400 

    0x33907a2e,// 425 PAY 401 

    0xd8fa4a4c,// 426 PAY 402 

    0x32d31a5e,// 427 PAY 403 

    0xacf37c3a,// 428 PAY 404 

    0xc8c7fed5,// 429 PAY 405 

    0xe5fe1f02,// 430 PAY 406 

    0xde59f3c2,// 431 PAY 407 

    0xbe144662,// 432 PAY 408 

    0xa03e3e57,// 433 PAY 409 

    0x52b5d7e7,// 434 PAY 410 

    0x76d48e66,// 435 PAY 411 

    0x10000000,// 436 PAY 412 

/// STA is 1 words. 

/// STA num_pkts       : 99 

/// STA pkt_idx        : 152 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x93 

    0x02609363 // 437 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt1_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x0b 

/// ECH pdu_tag        : 0x00 

    0x000b0000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0800000f,// 3 SCX   1 

    0x80404853,// 4 SCX   2 

    0x00001200,// 5 SCX   3 

    0x6eb407cd,// 6 SCX   4 

    0xd45102f5,// 7 SCX   5 

    0xacf6c415,// 8 SCX   6 

    0x9ee15e1e,// 9 SCX   7 

    0xff1433f1,// 10 SCX   8 

    0x20d82a7e,// 11 SCX   9 

    0x6d5a7f70,// 12 SCX  10 

    0x430751cf,// 13 SCX  11 

    0xbf1bac8e,// 14 SCX  12 

    0x05caa7d4,// 15 SCX  13 

    0xf3e7bf7f,// 16 SCX  14 

    0x2f28f5ef,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 277 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 164 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 164 

/// BFD lencrypto      : 24 

/// BFD ofstcrypto     : 136 

/// BFD (ofst+len)cry  : 160 

/// BFD ofstiv         : 88 

/// BFD ofsticv        : 256 

    0x000000a4,// 18 BFD   1 

    0x00880018,// 19 BFD   2 

    0x01000058,// 20 BFD   3 

/// MFM is 1 words. 

/// MFM vldnibs        : 3 

    0x0300a1d0,// 21 MFM   1 

/// BDA is 71 words. 

/// BDA size     is 277 (0x115) 

/// BDA id       is 0x3d82 

    0x01153d82,// 22 BDA   1 

/// PAY Generic Data size   : 277 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x006bf034,// 23 PAY   1 

    0x36e61533,// 24 PAY   2 

    0x22bc3fec,// 25 PAY   3 

    0x5c27acd3,// 26 PAY   4 

    0xcadc5c10,// 27 PAY   5 

    0xfdd6f2f6,// 28 PAY   6 

    0x4baf7b94,// 29 PAY   7 

    0x5ccb75a7,// 30 PAY   8 

    0x28498b09,// 31 PAY   9 

    0xcfeb6091,// 32 PAY  10 

    0xd3015900,// 33 PAY  11 

    0x532f2430,// 34 PAY  12 

    0x545e58f7,// 35 PAY  13 

    0xa780d561,// 36 PAY  14 

    0x560cda6e,// 37 PAY  15 

    0x64a08e6b,// 38 PAY  16 

    0x08eeb9b3,// 39 PAY  17 

    0xd412aee6,// 40 PAY  18 

    0xb98d6995,// 41 PAY  19 

    0xc5427b4a,// 42 PAY  20 

    0x0b8e7c61,// 43 PAY  21 

    0x81a19e15,// 44 PAY  22 

    0xcd8737ca,// 45 PAY  23 

    0x7dd3b29d,// 46 PAY  24 

    0xd01a8d76,// 47 PAY  25 

    0x4de7d99b,// 48 PAY  26 

    0x5d25bcd7,// 49 PAY  27 

    0x792ef098,// 50 PAY  28 

    0x7ea2f522,// 51 PAY  29 

    0xc058ed06,// 52 PAY  30 

    0xc67f5b78,// 53 PAY  31 

    0x23c7d5e2,// 54 PAY  32 

    0x0f73bc6a,// 55 PAY  33 

    0x1fc1624c,// 56 PAY  34 

    0xbdfc8688,// 57 PAY  35 

    0x20c752ff,// 58 PAY  36 

    0x9d3c2bc7,// 59 PAY  37 

    0x1c69ab59,// 60 PAY  38 

    0x21c3a518,// 61 PAY  39 

    0x0ea9228b,// 62 PAY  40 

    0xd327139c,// 63 PAY  41 

    0x03902048,// 64 PAY  42 

    0x1cb7be68,// 65 PAY  43 

    0x533b8f90,// 66 PAY  44 

    0x517f8995,// 67 PAY  45 

    0x7fb36c5c,// 68 PAY  46 

    0xc617abdf,// 69 PAY  47 

    0x59938007,// 70 PAY  48 

    0x3af43e7c,// 71 PAY  49 

    0x7cebc9bc,// 72 PAY  50 

    0xa2aec587,// 73 PAY  51 

    0x76e41f7d,// 74 PAY  52 

    0xa5a9d092,// 75 PAY  53 

    0xdf91dd00,// 76 PAY  54 

    0x7a13b635,// 77 PAY  55 

    0x92ddb002,// 78 PAY  56 

    0x605f21fb,// 79 PAY  57 

    0x04b77c9b,// 80 PAY  58 

    0xd689cd26,// 81 PAY  59 

    0x4ee41a27,// 82 PAY  60 

    0x083e58c5,// 83 PAY  61 

    0xf96b0632,// 84 PAY  62 

    0xd89ac72d,// 85 PAY  63 

    0x545d3eed,// 86 PAY  64 

    0xde123558,// 87 PAY  65 

    0x4a056fd4,// 88 PAY  66 

    0xeeb6e7a3,// 89 PAY  67 

    0xf1420dc2,// 90 PAY  68 

    0x60146676,// 91 PAY  69 

    0xf0000000,// 92 PAY  70 

/// STA is 1 words. 

/// STA num_pkts       : 178 

/// STA pkt_idx        : 98 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x80 

    0x018880b2 // 93 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt2_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x02 

/// ECH pdu_tag        : 0x00 

    0x00020000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0000000f,// 3 SCX   1 

    0x80404860,// 4 SCX   2 

    0x00005300,// 5 SCX   3 

    0xd4b3b33c,// 6 SCX   4 

    0xf9e241f1,// 7 SCX   5 

    0x8decd16d,// 8 SCX   6 

    0x96f87d47,// 9 SCX   7 

    0x7644a376,// 10 SCX   8 

    0xb743db68,// 11 SCX   9 

    0xe86ccc55,// 12 SCX  10 

    0xff18914a,// 13 SCX  11 

    0x333d4184,// 14 SCX  12 

    0xce82bfc8,// 15 SCX  13 

    0x4880cc3f,// 16 SCX  14 

    0xa09d30bf,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 592 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 360 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 360 

/// BFD lencrypto      : 288 

/// BFD ofstcrypto     : 68 

/// BFD (ofst+len)cry  : 356 

/// BFD ofstiv         : 36 

/// BFD ofsticv        : 500 

    0x00000168,// 18 BFD   1 

    0x00440120,// 19 BFD   2 

    0x01f40024,// 20 BFD   3 

/// MFM is 11 words. 

/// MFM vldnibs        : 52 

    0x52003157,// 21 MFM   1 

    0x76a991ce,// 22 MFM   2 

    0x458bf0d7,// 23 MFM   3 

    0x862d8655,// 24 MFM   4 

    0xe19e2487,// 25 MFM   5 

    0x8576a3e1,// 26 MFM   6 

    0x5c2145f6,// 27 MFM   7 

    0x3ac8eb14,// 28 MFM   8 

    0x6452cff7,// 29 MFM   9 

    0x9a9dfc4a,// 30 MFM  10 

    0x3a281f00,// 31 MFM  11 

/// BDA is 149 words. 

/// BDA size     is 592 (0x250) 

/// BDA id       is 0xb49d 

    0x0250b49d,// 32 BDA   1 

/// PAY Generic Data size   : 592 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x77f29563,// 33 PAY   1 

    0x5a0cbf1d,// 34 PAY   2 

    0xf5cd007c,// 35 PAY   3 

    0xc72a5e6a,// 36 PAY   4 

    0xfc9c85d5,// 37 PAY   5 

    0x26942087,// 38 PAY   6 

    0xfb3b5286,// 39 PAY   7 

    0x56fa3df1,// 40 PAY   8 

    0xb4f0fef8,// 41 PAY   9 

    0x45c876bb,// 42 PAY  10 

    0xe6bb8807,// 43 PAY  11 

    0x9455c8a9,// 44 PAY  12 

    0x4e237977,// 45 PAY  13 

    0x8e84ed67,// 46 PAY  14 

    0xd5e6e7a1,// 47 PAY  15 

    0xb6c4dc8b,// 48 PAY  16 

    0x4f790bd6,// 49 PAY  17 

    0x6d4c3096,// 50 PAY  18 

    0x2f053cd9,// 51 PAY  19 

    0x7efb16c8,// 52 PAY  20 

    0x6c356a02,// 53 PAY  21 

    0x3028974a,// 54 PAY  22 

    0x225962b9,// 55 PAY  23 

    0x820f4f4b,// 56 PAY  24 

    0x1db02a51,// 57 PAY  25 

    0x4651cb93,// 58 PAY  26 

    0x9607d313,// 59 PAY  27 

    0x1cc4092d,// 60 PAY  28 

    0xb34a3982,// 61 PAY  29 

    0x272e332e,// 62 PAY  30 

    0x3550aea6,// 63 PAY  31 

    0x00200117,// 64 PAY  32 

    0xf796e7cd,// 65 PAY  33 

    0x9091674b,// 66 PAY  34 

    0xe91221f9,// 67 PAY  35 

    0x5042bcbd,// 68 PAY  36 

    0x69cc80ea,// 69 PAY  37 

    0x39620c8b,// 70 PAY  38 

    0xb40bb141,// 71 PAY  39 

    0xf3cf7cba,// 72 PAY  40 

    0xf3b1c587,// 73 PAY  41 

    0xb50166b9,// 74 PAY  42 

    0xea7fec0e,// 75 PAY  43 

    0xe309afc3,// 76 PAY  44 

    0x1cebc50b,// 77 PAY  45 

    0xc508939c,// 78 PAY  46 

    0xd953504b,// 79 PAY  47 

    0x6ce22375,// 80 PAY  48 

    0x1ab1b252,// 81 PAY  49 

    0x4e72bd4d,// 82 PAY  50 

    0xa9242ec4,// 83 PAY  51 

    0x4b1a0c32,// 84 PAY  52 

    0xf2943efc,// 85 PAY  53 

    0x7fb09663,// 86 PAY  54 

    0x5e665d65,// 87 PAY  55 

    0x61c9a4ae,// 88 PAY  56 

    0x1b450906,// 89 PAY  57 

    0xf87928e3,// 90 PAY  58 

    0x2bc9b3bf,// 91 PAY  59 

    0x5668899d,// 92 PAY  60 

    0xff6bebec,// 93 PAY  61 

    0xe1373dd4,// 94 PAY  62 

    0x73bb4e35,// 95 PAY  63 

    0xa7b2a639,// 96 PAY  64 

    0x867e99d7,// 97 PAY  65 

    0xfdb128fe,// 98 PAY  66 

    0x66dc4ce5,// 99 PAY  67 

    0xf38228b3,// 100 PAY  68 

    0xf3dbc627,// 101 PAY  69 

    0xb9d70b10,// 102 PAY  70 

    0x45e35a8a,// 103 PAY  71 

    0xff6760cd,// 104 PAY  72 

    0x81a8577b,// 105 PAY  73 

    0xe226aa47,// 106 PAY  74 

    0xb80ef1cc,// 107 PAY  75 

    0x5469d613,// 108 PAY  76 

    0x03de1c08,// 109 PAY  77 

    0x4f39e1ce,// 110 PAY  78 

    0x5f16dbd8,// 111 PAY  79 

    0x19ee8551,// 112 PAY  80 

    0x720d0042,// 113 PAY  81 

    0x238154c2,// 114 PAY  82 

    0x93ab93ff,// 115 PAY  83 

    0x833583a2,// 116 PAY  84 

    0x09016db9,// 117 PAY  85 

    0xe1c01c87,// 118 PAY  86 

    0xd0be72fe,// 119 PAY  87 

    0x2c4b0326,// 120 PAY  88 

    0x2cf5fc95,// 121 PAY  89 

    0x3e058496,// 122 PAY  90 

    0xe4949e46,// 123 PAY  91 

    0xe71c4610,// 124 PAY  92 

    0x978564b0,// 125 PAY  93 

    0x71c4d072,// 126 PAY  94 

    0x598d7451,// 127 PAY  95 

    0x2c4d7beb,// 128 PAY  96 

    0xa8788caf,// 129 PAY  97 

    0x29a03f10,// 130 PAY  98 

    0x8a9be6c7,// 131 PAY  99 

    0x9b8e1585,// 132 PAY 100 

    0xd4bb5a96,// 133 PAY 101 

    0xee3bc58e,// 134 PAY 102 

    0x77f3c5a5,// 135 PAY 103 

    0x56738ab0,// 136 PAY 104 

    0x979aee5a,// 137 PAY 105 

    0xb97c6089,// 138 PAY 106 

    0x1b853d14,// 139 PAY 107 

    0xbd844109,// 140 PAY 108 

    0x264a05f6,// 141 PAY 109 

    0x13009385,// 142 PAY 110 

    0x7c55dd44,// 143 PAY 111 

    0xbd731af6,// 144 PAY 112 

    0xf43e93f9,// 145 PAY 113 

    0x503303df,// 146 PAY 114 

    0x1874ce3f,// 147 PAY 115 

    0x383f4ac8,// 148 PAY 116 

    0xcc76c488,// 149 PAY 117 

    0x22e9368c,// 150 PAY 118 

    0x75f22075,// 151 PAY 119 

    0x5d9ba284,// 152 PAY 120 

    0xe31e8feb,// 153 PAY 121 

    0xb0259a6c,// 154 PAY 122 

    0x1d8ecda5,// 155 PAY 123 

    0xb5373dea,// 156 PAY 124 

    0x5332e9ae,// 157 PAY 125 

    0x64e92d30,// 158 PAY 126 

    0x76b073cd,// 159 PAY 127 

    0xd45bba02,// 160 PAY 128 

    0xbae5452a,// 161 PAY 129 

    0x0bb58c2d,// 162 PAY 130 

    0x56cc303e,// 163 PAY 131 

    0x2ce6a6c2,// 164 PAY 132 

    0xb162a135,// 165 PAY 133 

    0xefa0ed66,// 166 PAY 134 

    0xc3522e3e,// 167 PAY 135 

    0x05e25ce3,// 168 PAY 136 

    0xcb2f748b,// 169 PAY 137 

    0xd237ae06,// 170 PAY 138 

    0x909d1255,// 171 PAY 139 

    0xef8beff6,// 172 PAY 140 

    0x2e6ad892,// 173 PAY 141 

    0xcd1e459c,// 174 PAY 142 

    0xdf74e905,// 175 PAY 143 

    0x45d6c4eb,// 176 PAY 144 

    0xd94ee7cf,// 177 PAY 145 

    0x9c67cc94,// 178 PAY 146 

    0xa7ad4014,// 179 PAY 147 

    0xb31e419f,// 180 PAY 148 

/// STA is 1 words. 

/// STA num_pkts       : 74 

/// STA pkt_idx        : 189 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xe9 

    0x02f5e94a // 181 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt3_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x09 

/// ECH pdu_tag        : 0x00 

    0x00090000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv !check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x08000011,// 3 SCX   1 

    0x804648c1,// 4 SCX   2 

    0x00004282,// 5 SCX   3 

    0xe6aa0b24,// 6 SCX   4 

    0x83be153d,// 7 SCX   5 

    0xab049046,// 8 SCX   6 

    0xdd485063,// 9 SCX   7 

    0x2c65f334,// 10 SCX   8 

    0x1f1062a2,// 11 SCX   9 

    0xfb27e466,// 12 SCX  10 

    0x2f534b8f,// 13 SCX  11 

    0x6f66ce36,// 14 SCX  12 

    0x9a32ffc5,// 15 SCX  13 

    0x7c2c3967,// 16 SCX  14 

    0xfd801a6f,// 17 SCX  15 

    0x05926dd5,// 18 SCX  16 

    0x53213ce6,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1877 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 753 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 753 

/// BFD lencrypto      : 304 

/// BFD ofstcrypto     : 360 

/// BFD (ofst+len)cry  : 664 

/// BFD ofstiv         : 224 

/// BFD ofsticv        : 1536 

    0x000002f1,// 20 BFD   1 

    0x01680130,// 21 BFD   2 

    0x060000e0,// 22 BFD   3 

/// MFM is 1 words. 

/// MFM vldnibs        : 4 

    0x0400feec,// 23 MFM   1 

/// BDA is 471 words. 

/// BDA size     is 1877 (0x755) 

/// BDA id       is 0x61e 

    0x0755061e,// 24 BDA   1 

/// PAY Generic Data size   : 1877 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x8d01eebf,// 25 PAY   1 

    0x46615a4d,// 26 PAY   2 

    0x4d43d717,// 27 PAY   3 

    0x55e1a86b,// 28 PAY   4 

    0xbd727c05,// 29 PAY   5 

    0x28997dd3,// 30 PAY   6 

    0x663865eb,// 31 PAY   7 

    0x029feb98,// 32 PAY   8 

    0x4551aa6e,// 33 PAY   9 

    0x194c2063,// 34 PAY  10 

    0xd5ec8ba1,// 35 PAY  11 

    0x050faccd,// 36 PAY  12 

    0xfad5fde8,// 37 PAY  13 

    0x9d195c09,// 38 PAY  14 

    0x333d1bd5,// 39 PAY  15 

    0x434c6783,// 40 PAY  16 

    0x77359b7b,// 41 PAY  17 

    0x3a7743c8,// 42 PAY  18 

    0xeab1a016,// 43 PAY  19 

    0xfaee1e83,// 44 PAY  20 

    0x9ed7f0de,// 45 PAY  21 

    0x6cecb079,// 46 PAY  22 

    0x0eda7bab,// 47 PAY  23 

    0x6864bf6a,// 48 PAY  24 

    0x1b969e38,// 49 PAY  25 

    0x462341ba,// 50 PAY  26 

    0x9e345193,// 51 PAY  27 

    0xdaeb34b7,// 52 PAY  28 

    0xa914fbf6,// 53 PAY  29 

    0xfc457b2d,// 54 PAY  30 

    0xdcaec82a,// 55 PAY  31 

    0x70490899,// 56 PAY  32 

    0x2e0b255b,// 57 PAY  33 

    0x6ec5bf8d,// 58 PAY  34 

    0xd03697f4,// 59 PAY  35 

    0xc2e93989,// 60 PAY  36 

    0x6092ae26,// 61 PAY  37 

    0x9984f0fc,// 62 PAY  38 

    0x2fa00e71,// 63 PAY  39 

    0xd1e9c83d,// 64 PAY  40 

    0x1d7a8d9f,// 65 PAY  41 

    0x561d63d3,// 66 PAY  42 

    0x22c8b604,// 67 PAY  43 

    0x6df47677,// 68 PAY  44 

    0x2e50dd9b,// 69 PAY  45 

    0xdda5ff8b,// 70 PAY  46 

    0x649a68a5,// 71 PAY  47 

    0xc97dca0b,// 72 PAY  48 

    0x5aff7f83,// 73 PAY  49 

    0x9f26976a,// 74 PAY  50 

    0x3076dec7,// 75 PAY  51 

    0x8fef599a,// 76 PAY  52 

    0x968dfdb1,// 77 PAY  53 

    0xda9aaf93,// 78 PAY  54 

    0x39996dfc,// 79 PAY  55 

    0x7b0c5cc1,// 80 PAY  56 

    0x3f32532b,// 81 PAY  57 

    0x6687c8e2,// 82 PAY  58 

    0xd140f34c,// 83 PAY  59 

    0xb575ed9c,// 84 PAY  60 

    0xd5a8c884,// 85 PAY  61 

    0xc909a88a,// 86 PAY  62 

    0x68a3d654,// 87 PAY  63 

    0xa9894a52,// 88 PAY  64 

    0xd766a30b,// 89 PAY  65 

    0xb6f28bf2,// 90 PAY  66 

    0x51b96760,// 91 PAY  67 

    0x90e7c55c,// 92 PAY  68 

    0xad423119,// 93 PAY  69 

    0x2cd9e26b,// 94 PAY  70 

    0xb6850d76,// 95 PAY  71 

    0x61d620c1,// 96 PAY  72 

    0x6e7b4edc,// 97 PAY  73 

    0x57344172,// 98 PAY  74 

    0x4d047828,// 99 PAY  75 

    0x6bc098e7,// 100 PAY  76 

    0xecd52ab6,// 101 PAY  77 

    0x64442b51,// 102 PAY  78 

    0xeb5545c0,// 103 PAY  79 

    0x7699a726,// 104 PAY  80 

    0xdc81ede5,// 105 PAY  81 

    0xaaa7cb0b,// 106 PAY  82 

    0xfee2cf9b,// 107 PAY  83 

    0x26bc2837,// 108 PAY  84 

    0x471dfa1d,// 109 PAY  85 

    0x36d22c0b,// 110 PAY  86 

    0xdea50b30,// 111 PAY  87 

    0xb0166f2d,// 112 PAY  88 

    0xf8fb0a8c,// 113 PAY  89 

    0xbb41fc45,// 114 PAY  90 

    0x027445ca,// 115 PAY  91 

    0x6450e40a,// 116 PAY  92 

    0x8f3948ef,// 117 PAY  93 

    0xcfde52ed,// 118 PAY  94 

    0x9effb486,// 119 PAY  95 

    0xdaf1a97c,// 120 PAY  96 

    0x1d17e534,// 121 PAY  97 

    0xec05cdb9,// 122 PAY  98 

    0x07516bdf,// 123 PAY  99 

    0x91285aa8,// 124 PAY 100 

    0xa9e5f18d,// 125 PAY 101 

    0x43f0f78a,// 126 PAY 102 

    0x19ece301,// 127 PAY 103 

    0xa7b4aa42,// 128 PAY 104 

    0x299c3f84,// 129 PAY 105 

    0x226d26b9,// 130 PAY 106 

    0xff9f5473,// 131 PAY 107 

    0xf239b289,// 132 PAY 108 

    0xe48fc8f0,// 133 PAY 109 

    0xf3f347f9,// 134 PAY 110 

    0xada29998,// 135 PAY 111 

    0x47eab6cb,// 136 PAY 112 

    0x96768c92,// 137 PAY 113 

    0x071763f1,// 138 PAY 114 

    0x71405b68,// 139 PAY 115 

    0x86207870,// 140 PAY 116 

    0x0040c36f,// 141 PAY 117 

    0xf3be317f,// 142 PAY 118 

    0x7ec24e9a,// 143 PAY 119 

    0x6f5266d8,// 144 PAY 120 

    0x3f40b691,// 145 PAY 121 

    0x6ca22153,// 146 PAY 122 

    0x9c179d2c,// 147 PAY 123 

    0xf8a9adfd,// 148 PAY 124 

    0xa03ba1a1,// 149 PAY 125 

    0x530dafcb,// 150 PAY 126 

    0x735bc64b,// 151 PAY 127 

    0x6af72e2c,// 152 PAY 128 

    0xf12e1a2b,// 153 PAY 129 

    0x6724b6df,// 154 PAY 130 

    0x5e0d4635,// 155 PAY 131 

    0x652f60a5,// 156 PAY 132 

    0xc27743cc,// 157 PAY 133 

    0x1d958bda,// 158 PAY 134 

    0xf30ef3ab,// 159 PAY 135 

    0x39ed0c67,// 160 PAY 136 

    0xb8beaf10,// 161 PAY 137 

    0x4a742d1f,// 162 PAY 138 

    0xfa21e3dd,// 163 PAY 139 

    0xa58712f9,// 164 PAY 140 

    0x281778a7,// 165 PAY 141 

    0xf08d3358,// 166 PAY 142 

    0x3cc7a674,// 167 PAY 143 

    0xa2eda67a,// 168 PAY 144 

    0x97a7c8e9,// 169 PAY 145 

    0xf965dd47,// 170 PAY 146 

    0xdcd94eb9,// 171 PAY 147 

    0xda6130bb,// 172 PAY 148 

    0xb13e4df1,// 173 PAY 149 

    0x2e3be83f,// 174 PAY 150 

    0xbff104f8,// 175 PAY 151 

    0xdff8347e,// 176 PAY 152 

    0x70951f04,// 177 PAY 153 

    0xdd130d61,// 178 PAY 154 

    0x69b99124,// 179 PAY 155 

    0x2f1d4ab2,// 180 PAY 156 

    0x4df349e5,// 181 PAY 157 

    0xe0a131db,// 182 PAY 158 

    0xffd5872e,// 183 PAY 159 

    0xafd53814,// 184 PAY 160 

    0x59babbe1,// 185 PAY 161 

    0x0aebfa6e,// 186 PAY 162 

    0x53d6909b,// 187 PAY 163 

    0x8910a952,// 188 PAY 164 

    0x0b9525da,// 189 PAY 165 

    0x07849da0,// 190 PAY 166 

    0x49a25a9e,// 191 PAY 167 

    0x850f33f1,// 192 PAY 168 

    0x2ded73b5,// 193 PAY 169 

    0xf9abedd5,// 194 PAY 170 

    0x8bf446ce,// 195 PAY 171 

    0xa42c1fc1,// 196 PAY 172 

    0x25a84981,// 197 PAY 173 

    0x5bbb94b7,// 198 PAY 174 

    0x43f28df3,// 199 PAY 175 

    0x8617cae2,// 200 PAY 176 

    0x779c042c,// 201 PAY 177 

    0x027ce365,// 202 PAY 178 

    0x429be128,// 203 PAY 179 

    0x9c9e4975,// 204 PAY 180 

    0x6fdc8891,// 205 PAY 181 

    0x575a9b39,// 206 PAY 182 

    0xe267e582,// 207 PAY 183 

    0xd4492ee9,// 208 PAY 184 

    0xa30a1df4,// 209 PAY 185 

    0x1f1ef35e,// 210 PAY 186 

    0xbfa5559e,// 211 PAY 187 

    0x28e16bb6,// 212 PAY 188 

    0x24ce19ee,// 213 PAY 189 

    0xffd21990,// 214 PAY 190 

    0x07cbd5ec,// 215 PAY 191 

    0x429a3cd4,// 216 PAY 192 

    0x8f6a2dec,// 217 PAY 193 

    0xdf5b685b,// 218 PAY 194 

    0x87de9fe1,// 219 PAY 195 

    0x82fe3002,// 220 PAY 196 

    0x001ff3a5,// 221 PAY 197 

    0xc718b5df,// 222 PAY 198 

    0x740d2bc8,// 223 PAY 199 

    0x8c10ca4f,// 224 PAY 200 

    0x8a4cda41,// 225 PAY 201 

    0xe16fb23a,// 226 PAY 202 

    0xab2881d8,// 227 PAY 203 

    0xdf26d1ce,// 228 PAY 204 

    0xba6b99f0,// 229 PAY 205 

    0x67d80176,// 230 PAY 206 

    0x4ffd6f48,// 231 PAY 207 

    0x08844072,// 232 PAY 208 

    0xe477d365,// 233 PAY 209 

    0xd1ce729b,// 234 PAY 210 

    0xe7594d13,// 235 PAY 211 

    0xe588b38b,// 236 PAY 212 

    0xdb1d5193,// 237 PAY 213 

    0x6a141d8e,// 238 PAY 214 

    0xc9f07ada,// 239 PAY 215 

    0xf360ff9b,// 240 PAY 216 

    0x42b7a873,// 241 PAY 217 

    0x3dbe9115,// 242 PAY 218 

    0x80388e31,// 243 PAY 219 

    0x41ba948c,// 244 PAY 220 

    0xcdeeebcd,// 245 PAY 221 

    0xf133eab7,// 246 PAY 222 

    0x65d3afec,// 247 PAY 223 

    0x08904ca2,// 248 PAY 224 

    0xe2651d1f,// 249 PAY 225 

    0x3c0b330d,// 250 PAY 226 

    0x7a5bcc02,// 251 PAY 227 

    0xefa7a2eb,// 252 PAY 228 

    0x13a5184a,// 253 PAY 229 

    0x424677f3,// 254 PAY 230 

    0xd7ff66be,// 255 PAY 231 

    0x2e1214d1,// 256 PAY 232 

    0x28424067,// 257 PAY 233 

    0xc40ad686,// 258 PAY 234 

    0x4edbc7fe,// 259 PAY 235 

    0xea40444c,// 260 PAY 236 

    0x3a306a50,// 261 PAY 237 

    0x223c5b65,// 262 PAY 238 

    0x0f53ca48,// 263 PAY 239 

    0xb31c3a0c,// 264 PAY 240 

    0xf956e4f7,// 265 PAY 241 

    0xfc915dbe,// 266 PAY 242 

    0x26b1806d,// 267 PAY 243 

    0x387ce920,// 268 PAY 244 

    0xbe2cbc08,// 269 PAY 245 

    0x95d4df41,// 270 PAY 246 

    0x51e3e93f,// 271 PAY 247 

    0x047e7a32,// 272 PAY 248 

    0xf3a702db,// 273 PAY 249 

    0x76392907,// 274 PAY 250 

    0x94207bf7,// 275 PAY 251 

    0x068e5ab8,// 276 PAY 252 

    0x9bb3aadd,// 277 PAY 253 

    0xe0ecfd99,// 278 PAY 254 

    0xd983b8f2,// 279 PAY 255 

    0xeefa8707,// 280 PAY 256 

    0x69c467f1,// 281 PAY 257 

    0x309e9c37,// 282 PAY 258 

    0x47e201e4,// 283 PAY 259 

    0x79b38151,// 284 PAY 260 

    0x7b2515bb,// 285 PAY 261 

    0x4ab30d33,// 286 PAY 262 

    0xf14b5678,// 287 PAY 263 

    0x9730c047,// 288 PAY 264 

    0x26ea37fd,// 289 PAY 265 

    0x10e48248,// 290 PAY 266 

    0x3aec8ea9,// 291 PAY 267 

    0x46f3cbc0,// 292 PAY 268 

    0xbb9d4869,// 293 PAY 269 

    0x44f13eca,// 294 PAY 270 

    0x979344f3,// 295 PAY 271 

    0x9d08a269,// 296 PAY 272 

    0x53ace54d,// 297 PAY 273 

    0xcae1f0b5,// 298 PAY 274 

    0x4a73ead9,// 299 PAY 275 

    0x46cbef54,// 300 PAY 276 

    0xdf7262e2,// 301 PAY 277 

    0x06e12fb2,// 302 PAY 278 

    0x0c91d8ac,// 303 PAY 279 

    0xf8677bb0,// 304 PAY 280 

    0xbc6f7b93,// 305 PAY 281 

    0x82900f33,// 306 PAY 282 

    0xc799b623,// 307 PAY 283 

    0x6287d23c,// 308 PAY 284 

    0xe3bd8db4,// 309 PAY 285 

    0x23d69f12,// 310 PAY 286 

    0x67336d46,// 311 PAY 287 

    0xe2f1dcab,// 312 PAY 288 

    0xd0a91b25,// 313 PAY 289 

    0x90939a71,// 314 PAY 290 

    0xcad0ebad,// 315 PAY 291 

    0x383cd909,// 316 PAY 292 

    0x0ab014ec,// 317 PAY 293 

    0x767be2ee,// 318 PAY 294 

    0xeb0a9d5a,// 319 PAY 295 

    0xc76ac521,// 320 PAY 296 

    0xcd55d322,// 321 PAY 297 

    0x833a4b4b,// 322 PAY 298 

    0x40debbf5,// 323 PAY 299 

    0x78efe1fd,// 324 PAY 300 

    0xd2339472,// 325 PAY 301 

    0x59399f2f,// 326 PAY 302 

    0x6da4bb03,// 327 PAY 303 

    0x4c409e58,// 328 PAY 304 

    0x2d542866,// 329 PAY 305 

    0x33f8c9c9,// 330 PAY 306 

    0xdd8e556a,// 331 PAY 307 

    0xc1687299,// 332 PAY 308 

    0x084b0f75,// 333 PAY 309 

    0x46f737a9,// 334 PAY 310 

    0x3c2f9bea,// 335 PAY 311 

    0x43490694,// 336 PAY 312 

    0x358f0ddf,// 337 PAY 313 

    0x6e963802,// 338 PAY 314 

    0xe97b7f20,// 339 PAY 315 

    0xb1df2622,// 340 PAY 316 

    0x2888f91c,// 341 PAY 317 

    0x92a4c08a,// 342 PAY 318 

    0xf098a7a7,// 343 PAY 319 

    0x26f4264d,// 344 PAY 320 

    0x81caa278,// 345 PAY 321 

    0x97b32c08,// 346 PAY 322 

    0xaa347fa6,// 347 PAY 323 

    0x21c4a108,// 348 PAY 324 

    0x7fde893e,// 349 PAY 325 

    0x93e17e34,// 350 PAY 326 

    0xdd6a74d5,// 351 PAY 327 

    0xa1a99987,// 352 PAY 328 

    0x243bf539,// 353 PAY 329 

    0x9cd7cb40,// 354 PAY 330 

    0x610c1b42,// 355 PAY 331 

    0xab9ffad3,// 356 PAY 332 

    0xc639bca6,// 357 PAY 333 

    0x5842d976,// 358 PAY 334 

    0xfb97a9d5,// 359 PAY 335 

    0x18446439,// 360 PAY 336 

    0xc6be8e26,// 361 PAY 337 

    0x186106ae,// 362 PAY 338 

    0x693102f0,// 363 PAY 339 

    0x8e0d791d,// 364 PAY 340 

    0xe7702d96,// 365 PAY 341 

    0x170c04bc,// 366 PAY 342 

    0x2f9644e0,// 367 PAY 343 

    0x7819f7d4,// 368 PAY 344 

    0x0428b728,// 369 PAY 345 

    0x6ab3b423,// 370 PAY 346 

    0x1f5937da,// 371 PAY 347 

    0x47bf4064,// 372 PAY 348 

    0x68611428,// 373 PAY 349 

    0x97d62795,// 374 PAY 350 

    0xd78651a7,// 375 PAY 351 

    0xad824439,// 376 PAY 352 

    0x7e0e443f,// 377 PAY 353 

    0x2f1bcc87,// 378 PAY 354 

    0x31fcad9c,// 379 PAY 355 

    0x7dcbb59a,// 380 PAY 356 

    0x90c55c7d,// 381 PAY 357 

    0x40e72384,// 382 PAY 358 

    0x50146615,// 383 PAY 359 

    0x145f99d9,// 384 PAY 360 

    0x6005b0ff,// 385 PAY 361 

    0x6fe2ac95,// 386 PAY 362 

    0xd9045678,// 387 PAY 363 

    0x3005c6c7,// 388 PAY 364 

    0x53398519,// 389 PAY 365 

    0x1d543a1b,// 390 PAY 366 

    0x40986056,// 391 PAY 367 

    0x01a72e4e,// 392 PAY 368 

    0xbd7b2e82,// 393 PAY 369 

    0xf0044a84,// 394 PAY 370 

    0x1763212a,// 395 PAY 371 

    0xa7298fcc,// 396 PAY 372 

    0x6913d8ef,// 397 PAY 373 

    0xc72c5479,// 398 PAY 374 

    0xaf1a9818,// 399 PAY 375 

    0xbb4b1f61,// 400 PAY 376 

    0x2bb8bbfc,// 401 PAY 377 

    0x31b5dc39,// 402 PAY 378 

    0x312b0ffc,// 403 PAY 379 

    0x06f89363,// 404 PAY 380 

    0xf93f6962,// 405 PAY 381 

    0x931922eb,// 406 PAY 382 

    0x057a7f9b,// 407 PAY 383 

    0xf40680c4,// 408 PAY 384 

    0xdbb72a18,// 409 PAY 385 

    0xbc73f998,// 410 PAY 386 

    0x1f6cf671,// 411 PAY 387 

    0x66525ed1,// 412 PAY 388 

    0x067da3a3,// 413 PAY 389 

    0xca216d42,// 414 PAY 390 

    0x12dfd153,// 415 PAY 391 

    0x9ffe625d,// 416 PAY 392 

    0x3c4213bf,// 417 PAY 393 

    0x1bd7f883,// 418 PAY 394 

    0x4ac4b065,// 419 PAY 395 

    0xb9d5cef8,// 420 PAY 396 

    0xc4c718d0,// 421 PAY 397 

    0x44d0fe62,// 422 PAY 398 

    0xe4856580,// 423 PAY 399 

    0xe5d09e4b,// 424 PAY 400 

    0xa985c996,// 425 PAY 401 

    0xad061329,// 426 PAY 402 

    0x1c6b2678,// 427 PAY 403 

    0x66055b7f,// 428 PAY 404 

    0xb216cae9,// 429 PAY 405 

    0xd07e3b6f,// 430 PAY 406 

    0xdc40b1a5,// 431 PAY 407 

    0x5d67f30b,// 432 PAY 408 

    0x9cc94e42,// 433 PAY 409 

    0x4deecfaf,// 434 PAY 410 

    0xd36b37f2,// 435 PAY 411 

    0xa582bea0,// 436 PAY 412 

    0x604b7c56,// 437 PAY 413 

    0x7a4db53d,// 438 PAY 414 

    0xcf6fa762,// 439 PAY 415 

    0xab18fe80,// 440 PAY 416 

    0x2207515e,// 441 PAY 417 

    0x07eee550,// 442 PAY 418 

    0x0508e991,// 443 PAY 419 

    0x241e0cb1,// 444 PAY 420 

    0xdd6761a7,// 445 PAY 421 

    0x1ba8edd2,// 446 PAY 422 

    0x853a87f2,// 447 PAY 423 

    0x25b47f29,// 448 PAY 424 

    0x11bbdec5,// 449 PAY 425 

    0x3a2e435e,// 450 PAY 426 

    0x32982038,// 451 PAY 427 

    0x8b4f7c3e,// 452 PAY 428 

    0xb16c0f0a,// 453 PAY 429 

    0x2dd7ced5,// 454 PAY 430 

    0x8bc84e94,// 455 PAY 431 

    0xabdb0924,// 456 PAY 432 

    0x0d9aca9e,// 457 PAY 433 

    0xf06fc3db,// 458 PAY 434 

    0xa1cbebdb,// 459 PAY 435 

    0xa3d29678,// 460 PAY 436 

    0xd375c118,// 461 PAY 437 

    0x8c7d0dd4,// 462 PAY 438 

    0x2bad7724,// 463 PAY 439 

    0x474aac14,// 464 PAY 440 

    0x36c8e129,// 465 PAY 441 

    0x80a23305,// 466 PAY 442 

    0xc683ce86,// 467 PAY 443 

    0xb6a3dc5a,// 468 PAY 444 

    0x14c05454,// 469 PAY 445 

    0xc9897f13,// 470 PAY 446 

    0xa55edd87,// 471 PAY 447 

    0x4f90d4dd,// 472 PAY 448 

    0xd7db5cf9,// 473 PAY 449 

    0xe9e0f913,// 474 PAY 450 

    0x455c2c43,// 475 PAY 451 

    0x656b579c,// 476 PAY 452 

    0x33a077e3,// 477 PAY 453 

    0x4976623e,// 478 PAY 454 

    0xb2dc6875,// 479 PAY 455 

    0x98208aa6,// 480 PAY 456 

    0xf6abfcca,// 481 PAY 457 

    0x15156318,// 482 PAY 458 

    0x387bc325,// 483 PAY 459 

    0xe464e551,// 484 PAY 460 

    0x1942c31a,// 485 PAY 461 

    0x7348055e,// 486 PAY 462 

    0x21ef4a0a,// 487 PAY 463 

    0x13095a7c,// 488 PAY 464 

    0x2df976e5,// 489 PAY 465 

    0x258e5144,// 490 PAY 466 

    0x23f1659a,// 491 PAY 467 

    0x7dd970d3,// 492 PAY 468 

    0x46c855b0,// 493 PAY 469 

    0xd7000000,// 494 PAY 470 

/// STA is 1 words. 

/// STA num_pkts       : 112 

/// STA pkt_idx        : 18 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xb1 

    0x0049b170 // 495 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt4_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x04 

/// ECH pdu_tag        : 0x00 

    0x00040000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv !check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x08000011,// 3 SCX   1 

    0x8046480d,// 4 SCX   2 

    0x00002482,// 5 SCX   3 

    0xc0645da5,// 6 SCX   4 

    0x8fffafda,// 7 SCX   5 

    0xfc0309a2,// 8 SCX   6 

    0xb82a091b,// 9 SCX   7 

    0x0c2db65d,// 10 SCX   8 

    0x5a5ea9a4,// 11 SCX   9 

    0xce8cea98,// 12 SCX  10 

    0xe03d5480,// 13 SCX  11 

    0xc503262a,// 14 SCX  12 

    0xfaa6d17a,// 15 SCX  13 

    0xd34f5261,// 16 SCX  14 

    0x51ba3ace,// 17 SCX  15 

    0x8760b866,// 18 SCX  16 

    0xa719c9d5,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1335 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 391 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 391 

/// BFD lencrypto      : 40 

/// BFD ofstcrypto     : 148 

/// BFD (ofst+len)cry  : 188 

/// BFD ofstiv         : 140 

/// BFD ofsticv        : 596 

    0x00000187,// 20 BFD   1 

    0x00940028,// 21 BFD   2 

    0x0254008c,// 22 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : 13 

    0x13001e8c,// 23 MFM   1 

    0x528a8b53,// 24 MFM   2 

    0xb76f2d40,// 25 MFM   3 

/// BDA is 335 words. 

/// BDA size     is 1335 (0x537) 

/// BDA id       is 0xff9 

    0x05370ff9,// 26 BDA   1 

/// PAY Generic Data size   : 1335 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x6ff827f6,// 27 PAY   1 

    0x9cc3ea28,// 28 PAY   2 

    0xac2d1bc1,// 29 PAY   3 

    0x2db725a8,// 30 PAY   4 

    0x7e20c550,// 31 PAY   5 

    0x69d1ab36,// 32 PAY   6 

    0x07e6345e,// 33 PAY   7 

    0x47130e20,// 34 PAY   8 

    0xbf76a80e,// 35 PAY   9 

    0x35cff346,// 36 PAY  10 

    0x85871029,// 37 PAY  11 

    0xafc36089,// 38 PAY  12 

    0x3582746d,// 39 PAY  13 

    0x95c261a3,// 40 PAY  14 

    0xa085123b,// 41 PAY  15 

    0xf2e953c3,// 42 PAY  16 

    0x70a19794,// 43 PAY  17 

    0x07a7666b,// 44 PAY  18 

    0x02c4c9bf,// 45 PAY  19 

    0xff3a0db8,// 46 PAY  20 

    0x8cce456b,// 47 PAY  21 

    0x2f027094,// 48 PAY  22 

    0xaf13ad86,// 49 PAY  23 

    0x13a184df,// 50 PAY  24 

    0x191ddb8e,// 51 PAY  25 

    0xe9abc9e4,// 52 PAY  26 

    0x96584127,// 53 PAY  27 

    0x37a1c59d,// 54 PAY  28 

    0x757a984b,// 55 PAY  29 

    0xa625d354,// 56 PAY  30 

    0x71a91da8,// 57 PAY  31 

    0x04863431,// 58 PAY  32 

    0x2c69d683,// 59 PAY  33 

    0x2301bc0f,// 60 PAY  34 

    0xab1770a9,// 61 PAY  35 

    0x54a886a1,// 62 PAY  36 

    0x0f69500a,// 63 PAY  37 

    0x4b316fd1,// 64 PAY  38 

    0x8b014d7b,// 65 PAY  39 

    0x4d1b7fff,// 66 PAY  40 

    0x8e672df6,// 67 PAY  41 

    0x5f6c22e9,// 68 PAY  42 

    0xc38514f2,// 69 PAY  43 

    0xf95299da,// 70 PAY  44 

    0xe3edb3b6,// 71 PAY  45 

    0xa26a6bc7,// 72 PAY  46 

    0xa00a97ff,// 73 PAY  47 

    0xa1a98002,// 74 PAY  48 

    0xf37393cc,// 75 PAY  49 

    0xe8ce4fb0,// 76 PAY  50 

    0x801ae1f0,// 77 PAY  51 

    0x5e16ec41,// 78 PAY  52 

    0x861761da,// 79 PAY  53 

    0xd07ce261,// 80 PAY  54 

    0x5985a079,// 81 PAY  55 

    0x7597cec0,// 82 PAY  56 

    0xa3bd305d,// 83 PAY  57 

    0xf93b4caa,// 84 PAY  58 

    0x89b8168e,// 85 PAY  59 

    0xf9c9a662,// 86 PAY  60 

    0x6e359b37,// 87 PAY  61 

    0xd9300cb7,// 88 PAY  62 

    0x6fcea01f,// 89 PAY  63 

    0x200622f4,// 90 PAY  64 

    0xdaae0b23,// 91 PAY  65 

    0x3de523f6,// 92 PAY  66 

    0x0d0950e5,// 93 PAY  67 

    0x3336a184,// 94 PAY  68 

    0x9ef778e1,// 95 PAY  69 

    0xe200750d,// 96 PAY  70 

    0x48ca31f7,// 97 PAY  71 

    0x6602ea14,// 98 PAY  72 

    0xe9e85bde,// 99 PAY  73 

    0xed0a6304,// 100 PAY  74 

    0x09a42be4,// 101 PAY  75 

    0x4ea4055a,// 102 PAY  76 

    0x37361084,// 103 PAY  77 

    0x3d6dd997,// 104 PAY  78 

    0x2b88ce1b,// 105 PAY  79 

    0x364dcc17,// 106 PAY  80 

    0x7c5d8b25,// 107 PAY  81 

    0x9397869c,// 108 PAY  82 

    0xd81af02d,// 109 PAY  83 

    0x551a1fde,// 110 PAY  84 

    0x42e66ddd,// 111 PAY  85 

    0xbf059a71,// 112 PAY  86 

    0x24d2e8f7,// 113 PAY  87 

    0xff51bdab,// 114 PAY  88 

    0x539b3e84,// 115 PAY  89 

    0x1c2c8a16,// 116 PAY  90 

    0x83e412ad,// 117 PAY  91 

    0x30170b18,// 118 PAY  92 

    0xdb182514,// 119 PAY  93 

    0xf7ea7757,// 120 PAY  94 

    0x195e7322,// 121 PAY  95 

    0x98df5c21,// 122 PAY  96 

    0x9361baf9,// 123 PAY  97 

    0xbe5518c6,// 124 PAY  98 

    0xc34b77ff,// 125 PAY  99 

    0xe9e5a073,// 126 PAY 100 

    0xbf79aabf,// 127 PAY 101 

    0x6fd57898,// 128 PAY 102 

    0x6ca3ab7b,// 129 PAY 103 

    0xe76ed1c4,// 130 PAY 104 

    0x69f4cdc9,// 131 PAY 105 

    0xd20701ed,// 132 PAY 106 

    0x0556716e,// 133 PAY 107 

    0x73bbb3eb,// 134 PAY 108 

    0x0f0a809d,// 135 PAY 109 

    0x8a48cf0e,// 136 PAY 110 

    0xe19f76a6,// 137 PAY 111 

    0x8a61d4cc,// 138 PAY 112 

    0x62c3b35c,// 139 PAY 113 

    0x401e8f70,// 140 PAY 114 

    0x98ea7123,// 141 PAY 115 

    0x71dec9aa,// 142 PAY 116 

    0xf34c0e0b,// 143 PAY 117 

    0x48725294,// 144 PAY 118 

    0x53986186,// 145 PAY 119 

    0x6cb5f62c,// 146 PAY 120 

    0x4a0d1714,// 147 PAY 121 

    0x648c34a1,// 148 PAY 122 

    0xac74e211,// 149 PAY 123 

    0x90766a9f,// 150 PAY 124 

    0x1b8b35a3,// 151 PAY 125 

    0x8a0609d6,// 152 PAY 126 

    0x68366476,// 153 PAY 127 

    0x35349390,// 154 PAY 128 

    0xb4922eba,// 155 PAY 129 

    0x96aa416e,// 156 PAY 130 

    0xe5826cbf,// 157 PAY 131 

    0xf9c2dc4e,// 158 PAY 132 

    0x36592988,// 159 PAY 133 

    0x11cc38f7,// 160 PAY 134 

    0x978a8e15,// 161 PAY 135 

    0x1608cce9,// 162 PAY 136 

    0x0dbbd88e,// 163 PAY 137 

    0x8a532de0,// 164 PAY 138 

    0x1d3dfa1a,// 165 PAY 139 

    0x82ad0f6d,// 166 PAY 140 

    0x473e7623,// 167 PAY 141 

    0x5df047ee,// 168 PAY 142 

    0xaa5c37a5,// 169 PAY 143 

    0x13a7d3aa,// 170 PAY 144 

    0x7eb9f38f,// 171 PAY 145 

    0xd346f664,// 172 PAY 146 

    0x322297f6,// 173 PAY 147 

    0xa07d6e32,// 174 PAY 148 

    0x56a22c7b,// 175 PAY 149 

    0xac415d96,// 176 PAY 150 

    0xfcd5655f,// 177 PAY 151 

    0xae864614,// 178 PAY 152 

    0xfeed1650,// 179 PAY 153 

    0xec8bb65d,// 180 PAY 154 

    0xef48e422,// 181 PAY 155 

    0x11aff699,// 182 PAY 156 

    0x37890d79,// 183 PAY 157 

    0x042645c3,// 184 PAY 158 

    0x0b4d1503,// 185 PAY 159 

    0x9d2da9ed,// 186 PAY 160 

    0xf5239ed1,// 187 PAY 161 

    0x2626b2be,// 188 PAY 162 

    0xe344693f,// 189 PAY 163 

    0xfbd845bb,// 190 PAY 164 

    0xf4073a21,// 191 PAY 165 

    0x9364a32f,// 192 PAY 166 

    0xd1e67e3e,// 193 PAY 167 

    0x9bddb148,// 194 PAY 168 

    0xb38c9cca,// 195 PAY 169 

    0x9b21e933,// 196 PAY 170 

    0xda08d07b,// 197 PAY 171 

    0x6f9f2814,// 198 PAY 172 

    0xac28e3a1,// 199 PAY 173 

    0x1938a4c3,// 200 PAY 174 

    0x0fad7f32,// 201 PAY 175 

    0x8cf65bc8,// 202 PAY 176 

    0x13b37275,// 203 PAY 177 

    0xd20407c3,// 204 PAY 178 

    0x6042838d,// 205 PAY 179 

    0x6660fdd4,// 206 PAY 180 

    0x01cf57ab,// 207 PAY 181 

    0xc08a1e65,// 208 PAY 182 

    0x8a260939,// 209 PAY 183 

    0x4ca2c663,// 210 PAY 184 

    0xd571cddf,// 211 PAY 185 

    0x17be8fb0,// 212 PAY 186 

    0xe7c59c35,// 213 PAY 187 

    0xf5acc4fb,// 214 PAY 188 

    0x12f96b41,// 215 PAY 189 

    0xfc65da29,// 216 PAY 190 

    0x88a9dfe9,// 217 PAY 191 

    0x88711fb7,// 218 PAY 192 

    0x87cee88a,// 219 PAY 193 

    0x88f42ab9,// 220 PAY 194 

    0xf1b12370,// 221 PAY 195 

    0xe72b59f3,// 222 PAY 196 

    0x68957171,// 223 PAY 197 

    0x4143f4e9,// 224 PAY 198 

    0x3cd9fe36,// 225 PAY 199 

    0x31417479,// 226 PAY 200 

    0xf6a0f884,// 227 PAY 201 

    0xe01b1257,// 228 PAY 202 

    0xb34b856b,// 229 PAY 203 

    0x06b43c3f,// 230 PAY 204 

    0xa1de3286,// 231 PAY 205 

    0xdbbf09bc,// 232 PAY 206 

    0x604d0ea9,// 233 PAY 207 

    0xd9595b6b,// 234 PAY 208 

    0xa4c95238,// 235 PAY 209 

    0x60fa19cd,// 236 PAY 210 

    0xa850065e,// 237 PAY 211 

    0x84fd25ac,// 238 PAY 212 

    0x4a676e02,// 239 PAY 213 

    0x56cc6287,// 240 PAY 214 

    0xbe5963b0,// 241 PAY 215 

    0xaeee4bf4,// 242 PAY 216 

    0xf5579467,// 243 PAY 217 

    0x41da59ec,// 244 PAY 218 

    0x122e52be,// 245 PAY 219 

    0xb8da859d,// 246 PAY 220 

    0x3cc1c619,// 247 PAY 221 

    0x00f5ddc7,// 248 PAY 222 

    0x0b54faca,// 249 PAY 223 

    0x7fb1a00d,// 250 PAY 224 

    0xca36c0fe,// 251 PAY 225 

    0x987f9e50,// 252 PAY 226 

    0xc760e710,// 253 PAY 227 

    0xe16f0238,// 254 PAY 228 

    0x5b328b89,// 255 PAY 229 

    0x3742cc34,// 256 PAY 230 

    0x75fc7a22,// 257 PAY 231 

    0x0b395458,// 258 PAY 232 

    0x8544dc38,// 259 PAY 233 

    0x2f7bf171,// 260 PAY 234 

    0x22bb2b6e,// 261 PAY 235 

    0xb0ebcbf5,// 262 PAY 236 

    0x50b68810,// 263 PAY 237 

    0xaaa73335,// 264 PAY 238 

    0x1343b49e,// 265 PAY 239 

    0xa7479902,// 266 PAY 240 

    0x434cedf9,// 267 PAY 241 

    0x58f953d3,// 268 PAY 242 

    0x73f41806,// 269 PAY 243 

    0x379f2fcc,// 270 PAY 244 

    0xaebdc9aa,// 271 PAY 245 

    0xc4f5d18f,// 272 PAY 246 

    0xf04fc99e,// 273 PAY 247 

    0xbebe6017,// 274 PAY 248 

    0xbe17a86d,// 275 PAY 249 

    0xb6861baa,// 276 PAY 250 

    0x0e4d5f68,// 277 PAY 251 

    0xc8d14490,// 278 PAY 252 

    0x91769e8b,// 279 PAY 253 

    0x0be3ad28,// 280 PAY 254 

    0x6d7fc0bd,// 281 PAY 255 

    0x05b755a7,// 282 PAY 256 

    0x135671e0,// 283 PAY 257 

    0xeeaa2d6f,// 284 PAY 258 

    0x952c1735,// 285 PAY 259 

    0xfc54cbf9,// 286 PAY 260 

    0x072391f9,// 287 PAY 261 

    0x94e6081d,// 288 PAY 262 

    0xc420c988,// 289 PAY 263 

    0xb1665448,// 290 PAY 264 

    0x877b61de,// 291 PAY 265 

    0x3431561d,// 292 PAY 266 

    0x13930043,// 293 PAY 267 

    0xef0ad1eb,// 294 PAY 268 

    0xe9f8cac3,// 295 PAY 269 

    0xa6ecfabf,// 296 PAY 270 

    0xb272f0e7,// 297 PAY 271 

    0x4dfbeb43,// 298 PAY 272 

    0x4a430343,// 299 PAY 273 

    0xe546afeb,// 300 PAY 274 

    0x4aca0e97,// 301 PAY 275 

    0xde3d73eb,// 302 PAY 276 

    0x965ea15a,// 303 PAY 277 

    0x03ed58a6,// 304 PAY 278 

    0x51ddffb5,// 305 PAY 279 

    0x65d5664c,// 306 PAY 280 

    0x4f3c3448,// 307 PAY 281 

    0xca1ac0ff,// 308 PAY 282 

    0x7009fe17,// 309 PAY 283 

    0xb4507d31,// 310 PAY 284 

    0xc7493345,// 311 PAY 285 

    0x607303b1,// 312 PAY 286 

    0x3a5cddf1,// 313 PAY 287 

    0xfd592b8a,// 314 PAY 288 

    0x0f144e7f,// 315 PAY 289 

    0xe3365cd2,// 316 PAY 290 

    0x6f2f1d68,// 317 PAY 291 

    0xeefd7a40,// 318 PAY 292 

    0x61ad4a74,// 319 PAY 293 

    0x38504f8d,// 320 PAY 294 

    0x5481dadc,// 321 PAY 295 

    0x6f5b049b,// 322 PAY 296 

    0x7ea1d21a,// 323 PAY 297 

    0x76476bfe,// 324 PAY 298 

    0x7ea799e8,// 325 PAY 299 

    0x0d237105,// 326 PAY 300 

    0x1b3c13b1,// 327 PAY 301 

    0x23b89a46,// 328 PAY 302 

    0xa0e4f5bf,// 329 PAY 303 

    0x21e3f1ed,// 330 PAY 304 

    0x2b01599d,// 331 PAY 305 

    0x7a05f786,// 332 PAY 306 

    0xd9fc0b49,// 333 PAY 307 

    0x5b9b7a6d,// 334 PAY 308 

    0xb0473b73,// 335 PAY 309 

    0xe1d352d1,// 336 PAY 310 

    0x0a06ccec,// 337 PAY 311 

    0x57cc420b,// 338 PAY 312 

    0x0e4f0bcd,// 339 PAY 313 

    0xea33e395,// 340 PAY 314 

    0x3d5d550d,// 341 PAY 315 

    0x43395db7,// 342 PAY 316 

    0x58428cbc,// 343 PAY 317 

    0xaa4e6068,// 344 PAY 318 

    0xa02f4c05,// 345 PAY 319 

    0xe03f5fa8,// 346 PAY 320 

    0x74aec080,// 347 PAY 321 

    0x7d4f4966,// 348 PAY 322 

    0xc263ab75,// 349 PAY 323 

    0x0b4f5ad2,// 350 PAY 324 

    0x591025ea,// 351 PAY 325 

    0x482b578b,// 352 PAY 326 

    0x01d684ed,// 353 PAY 327 

    0x220ab8df,// 354 PAY 328 

    0x8430ba45,// 355 PAY 329 

    0xa8f56e83,// 356 PAY 330 

    0xe7fc1c20,// 357 PAY 331 

    0xabc50c0a,// 358 PAY 332 

    0x9cd7db82,// 359 PAY 333 

    0xae2f8c00,// 360 PAY 334 

/// STA is 1 words. 

/// STA num_pkts       : 162 

/// STA pkt_idx        : 20 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xce 

    0x0051cea2 // 361 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt5_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x0d 

/// ECH pdu_tag        : 0x00 

    0x000d0000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv !insert_icv check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x08000011,// 3 SCX   1 

    0x804648aa,// 4 SCX   2 

    0x00001382,// 5 SCX   3 

    0x407bf5fe,// 6 SCX   4 

    0x52c1f895,// 7 SCX   5 

    0x06b6fe8a,// 8 SCX   6 

    0xfac4dccd,// 9 SCX   7 

    0x60d0a013,// 10 SCX   8 

    0xa76b19de,// 11 SCX   9 

    0x45af4e26,// 12 SCX  10 

    0xa28faf97,// 13 SCX  11 

    0xc581d6c7,// 14 SCX  12 

    0xb8a4eb6e,// 15 SCX  13 

    0xf9886c76,// 16 SCX  14 

    0xc4b48bbd,// 17 SCX  15 

    0xa36ccb75,// 18 SCX  16 

    0xf600bcb9,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 2024 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 216 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 216 

/// BFD lencrypto      : 32 

/// BFD ofstcrypto     : 168 

/// BFD (ofst+len)cry  : 200 

/// BFD ofstiv         : 124 

/// BFD ofsticv        : 908 

    0x000000d8,// 20 BFD   1 

    0x00a80020,// 21 BFD   2 

    0x038c007c,// 22 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : 14 

    0x140095b2,// 23 MFM   1 

    0x413ce3b4,// 24 MFM   2 

    0x33464422,// 25 MFM   3 

/// BDA is 507 words. 

/// BDA size     is 2024 (0x7e8) 

/// BDA id       is 0x93b0 

    0x07e893b0,// 26 BDA   1 

/// PAY Generic Data size   : 2024 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x5fc230c1,// 27 PAY   1 

    0x2081d301,// 28 PAY   2 

    0x83c386d8,// 29 PAY   3 

    0xf9b79e7a,// 30 PAY   4 

    0x0213824b,// 31 PAY   5 

    0xfb8e34d0,// 32 PAY   6 

    0xa270b7a0,// 33 PAY   7 

    0x04b40780,// 34 PAY   8 

    0xb65480d0,// 35 PAY   9 

    0x4c17e57a,// 36 PAY  10 

    0xf956f3ce,// 37 PAY  11 

    0x50f284e7,// 38 PAY  12 

    0xbed5f332,// 39 PAY  13 

    0x3ef08e62,// 40 PAY  14 

    0xd0e77981,// 41 PAY  15 

    0xf8f0ba1c,// 42 PAY  16 

    0xd9f79ed4,// 43 PAY  17 

    0x3057e87c,// 44 PAY  18 

    0xe9d63259,// 45 PAY  19 

    0x4b464d65,// 46 PAY  20 

    0x141b2bbe,// 47 PAY  21 

    0xae74f3f0,// 48 PAY  22 

    0x34c15605,// 49 PAY  23 

    0xaf71562f,// 50 PAY  24 

    0x6e49e2ee,// 51 PAY  25 

    0xb59942a1,// 52 PAY  26 

    0x1b51f826,// 53 PAY  27 

    0x4a73113f,// 54 PAY  28 

    0x640eba58,// 55 PAY  29 

    0x2b163ef0,// 56 PAY  30 

    0xa4d3c018,// 57 PAY  31 

    0x83ef563a,// 58 PAY  32 

    0xe39f11ef,// 59 PAY  33 

    0x23ef7055,// 60 PAY  34 

    0x4a3cc2c3,// 61 PAY  35 

    0x8741858f,// 62 PAY  36 

    0xf4a023e9,// 63 PAY  37 

    0x144cf4be,// 64 PAY  38 

    0xc2531afe,// 65 PAY  39 

    0xf7ae99ce,// 66 PAY  40 

    0xcd9f338e,// 67 PAY  41 

    0x8467d369,// 68 PAY  42 

    0xa610af94,// 69 PAY  43 

    0x3d2df70c,// 70 PAY  44 

    0x773f9e8c,// 71 PAY  45 

    0xe419c3b3,// 72 PAY  46 

    0x942ec16a,// 73 PAY  47 

    0xbc835517,// 74 PAY  48 

    0x320a71d1,// 75 PAY  49 

    0xb771c3ea,// 76 PAY  50 

    0x15c1728c,// 77 PAY  51 

    0x789ebcc8,// 78 PAY  52 

    0xad18dbc2,// 79 PAY  53 

    0x883ebc4a,// 80 PAY  54 

    0xdc7a7d89,// 81 PAY  55 

    0x54472eb8,// 82 PAY  56 

    0x2a20f0e4,// 83 PAY  57 

    0x00a2c8a1,// 84 PAY  58 

    0x50c4f110,// 85 PAY  59 

    0x73df4672,// 86 PAY  60 

    0x5498649a,// 87 PAY  61 

    0xfca132ff,// 88 PAY  62 

    0xa41b4410,// 89 PAY  63 

    0x5ca52e2b,// 90 PAY  64 

    0xa33c3e41,// 91 PAY  65 

    0xb01629a3,// 92 PAY  66 

    0x3847ed47,// 93 PAY  67 

    0x7181d28b,// 94 PAY  68 

    0xcb059f47,// 95 PAY  69 

    0xab2bd516,// 96 PAY  70 

    0xc9c1c692,// 97 PAY  71 

    0x1b73406c,// 98 PAY  72 

    0x6c16fd19,// 99 PAY  73 

    0xd8486a1b,// 100 PAY  74 

    0x573b2570,// 101 PAY  75 

    0x78289c34,// 102 PAY  76 

    0x7ad75cde,// 103 PAY  77 

    0xb884e70e,// 104 PAY  78 

    0xb68a7e8a,// 105 PAY  79 

    0x69cae614,// 106 PAY  80 

    0xef66a6ba,// 107 PAY  81 

    0x3cc7c0e8,// 108 PAY  82 

    0x647a5120,// 109 PAY  83 

    0x412613da,// 110 PAY  84 

    0x85949fd2,// 111 PAY  85 

    0x44d135a9,// 112 PAY  86 

    0x545a071a,// 113 PAY  87 

    0x48b401fe,// 114 PAY  88 

    0x3c605946,// 115 PAY  89 

    0xc3ef674b,// 116 PAY  90 

    0x5d4b1578,// 117 PAY  91 

    0x3f71533a,// 118 PAY  92 

    0x974454ff,// 119 PAY  93 

    0x62332356,// 120 PAY  94 

    0xc5dd4c62,// 121 PAY  95 

    0xea4ac58f,// 122 PAY  96 

    0xcf859bdb,// 123 PAY  97 

    0x701b44da,// 124 PAY  98 

    0x2fcca7e3,// 125 PAY  99 

    0xa2781c4a,// 126 PAY 100 

    0x0fd1c5b0,// 127 PAY 101 

    0xf95e421e,// 128 PAY 102 

    0xc90ffc72,// 129 PAY 103 

    0x0184d51b,// 130 PAY 104 

    0x29277656,// 131 PAY 105 

    0x4e9d142a,// 132 PAY 106 

    0xae6dfe94,// 133 PAY 107 

    0x860e0bcb,// 134 PAY 108 

    0x54ff3c70,// 135 PAY 109 

    0xe6514eba,// 136 PAY 110 

    0xe5598a5d,// 137 PAY 111 

    0x4dc8d6fe,// 138 PAY 112 

    0xdf732149,// 139 PAY 113 

    0x293cfff3,// 140 PAY 114 

    0x040369c8,// 141 PAY 115 

    0xbafd8fc0,// 142 PAY 116 

    0xbbd333ac,// 143 PAY 117 

    0x1e3992e9,// 144 PAY 118 

    0x41311439,// 145 PAY 119 

    0xcd5886a9,// 146 PAY 120 

    0xf9aaa5ec,// 147 PAY 121 

    0x2ff71806,// 148 PAY 122 

    0xd860281b,// 149 PAY 123 

    0x3b93b7c3,// 150 PAY 124 

    0xed43c392,// 151 PAY 125 

    0x1ce0d26e,// 152 PAY 126 

    0xe2da9595,// 153 PAY 127 

    0xdb2eebb7,// 154 PAY 128 

    0x57293ad3,// 155 PAY 129 

    0xdd244f28,// 156 PAY 130 

    0xeaf6963a,// 157 PAY 131 

    0x398fdfcc,// 158 PAY 132 

    0xad862a84,// 159 PAY 133 

    0xcc2aca91,// 160 PAY 134 

    0x72410a4c,// 161 PAY 135 

    0xad7e69af,// 162 PAY 136 

    0xc4497795,// 163 PAY 137 

    0x08aa753d,// 164 PAY 138 

    0x809c0a2e,// 165 PAY 139 

    0xe894d78d,// 166 PAY 140 

    0xdfccb1cc,// 167 PAY 141 

    0xbf68058d,// 168 PAY 142 

    0x40b13faa,// 169 PAY 143 

    0x40fd2354,// 170 PAY 144 

    0x83b58e7c,// 171 PAY 145 

    0x986ebde4,// 172 PAY 146 

    0x6dc773e6,// 173 PAY 147 

    0x8c5697d2,// 174 PAY 148 

    0xdf36e2e9,// 175 PAY 149 

    0xc186d3bd,// 176 PAY 150 

    0x3af3a61b,// 177 PAY 151 

    0x8996dc04,// 178 PAY 152 

    0x90711514,// 179 PAY 153 

    0x8b6a12b1,// 180 PAY 154 

    0x4666c53c,// 181 PAY 155 

    0x6e92db6a,// 182 PAY 156 

    0x64e33b08,// 183 PAY 157 

    0x8616099a,// 184 PAY 158 

    0x3b9c36dd,// 185 PAY 159 

    0x73023e5b,// 186 PAY 160 

    0xf1cdf6d5,// 187 PAY 161 

    0x8c18c317,// 188 PAY 162 

    0x09557b5c,// 189 PAY 163 

    0xfc8303c8,// 190 PAY 164 

    0x57ccbebb,// 191 PAY 165 

    0x854fe961,// 192 PAY 166 

    0x704a962d,// 193 PAY 167 

    0xe190506c,// 194 PAY 168 

    0xef3f798d,// 195 PAY 169 

    0x217784bb,// 196 PAY 170 

    0xde8cf6bb,// 197 PAY 171 

    0x8df29e45,// 198 PAY 172 

    0x458a13e2,// 199 PAY 173 

    0x51ffda1f,// 200 PAY 174 

    0xc5b97c4f,// 201 PAY 175 

    0x8429179a,// 202 PAY 176 

    0x3f944e6b,// 203 PAY 177 

    0xc05cbbe7,// 204 PAY 178 

    0x2e14473f,// 205 PAY 179 

    0x462a3809,// 206 PAY 180 

    0x2889a507,// 207 PAY 181 

    0x598579ab,// 208 PAY 182 

    0x0f079119,// 209 PAY 183 

    0x531121d1,// 210 PAY 184 

    0x1e23d706,// 211 PAY 185 

    0x2bc80cce,// 212 PAY 186 

    0x02506f61,// 213 PAY 187 

    0x6f463e3a,// 214 PAY 188 

    0xc3f73b31,// 215 PAY 189 

    0x8965263a,// 216 PAY 190 

    0xa9ea22d3,// 217 PAY 191 

    0xec24ba94,// 218 PAY 192 

    0x6cb132df,// 219 PAY 193 

    0x8244f1f1,// 220 PAY 194 

    0xfcc2997c,// 221 PAY 195 

    0x014a0456,// 222 PAY 196 

    0x4610b21a,// 223 PAY 197 

    0xc19a5255,// 224 PAY 198 

    0x0953dad7,// 225 PAY 199 

    0xca00160d,// 226 PAY 200 

    0xd23a12c0,// 227 PAY 201 

    0x10d7c6ac,// 228 PAY 202 

    0xf93d95c3,// 229 PAY 203 

    0x3b71c687,// 230 PAY 204 

    0xbdc00612,// 231 PAY 205 

    0xa2546c3b,// 232 PAY 206 

    0x5ec29d14,// 233 PAY 207 

    0x48104906,// 234 PAY 208 

    0x3f989ac7,// 235 PAY 209 

    0x9b8dcf7d,// 236 PAY 210 

    0x38acaecc,// 237 PAY 211 

    0x3d19af53,// 238 PAY 212 

    0x8b584355,// 239 PAY 213 

    0x602636ed,// 240 PAY 214 

    0x2d46bf5c,// 241 PAY 215 

    0x071b6991,// 242 PAY 216 

    0x715ce77a,// 243 PAY 217 

    0x634502a6,// 244 PAY 218 

    0xcf99015c,// 245 PAY 219 

    0x9866347f,// 246 PAY 220 

    0xdf622071,// 247 PAY 221 

    0x76926942,// 248 PAY 222 

    0xa860b4ff,// 249 PAY 223 

    0x39845b11,// 250 PAY 224 

    0x2299f87b,// 251 PAY 225 

    0x91f0ea5e,// 252 PAY 226 

    0x938aac17,// 253 PAY 227 

    0x1c05832e,// 254 PAY 228 

    0x0aee591d,// 255 PAY 229 

    0x8a6c797b,// 256 PAY 230 

    0x763460ea,// 257 PAY 231 

    0x614b56dd,// 258 PAY 232 

    0xa8d7d352,// 259 PAY 233 

    0xab3fc4b9,// 260 PAY 234 

    0x35bfaf24,// 261 PAY 235 

    0x195a12ed,// 262 PAY 236 

    0xe5f7d049,// 263 PAY 237 

    0x6d24301a,// 264 PAY 238 

    0x6b4bd631,// 265 PAY 239 

    0x97afe29e,// 266 PAY 240 

    0x9e3b8d16,// 267 PAY 241 

    0x1896f3a5,// 268 PAY 242 

    0x74d79a89,// 269 PAY 243 

    0x574d4663,// 270 PAY 244 

    0x908fa4b6,// 271 PAY 245 

    0x187b028d,// 272 PAY 246 

    0xd603d19e,// 273 PAY 247 

    0x17b3cf22,// 274 PAY 248 

    0xc21190df,// 275 PAY 249 

    0x1b0444c1,// 276 PAY 250 

    0x483cbd00,// 277 PAY 251 

    0x66d0bc36,// 278 PAY 252 

    0x5987cfd9,// 279 PAY 253 

    0xcae2681a,// 280 PAY 254 

    0x706a8b9d,// 281 PAY 255 

    0xfd8079ca,// 282 PAY 256 

    0x0e74cb2f,// 283 PAY 257 

    0x3ac9ec53,// 284 PAY 258 

    0x19863774,// 285 PAY 259 

    0x2157058b,// 286 PAY 260 

    0x19721f75,// 287 PAY 261 

    0x1365670a,// 288 PAY 262 

    0x79f9bb96,// 289 PAY 263 

    0xaab64ce6,// 290 PAY 264 

    0xd1535d41,// 291 PAY 265 

    0x4d9c3949,// 292 PAY 266 

    0xda01dac8,// 293 PAY 267 

    0x729d9c8d,// 294 PAY 268 

    0x1ab53f35,// 295 PAY 269 

    0xc3230680,// 296 PAY 270 

    0x41832aff,// 297 PAY 271 

    0x31377cec,// 298 PAY 272 

    0x9fffa8ea,// 299 PAY 273 

    0x989e548e,// 300 PAY 274 

    0xea52ee8a,// 301 PAY 275 

    0x4131eba8,// 302 PAY 276 

    0xa1f5bceb,// 303 PAY 277 

    0xd1656c1c,// 304 PAY 278 

    0x62b05625,// 305 PAY 279 

    0x1138c1ec,// 306 PAY 280 

    0x940eb47a,// 307 PAY 281 

    0x0b0f938c,// 308 PAY 282 

    0x95142c8c,// 309 PAY 283 

    0x9139667f,// 310 PAY 284 

    0x16132263,// 311 PAY 285 

    0xd8718112,// 312 PAY 286 

    0xdce92160,// 313 PAY 287 

    0xfc63beca,// 314 PAY 288 

    0x2c0ce901,// 315 PAY 289 

    0x89f2f523,// 316 PAY 290 

    0xbe0521f5,// 317 PAY 291 

    0xaf28c5b3,// 318 PAY 292 

    0x3541a454,// 319 PAY 293 

    0xb3f0a4a0,// 320 PAY 294 

    0xa892c32f,// 321 PAY 295 

    0x7add54ff,// 322 PAY 296 

    0xd48f4833,// 323 PAY 297 

    0x2e5e309e,// 324 PAY 298 

    0x3bab1ddd,// 325 PAY 299 

    0x2c213f80,// 326 PAY 300 

    0x199b2655,// 327 PAY 301 

    0x15f5a912,// 328 PAY 302 

    0xc0c7689e,// 329 PAY 303 

    0xba46dfa4,// 330 PAY 304 

    0xa2e735b7,// 331 PAY 305 

    0x0b2cdbb2,// 332 PAY 306 

    0x969f020f,// 333 PAY 307 

    0xf14b60ae,// 334 PAY 308 

    0x5949dcc8,// 335 PAY 309 

    0x1ff3ae6d,// 336 PAY 310 

    0xbd3f2958,// 337 PAY 311 

    0x01221238,// 338 PAY 312 

    0x952af91b,// 339 PAY 313 

    0x114a7eb9,// 340 PAY 314 

    0x859cb1c4,// 341 PAY 315 

    0x4185dc14,// 342 PAY 316 

    0x395fd167,// 343 PAY 317 

    0xcb1b402a,// 344 PAY 318 

    0x27ca7c73,// 345 PAY 319 

    0xf1c740e0,// 346 PAY 320 

    0xfdce2042,// 347 PAY 321 

    0xdf174394,// 348 PAY 322 

    0xa0ec4862,// 349 PAY 323 

    0x31b5fcb4,// 350 PAY 324 

    0x5bd43278,// 351 PAY 325 

    0xa6604301,// 352 PAY 326 

    0xa66b4014,// 353 PAY 327 

    0x9b28d55e,// 354 PAY 328 

    0xb509c659,// 355 PAY 329 

    0x99fec805,// 356 PAY 330 

    0xf3d3033d,// 357 PAY 331 

    0xd0a538f9,// 358 PAY 332 

    0x18eb7966,// 359 PAY 333 

    0xf53a891b,// 360 PAY 334 

    0x6b702efb,// 361 PAY 335 

    0x098168c7,// 362 PAY 336 

    0x244f9415,// 363 PAY 337 

    0x957908f5,// 364 PAY 338 

    0xf0f3513a,// 365 PAY 339 

    0x28b326c0,// 366 PAY 340 

    0xb06a6c4d,// 367 PAY 341 

    0x1170b7b3,// 368 PAY 342 

    0xd6bc2e9f,// 369 PAY 343 

    0x1d25062c,// 370 PAY 344 

    0x6d887cfa,// 371 PAY 345 

    0x084936ae,// 372 PAY 346 

    0x61a1a9c7,// 373 PAY 347 

    0x1d5ecc4f,// 374 PAY 348 

    0xbc93db76,// 375 PAY 349 

    0xd2646b08,// 376 PAY 350 

    0x726d42e1,// 377 PAY 351 

    0x56bd29ae,// 378 PAY 352 

    0xd28808b2,// 379 PAY 353 

    0x3e39abd1,// 380 PAY 354 

    0x394bd26a,// 381 PAY 355 

    0x78b792f5,// 382 PAY 356 

    0xe12253d1,// 383 PAY 357 

    0xa26b74d9,// 384 PAY 358 

    0x834e7141,// 385 PAY 359 

    0x1ce54403,// 386 PAY 360 

    0x403e622e,// 387 PAY 361 

    0x1309bf16,// 388 PAY 362 

    0x58b21a08,// 389 PAY 363 

    0x1580300d,// 390 PAY 364 

    0x6188b9e2,// 391 PAY 365 

    0x4d28521c,// 392 PAY 366 

    0xe1cd1831,// 393 PAY 367 

    0x9f9c76a0,// 394 PAY 368 

    0xce4a3006,// 395 PAY 369 

    0xcca2f26e,// 396 PAY 370 

    0xbde4f8e9,// 397 PAY 371 

    0xd5650e3f,// 398 PAY 372 

    0xd5ddfe95,// 399 PAY 373 

    0xd7c6f557,// 400 PAY 374 

    0xac95eeab,// 401 PAY 375 

    0xef10aa9f,// 402 PAY 376 

    0x1a6a4d0e,// 403 PAY 377 

    0xbf9a2122,// 404 PAY 378 

    0x75be2bc6,// 405 PAY 379 

    0x02a1e3c1,// 406 PAY 380 

    0xedb95832,// 407 PAY 381 

    0xe3d11c41,// 408 PAY 382 

    0x9dc4417b,// 409 PAY 383 

    0x36e09e91,// 410 PAY 384 

    0x18806608,// 411 PAY 385 

    0x479f0bb8,// 412 PAY 386 

    0xdd2a57c0,// 413 PAY 387 

    0x97c2ff13,// 414 PAY 388 

    0x67f77681,// 415 PAY 389 

    0xf907ce34,// 416 PAY 390 

    0x2827087e,// 417 PAY 391 

    0x23c4c63a,// 418 PAY 392 

    0x969b7f6f,// 419 PAY 393 

    0xbaad6bab,// 420 PAY 394 

    0x7bc195fd,// 421 PAY 395 

    0xcc0d8839,// 422 PAY 396 

    0xd8a7926f,// 423 PAY 397 

    0xe04cd566,// 424 PAY 398 

    0x01ab0e11,// 425 PAY 399 

    0x4077e961,// 426 PAY 400 

    0xd67aeaff,// 427 PAY 401 

    0xce4e534b,// 428 PAY 402 

    0x1d80d9c1,// 429 PAY 403 

    0x826c27c0,// 430 PAY 404 

    0x5e976a6f,// 431 PAY 405 

    0x33d59c33,// 432 PAY 406 

    0xd5f7a0e7,// 433 PAY 407 

    0x52a62da4,// 434 PAY 408 

    0xdd64e019,// 435 PAY 409 

    0x7f705095,// 436 PAY 410 

    0x60544f0c,// 437 PAY 411 

    0xe1bda549,// 438 PAY 412 

    0xfcc4a050,// 439 PAY 413 

    0xaad7c57a,// 440 PAY 414 

    0x275c100d,// 441 PAY 415 

    0x58c4d9f1,// 442 PAY 416 

    0x7d53d8eb,// 443 PAY 417 

    0xaf035cc7,// 444 PAY 418 

    0xb719b94e,// 445 PAY 419 

    0x92774db3,// 446 PAY 420 

    0x18fdc0a6,// 447 PAY 421 

    0x1f20e49b,// 448 PAY 422 

    0x958d8c38,// 449 PAY 423 

    0xb7857671,// 450 PAY 424 

    0x9f403402,// 451 PAY 425 

    0xf104b5e7,// 452 PAY 426 

    0xcf4f944b,// 453 PAY 427 

    0xfeb1e426,// 454 PAY 428 

    0x1750aa9b,// 455 PAY 429 

    0x84ae022f,// 456 PAY 430 

    0x87d04569,// 457 PAY 431 

    0x77b0fd77,// 458 PAY 432 

    0xab7a7156,// 459 PAY 433 

    0x74e8f297,// 460 PAY 434 

    0xcd846526,// 461 PAY 435 

    0xcbc071e2,// 462 PAY 436 

    0xf18a5b0c,// 463 PAY 437 

    0x581b8116,// 464 PAY 438 

    0x9a511ff0,// 465 PAY 439 

    0x822e00a3,// 466 PAY 440 

    0xd4f244ab,// 467 PAY 441 

    0xb8c7dceb,// 468 PAY 442 

    0xc9af26ab,// 469 PAY 443 

    0x6b3a0910,// 470 PAY 444 

    0xfff07428,// 471 PAY 445 

    0x6b888bea,// 472 PAY 446 

    0x0963970b,// 473 PAY 447 

    0x7625c51e,// 474 PAY 448 

    0x22a1faba,// 475 PAY 449 

    0x6d9f93d5,// 476 PAY 450 

    0x103fd05b,// 477 PAY 451 

    0x43f70739,// 478 PAY 452 

    0x99a3e1b9,// 479 PAY 453 

    0x65b572a0,// 480 PAY 454 

    0xbe3ddb86,// 481 PAY 455 

    0x886fcb76,// 482 PAY 456 

    0x7f67145e,// 483 PAY 457 

    0xfabefd80,// 484 PAY 458 

    0x6240d382,// 485 PAY 459 

    0xaec060e9,// 486 PAY 460 

    0x242b16a2,// 487 PAY 461 

    0xca9945e9,// 488 PAY 462 

    0xd042b5f3,// 489 PAY 463 

    0xdfd3b3e5,// 490 PAY 464 

    0x8e8894b7,// 491 PAY 465 

    0xd2eb2937,// 492 PAY 466 

    0xf30db6ae,// 493 PAY 467 

    0x60fef4f9,// 494 PAY 468 

    0xca6f34ec,// 495 PAY 469 

    0x46874fa1,// 496 PAY 470 

    0x411e50a1,// 497 PAY 471 

    0x122187f5,// 498 PAY 472 

    0x6cffb351,// 499 PAY 473 

    0x9d95350b,// 500 PAY 474 

    0x20f6634c,// 501 PAY 475 

    0x9e71f3e9,// 502 PAY 476 

    0x20706c5a,// 503 PAY 477 

    0x8ae925f8,// 504 PAY 478 

    0x469d1d49,// 505 PAY 479 

    0x8039921b,// 506 PAY 480 

    0x1dd73725,// 507 PAY 481 

    0x9e6564c0,// 508 PAY 482 

    0xc588cc3a,// 509 PAY 483 

    0xca694a44,// 510 PAY 484 

    0xa8ae8df3,// 511 PAY 485 

    0x0cfd390f,// 512 PAY 486 

    0xb84b9d3b,// 513 PAY 487 

    0x38a440e0,// 514 PAY 488 

    0xf1c8e1d5,// 515 PAY 489 

    0xcd688a79,// 516 PAY 490 

    0x9752956f,// 517 PAY 491 

    0x974ac115,// 518 PAY 492 

    0xbd5ac2f5,// 519 PAY 493 

    0x1a706688,// 520 PAY 494 

    0x4643e5d4,// 521 PAY 495 

    0xc883b4d2,// 522 PAY 496 

    0x074cc212,// 523 PAY 497 

    0x36f982e2,// 524 PAY 498 

    0xd6647f5e,// 525 PAY 499 

    0x1f9c6cca,// 526 PAY 500 

    0x6e7799fb,// 527 PAY 501 

    0x1dcef89f,// 528 PAY 502 

    0x5dd78891,// 529 PAY 503 

    0x40dcefa0,// 530 PAY 504 

    0x7f388d76,// 531 PAY 505 

    0x228c11b7,// 532 PAY 506 

/// STA is 1 words. 

/// STA num_pkts       : 83 

/// STA pkt_idx        : 146 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x20 

    0x02492053 // 533 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt6_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x0a 

/// ECH pdu_tag        : 0x00 

    0x000a0000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv insert_icv !check_icv !sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0000000f,// 3 SCX   1 

    0x804448e9,// 4 SCX   2 

    0x00002342,// 5 SCX   3 

    0xd1c8ac66,// 6 SCX   4 

    0xa979ed35,// 7 SCX   5 

    0xf50fb0ac,// 8 SCX   6 

    0x20c5a458,// 9 SCX   7 

    0x37301214,// 10 SCX   8 

    0x99bf3fc8,// 11 SCX   9 

    0x05615006,// 12 SCX  10 

    0x16f66a60,// 13 SCX  11 

    0x1b4a4a2d,// 14 SCX  12 

    0x5cd40f54,// 15 SCX  13 

    0xb0200253,// 16 SCX  14 

    0x75192091,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 317 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 52 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 52 

/// BFD lencrypto      : 16 

/// BFD ofstcrypto     : 24 

/// BFD (ofst+len)cry  : 40 

/// BFD ofstiv         : 4 

/// BFD ofsticv        : 64 

    0x00000034,// 18 BFD   1 

    0x00180010,// 19 BFD   2 

    0x00400004,// 20 BFD   3 

/// MFM is 2 words. 

/// MFM vldnibs        : 7 

    0x07004ca1,// 21 MFM   1 

    0xc7b00000,// 22 MFM   2 

/// BDA is 81 words. 

/// BDA size     is 317 (0x13d) 

/// BDA id       is 0x4456 

    0x013d4456,// 23 BDA   1 

/// PAY Generic Data size   : 317 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x558f5839,// 24 PAY   1 

    0xd60e96e6,// 25 PAY   2 

    0xf013c9ad,// 26 PAY   3 

    0x41302c10,// 27 PAY   4 

    0xedc5c112,// 28 PAY   5 

    0x5f0a810b,// 29 PAY   6 

    0x2af914df,// 30 PAY   7 

    0x06e28794,// 31 PAY   8 

    0xd89992be,// 32 PAY   9 

    0x99d98ce9,// 33 PAY  10 

    0x001d26ea,// 34 PAY  11 

    0x03b931d1,// 35 PAY  12 

    0xf29e94ee,// 36 PAY  13 

    0xff8e4cce,// 37 PAY  14 

    0x2ba9cca7,// 38 PAY  15 

    0xb8d139ac,// 39 PAY  16 

    0xd73582fa,// 40 PAY  17 

    0xbdb43075,// 41 PAY  18 

    0x0b960f31,// 42 PAY  19 

    0x4125ea8c,// 43 PAY  20 

    0x836eca2e,// 44 PAY  21 

    0xc021df7d,// 45 PAY  22 

    0x8e2f39cb,// 46 PAY  23 

    0x04f2176c,// 47 PAY  24 

    0x2eee9128,// 48 PAY  25 

    0x8d2a805a,// 49 PAY  26 

    0xf8d3e0ab,// 50 PAY  27 

    0x30459aba,// 51 PAY  28 

    0xb7ab1541,// 52 PAY  29 

    0x172519d5,// 53 PAY  30 

    0x1e81c3ee,// 54 PAY  31 

    0xa0a4a5ee,// 55 PAY  32 

    0xb0fad917,// 56 PAY  33 

    0x5722ef5d,// 57 PAY  34 

    0x7979c0a4,// 58 PAY  35 

    0x9e3bc31d,// 59 PAY  36 

    0xd90a8f75,// 60 PAY  37 

    0xb43a9113,// 61 PAY  38 

    0x87c6dd19,// 62 PAY  39 

    0x61658089,// 63 PAY  40 

    0x1f91c27b,// 64 PAY  41 

    0xe1484be6,// 65 PAY  42 

    0xcd7f1afb,// 66 PAY  43 

    0x867d2f5f,// 67 PAY  44 

    0x1906f6a8,// 68 PAY  45 

    0x5682ae7f,// 69 PAY  46 

    0xecd0b98d,// 70 PAY  47 

    0xfd0db859,// 71 PAY  48 

    0xa1d15e61,// 72 PAY  49 

    0xdc5ad313,// 73 PAY  50 

    0xb45b44e2,// 74 PAY  51 

    0x7be6698e,// 75 PAY  52 

    0x99e2eb9c,// 76 PAY  53 

    0x28a6c679,// 77 PAY  54 

    0x6000ceb5,// 78 PAY  55 

    0x1b2a4369,// 79 PAY  56 

    0x590df091,// 80 PAY  57 

    0x80c76e2c,// 81 PAY  58 

    0x74aa2f4c,// 82 PAY  59 

    0x8f2fe166,// 83 PAY  60 

    0x630f591e,// 84 PAY  61 

    0xea35289d,// 85 PAY  62 

    0x4a016e6d,// 86 PAY  63 

    0x27f68a58,// 87 PAY  64 

    0x41781969,// 88 PAY  65 

    0x0323f2c6,// 89 PAY  66 

    0x759fe614,// 90 PAY  67 

    0x37533c0c,// 91 PAY  68 

    0x0a2f38dd,// 92 PAY  69 

    0x2a46c13b,// 93 PAY  70 

    0x4b76081e,// 94 PAY  71 

    0x6094712d,// 95 PAY  72 

    0x99189e3c,// 96 PAY  73 

    0x4e332a39,// 97 PAY  74 

    0x7e8abe05,// 98 PAY  75 

    0x741ce4ca,// 99 PAY  76 

    0x2a3c7452,// 100 PAY  77 

    0xa6a0783d,// 101 PAY  78 

    0xd5d57584,// 102 PAY  79 

    0x51000000,// 103 PAY  80 

/// STA is 1 words. 

/// STA num_pkts       : 34 

/// STA pkt_idx        : 231 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xdf 

    0x039cdf22 // 104 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt7_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x0a 

/// ECH pdu_tag        : 0x00 

    0x000a0000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv insert_icv check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x08000011,// 3 SCX   1 

    0x804548c1,// 4 SCX   2 

    0x00007482,// 5 SCX   3 

    0x273c2e70,// 6 SCX   4 

    0x6369ee70,// 7 SCX   5 

    0x99cdf4f6,// 8 SCX   6 

    0x2df7a84d,// 9 SCX   7 

    0xcf82eaa3,// 10 SCX   8 

    0x7947d0b1,// 11 SCX   9 

    0x31b47416,// 12 SCX  10 

    0x811a677b,// 13 SCX  11 

    0x44f29955,// 14 SCX  12 

    0x7af4d8b2,// 15 SCX  13 

    0xc785e1f7,// 16 SCX  14 

    0x45b7a3d9,// 17 SCX  15 

    0x2f80ba29,// 18 SCX  16 

    0x0c947f92,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1019 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 686 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 686 

/// BFD lencrypto      : 152 

/// BFD ofstcrypto     : 288 

/// BFD (ofst+len)cry  : 440 

/// BFD ofstiv         : 56 

/// BFD ofsticv        : 944 

    0x000002ae,// 20 BFD   1 

    0x01200098,// 21 BFD   2 

    0x03b00038,// 22 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c009b7f,// 23 MFM   1 

    0x3f48ac19,// 24 MFM   2 

    0x5121e4cb,// 25 MFM   3 

    0x57182fa2,// 26 MFM   4 

    0xf9ac29a4,// 27 MFM   5 

    0x47090d6d,// 28 MFM   6 

    0x3d0758d3,// 29 MFM   7 

    0x04215a1b,// 30 MFM   8 

    0x28ef5c06,// 31 MFM   9 

    0x71280f72,// 32 MFM  10 

    0xedde0a9b,// 33 MFM  11 

    0x5bd98dff,// 34 MFM  12 

    0x0cf638a9,// 35 MFM  13 

    0x9c4b8960,// 36 MFM  14 

    0xabcefab1,// 37 MFM  15 

    0xfd861f1d,// 38 MFM  16 

/// BDA is 256 words. 

/// BDA size     is 1019 (0x3fb) 

/// BDA id       is 0xd61 

    0x03fb0d61,// 39 BDA   1 

/// PAY Generic Data size   : 1019 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x2c7f7a9f,// 40 PAY   1 

    0xf8798061,// 41 PAY   2 

    0x42d783db,// 42 PAY   3 

    0x8171576e,// 43 PAY   4 

    0x2423ca39,// 44 PAY   5 

    0x910e9f79,// 45 PAY   6 

    0x960acfd4,// 46 PAY   7 

    0x99ba4681,// 47 PAY   8 

    0xeef62ea6,// 48 PAY   9 

    0xccc6f040,// 49 PAY  10 

    0xe078e32d,// 50 PAY  11 

    0xcb285c3a,// 51 PAY  12 

    0x4f360876,// 52 PAY  13 

    0x5e658a7c,// 53 PAY  14 

    0x48a3dbef,// 54 PAY  15 

    0xacfb1914,// 55 PAY  16 

    0xd2b9861d,// 56 PAY  17 

    0x40c4e0bd,// 57 PAY  18 

    0x66d086f0,// 58 PAY  19 

    0x94d2db5d,// 59 PAY  20 

    0x05711aa5,// 60 PAY  21 

    0x8cc85540,// 61 PAY  22 

    0xe6500b6a,// 62 PAY  23 

    0x056bafdf,// 63 PAY  24 

    0x5f9cc538,// 64 PAY  25 

    0x064a442e,// 65 PAY  26 

    0x3232eae9,// 66 PAY  27 

    0xca61caa7,// 67 PAY  28 

    0x67233c7b,// 68 PAY  29 

    0x7d59d1b3,// 69 PAY  30 

    0x6257c98d,// 70 PAY  31 

    0x377a3efd,// 71 PAY  32 

    0xd95d9033,// 72 PAY  33 

    0x73249773,// 73 PAY  34 

    0x05e5f33d,// 74 PAY  35 

    0x44e229de,// 75 PAY  36 

    0x0821aac3,// 76 PAY  37 

    0x76b2fac0,// 77 PAY  38 

    0x23dd47f1,// 78 PAY  39 

    0x092d0954,// 79 PAY  40 

    0x0c6fef7a,// 80 PAY  41 

    0x76c0f1db,// 81 PAY  42 

    0xca7e3a89,// 82 PAY  43 

    0x1d83541e,// 83 PAY  44 

    0x8b70e3e4,// 84 PAY  45 

    0x099b5ff1,// 85 PAY  46 

    0x11ff6891,// 86 PAY  47 

    0x9bfc9214,// 87 PAY  48 

    0xdb5fe1b7,// 88 PAY  49 

    0x31034e5b,// 89 PAY  50 

    0x41de562d,// 90 PAY  51 

    0xc48a73e7,// 91 PAY  52 

    0xdb8c4716,// 92 PAY  53 

    0x9efc1aa1,// 93 PAY  54 

    0xa92c8a1f,// 94 PAY  55 

    0xdc7704be,// 95 PAY  56 

    0xf344bff8,// 96 PAY  57 

    0xebaa9218,// 97 PAY  58 

    0x14ab847e,// 98 PAY  59 

    0x90971ced,// 99 PAY  60 

    0x09d208e9,// 100 PAY  61 

    0x89f44d39,// 101 PAY  62 

    0xdbf19e8d,// 102 PAY  63 

    0x82a3bcce,// 103 PAY  64 

    0x120aed7b,// 104 PAY  65 

    0xd1da7731,// 105 PAY  66 

    0x3ae2376b,// 106 PAY  67 

    0x4427f42c,// 107 PAY  68 

    0x9289cde1,// 108 PAY  69 

    0xcad5976a,// 109 PAY  70 

    0xe1bc01e9,// 110 PAY  71 

    0x4a16994d,// 111 PAY  72 

    0x94d8e185,// 112 PAY  73 

    0xb9e60a60,// 113 PAY  74 

    0xda75a52a,// 114 PAY  75 

    0xeac262ef,// 115 PAY  76 

    0x47487722,// 116 PAY  77 

    0x7d02eebf,// 117 PAY  78 

    0xfd704b82,// 118 PAY  79 

    0x258d5c7f,// 119 PAY  80 

    0x9415b79a,// 120 PAY  81 

    0x16ee25c0,// 121 PAY  82 

    0x7366a692,// 122 PAY  83 

    0xe1379ccb,// 123 PAY  84 

    0x6a700ffc,// 124 PAY  85 

    0xc1ec4f1f,// 125 PAY  86 

    0x36f31a29,// 126 PAY  87 

    0x701c1d0e,// 127 PAY  88 

    0x4f2b4aae,// 128 PAY  89 

    0xfea4df51,// 129 PAY  90 

    0xca1c9cb8,// 130 PAY  91 

    0x28f72732,// 131 PAY  92 

    0x34f2d5f8,// 132 PAY  93 

    0x83ddc170,// 133 PAY  94 

    0xac74f3b9,// 134 PAY  95 

    0xa53bb00f,// 135 PAY  96 

    0x7f0410c6,// 136 PAY  97 

    0xb970f003,// 137 PAY  98 

    0x428282a5,// 138 PAY  99 

    0x3b17089d,// 139 PAY 100 

    0x9d2e1ac4,// 140 PAY 101 

    0x1262a4b8,// 141 PAY 102 

    0x03deb6d2,// 142 PAY 103 

    0x5ce1634f,// 143 PAY 104 

    0x2419f3ae,// 144 PAY 105 

    0x99b2e9cc,// 145 PAY 106 

    0x18aa9ee3,// 146 PAY 107 

    0xc5848edf,// 147 PAY 108 

    0x2af66eba,// 148 PAY 109 

    0x968c55fe,// 149 PAY 110 

    0x27618d7d,// 150 PAY 111 

    0xf06c4c64,// 151 PAY 112 

    0x96b65831,// 152 PAY 113 

    0xb3c80b2d,// 153 PAY 114 

    0x97e3226c,// 154 PAY 115 

    0x770c6869,// 155 PAY 116 

    0x75662386,// 156 PAY 117 

    0x39ebaed7,// 157 PAY 118 

    0x105f929b,// 158 PAY 119 

    0xdb4b1811,// 159 PAY 120 

    0x0d2d8667,// 160 PAY 121 

    0xad4d3acf,// 161 PAY 122 

    0x27039173,// 162 PAY 123 

    0x2b424eee,// 163 PAY 124 

    0xd2405cb2,// 164 PAY 125 

    0x4df92045,// 165 PAY 126 

    0x15a6b774,// 166 PAY 127 

    0x2825361e,// 167 PAY 128 

    0xef21837d,// 168 PAY 129 

    0xea220ba4,// 169 PAY 130 

    0x98a56757,// 170 PAY 131 

    0xca2d8f45,// 171 PAY 132 

    0xaca0d8b6,// 172 PAY 133 

    0x9fe4dd46,// 173 PAY 134 

    0x9fd455db,// 174 PAY 135 

    0xfe1a08ce,// 175 PAY 136 

    0x26837694,// 176 PAY 137 

    0x81d97e19,// 177 PAY 138 

    0x918f548a,// 178 PAY 139 

    0xd5481e0d,// 179 PAY 140 

    0xbc6726df,// 180 PAY 141 

    0x13a6341b,// 181 PAY 142 

    0x60fec6b5,// 182 PAY 143 

    0xa064fc35,// 183 PAY 144 

    0x5ec29957,// 184 PAY 145 

    0xb733b88d,// 185 PAY 146 

    0x9a7e8280,// 186 PAY 147 

    0x6e1a5dde,// 187 PAY 148 

    0x5bac4870,// 188 PAY 149 

    0x867048ba,// 189 PAY 150 

    0x437dfdd4,// 190 PAY 151 

    0x03c90d27,// 191 PAY 152 

    0x3e89f59d,// 192 PAY 153 

    0x36b1f214,// 193 PAY 154 

    0x01ea3293,// 194 PAY 155 

    0x2325f93c,// 195 PAY 156 

    0x23aba90f,// 196 PAY 157 

    0x168df48c,// 197 PAY 158 

    0x9b3a279d,// 198 PAY 159 

    0x15d8bc76,// 199 PAY 160 

    0xf0d5eace,// 200 PAY 161 

    0x1e56040d,// 201 PAY 162 

    0xdec7e267,// 202 PAY 163 

    0xf6281c07,// 203 PAY 164 

    0x3739a820,// 204 PAY 165 

    0x5c56e4ef,// 205 PAY 166 

    0x63ec946f,// 206 PAY 167 

    0xd392dc91,// 207 PAY 168 

    0x89009070,// 208 PAY 169 

    0x85ed17b0,// 209 PAY 170 

    0x73ceab55,// 210 PAY 171 

    0x8ee07cff,// 211 PAY 172 

    0xeb1a971b,// 212 PAY 173 

    0x55ac654b,// 213 PAY 174 

    0x74a90072,// 214 PAY 175 

    0xfd231e42,// 215 PAY 176 

    0xf4c8d280,// 216 PAY 177 

    0xb32f987d,// 217 PAY 178 

    0xea680c5e,// 218 PAY 179 

    0x26460583,// 219 PAY 180 

    0x176bb53c,// 220 PAY 181 

    0x818bb77b,// 221 PAY 182 

    0x360e3138,// 222 PAY 183 

    0x18095884,// 223 PAY 184 

    0xfd235b3e,// 224 PAY 185 

    0x2c9cde9b,// 225 PAY 186 

    0x2a2e2eb3,// 226 PAY 187 

    0xc7294421,// 227 PAY 188 

    0x130f7947,// 228 PAY 189 

    0x8f6fc691,// 229 PAY 190 

    0x2c0ddd8e,// 230 PAY 191 

    0x017960a6,// 231 PAY 192 

    0x75b23f87,// 232 PAY 193 

    0x63efbead,// 233 PAY 194 

    0xa4111f6a,// 234 PAY 195 

    0x63048c58,// 235 PAY 196 

    0x246a8061,// 236 PAY 197 

    0x3329669e,// 237 PAY 198 

    0x833939a3,// 238 PAY 199 

    0x364738f1,// 239 PAY 200 

    0xd305bfb2,// 240 PAY 201 

    0x1be52755,// 241 PAY 202 

    0xeab155d2,// 242 PAY 203 

    0xd4090b26,// 243 PAY 204 

    0x92240d75,// 244 PAY 205 

    0x87aa63f8,// 245 PAY 206 

    0xe2bf9fb4,// 246 PAY 207 

    0x63c29f54,// 247 PAY 208 

    0x654c96f7,// 248 PAY 209 

    0x449ac839,// 249 PAY 210 

    0x634c2195,// 250 PAY 211 

    0x0f1bb796,// 251 PAY 212 

    0x12a48fac,// 252 PAY 213 

    0xd446f50d,// 253 PAY 214 

    0x145cc428,// 254 PAY 215 

    0xa65a66fb,// 255 PAY 216 

    0xe0842f32,// 256 PAY 217 

    0x94ab320f,// 257 PAY 218 

    0xeeaeac5c,// 258 PAY 219 

    0xf4b51f69,// 259 PAY 220 

    0x3847bb99,// 260 PAY 221 

    0xd884d33b,// 261 PAY 222 

    0x3f38dbe5,// 262 PAY 223 

    0xf9f758ca,// 263 PAY 224 

    0xd5e69317,// 264 PAY 225 

    0x9b408939,// 265 PAY 226 

    0xa137088a,// 266 PAY 227 

    0xad6886f4,// 267 PAY 228 

    0xfcb7dbf3,// 268 PAY 229 

    0xaa539ce4,// 269 PAY 230 

    0xb4e5c319,// 270 PAY 231 

    0x7f8b4b15,// 271 PAY 232 

    0x8730ea8b,// 272 PAY 233 

    0x143e0c3e,// 273 PAY 234 

    0x944077cd,// 274 PAY 235 

    0x1c9ca3dc,// 275 PAY 236 

    0x7cd4b19d,// 276 PAY 237 

    0xecadf052,// 277 PAY 238 

    0xd3fd1fa1,// 278 PAY 239 

    0x72831f76,// 279 PAY 240 

    0xf53daf8b,// 280 PAY 241 

    0xfc39668c,// 281 PAY 242 

    0x99e796b2,// 282 PAY 243 

    0xd5d83ed9,// 283 PAY 244 

    0x1fd2d42f,// 284 PAY 245 

    0x83799589,// 285 PAY 246 

    0xfbd64c09,// 286 PAY 247 

    0xbbbfa2eb,// 287 PAY 248 

    0xd3ab0817,// 288 PAY 249 

    0x0dc590fb,// 289 PAY 250 

    0x79d16e68,// 290 PAY 251 

    0x97e365d1,// 291 PAY 252 

    0xd71a67f7,// 292 PAY 253 

    0x05739977,// 293 PAY 254 

    0xcc301d00,// 294 PAY 255 

/// STA is 1 words. 

/// STA num_pkts       : 140 

/// STA pkt_idx        : 203 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xee 

    0x032dee8c // 295 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt8_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x02 

/// ECH pdu_tag        : 0x00 

    0x00020000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0000000f,// 3 SCX   1 

    0x8040483a,// 4 SCX   2 

    0x00002100,// 5 SCX   3 

    0xa8d0d58d,// 6 SCX   4 

    0x4a01745b,// 7 SCX   5 

    0x345c8fec,// 8 SCX   6 

    0x857e1f7a,// 9 SCX   7 

    0x318e1fa8,// 10 SCX   8 

    0x53915b9d,// 11 SCX   9 

    0xfa6d0990,// 12 SCX  10 

    0xb32ee7eb,// 13 SCX  11 

    0x86faca93,// 14 SCX  12 

    0x0daf0f12,// 15 SCX  13 

    0x615a0175,// 16 SCX  14 

    0xbc00af74,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 1120 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 428 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 428 

/// BFD lencrypto      : 32 

/// BFD ofstcrypto     : 200 

/// BFD (ofst+len)cry  : 232 

/// BFD ofstiv         : 84 

/// BFD ofsticv        : 484 

    0x000001ac,// 18 BFD   1 

    0x00c80020,// 19 BFD   2 

    0x01e40054,// 20 BFD   3 

/// MFM is 6 words. 

/// MFM vldnibs        : 26 

    0x26001338,// 21 MFM   1 

    0x57c098ef,// 22 MFM   2 

    0x50a44595,// 23 MFM   3 

    0x8f50fbde,// 24 MFM   4 

    0xbd3fb6af,// 25 MFM   5 

    0xe3000000,// 26 MFM   6 

/// BDA is 281 words. 

/// BDA size     is 1120 (0x460) 

/// BDA id       is 0x5dfa 

    0x04605dfa,// 27 BDA   1 

/// PAY Generic Data size   : 1120 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x9cd900ed,// 28 PAY   1 

    0x29288a5f,// 29 PAY   2 

    0x64bda180,// 30 PAY   3 

    0xe996ed50,// 31 PAY   4 

    0xdd9ed543,// 32 PAY   5 

    0xf08c778d,// 33 PAY   6 

    0xd8dd67ea,// 34 PAY   7 

    0x7ea887f6,// 35 PAY   8 

    0x191f55f9,// 36 PAY   9 

    0xa9518ef4,// 37 PAY  10 

    0xc3cb978c,// 38 PAY  11 

    0x95c47680,// 39 PAY  12 

    0xa309130e,// 40 PAY  13 

    0xc7972f83,// 41 PAY  14 

    0xd5abfad6,// 42 PAY  15 

    0x6b1c837f,// 43 PAY  16 

    0xe9e79b17,// 44 PAY  17 

    0xa9975c98,// 45 PAY  18 

    0x1422218f,// 46 PAY  19 

    0x2ac304e4,// 47 PAY  20 

    0x0beee17a,// 48 PAY  21 

    0x05e4ff9d,// 49 PAY  22 

    0x49c0d20c,// 50 PAY  23 

    0xa8e2cac3,// 51 PAY  24 

    0x5fa1cca8,// 52 PAY  25 

    0xa2cc7d67,// 53 PAY  26 

    0x69299eb8,// 54 PAY  27 

    0x0778a559,// 55 PAY  28 

    0x7ca6ef2b,// 56 PAY  29 

    0x5ac06dce,// 57 PAY  30 

    0xd989b21f,// 58 PAY  31 

    0x43d4bf59,// 59 PAY  32 

    0x93adb471,// 60 PAY  33 

    0x45d9092b,// 61 PAY  34 

    0x51c14524,// 62 PAY  35 

    0xa987f025,// 63 PAY  36 

    0xf09a295b,// 64 PAY  37 

    0xd5904c8c,// 65 PAY  38 

    0xcd8d6854,// 66 PAY  39 

    0xeed87893,// 67 PAY  40 

    0x177dd54c,// 68 PAY  41 

    0xef02b7ba,// 69 PAY  42 

    0x9f8e3f6e,// 70 PAY  43 

    0x31d63649,// 71 PAY  44 

    0x216b7ef0,// 72 PAY  45 

    0x263d24e4,// 73 PAY  46 

    0xec05dc83,// 74 PAY  47 

    0xde932c64,// 75 PAY  48 

    0x2bcdef9e,// 76 PAY  49 

    0xa399ca56,// 77 PAY  50 

    0x5e247449,// 78 PAY  51 

    0x3f2ffa8f,// 79 PAY  52 

    0x7374f0e8,// 80 PAY  53 

    0x537f2481,// 81 PAY  54 

    0xfef0a713,// 82 PAY  55 

    0x927efb31,// 83 PAY  56 

    0x77320bae,// 84 PAY  57 

    0x628337e5,// 85 PAY  58 

    0x0b943e17,// 86 PAY  59 

    0x246f73f6,// 87 PAY  60 

    0x11133f2c,// 88 PAY  61 

    0x0874a8b6,// 89 PAY  62 

    0xccac69d0,// 90 PAY  63 

    0x97749535,// 91 PAY  64 

    0xa97eb3cb,// 92 PAY  65 

    0xe1e3add5,// 93 PAY  66 

    0x9e3cb55c,// 94 PAY  67 

    0x2421d8e7,// 95 PAY  68 

    0x9391fa3a,// 96 PAY  69 

    0x5d3bd7c3,// 97 PAY  70 

    0xc5443a49,// 98 PAY  71 

    0x1263c0c5,// 99 PAY  72 

    0xfbd2749b,// 100 PAY  73 

    0x55af85b8,// 101 PAY  74 

    0x2d4ad433,// 102 PAY  75 

    0xd1a0adae,// 103 PAY  76 

    0x45ceb9c9,// 104 PAY  77 

    0xb821beb4,// 105 PAY  78 

    0x50f10546,// 106 PAY  79 

    0x81feec6e,// 107 PAY  80 

    0xe0f2b3f9,// 108 PAY  81 

    0xe3ebf110,// 109 PAY  82 

    0xe6a604a2,// 110 PAY  83 

    0xa60d81bb,// 111 PAY  84 

    0x6ea3d224,// 112 PAY  85 

    0x08987351,// 113 PAY  86 

    0x469cac3a,// 114 PAY  87 

    0x6b80a72f,// 115 PAY  88 

    0x43b8d7f1,// 116 PAY  89 

    0xed8e611b,// 117 PAY  90 

    0x319d892b,// 118 PAY  91 

    0x7fe13f72,// 119 PAY  92 

    0x73a9a4a7,// 120 PAY  93 

    0x5d686f0b,// 121 PAY  94 

    0x9c9b427b,// 122 PAY  95 

    0x8a43b761,// 123 PAY  96 

    0xd7c6ade1,// 124 PAY  97 

    0x3024cd7b,// 125 PAY  98 

    0xfb789cb3,// 126 PAY  99 

    0x816e9241,// 127 PAY 100 

    0xd96de90a,// 128 PAY 101 

    0xd5eda847,// 129 PAY 102 

    0x0b672234,// 130 PAY 103 

    0x35e5357e,// 131 PAY 104 

    0x409c05ef,// 132 PAY 105 

    0x5f9fb076,// 133 PAY 106 

    0x551dfdb5,// 134 PAY 107 

    0x7a5f0588,// 135 PAY 108 

    0x795f3792,// 136 PAY 109 

    0x1da7dcc3,// 137 PAY 110 

    0xf4ef661c,// 138 PAY 111 

    0x74718e52,// 139 PAY 112 

    0x5acbf42f,// 140 PAY 113 

    0x6c3fbe02,// 141 PAY 114 

    0x651c2a63,// 142 PAY 115 

    0x298b4e80,// 143 PAY 116 

    0x44642c96,// 144 PAY 117 

    0xa087395e,// 145 PAY 118 

    0xb5f60fb5,// 146 PAY 119 

    0xc3769258,// 147 PAY 120 

    0x412873ed,// 148 PAY 121 

    0x70619484,// 149 PAY 122 

    0x0fa58aed,// 150 PAY 123 

    0x0ce06bb3,// 151 PAY 124 

    0x6dd59e69,// 152 PAY 125 

    0x5d74d1f9,// 153 PAY 126 

    0xb7dc17b5,// 154 PAY 127 

    0x2a310324,// 155 PAY 128 

    0x2c95da97,// 156 PAY 129 

    0x7633ad71,// 157 PAY 130 

    0x1088b62a,// 158 PAY 131 

    0x1701987d,// 159 PAY 132 

    0xc8d675e4,// 160 PAY 133 

    0xc107d5e3,// 161 PAY 134 

    0x76aaec28,// 162 PAY 135 

    0xf53752f0,// 163 PAY 136 

    0xb369bc8d,// 164 PAY 137 

    0xb67ebdd5,// 165 PAY 138 

    0x978c814f,// 166 PAY 139 

    0x7ef7d659,// 167 PAY 140 

    0xb9beed46,// 168 PAY 141 

    0xed0b704e,// 169 PAY 142 

    0xc9a5c8f6,// 170 PAY 143 

    0x9d24c91b,// 171 PAY 144 

    0xd808fb30,// 172 PAY 145 

    0x9191ed39,// 173 PAY 146 

    0x0c59c732,// 174 PAY 147 

    0xcc27042b,// 175 PAY 148 

    0x4288e616,// 176 PAY 149 

    0x6e13d5af,// 177 PAY 150 

    0x35ba4b49,// 178 PAY 151 

    0x63526a55,// 179 PAY 152 

    0x188e9dab,// 180 PAY 153 

    0x287082dd,// 181 PAY 154 

    0xe083c07b,// 182 PAY 155 

    0x70ffee1d,// 183 PAY 156 

    0x2586d6d1,// 184 PAY 157 

    0x2fd39fcb,// 185 PAY 158 

    0x201b05a4,// 186 PAY 159 

    0x5ae5855b,// 187 PAY 160 

    0xa40c3fd8,// 188 PAY 161 

    0x4dac5e9a,// 189 PAY 162 

    0x9f37cbe9,// 190 PAY 163 

    0x8fa86edb,// 191 PAY 164 

    0x60c44509,// 192 PAY 165 

    0xb44a92ae,// 193 PAY 166 

    0x32e1270a,// 194 PAY 167 

    0x08e80f58,// 195 PAY 168 

    0xfd30bf9d,// 196 PAY 169 

    0xb3f1cef3,// 197 PAY 170 

    0xd422f4d1,// 198 PAY 171 

    0xaea78ed5,// 199 PAY 172 

    0xe0fcb014,// 200 PAY 173 

    0x3efc9819,// 201 PAY 174 

    0xd8543b2d,// 202 PAY 175 

    0x8d181661,// 203 PAY 176 

    0x20d974cb,// 204 PAY 177 

    0x27b71c5a,// 205 PAY 178 

    0x565cc1d4,// 206 PAY 179 

    0x2ad53fba,// 207 PAY 180 

    0x8dadb7ea,// 208 PAY 181 

    0xe7068d1d,// 209 PAY 182 

    0x971f3a51,// 210 PAY 183 

    0x14e43006,// 211 PAY 184 

    0xba7b3bec,// 212 PAY 185 

    0x11f639d4,// 213 PAY 186 

    0xf830b1cd,// 214 PAY 187 

    0xace3614b,// 215 PAY 188 

    0x00a6d06b,// 216 PAY 189 

    0x9940d019,// 217 PAY 190 

    0x372964d6,// 218 PAY 191 

    0x5777e5ca,// 219 PAY 192 

    0xede07175,// 220 PAY 193 

    0x19239282,// 221 PAY 194 

    0x7cd81607,// 222 PAY 195 

    0x5e53d6f8,// 223 PAY 196 

    0x3dfd2a8a,// 224 PAY 197 

    0xe527ed12,// 225 PAY 198 

    0x9f95339c,// 226 PAY 199 

    0x852ea5a4,// 227 PAY 200 

    0x7ef01a3c,// 228 PAY 201 

    0x00557f91,// 229 PAY 202 

    0x184295a6,// 230 PAY 203 

    0xd5895e79,// 231 PAY 204 

    0xfcea90ce,// 232 PAY 205 

    0x7b171a39,// 233 PAY 206 

    0x3ace4f19,// 234 PAY 207 

    0x98efe520,// 235 PAY 208 

    0x3c9d1e0e,// 236 PAY 209 

    0x6100b714,// 237 PAY 210 

    0x87553313,// 238 PAY 211 

    0x14e79af4,// 239 PAY 212 

    0x6a1f3d90,// 240 PAY 213 

    0x241a003c,// 241 PAY 214 

    0x4ccee3d0,// 242 PAY 215 

    0xbad9e974,// 243 PAY 216 

    0x24ad06e7,// 244 PAY 217 

    0x74dc1cb9,// 245 PAY 218 

    0x56f38c98,// 246 PAY 219 

    0x68b8d1bf,// 247 PAY 220 

    0xcb2d444f,// 248 PAY 221 

    0x570b13d7,// 249 PAY 222 

    0x001db932,// 250 PAY 223 

    0x04dc1dcf,// 251 PAY 224 

    0xa922e3f6,// 252 PAY 225 

    0x0285dd48,// 253 PAY 226 

    0xf486452e,// 254 PAY 227 

    0xa71b77ee,// 255 PAY 228 

    0xebb7bb5b,// 256 PAY 229 

    0x867ce605,// 257 PAY 230 

    0x5b0fe70c,// 258 PAY 231 

    0x4b108a77,// 259 PAY 232 

    0x0b68def0,// 260 PAY 233 

    0xbc1278d8,// 261 PAY 234 

    0x98e158b0,// 262 PAY 235 

    0x509883d8,// 263 PAY 236 

    0x8cadad07,// 264 PAY 237 

    0xdd635db6,// 265 PAY 238 

    0x4b4333b6,// 266 PAY 239 

    0x90ff372d,// 267 PAY 240 

    0xd3f3ce2e,// 268 PAY 241 

    0x428f9e36,// 269 PAY 242 

    0xd12a0b4f,// 270 PAY 243 

    0xf12fd24b,// 271 PAY 244 

    0x584b9236,// 272 PAY 245 

    0xe1171f03,// 273 PAY 246 

    0x768bba28,// 274 PAY 247 

    0x0e948bc3,// 275 PAY 248 

    0xc8ebd928,// 276 PAY 249 

    0x1226fe84,// 277 PAY 250 

    0x34955c8c,// 278 PAY 251 

    0xc68d59d5,// 279 PAY 252 

    0x061d85ba,// 280 PAY 253 

    0xef0d44d3,// 281 PAY 254 

    0x9af038a8,// 282 PAY 255 

    0x085a45ea,// 283 PAY 256 

    0x171dc8c3,// 284 PAY 257 

    0x916999e2,// 285 PAY 258 

    0x664cd32d,// 286 PAY 259 

    0xa7289383,// 287 PAY 260 

    0xc27250ca,// 288 PAY 261 

    0x89706aea,// 289 PAY 262 

    0x8f1bac50,// 290 PAY 263 

    0xe156304f,// 291 PAY 264 

    0xf06956f1,// 292 PAY 265 

    0x2e15d70d,// 293 PAY 266 

    0x1dbb8aea,// 294 PAY 267 

    0x5566037f,// 295 PAY 268 

    0xaeabc387,// 296 PAY 269 

    0x22414bd5,// 297 PAY 270 

    0x74d59170,// 298 PAY 271 

    0xc07f333b,// 299 PAY 272 

    0x9da70497,// 300 PAY 273 

    0xb5248bca,// 301 PAY 274 

    0x3df17f2a,// 302 PAY 275 

    0xa056291f,// 303 PAY 276 

    0xb6cea918,// 304 PAY 277 

    0x7093d495,// 305 PAY 278 

    0x6d4d8409,// 306 PAY 279 

    0xe367ca62,// 307 PAY 280 

/// STA is 1 words. 

/// STA num_pkts       : 239 

/// STA pkt_idx        : 63 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x1c 

    0x00fc1cef // 308 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt9_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x00 

/// ECH pdu_tag        : 0x00 

    0x00000000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0000000f,// 3 SCX   1 

    0x804148c1,// 4 SCX   2 

    0x00005200,// 5 SCX   3 

    0xf68d753c,// 6 SCX   4 

    0xd196ea7b,// 7 SCX   5 

    0x56d4bdf3,// 8 SCX   6 

    0x6283e544,// 9 SCX   7 

    0x9e04d1f7,// 10 SCX   8 

    0x1e710a88,// 11 SCX   9 

    0xac42c045,// 12 SCX  10 

    0x540f99da,// 13 SCX  11 

    0xf9c2f7a5,// 14 SCX  12 

    0x57bda1da,// 15 SCX  13 

    0x0e004ff2,// 16 SCX  14 

    0xa0c6d91c,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 144 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 76 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 76 

/// BFD lencrypto      : 16 

/// BFD ofstcrypto     : 60 

/// BFD (ofst+len)cry  : 76 

/// BFD ofstiv         : 48 

/// BFD ofsticv        : 124 

    0x0000004c,// 18 BFD   1 

    0x003c0010,// 19 BFD   2 

    0x007c0030,// 20 BFD   3 

/// MFM is 1 words. 

/// MFM vldnibs        : 1 

    0x0100e000,// 21 MFM   1 

/// BDA is 37 words. 

/// BDA size     is 144 (0x90) 

/// BDA id       is 0xc580 

    0x0090c580,// 22 BDA   1 

/// PAY Generic Data size   : 144 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x654b1bde,// 23 PAY   1 

    0xc4cef84d,// 24 PAY   2 

    0x13b2d1b7,// 25 PAY   3 

    0x03fd1f04,// 26 PAY   4 

    0x9cf71d85,// 27 PAY   5 

    0x3102b2ba,// 28 PAY   6 

    0xa2eab23a,// 29 PAY   7 

    0x5cc5071f,// 30 PAY   8 

    0xae13f401,// 31 PAY   9 

    0x672a6420,// 32 PAY  10 

    0x2ca93146,// 33 PAY  11 

    0xeb59fcf5,// 34 PAY  12 

    0x99c14911,// 35 PAY  13 

    0x2a472931,// 36 PAY  14 

    0x07cce5a5,// 37 PAY  15 

    0x09b76617,// 38 PAY  16 

    0xff9a0f1e,// 39 PAY  17 

    0x03d94c07,// 40 PAY  18 

    0xb00997b8,// 41 PAY  19 

    0xbf62f425,// 42 PAY  20 

    0x5bd96823,// 43 PAY  21 

    0xf2e5ab45,// 44 PAY  22 

    0xf09c2ac7,// 45 PAY  23 

    0x083fd084,// 46 PAY  24 

    0x27774f88,// 47 PAY  25 

    0xa491c271,// 48 PAY  26 

    0xe7711103,// 49 PAY  27 

    0x7456aaa9,// 50 PAY  28 

    0xac4d04ed,// 51 PAY  29 

    0x4198a83f,// 52 PAY  30 

    0x204f2cc5,// 53 PAY  31 

    0x9a37f320,// 54 PAY  32 

    0x190837be,// 55 PAY  33 

    0x18e63571,// 56 PAY  34 

    0xb5eba53e,// 57 PAY  35 

    0x318567de,// 58 PAY  36 

/// STA is 1 words. 

/// STA num_pkts       : 73 

/// STA pkt_idx        : 76 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x71 

    0x01317149 // 59 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt10_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x0b 

/// ECH pdu_tag        : 0x00 

    0x000b0000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv insert_icv check_icv sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x08000011,// 3 SCX   1 

    0x804448f6,// 4 SCX   2 

    0x000071c2,// 5 SCX   3 

    0x1b55cca9,// 6 SCX   4 

    0xd2d89c70,// 7 SCX   5 

    0x9938a993,// 8 SCX   6 

    0xfa1aa68d,// 9 SCX   7 

    0x32dddf2b,// 10 SCX   8 

    0xd4e7b295,// 11 SCX   9 

    0x31642154,// 12 SCX  10 

    0x9243a835,// 13 SCX  11 

    0xc4e3f7f3,// 14 SCX  12 

    0xe004c7fb,// 15 SCX  13 

    0x93dd9f19,// 16 SCX  14 

    0x3d62e573,// 17 SCX  15 

    0xf1193292,// 18 SCX  16 

    0x9f1295b6,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 584 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 515 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 515 

/// BFD lencrypto      : 248 

/// BFD ofstcrypto     : 112 

/// BFD (ofst+len)cry  : 360 

/// BFD ofstiv         : 12 

/// BFD ofsticv        : 524 

    0x00000203,// 20 BFD   1 

    0x007000f8,// 21 BFD   2 

    0x020c000c,// 22 BFD   3 

/// MFM is 10 words. 

/// MFM vldnibs        : 46 

    0x4600de65,// 23 MFM   1 

    0x822314cc,// 24 MFM   2 

    0x1efb2607,// 25 MFM   3 

    0x4025eaa8,// 26 MFM   4 

    0x0cf1f31f,// 27 MFM   5 

    0x26e93256,// 28 MFM   6 

    0x590f0e91,// 29 MFM   7 

    0x0130ade8,// 30 MFM   8 

    0xdca88e48,// 31 MFM   9 

    0xfa000000,// 32 MFM  10 

/// BDA is 147 words. 

/// BDA size     is 584 (0x248) 

/// BDA id       is 0xdf39 

    0x0248df39,// 33 BDA   1 

/// PAY Generic Data size   : 584 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0xd5eb2821,// 34 PAY   1 

    0x17e443eb,// 35 PAY   2 

    0x3474dbb2,// 36 PAY   3 

    0xcdb58b8f,// 37 PAY   4 

    0x96612f20,// 38 PAY   5 

    0xfbe3aabb,// 39 PAY   6 

    0x332ac90a,// 40 PAY   7 

    0xa49b37f9,// 41 PAY   8 

    0xdafab1e5,// 42 PAY   9 

    0x5db4cc9e,// 43 PAY  10 

    0x600a70dd,// 44 PAY  11 

    0x2a6bd1d2,// 45 PAY  12 

    0xd7f14ec6,// 46 PAY  13 

    0x7c34f5aa,// 47 PAY  14 

    0x166dbc64,// 48 PAY  15 

    0x0524dda4,// 49 PAY  16 

    0x7b144cab,// 50 PAY  17 

    0x4b809ba2,// 51 PAY  18 

    0xda8e78f5,// 52 PAY  19 

    0x60e23ed0,// 53 PAY  20 

    0xafa32971,// 54 PAY  21 

    0xea0bcb6f,// 55 PAY  22 

    0xa1716039,// 56 PAY  23 

    0xf7fe3fec,// 57 PAY  24 

    0x32211ac9,// 58 PAY  25 

    0x22d32135,// 59 PAY  26 

    0x3bba678a,// 60 PAY  27 

    0x26c74a34,// 61 PAY  28 

    0x35e555a2,// 62 PAY  29 

    0x3a08d12a,// 63 PAY  30 

    0x763f5896,// 64 PAY  31 

    0x863d39c8,// 65 PAY  32 

    0xd7f784b2,// 66 PAY  33 

    0xf53c6d82,// 67 PAY  34 

    0x493ddef3,// 68 PAY  35 

    0xb8c5b7cd,// 69 PAY  36 

    0x3a8b6a62,// 70 PAY  37 

    0x5b9fadad,// 71 PAY  38 

    0xbc945ab2,// 72 PAY  39 

    0xa73b54e1,// 73 PAY  40 

    0x283b7d33,// 74 PAY  41 

    0x4059a048,// 75 PAY  42 

    0xf0ff0a5d,// 76 PAY  43 

    0x328359c1,// 77 PAY  44 

    0xa5416ce2,// 78 PAY  45 

    0x36bfab92,// 79 PAY  46 

    0xfb1d0227,// 80 PAY  47 

    0x150615ea,// 81 PAY  48 

    0x2900b492,// 82 PAY  49 

    0xbcdf3ec9,// 83 PAY  50 

    0x80339f60,// 84 PAY  51 

    0xd4162e21,// 85 PAY  52 

    0x3fe188d1,// 86 PAY  53 

    0xc165e7b4,// 87 PAY  54 

    0x509de682,// 88 PAY  55 

    0xbe64ac36,// 89 PAY  56 

    0xa0964ae6,// 90 PAY  57 

    0x79beda42,// 91 PAY  58 

    0xcbd22549,// 92 PAY  59 

    0xfb064aac,// 93 PAY  60 

    0x10ea579b,// 94 PAY  61 

    0xe2626bd1,// 95 PAY  62 

    0xe9fa95f2,// 96 PAY  63 

    0x58938ea5,// 97 PAY  64 

    0x98e76c81,// 98 PAY  65 

    0x0eb2f67a,// 99 PAY  66 

    0x044eec8b,// 100 PAY  67 

    0x17859704,// 101 PAY  68 

    0x433f4102,// 102 PAY  69 

    0x1ed2e38a,// 103 PAY  70 

    0x199759cf,// 104 PAY  71 

    0x835828b3,// 105 PAY  72 

    0xb91028de,// 106 PAY  73 

    0x75469776,// 107 PAY  74 

    0x715db385,// 108 PAY  75 

    0xd86662e9,// 109 PAY  76 

    0x61e329f5,// 110 PAY  77 

    0xad64949f,// 111 PAY  78 

    0x58f2c874,// 112 PAY  79 

    0xad437a3d,// 113 PAY  80 

    0xad2e1abe,// 114 PAY  81 

    0xdf50bb63,// 115 PAY  82 

    0xd7e839be,// 116 PAY  83 

    0x3e5c3c7d,// 117 PAY  84 

    0x810967e5,// 118 PAY  85 

    0x7f1ae300,// 119 PAY  86 

    0xcff9fa2c,// 120 PAY  87 

    0xa6b1ade3,// 121 PAY  88 

    0x9c707590,// 122 PAY  89 

    0x66e3e0a9,// 123 PAY  90 

    0x619a1166,// 124 PAY  91 

    0x59d4b083,// 125 PAY  92 

    0x52a59c21,// 126 PAY  93 

    0xa1e8e64e,// 127 PAY  94 

    0xa3de5cf8,// 128 PAY  95 

    0x1f08e3ec,// 129 PAY  96 

    0xd99a2b89,// 130 PAY  97 

    0x2bf19a21,// 131 PAY  98 

    0xa7b85955,// 132 PAY  99 

    0x115a5dc1,// 133 PAY 100 

    0x9dbdc44a,// 134 PAY 101 

    0xbe641b48,// 135 PAY 102 

    0x98112f10,// 136 PAY 103 

    0xb0101577,// 137 PAY 104 

    0xaba8044c,// 138 PAY 105 

    0x01b3a9cc,// 139 PAY 106 

    0xa7197c4e,// 140 PAY 107 

    0xcc672b16,// 141 PAY 108 

    0xdd72f6c3,// 142 PAY 109 

    0x66dba2ce,// 143 PAY 110 

    0xa08746c0,// 144 PAY 111 

    0xd5097d59,// 145 PAY 112 

    0x4ae5ccf1,// 146 PAY 113 

    0x64baa585,// 147 PAY 114 

    0xfc693ffa,// 148 PAY 115 

    0x98741b8e,// 149 PAY 116 

    0xdadb4ebe,// 150 PAY 117 

    0x56a92c2d,// 151 PAY 118 

    0xb9622ab1,// 152 PAY 119 

    0x61727264,// 153 PAY 120 

    0x79856e6d,// 154 PAY 121 

    0x23c2529e,// 155 PAY 122 

    0x65095323,// 156 PAY 123 

    0xe0dad87f,// 157 PAY 124 

    0x61f3d557,// 158 PAY 125 

    0x21e9b0ff,// 159 PAY 126 

    0xc9b90567,// 160 PAY 127 

    0x7a8ccca9,// 161 PAY 128 

    0x2c6a75e8,// 162 PAY 129 

    0x3a465b44,// 163 PAY 130 

    0x915dc9ce,// 164 PAY 131 

    0xc44f92a0,// 165 PAY 132 

    0x24071ca9,// 166 PAY 133 

    0x3bd23028,// 167 PAY 134 

    0xa96c3647,// 168 PAY 135 

    0x6fd5d0ec,// 169 PAY 136 

    0x20ee49bf,// 170 PAY 137 

    0xa47606d3,// 171 PAY 138 

    0x03ad9d1d,// 172 PAY 139 

    0x82305815,// 173 PAY 140 

    0xd9812ae2,// 174 PAY 141 

    0x1209e81b,// 175 PAY 142 

    0x157f400e,// 176 PAY 143 

    0xeec2b593,// 177 PAY 144 

    0x03f66141,// 178 PAY 145 

    0x4ac2809e,// 179 PAY 146 

/// STA is 1 words. 

/// STA num_pkts       : 44 

/// STA pkt_idx        : 214 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xe8 

    0x0359e82c // 180 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt11_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x01 

/// ECH pdu_tag        : 0x00 

    0x00010000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0800000f,// 3 SCX   1 

    0x8042483e,// 4 SCX   2 

    0x00007200,// 5 SCX   3 

    0xe69a9842,// 6 SCX   4 

    0x5e03a171,// 7 SCX   5 

    0x0df3fa30,// 8 SCX   6 

    0x0b787088,// 9 SCX   7 

    0xf5abc2ff,// 10 SCX   8 

    0x54134657,// 11 SCX   9 

    0x4d4b1114,// 12 SCX  10 

    0x862562e5,// 13 SCX  11 

    0x15ae2cc8,// 14 SCX  12 

    0x0e4b2bf0,// 15 SCX  13 

    0xf137dabd,// 16 SCX  14 

    0x5c4b1a1a,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 421 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 25 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 25 

/// BFD lencrypto      : 16 

/// BFD ofstcrypto     : 8 

/// BFD (ofst+len)cry  : 24 

/// BFD ofstiv         : 0 

/// BFD ofsticv        : 272 

    0x00000019,// 18 BFD   1 

    0x00080010,// 19 BFD   2 

    0x01100000,// 20 BFD   3 

/// MFM is 1 words. 

/// MFM vldnibs        : 1 

    0x0100a000,// 21 MFM   1 

/// BDA is 107 words. 

/// BDA size     is 421 (0x1a5) 

/// BDA id       is 0x906 

    0x01a50906,// 22 BDA   1 

/// PAY Generic Data size   : 421 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x90c9d778,// 23 PAY   1 

    0xe4671329,// 24 PAY   2 

    0x333be83b,// 25 PAY   3 

    0x51e34689,// 26 PAY   4 

    0x2b4ef7b2,// 27 PAY   5 

    0x2206c2f6,// 28 PAY   6 

    0x661c2bab,// 29 PAY   7 

    0xafb8dff1,// 30 PAY   8 

    0x332895dc,// 31 PAY   9 

    0x9726416f,// 32 PAY  10 

    0xc34caf98,// 33 PAY  11 

    0x30fc2457,// 34 PAY  12 

    0x73f5b9f6,// 35 PAY  13 

    0x80f880f9,// 36 PAY  14 

    0x25e046a2,// 37 PAY  15 

    0xf5ccfaa0,// 38 PAY  16 

    0x424b7dd1,// 39 PAY  17 

    0x3c722eb3,// 40 PAY  18 

    0x7079862e,// 41 PAY  19 

    0xa01628eb,// 42 PAY  20 

    0x4a8c7623,// 43 PAY  21 

    0xe6bc295e,// 44 PAY  22 

    0x27ecd949,// 45 PAY  23 

    0x4b38f536,// 46 PAY  24 

    0x7d73541c,// 47 PAY  25 

    0x2edfb427,// 48 PAY  26 

    0x2e70c987,// 49 PAY  27 

    0x595251f8,// 50 PAY  28 

    0xb17a80f4,// 51 PAY  29 

    0xe993f175,// 52 PAY  30 

    0xf7aff672,// 53 PAY  31 

    0xc7789db4,// 54 PAY  32 

    0x517a8b03,// 55 PAY  33 

    0x2fc4aacd,// 56 PAY  34 

    0x443208c9,// 57 PAY  35 

    0x0f87e496,// 58 PAY  36 

    0xf449908a,// 59 PAY  37 

    0xce884495,// 60 PAY  38 

    0x366face1,// 61 PAY  39 

    0x6d579359,// 62 PAY  40 

    0x6542bf5d,// 63 PAY  41 

    0x1a0419a0,// 64 PAY  42 

    0x207a3c75,// 65 PAY  43 

    0xb6c56c4f,// 66 PAY  44 

    0x3570ddec,// 67 PAY  45 

    0x9f2c537a,// 68 PAY  46 

    0x689aa935,// 69 PAY  47 

    0xa8904cd9,// 70 PAY  48 

    0x76a5a665,// 71 PAY  49 

    0x2ee98b7c,// 72 PAY  50 

    0x5bd74f0f,// 73 PAY  51 

    0x712a3905,// 74 PAY  52 

    0xb79cc5f7,// 75 PAY  53 

    0xbbe2c5d3,// 76 PAY  54 

    0xb0b65a85,// 77 PAY  55 

    0x4b18c715,// 78 PAY  56 

    0x15cfe6d5,// 79 PAY  57 

    0x4fab5863,// 80 PAY  58 

    0x6978f16b,// 81 PAY  59 

    0x9c9077d6,// 82 PAY  60 

    0x5ff414ee,// 83 PAY  61 

    0xa08bf3f9,// 84 PAY  62 

    0x4f0beb38,// 85 PAY  63 

    0x978763dd,// 86 PAY  64 

    0x3c3524c4,// 87 PAY  65 

    0xf6b2fcad,// 88 PAY  66 

    0xaf29e387,// 89 PAY  67 

    0xdec87324,// 90 PAY  68 

    0xfda25476,// 91 PAY  69 

    0xaa05f7dc,// 92 PAY  70 

    0x1b881778,// 93 PAY  71 

    0x17f0d0cb,// 94 PAY  72 

    0xbdc1ae8b,// 95 PAY  73 

    0xb19c7c32,// 96 PAY  74 

    0x7b71f1d4,// 97 PAY  75 

    0x29842eed,// 98 PAY  76 

    0x65811a47,// 99 PAY  77 

    0x4ee4fabc,// 100 PAY  78 

    0xadde1832,// 101 PAY  79 

    0x20829980,// 102 PAY  80 

    0x999c63fc,// 103 PAY  81 

    0xdc99bc02,// 104 PAY  82 

    0xfc5757aa,// 105 PAY  83 

    0x0b8bdf6e,// 106 PAY  84 

    0x15d8d2f9,// 107 PAY  85 

    0xe15a1479,// 108 PAY  86 

    0xe7aa90ae,// 109 PAY  87 

    0x08ee9461,// 110 PAY  88 

    0x98873b21,// 111 PAY  89 

    0x48a03d94,// 112 PAY  90 

    0x598310a9,// 113 PAY  91 

    0x4ef7b002,// 114 PAY  92 

    0x3d88ff20,// 115 PAY  93 

    0x342ff87f,// 116 PAY  94 

    0x4a1a247d,// 117 PAY  95 

    0xf0b09c86,// 118 PAY  96 

    0x92ce69bf,// 119 PAY  97 

    0x0a40a108,// 120 PAY  98 

    0x3d0b2343,// 121 PAY  99 

    0xd59d0621,// 122 PAY 100 

    0xfb4f6faf,// 123 PAY 101 

    0x4e10f570,// 124 PAY 102 

    0x91110629,// 125 PAY 103 

    0xf2543b8c,// 126 PAY 104 

    0x7f8b8209,// 127 PAY 105 

    0x62000000,// 128 PAY 106 

/// STA is 1 words. 

/// STA num_pkts       : 10 

/// STA pkt_idx        : 216 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x7c 

    0x03607c0a // 129 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt12_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x0a 

/// ECH pdu_tag        : 0x00 

    0x000a0000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0000000f,// 3 SCX   1 

    0x804048b2,// 4 SCX   2 

    0x00003100,// 5 SCX   3 

    0x81fb5b3b,// 6 SCX   4 

    0xc20a0b5b,// 7 SCX   5 

    0xb02459b2,// 8 SCX   6 

    0xf9de0733,// 9 SCX   7 

    0x024147cf,// 10 SCX   8 

    0x40c18299,// 11 SCX   9 

    0xacaba97e,// 12 SCX  10 

    0x7437eda9,// 13 SCX  11 

    0x43b9df14,// 14 SCX  12 

    0x491a0a9e,// 15 SCX  13 

    0x122ee9aa,// 16 SCX  14 

    0xc3ba8642,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 1481 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 24 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 24 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 12 

/// BFD (ofst+len)cry  : 20 

/// BFD ofstiv         : 0 

/// BFD ofsticv        : 412 

    0x00000018,// 18 BFD   1 

    0x000c0008,// 19 BFD   2 

    0x019c0000,// 20 BFD   3 

/// MFM is 1 words. 

/// MFM vldnibs        : 3 

    0x03001640,// 21 MFM   1 

/// BDA is 372 words. 

/// BDA size     is 1481 (0x5c9) 

/// BDA id       is 0x79ee 

    0x05c979ee,// 22 BDA   1 

/// PAY Generic Data size   : 1481 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x99ecd7e4,// 23 PAY   1 

    0x5172d006,// 24 PAY   2 

    0x19acfad4,// 25 PAY   3 

    0x6afa2323,// 26 PAY   4 

    0xe7e5243c,// 27 PAY   5 

    0xb384106c,// 28 PAY   6 

    0x3a5ec74e,// 29 PAY   7 

    0x84598d52,// 30 PAY   8 

    0xd17085b9,// 31 PAY   9 

    0x6ad9d9c3,// 32 PAY  10 

    0x602f30bb,// 33 PAY  11 

    0x0afda75a,// 34 PAY  12 

    0x10ca7048,// 35 PAY  13 

    0x882ea1e3,// 36 PAY  14 

    0xaf75f43d,// 37 PAY  15 

    0x5ec1855e,// 38 PAY  16 

    0x81f94cdf,// 39 PAY  17 

    0x224b9c51,// 40 PAY  18 

    0x7b3fd896,// 41 PAY  19 

    0xa0f859ea,// 42 PAY  20 

    0x09a5f6f0,// 43 PAY  21 

    0xd70a86c0,// 44 PAY  22 

    0x97881d36,// 45 PAY  23 

    0x2962bfe1,// 46 PAY  24 

    0x8611f5d9,// 47 PAY  25 

    0xe0296378,// 48 PAY  26 

    0x459f5c9a,// 49 PAY  27 

    0x913f6173,// 50 PAY  28 

    0x6d812b58,// 51 PAY  29 

    0x09062425,// 52 PAY  30 

    0xeed78987,// 53 PAY  31 

    0x2ab65813,// 54 PAY  32 

    0x7ffdb1d0,// 55 PAY  33 

    0x03a7b380,// 56 PAY  34 

    0xa91cb202,// 57 PAY  35 

    0x20bf39b0,// 58 PAY  36 

    0x3a64aa58,// 59 PAY  37 

    0x9a88c6a7,// 60 PAY  38 

    0xe2f44729,// 61 PAY  39 

    0x679db8bf,// 62 PAY  40 

    0x43286cc9,// 63 PAY  41 

    0x7e959271,// 64 PAY  42 

    0x119c95ea,// 65 PAY  43 

    0xa2035c2e,// 66 PAY  44 

    0x29a60a51,// 67 PAY  45 

    0xc19574eb,// 68 PAY  46 

    0x3c4e208a,// 69 PAY  47 

    0xdde1ba63,// 70 PAY  48 

    0xb0db2859,// 71 PAY  49 

    0xb924ba32,// 72 PAY  50 

    0x923135d3,// 73 PAY  51 

    0x48de564d,// 74 PAY  52 

    0xb057a259,// 75 PAY  53 

    0x0888c9e4,// 76 PAY  54 

    0xd201a88a,// 77 PAY  55 

    0x219cb509,// 78 PAY  56 

    0x45165732,// 79 PAY  57 

    0x11fac70d,// 80 PAY  58 

    0x6640c108,// 81 PAY  59 

    0x424c6667,// 82 PAY  60 

    0x6195b203,// 83 PAY  61 

    0x7bbbc86f,// 84 PAY  62 

    0x96dbbfca,// 85 PAY  63 

    0x5b71e02d,// 86 PAY  64 

    0x8cddfd58,// 87 PAY  65 

    0x8c8a9cb7,// 88 PAY  66 

    0x6b6be30c,// 89 PAY  67 

    0x32d72bb4,// 90 PAY  68 

    0x0f057e75,// 91 PAY  69 

    0xe3300a72,// 92 PAY  70 

    0x189351ba,// 93 PAY  71 

    0x6eaa3cd1,// 94 PAY  72 

    0xaf8dfa2f,// 95 PAY  73 

    0xa0d04a9a,// 96 PAY  74 

    0xbc7e37dc,// 97 PAY  75 

    0xe4669d59,// 98 PAY  76 

    0x6c67b314,// 99 PAY  77 

    0xd9036999,// 100 PAY  78 

    0x765fb775,// 101 PAY  79 

    0xfe36cd53,// 102 PAY  80 

    0x602067ff,// 103 PAY  81 

    0x5b9ca6bb,// 104 PAY  82 

    0xda34c1e1,// 105 PAY  83 

    0x488519f2,// 106 PAY  84 

    0x9324ce9d,// 107 PAY  85 

    0x55d70463,// 108 PAY  86 

    0x1560ac8c,// 109 PAY  87 

    0x6a246241,// 110 PAY  88 

    0xbc2a0be0,// 111 PAY  89 

    0x61d516c4,// 112 PAY  90 

    0xca721d56,// 113 PAY  91 

    0x38cc4ec9,// 114 PAY  92 

    0x462dbc41,// 115 PAY  93 

    0xe2523f45,// 116 PAY  94 

    0xb515377f,// 117 PAY  95 

    0x1222576a,// 118 PAY  96 

    0x6a2cfdfb,// 119 PAY  97 

    0x40de1567,// 120 PAY  98 

    0x790c7592,// 121 PAY  99 

    0x0b28dbde,// 122 PAY 100 

    0x331fdde7,// 123 PAY 101 

    0x8f6c9f39,// 124 PAY 102 

    0xaa699adc,// 125 PAY 103 

    0xa3179b1d,// 126 PAY 104 

    0x703357f2,// 127 PAY 105 

    0x206910de,// 128 PAY 106 

    0xb86151f8,// 129 PAY 107 

    0xfa8c377d,// 130 PAY 108 

    0xa9e08b15,// 131 PAY 109 

    0x948fc4a7,// 132 PAY 110 

    0x5584ce30,// 133 PAY 111 

    0x1c559e4e,// 134 PAY 112 

    0x434305e1,// 135 PAY 113 

    0xefdc0bb3,// 136 PAY 114 

    0xafded7cb,// 137 PAY 115 

    0x01f1116e,// 138 PAY 116 

    0x963cda0e,// 139 PAY 117 

    0xf758e163,// 140 PAY 118 

    0xe7e78135,// 141 PAY 119 

    0xdd80ab21,// 142 PAY 120 

    0x9028b462,// 143 PAY 121 

    0x26d6061d,// 144 PAY 122 

    0xce89a675,// 145 PAY 123 

    0xebb72fd4,// 146 PAY 124 

    0xe882eaec,// 147 PAY 125 

    0xf66d936d,// 148 PAY 126 

    0xc6dc7c83,// 149 PAY 127 

    0xb48292dc,// 150 PAY 128 

    0xa69f9d19,// 151 PAY 129 

    0x902df374,// 152 PAY 130 

    0x0af53e2d,// 153 PAY 131 

    0x3c4bd0c0,// 154 PAY 132 

    0xedd707a2,// 155 PAY 133 

    0x90d5beba,// 156 PAY 134 

    0xae21b402,// 157 PAY 135 

    0x50c8f1c6,// 158 PAY 136 

    0x357440fa,// 159 PAY 137 

    0xf6e7e66d,// 160 PAY 138 

    0x6e985181,// 161 PAY 139 

    0x8ab5e98e,// 162 PAY 140 

    0xe1ea2e25,// 163 PAY 141 

    0x05be7cf2,// 164 PAY 142 

    0x42b30650,// 165 PAY 143 

    0x3ae064cf,// 166 PAY 144 

    0xd2324851,// 167 PAY 145 

    0x7bbb71f9,// 168 PAY 146 

    0x2ea21afa,// 169 PAY 147 

    0x333bae1b,// 170 PAY 148 

    0x048fbb2e,// 171 PAY 149 

    0x05c42db8,// 172 PAY 150 

    0x0574fae3,// 173 PAY 151 

    0xf99a8923,// 174 PAY 152 

    0x64df8473,// 175 PAY 153 

    0xbf09069a,// 176 PAY 154 

    0x54aa474f,// 177 PAY 155 

    0x20ef967f,// 178 PAY 156 

    0x29c2e38a,// 179 PAY 157 

    0xb4472921,// 180 PAY 158 

    0x60606780,// 181 PAY 159 

    0xb14c2d2d,// 182 PAY 160 

    0x366db535,// 183 PAY 161 

    0x70f9900f,// 184 PAY 162 

    0x37aa43da,// 185 PAY 163 

    0x70aa2df9,// 186 PAY 164 

    0x5bdca226,// 187 PAY 165 

    0x1e8854bf,// 188 PAY 166 

    0xa20c1528,// 189 PAY 167 

    0x5bbdd7e9,// 190 PAY 168 

    0x767f7e2d,// 191 PAY 169 

    0x403161ce,// 192 PAY 170 

    0x1d652c27,// 193 PAY 171 

    0x73a97385,// 194 PAY 172 

    0x065efc32,// 195 PAY 173 

    0x3a68a19b,// 196 PAY 174 

    0x5ef196c9,// 197 PAY 175 

    0xdea1a479,// 198 PAY 176 

    0x1d8cadd1,// 199 PAY 177 

    0x535bef0c,// 200 PAY 178 

    0xf2f81722,// 201 PAY 179 

    0xb98eafbb,// 202 PAY 180 

    0x5e3384a9,// 203 PAY 181 

    0xb5999e61,// 204 PAY 182 

    0x3fc6c910,// 205 PAY 183 

    0x6f1a4b2a,// 206 PAY 184 

    0x21dee880,// 207 PAY 185 

    0xe04f3182,// 208 PAY 186 

    0x082bb1d5,// 209 PAY 187 

    0x6124fbd1,// 210 PAY 188 

    0xd3dd71ef,// 211 PAY 189 

    0xf672830b,// 212 PAY 190 

    0xca626fc6,// 213 PAY 191 

    0x26c3ffb8,// 214 PAY 192 

    0xa0e81871,// 215 PAY 193 

    0x2a15493e,// 216 PAY 194 

    0xf91c89df,// 217 PAY 195 

    0x42ed27b1,// 218 PAY 196 

    0x4441021b,// 219 PAY 197 

    0x028b679b,// 220 PAY 198 

    0x15fe7e60,// 221 PAY 199 

    0x9a5a4f1a,// 222 PAY 200 

    0x680f15e8,// 223 PAY 201 

    0xfaa2b0d9,// 224 PAY 202 

    0x7702e1dc,// 225 PAY 203 

    0x9d083c9e,// 226 PAY 204 

    0xd1062996,// 227 PAY 205 

    0x04260173,// 228 PAY 206 

    0x3e5e23e5,// 229 PAY 207 

    0x249b391e,// 230 PAY 208 

    0xade7a289,// 231 PAY 209 

    0xec203d52,// 232 PAY 210 

    0xe060e60e,// 233 PAY 211 

    0x6545834d,// 234 PAY 212 

    0xb967dc81,// 235 PAY 213 

    0x106875a1,// 236 PAY 214 

    0x41121130,// 237 PAY 215 

    0x3d848761,// 238 PAY 216 

    0x0325030a,// 239 PAY 217 

    0x8d328852,// 240 PAY 218 

    0xc39f8698,// 241 PAY 219 

    0xe6ba262b,// 242 PAY 220 

    0x4f8acd9c,// 243 PAY 221 

    0x22e525e0,// 244 PAY 222 

    0xbe139c13,// 245 PAY 223 

    0xded9a2bc,// 246 PAY 224 

    0x8f30d70d,// 247 PAY 225 

    0x86251fa3,// 248 PAY 226 

    0xe70b1a67,// 249 PAY 227 

    0xf926310c,// 250 PAY 228 

    0x979c09f9,// 251 PAY 229 

    0xb299e4ce,// 252 PAY 230 

    0x7f6dd4e5,// 253 PAY 231 

    0x7816a78c,// 254 PAY 232 

    0x34e448d9,// 255 PAY 233 

    0x1e78ec09,// 256 PAY 234 

    0x92cdc170,// 257 PAY 235 

    0xcb31d710,// 258 PAY 236 

    0xabcaae94,// 259 PAY 237 

    0x50e579c9,// 260 PAY 238 

    0x95ac45ed,// 261 PAY 239 

    0xf4cfc829,// 262 PAY 240 

    0x8f0dd078,// 263 PAY 241 

    0xf952f66b,// 264 PAY 242 

    0x2f979716,// 265 PAY 243 

    0x57ede1be,// 266 PAY 244 

    0xe98dddeb,// 267 PAY 245 

    0x3839e909,// 268 PAY 246 

    0x424da693,// 269 PAY 247 

    0x75761a74,// 270 PAY 248 

    0x2ce21b63,// 271 PAY 249 

    0x584d07d6,// 272 PAY 250 

    0xecc31ad0,// 273 PAY 251 

    0xe828c046,// 274 PAY 252 

    0xa839ad5c,// 275 PAY 253 

    0x63ad6e04,// 276 PAY 254 

    0x98f4dc68,// 277 PAY 255 

    0xdb064e6f,// 278 PAY 256 

    0x81f72289,// 279 PAY 257 

    0xd39a62e5,// 280 PAY 258 

    0x9c0321ef,// 281 PAY 259 

    0xdf46666d,// 282 PAY 260 

    0xaa9936c7,// 283 PAY 261 

    0x4db0d8be,// 284 PAY 262 

    0x80a8cb4c,// 285 PAY 263 

    0x1c9eb5d1,// 286 PAY 264 

    0x41eb56de,// 287 PAY 265 

    0xa8461152,// 288 PAY 266 

    0xc64ef84c,// 289 PAY 267 

    0xe48c5a7a,// 290 PAY 268 

    0xbf22bd88,// 291 PAY 269 

    0x31308a6d,// 292 PAY 270 

    0x4cac5c75,// 293 PAY 271 

    0xbce0b39d,// 294 PAY 272 

    0xa91453f9,// 295 PAY 273 

    0x502a72fc,// 296 PAY 274 

    0x0cecf0b7,// 297 PAY 275 

    0xf4e057bd,// 298 PAY 276 

    0xa40449ca,// 299 PAY 277 

    0xf248080c,// 300 PAY 278 

    0x76f6d704,// 301 PAY 279 

    0x771d18e9,// 302 PAY 280 

    0x7603bdbc,// 303 PAY 281 

    0x14e92e1d,// 304 PAY 282 

    0x33bdd99d,// 305 PAY 283 

    0x5f3a8446,// 306 PAY 284 

    0x6ec7739a,// 307 PAY 285 

    0x4cf19acc,// 308 PAY 286 

    0x5fad7607,// 309 PAY 287 

    0x1ddf0ed2,// 310 PAY 288 

    0xc5a7b582,// 311 PAY 289 

    0x882fc93d,// 312 PAY 290 

    0x8bfd35e4,// 313 PAY 291 

    0x048b99f1,// 314 PAY 292 

    0x56fe59ed,// 315 PAY 293 

    0x701facd5,// 316 PAY 294 

    0xd308c352,// 317 PAY 295 

    0xd5d0ec7b,// 318 PAY 296 

    0x28cbeb69,// 319 PAY 297 

    0x938487f0,// 320 PAY 298 

    0x8884b145,// 321 PAY 299 

    0x3dc125b4,// 322 PAY 300 

    0x9613381b,// 323 PAY 301 

    0x74b6d836,// 324 PAY 302 

    0xb8210636,// 325 PAY 303 

    0xebe518fd,// 326 PAY 304 

    0x95b7c368,// 327 PAY 305 

    0x8ac47307,// 328 PAY 306 

    0x7f55c822,// 329 PAY 307 

    0x4672ace3,// 330 PAY 308 

    0xadb76717,// 331 PAY 309 

    0x64201278,// 332 PAY 310 

    0x0302a96c,// 333 PAY 311 

    0x27197dcb,// 334 PAY 312 

    0x06cc7103,// 335 PAY 313 

    0x9b8d0c2e,// 336 PAY 314 

    0xdbb13955,// 337 PAY 315 

    0xdf1b16f4,// 338 PAY 316 

    0xe577afe6,// 339 PAY 317 

    0xbd4160f1,// 340 PAY 318 

    0x29957c64,// 341 PAY 319 

    0x5fd989e5,// 342 PAY 320 

    0xe43b4d9d,// 343 PAY 321 

    0xc0672cb7,// 344 PAY 322 

    0x0083d814,// 345 PAY 323 

    0xfd3e0ec6,// 346 PAY 324 

    0x2343c0c8,// 347 PAY 325 

    0xeb019f36,// 348 PAY 326 

    0x7c1406b4,// 349 PAY 327 

    0xfa27fb70,// 350 PAY 328 

    0xd9266c6d,// 351 PAY 329 

    0x1e4b20c7,// 352 PAY 330 

    0xdc03b762,// 353 PAY 331 

    0x82d2a6e3,// 354 PAY 332 

    0x86de51fe,// 355 PAY 333 

    0x008ab658,// 356 PAY 334 

    0x313bf032,// 357 PAY 335 

    0xc6c451f9,// 358 PAY 336 

    0x8c7b5b38,// 359 PAY 337 

    0xb541b0e0,// 360 PAY 338 

    0xe6a41674,// 361 PAY 339 

    0x7b4b5810,// 362 PAY 340 

    0x98c3091a,// 363 PAY 341 

    0x7dbb2120,// 364 PAY 342 

    0x62862bfc,// 365 PAY 343 

    0xb13090f6,// 366 PAY 344 

    0xb16b7d25,// 367 PAY 345 

    0x32ad952f,// 368 PAY 346 

    0xb801f05f,// 369 PAY 347 

    0x27a3e203,// 370 PAY 348 

    0xa3cc3af0,// 371 PAY 349 

    0x54503d34,// 372 PAY 350 

    0x97d388cf,// 373 PAY 351 

    0x91437f59,// 374 PAY 352 

    0xaa97e3ca,// 375 PAY 353 

    0xf8a7393f,// 376 PAY 354 

    0x66b2ddef,// 377 PAY 355 

    0xea428aae,// 378 PAY 356 

    0x8f926fca,// 379 PAY 357 

    0x552f323f,// 380 PAY 358 

    0x639550ad,// 381 PAY 359 

    0x7c67c046,// 382 PAY 360 

    0xdabddd42,// 383 PAY 361 

    0x371c0a5f,// 384 PAY 362 

    0xccedc26e,// 385 PAY 363 

    0x9cc2cfd8,// 386 PAY 364 

    0x0174fafe,// 387 PAY 365 

    0x318a211e,// 388 PAY 366 

    0xdc033817,// 389 PAY 367 

    0x54708f3a,// 390 PAY 368 

    0xe7c9dc5b,// 391 PAY 369 

    0x17876f16,// 392 PAY 370 

    0x54000000,// 393 PAY 371 

/// STA is 1 words. 

/// STA num_pkts       : 116 

/// STA pkt_idx        : 70 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xcf 

    0x0119cf74 // 394 STA   1 
};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt13_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x05 

/// ECH pdu_tag        : 0x00 

    0x00050000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x5 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0800000f,// 3 SCX   1 

    0x804248b7,// 4 SCX   2 

    0x00006500,// 5 SCX   3 

    0x87881312,// 6 SCX   4 

    0x234475c6,// 7 SCX   5 

    0x91e6de42,// 8 SCX   6 

    0x645d57b7,// 9 SCX   7 

    0xb4b092d3,// 10 SCX   8 

    0xa5757684,// 11 SCX   9 

    0xbe89e9fb,// 12 SCX  10 

    0xae9ecf92,// 13 SCX  11 

    0x719c5dc9,// 14 SCX  12 

    0xaec511ee,// 15 SCX  13 

    0x4a42f220,// 16 SCX  14 

    0xf167f213,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 1128 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 578 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 578 

/// BFD lencrypto      : 40 

/// BFD ofstcrypto     : 416 

/// BFD (ofst+len)cry  : 456 

/// BFD ofstiv         : 180 

/// BFD ofsticv        : 752 

    0x00000242,// 18 BFD   1 

    0x01a00028,// 19 BFD   2 

    0x02f000b4,// 20 BFD   3 

/// MFM is 8 words. 

/// MFM vldnibs        : 35 

    0x35001faf,// 21 MFM   1 

    0x31da1d3b,// 22 MFM   2 

    0x2350eeea,// 23 MFM   3 

    0x1f788498,// 24 MFM   4 

    0xc84ece22,// 25 MFM   5 

    0x1d8a0268,// 26 MFM   6 

    0xb1ae113c,// 27 MFM   7 

    0x10000000,// 28 MFM   8 

/// BDA is 283 words. 

/// BDA size     is 1128 (0x468) 

/// BDA id       is 0x91a 

    0x0468091a,// 29 BDA   1 

/// PAY Generic Data size   : 1128 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0xe89f9cd3,// 30 PAY   1 

    0x49908891,// 31 PAY   2 

    0x03fb2584,// 32 PAY   3 

    0x20d5b349,// 33 PAY   4 

    0xfbde5fab,// 34 PAY   5 

    0x55ddfd20,// 35 PAY   6 

    0x8945cff6,// 36 PAY   7 

    0x242b1d85,// 37 PAY   8 

    0x669971a4,// 38 PAY   9 

    0x2a1eeb1b,// 39 PAY  10 

    0x1843cf3d,// 40 PAY  11 

    0x05e0adbb,// 41 PAY  12 

    0x6e441854,// 42 PAY  13 

    0x8285792d,// 43 PAY  14 

    0xfe922c31,// 44 PAY  15 

    0x86ebc963,// 45 PAY  16 

    0x04cf465f,// 46 PAY  17 

    0xce9f5a02,// 47 PAY  18 

    0xe7fd9226,// 48 PAY  19 

    0x0ad9ee69,// 49 PAY  20 

    0x9f598e83,// 50 PAY  21 

    0x9c4e66cb,// 51 PAY  22 

    0xef26feed,// 52 PAY  23 

    0xaf32caad,// 53 PAY  24 

    0x0241030f,// 54 PAY  25 

    0x9e1d59e8,// 55 PAY  26 

    0xf20c7c3b,// 56 PAY  27 

    0xa806c465,// 57 PAY  28 

    0x1a388640,// 58 PAY  29 

    0x495a3f0b,// 59 PAY  30 

    0xa1b2946e,// 60 PAY  31 

    0x6e84db7b,// 61 PAY  32 

    0xaed7c922,// 62 PAY  33 

    0x47cf11e9,// 63 PAY  34 

    0x23493f5f,// 64 PAY  35 

    0x69f419c8,// 65 PAY  36 

    0x2749a187,// 66 PAY  37 

    0x5a4347b7,// 67 PAY  38 

    0xddd65d6a,// 68 PAY  39 

    0x9210d460,// 69 PAY  40 

    0xdb11088f,// 70 PAY  41 

    0x831386f0,// 71 PAY  42 

    0x183f69e6,// 72 PAY  43 

    0x881ed6e4,// 73 PAY  44 

    0x6b653f56,// 74 PAY  45 

    0x1a6f8111,// 75 PAY  46 

    0x125dd0df,// 76 PAY  47 

    0xe674ea8a,// 77 PAY  48 

    0x9d5ed9d1,// 78 PAY  49 

    0xf270bf60,// 79 PAY  50 

    0xf86c1f88,// 80 PAY  51 

    0x432d994d,// 81 PAY  52 

    0xcd245632,// 82 PAY  53 

    0xae973ffb,// 83 PAY  54 

    0xae3976ab,// 84 PAY  55 

    0xd98802ba,// 85 PAY  56 

    0xbb966db4,// 86 PAY  57 

    0xf92e7a1a,// 87 PAY  58 

    0x9f35701c,// 88 PAY  59 

    0xc3b81626,// 89 PAY  60 

    0x6de4c956,// 90 PAY  61 

    0xbd73a86a,// 91 PAY  62 

    0x76eeda10,// 92 PAY  63 

    0x409a76e6,// 93 PAY  64 

    0x2370c406,// 94 PAY  65 

    0x2cf06569,// 95 PAY  66 

    0xd676e733,// 96 PAY  67 

    0x2d09d7db,// 97 PAY  68 

    0x58c6219e,// 98 PAY  69 

    0xce48921e,// 99 PAY  70 

    0x388c8ed7,// 100 PAY  71 

    0x6937189f,// 101 PAY  72 

    0xba92e108,// 102 PAY  73 

    0xb70ebf58,// 103 PAY  74 

    0xe262d00a,// 104 PAY  75 

    0x16ae0651,// 105 PAY  76 

    0x2bb4ab74,// 106 PAY  77 

    0xa45d3698,// 107 PAY  78 

    0x0afd1aa7,// 108 PAY  79 

    0x36c9b4a9,// 109 PAY  80 

    0xc15fc2a1,// 110 PAY  81 

    0xea161c2e,// 111 PAY  82 

    0x96d2ab0b,// 112 PAY  83 

    0x42d3e3e0,// 113 PAY  84 

    0xdf1c891a,// 114 PAY  85 

    0x50666fca,// 115 PAY  86 

    0xb69eb97e,// 116 PAY  87 

    0xc427b202,// 117 PAY  88 

    0xd55436a5,// 118 PAY  89 

    0xc044a2e6,// 119 PAY  90 

    0x6bc0e24f,// 120 PAY  91 

    0x05ae00a3,// 121 PAY  92 

    0xd069cd2a,// 122 PAY  93 

    0x9c65f476,// 123 PAY  94 

    0xfd03cb96,// 124 PAY  95 

    0x898c8fd6,// 125 PAY  96 

    0xe5094fe9,// 126 PAY  97 

    0x0c25ba47,// 127 PAY  98 

    0xcb2c94b5,// 128 PAY  99 

    0x7de7927c,// 129 PAY 100 

    0xa9aa21a2,// 130 PAY 101 

    0x6014dbac,// 131 PAY 102 

    0x31351246,// 132 PAY 103 

    0x304b649a,// 133 PAY 104 

    0x4c562695,// 134 PAY 105 

    0x18ec866e,// 135 PAY 106 

    0x8ceb8f54,// 136 PAY 107 

    0x31f85ef8,// 137 PAY 108 

    0xb0d36cf3,// 138 PAY 109 

    0x2082f664,// 139 PAY 110 

    0x78e07c0d,// 140 PAY 111 

    0x30d42d5a,// 141 PAY 112 

    0x556ad594,// 142 PAY 113 

    0x5a0942b2,// 143 PAY 114 

    0xe6046115,// 144 PAY 115 

    0xf0c0aba8,// 145 PAY 116 

    0xfbfc4bbd,// 146 PAY 117 

    0xbf031c15,// 147 PAY 118 

    0x7fa1f758,// 148 PAY 119 

    0x3e8bf106,// 149 PAY 120 

    0x706fc565,// 150 PAY 121 

    0xb245b6b0,// 151 PAY 122 

    0xbaced57e,// 152 PAY 123 

    0xb03e5da3,// 153 PAY 124 

    0xf27233f1,// 154 PAY 125 

    0xd1688303,// 155 PAY 126 

    0xd5a4e6e5,// 156 PAY 127 

    0x917fb94a,// 157 PAY 128 

    0xdf4e978b,// 158 PAY 129 

    0x6b32b2c5,// 159 PAY 130 

    0xb0970987,// 160 PAY 131 

    0xeaa832c5,// 161 PAY 132 

    0x7f0c69e3,// 162 PAY 133 

    0x9c320b42,// 163 PAY 134 

    0x60d5f5b2,// 164 PAY 135 

    0x0b67f975,// 165 PAY 136 

    0xe267efaf,// 166 PAY 137 

    0x19c44204,// 167 PAY 138 

    0xfebaa6ef,// 168 PAY 139 

    0x9defc1cb,// 169 PAY 140 

    0x52550f1a,// 170 PAY 141 

    0x92ca8566,// 171 PAY 142 

    0xaef3b83a,// 172 PAY 143 

    0xa7ae5e07,// 173 PAY 144 

    0x0f8428d6,// 174 PAY 145 

    0x8c4d2304,// 175 PAY 146 

    0x125529a0,// 176 PAY 147 

    0x2c228b74,// 177 PAY 148 

    0xa640a0f1,// 178 PAY 149 

    0x29ad4d16,// 179 PAY 150 

    0xdec9ad19,// 180 PAY 151 

    0xe6a43e37,// 181 PAY 152 

    0xb4a14e11,// 182 PAY 153 

    0x95ad3741,// 183 PAY 154 

    0x15189841,// 184 PAY 155 

    0x4a043e15,// 185 PAY 156 

    0x40b47261,// 186 PAY 157 

    0x9a241410,// 187 PAY 158 

    0x91598154,// 188 PAY 159 

    0xc2f0fb97,// 189 PAY 160 

    0xdbc6b6ee,// 190 PAY 161 

    0xf314e5c6,// 191 PAY 162 

    0x7fdea901,// 192 PAY 163 

    0x849bcc52,// 193 PAY 164 

    0x277cc372,// 194 PAY 165 

    0x88639561,// 195 PAY 166 

    0x138f9796,// 196 PAY 167 

    0x650ba079,// 197 PAY 168 

    0xefe11bd4,// 198 PAY 169 

    0xdc614875,// 199 PAY 170 

    0xd6b56d32,// 200 PAY 171 

    0x1d000eb3,// 201 PAY 172 

    0xaf92b4d6,// 202 PAY 173 

    0x6bc5497a,// 203 PAY 174 

    0xb719666d,// 204 PAY 175 

    0x19ef9618,// 205 PAY 176 

    0xec8aea68,// 206 PAY 177 

    0x70f3c731,// 207 PAY 178 

    0x33984ab4,// 208 PAY 179 

    0x14154dc8,// 209 PAY 180 

    0xa0b9f4ff,// 210 PAY 181 

    0xca68d849,// 211 PAY 182 

    0xaa31dd0c,// 212 PAY 183 

    0x4dfa42d7,// 213 PAY 184 

    0x09761b22,// 214 PAY 185 

    0x236c828f,// 215 PAY 186 

    0x1526a848,// 216 PAY 187 

    0xa22d9e15,// 217 PAY 188 

    0xb1dc4763,// 218 PAY 189 

    0x690e3bb0,// 219 PAY 190 

    0x5916ccae,// 220 PAY 191 

    0x17030dd0,// 221 PAY 192 

    0x0c4d4a60,// 222 PAY 193 

    0x6402dbd0,// 223 PAY 194 

    0x741ea35e,// 224 PAY 195 

    0x79be86da,// 225 PAY 196 

    0x6aec87a7,// 226 PAY 197 

    0x94c56ad0,// 227 PAY 198 

    0x75e4b2ac,// 228 PAY 199 

    0x27cc49f8,// 229 PAY 200 

    0x7ab86750,// 230 PAY 201 

    0xc37d063d,// 231 PAY 202 

    0x54f3355a,// 232 PAY 203 

    0x81f5c57d,// 233 PAY 204 

    0xf737a763,// 234 PAY 205 

    0x6f429854,// 235 PAY 206 

    0x9480c4ee,// 236 PAY 207 

    0x2539bd4c,// 237 PAY 208 

    0x6b49d37c,// 238 PAY 209 

    0x01b34ad6,// 239 PAY 210 

    0x50e0495d,// 240 PAY 211 

    0x61bc1bb1,// 241 PAY 212 

    0xb14c0e1c,// 242 PAY 213 

    0x669b1dbc,// 243 PAY 214 

    0xc804c4cb,// 244 PAY 215 

    0xc3d10b07,// 245 PAY 216 

    0x9f2f6a0f,// 246 PAY 217 

    0x65d2457e,// 247 PAY 218 

    0x5141d781,// 248 PAY 219 

    0xf8b31267,// 249 PAY 220 

    0x1f0cc512,// 250 PAY 221 

    0x6366b112,// 251 PAY 222 

    0xacd4bf6f,// 252 PAY 223 

    0x63945765,// 253 PAY 224 

    0x7d769c64,// 254 PAY 225 

    0x5b6d9f47,// 255 PAY 226 

    0x50bdf654,// 256 PAY 227 

    0xecc2da01,// 257 PAY 228 

    0x1410db3b,// 258 PAY 229 

    0x94845df4,// 259 PAY 230 

    0xc7c82e44,// 260 PAY 231 

    0xc82d6312,// 261 PAY 232 

    0xbc367860,// 262 PAY 233 

    0xf97e9676,// 263 PAY 234 

    0xbf0ba480,// 264 PAY 235 

    0x9959aec6,// 265 PAY 236 

    0x81d4dbc7,// 266 PAY 237 

    0x35e61e31,// 267 PAY 238 

    0xccd584a5,// 268 PAY 239 

    0xc7b88e5a,// 269 PAY 240 

    0xa468eabc,// 270 PAY 241 

    0x2241c371,// 271 PAY 242 

    0x1d42d93d,// 272 PAY 243 

    0x88babd01,// 273 PAY 244 

    0xaf02c04d,// 274 PAY 245 

    0x5c96f279,// 275 PAY 246 

    0x93801ffb,// 276 PAY 247 

    0x707741c9,// 277 PAY 248 

    0x174fcaca,// 278 PAY 249 

    0x7e2fef27,// 279 PAY 250 

    0xcae18e65,// 280 PAY 251 

    0xd7310d0c,// 281 PAY 252 

    0x431b3c11,// 282 PAY 253 

    0x54fc0548,// 283 PAY 254 

    0x68df36d8,// 284 PAY 255 

    0x75aaa62a,// 285 PAY 256 

    0xd2aea238,// 286 PAY 257 

    0x6e5c111b,// 287 PAY 258 

    0x1e7b728a,// 288 PAY 259 

    0xf1055e4a,// 289 PAY 260 

    0xf454fa0f,// 290 PAY 261 

    0xde3c771c,// 291 PAY 262 

    0x67663e9d,// 292 PAY 263 

    0x2494046e,// 293 PAY 264 

    0x6068a1eb,// 294 PAY 265 

    0xbe1988f5,// 295 PAY 266 

    0xf109946a,// 296 PAY 267 

    0x8684ee85,// 297 PAY 268 

    0x255bd29e,// 298 PAY 269 

    0x5596b77f,// 299 PAY 270 

    0x0c8aa184,// 300 PAY 271 

    0x7acec6a3,// 301 PAY 272 

    0x2d6ece8b,// 302 PAY 273 

    0x8e35abd8,// 303 PAY 274 

    0x4e47a77f,// 304 PAY 275 

    0x4f1f5635,// 305 PAY 276 

    0x02eba323,// 306 PAY 277 

    0xf219ee99,// 307 PAY 278 

    0xc1166bb3,// 308 PAY 279 

    0x7c7efcec,// 309 PAY 280 

    0xc5d9acd0,// 310 PAY 281 

    0x721a1587,// 311 PAY 282 

/// STA is 1 words. 

/// STA num_pkts       : 168 

/// STA pkt_idx        : 182 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x3e 

    0x02d93ea8 // 312 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt14_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x05 

/// ECH pdu_tag        : 0x00 

    0x00050000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv !check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x08000011,// 3 SCX   1 

    0x80444874,// 4 SCX   2 

    0x00002482,// 5 SCX   3 

    0x5eb4a0d2,// 6 SCX   4 

    0x5aa6df11,// 7 SCX   5 

    0xae8f0351,// 8 SCX   6 

    0xc925b30c,// 9 SCX   7 

    0x5d5cbec3,// 10 SCX   8 

    0x30b2a671,// 11 SCX   9 

    0xed2a7fe1,// 12 SCX  10 

    0xcdb31492,// 13 SCX  11 

    0x66d84def,// 14 SCX  12 

    0xee77e426,// 15 SCX  13 

    0xc6969c97,// 16 SCX  14 

    0x22852d37,// 17 SCX  15 

    0xb6044499,// 18 SCX  16 

    0x320e304c,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1212 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 501 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 501 

/// BFD lencrypto      : 104 

/// BFD ofstcrypto     : 76 

/// BFD (ofst+len)cry  : 180 

/// BFD ofstiv         : 32 

/// BFD ofsticv        : 708 

    0x000001f5,// 20 BFD   1 

    0x004c0068,// 21 BFD   2 

    0x02c40020,// 22 BFD   3 

/// MFM is 14 words. 

/// MFM vldnibs        : 68 

    0x6800f553,// 23 MFM   1 

    0xbe5bd261,// 24 MFM   2 

    0x2861fa65,// 25 MFM   3 

    0x57f2a30c,// 26 MFM   4 

    0x2bf6e029,// 27 MFM   5 

    0x419ded98,// 28 MFM   6 

    0xb843f053,// 29 MFM   7 

    0x7423849e,// 30 MFM   8 

    0x113b6d38,// 31 MFM   9 

    0x258df931,// 32 MFM  10 

    0xe85b558f,// 33 MFM  11 

    0x42cc4769,// 34 MFM  12 

    0x411235dd,// 35 MFM  13 

    0xbadc0000,// 36 MFM  14 

/// BDA is 304 words. 

/// BDA size     is 1212 (0x4bc) 

/// BDA id       is 0x241b 

    0x04bc241b,// 37 BDA   1 

/// PAY Generic Data size   : 1212 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x235f1c0e,// 38 PAY   1 

    0x754f6a7a,// 39 PAY   2 

    0xc7f15c1b,// 40 PAY   3 

    0x6edf4676,// 41 PAY   4 

    0xb35c17e6,// 42 PAY   5 

    0x85573caa,// 43 PAY   6 

    0xdf90feca,// 44 PAY   7 

    0x4f4e61e2,// 45 PAY   8 

    0xf92cd996,// 46 PAY   9 

    0x8cc4d616,// 47 PAY  10 

    0x5c03e85e,// 48 PAY  11 

    0x1c241b12,// 49 PAY  12 

    0x8abe65e7,// 50 PAY  13 

    0xba07ac54,// 51 PAY  14 

    0x791b4cc7,// 52 PAY  15 

    0x18b8968d,// 53 PAY  16 

    0x2837e5b2,// 54 PAY  17 

    0xefcfcfc9,// 55 PAY  18 

    0x2cbdac60,// 56 PAY  19 

    0xed623e5d,// 57 PAY  20 

    0x4aca4b9b,// 58 PAY  21 

    0x68eac089,// 59 PAY  22 

    0xc8c9c153,// 60 PAY  23 

    0x04d82dab,// 61 PAY  24 

    0xde8fbdef,// 62 PAY  25 

    0x20b28c03,// 63 PAY  26 

    0xea585408,// 64 PAY  27 

    0xd73993b1,// 65 PAY  28 

    0xcb4a3c6a,// 66 PAY  29 

    0x1107d79c,// 67 PAY  30 

    0xcf38ff4f,// 68 PAY  31 

    0x151fa2a8,// 69 PAY  32 

    0x2e2ffa82,// 70 PAY  33 

    0x9bb2b01c,// 71 PAY  34 

    0xa02e6104,// 72 PAY  35 

    0x1038df18,// 73 PAY  36 

    0xae0b3161,// 74 PAY  37 

    0x7e1a6c8b,// 75 PAY  38 

    0x434d4251,// 76 PAY  39 

    0x52d4576d,// 77 PAY  40 

    0xc68e152c,// 78 PAY  41 

    0x3c277431,// 79 PAY  42 

    0x9455e7c2,// 80 PAY  43 

    0x8dc02e6c,// 81 PAY  44 

    0xcc4b1f6f,// 82 PAY  45 

    0xdbf31818,// 83 PAY  46 

    0x87eb25d5,// 84 PAY  47 

    0x14177f2c,// 85 PAY  48 

    0x9d78d72a,// 86 PAY  49 

    0x16758209,// 87 PAY  50 

    0x20fb7f38,// 88 PAY  51 

    0xfa8d59bb,// 89 PAY  52 

    0x5c8493b5,// 90 PAY  53 

    0xd46d5c88,// 91 PAY  54 

    0xaf5e555a,// 92 PAY  55 

    0xca86661c,// 93 PAY  56 

    0xe86d33d3,// 94 PAY  57 

    0x271ba221,// 95 PAY  58 

    0xe79df9b8,// 96 PAY  59 

    0xf25f6440,// 97 PAY  60 

    0xb4df1dba,// 98 PAY  61 

    0xb2fad567,// 99 PAY  62 

    0xec02f6fb,// 100 PAY  63 

    0x6dda3129,// 101 PAY  64 

    0x1b6061cf,// 102 PAY  65 

    0x660fdb70,// 103 PAY  66 

    0x418c303b,// 104 PAY  67 

    0x3b4cfac8,// 105 PAY  68 

    0x17ae50c7,// 106 PAY  69 

    0x3ff68bc1,// 107 PAY  70 

    0x824ec9d7,// 108 PAY  71 

    0x8aec5759,// 109 PAY  72 

    0x12fbdcee,// 110 PAY  73 

    0x1bf2e6f4,// 111 PAY  74 

    0x52d10c85,// 112 PAY  75 

    0x914ff2f4,// 113 PAY  76 

    0x6bb6ffca,// 114 PAY  77 

    0x3b02c817,// 115 PAY  78 

    0x9d332140,// 116 PAY  79 

    0xbc747569,// 117 PAY  80 

    0x39b2d6fb,// 118 PAY  81 

    0x346fc51d,// 119 PAY  82 

    0x9dc3b75a,// 120 PAY  83 

    0x276947e1,// 121 PAY  84 

    0x2f0469cd,// 122 PAY  85 

    0xb142b058,// 123 PAY  86 

    0x2450bd08,// 124 PAY  87 

    0x2dc4f0db,// 125 PAY  88 

    0x61169dd7,// 126 PAY  89 

    0x0d821471,// 127 PAY  90 

    0x093e50e6,// 128 PAY  91 

    0xd4682654,// 129 PAY  92 

    0x4547ce4a,// 130 PAY  93 

    0xebcdcecf,// 131 PAY  94 

    0xb5fc5f7e,// 132 PAY  95 

    0x78963d3c,// 133 PAY  96 

    0x098fab99,// 134 PAY  97 

    0xa04fbf21,// 135 PAY  98 

    0x5bf31364,// 136 PAY  99 

    0x8f435821,// 137 PAY 100 

    0xdfa4793f,// 138 PAY 101 

    0xf61a7f09,// 139 PAY 102 

    0x1c03e4f6,// 140 PAY 103 

    0xb599477e,// 141 PAY 104 

    0xcf29435b,// 142 PAY 105 

    0x75308fbd,// 143 PAY 106 

    0x93d5d9c6,// 144 PAY 107 

    0x93ce4c22,// 145 PAY 108 

    0x50d1a321,// 146 PAY 109 

    0x5cd62e20,// 147 PAY 110 

    0x3fb0e010,// 148 PAY 111 

    0xd44d5660,// 149 PAY 112 

    0x0b65a50e,// 150 PAY 113 

    0xf18eee89,// 151 PAY 114 

    0x7bf6a8d1,// 152 PAY 115 

    0xb72c475c,// 153 PAY 116 

    0xbd95bcba,// 154 PAY 117 

    0xc4a43ea5,// 155 PAY 118 

    0xb39e4020,// 156 PAY 119 

    0xb7501fb5,// 157 PAY 120 

    0x5fd7487a,// 158 PAY 121 

    0x17b832b0,// 159 PAY 122 

    0xf0bff337,// 160 PAY 123 

    0xae3c0afc,// 161 PAY 124 

    0x5acb2e62,// 162 PAY 125 

    0x3b85bf79,// 163 PAY 126 

    0xca7d6247,// 164 PAY 127 

    0x97b17ea1,// 165 PAY 128 

    0x01384790,// 166 PAY 129 

    0xb6856625,// 167 PAY 130 

    0x1dbe84bb,// 168 PAY 131 

    0x52150125,// 169 PAY 132 

    0x4209d7b4,// 170 PAY 133 

    0x81ee7dcc,// 171 PAY 134 

    0xa6c4f273,// 172 PAY 135 

    0xc77860cc,// 173 PAY 136 

    0xccf6ab7f,// 174 PAY 137 

    0x30b95baf,// 175 PAY 138 

    0xf7a18233,// 176 PAY 139 

    0xe5eb967c,// 177 PAY 140 

    0x13d8ec05,// 178 PAY 141 

    0xa60ea7da,// 179 PAY 142 

    0xccf557c9,// 180 PAY 143 

    0x71e42a70,// 181 PAY 144 

    0x092fbd5a,// 182 PAY 145 

    0x378c3e41,// 183 PAY 146 

    0x7f4264d8,// 184 PAY 147 

    0x04742938,// 185 PAY 148 

    0x06fba2c9,// 186 PAY 149 

    0x8a737e43,// 187 PAY 150 

    0xf41260a3,// 188 PAY 151 

    0xf9307efd,// 189 PAY 152 

    0x2943ec34,// 190 PAY 153 

    0x0e78d7f3,// 191 PAY 154 

    0x79c5e851,// 192 PAY 155 

    0xe58937b4,// 193 PAY 156 

    0x6807daa7,// 194 PAY 157 

    0xa46b3bad,// 195 PAY 158 

    0x12e26ccb,// 196 PAY 159 

    0x90248e97,// 197 PAY 160 

    0x414d597c,// 198 PAY 161 

    0x605e1d55,// 199 PAY 162 

    0xbf116639,// 200 PAY 163 

    0x2cc72228,// 201 PAY 164 

    0x93d899b6,// 202 PAY 165 

    0xfa206c3d,// 203 PAY 166 

    0xd1b20526,// 204 PAY 167 

    0xa67dd28a,// 205 PAY 168 

    0x36360958,// 206 PAY 169 

    0x1cec8c28,// 207 PAY 170 

    0x2624f7ea,// 208 PAY 171 

    0xf6e7eba3,// 209 PAY 172 

    0xfbfa9050,// 210 PAY 173 

    0x5f5aacaa,// 211 PAY 174 

    0x4f9896bb,// 212 PAY 175 

    0x4f8dda95,// 213 PAY 176 

    0xa95f1888,// 214 PAY 177 

    0xcf87073d,// 215 PAY 178 

    0x3a9742de,// 216 PAY 179 

    0x866c288a,// 217 PAY 180 

    0x15e21d49,// 218 PAY 181 

    0xbc50fb86,// 219 PAY 182 

    0x8aaf421d,// 220 PAY 183 

    0x46926b28,// 221 PAY 184 

    0x998aa1cc,// 222 PAY 185 

    0x8a850d75,// 223 PAY 186 

    0xa3b33c34,// 224 PAY 187 

    0x370c3810,// 225 PAY 188 

    0x07d2d75e,// 226 PAY 189 

    0x208c029d,// 227 PAY 190 

    0x535bfc1d,// 228 PAY 191 

    0x32e921d9,// 229 PAY 192 

    0xe332717a,// 230 PAY 193 

    0xc1141b55,// 231 PAY 194 

    0x281aad8b,// 232 PAY 195 

    0x8ef9288e,// 233 PAY 196 

    0xad79b18f,// 234 PAY 197 

    0x3723da7d,// 235 PAY 198 

    0xc15b2add,// 236 PAY 199 

    0x465fd7d1,// 237 PAY 200 

    0x77c56280,// 238 PAY 201 

    0x795d2c07,// 239 PAY 202 

    0x48e00627,// 240 PAY 203 

    0x334e679d,// 241 PAY 204 

    0x1c40c5fc,// 242 PAY 205 

    0x9647e728,// 243 PAY 206 

    0x256c2824,// 244 PAY 207 

    0x2b5c04b7,// 245 PAY 208 

    0x8c30b24d,// 246 PAY 209 

    0x7b0e4206,// 247 PAY 210 

    0xe1588dc7,// 248 PAY 211 

    0x3a274438,// 249 PAY 212 

    0x8810f2ae,// 250 PAY 213 

    0x418c6bcf,// 251 PAY 214 

    0xcb4cc53a,// 252 PAY 215 

    0x9f6e8743,// 253 PAY 216 

    0x852f536e,// 254 PAY 217 

    0x856d8cb0,// 255 PAY 218 

    0x9fadd4dd,// 256 PAY 219 

    0x7dadb272,// 257 PAY 220 

    0x9433ecb5,// 258 PAY 221 

    0x9e2f8097,// 259 PAY 222 

    0x187eeb25,// 260 PAY 223 

    0x9d77825f,// 261 PAY 224 

    0x4b2f787c,// 262 PAY 225 

    0x9f9459e2,// 263 PAY 226 

    0xb32441eb,// 264 PAY 227 

    0xc6bdc080,// 265 PAY 228 

    0x6333b17c,// 266 PAY 229 

    0x482afefe,// 267 PAY 230 

    0x960f6604,// 268 PAY 231 

    0xfb96a0dd,// 269 PAY 232 

    0xbb9ffb8b,// 270 PAY 233 

    0x982a3bc2,// 271 PAY 234 

    0xf5cca740,// 272 PAY 235 

    0x8144bfe3,// 273 PAY 236 

    0x25347edb,// 274 PAY 237 

    0x2b17a5db,// 275 PAY 238 

    0xae6bcb48,// 276 PAY 239 

    0x21ec4e90,// 277 PAY 240 

    0x51edbc61,// 278 PAY 241 

    0x643ead67,// 279 PAY 242 

    0xd23f62b4,// 280 PAY 243 

    0xff714e6d,// 281 PAY 244 

    0x406be718,// 282 PAY 245 

    0xec279611,// 283 PAY 246 

    0x0211af75,// 284 PAY 247 

    0x776ad587,// 285 PAY 248 

    0x9adc7029,// 286 PAY 249 

    0xec0cbde5,// 287 PAY 250 

    0xd9b18a6f,// 288 PAY 251 

    0xf39f748a,// 289 PAY 252 

    0x21d9469a,// 290 PAY 253 

    0x80465486,// 291 PAY 254 

    0x8bfdd97d,// 292 PAY 255 

    0x42706e30,// 293 PAY 256 

    0xaa3a1170,// 294 PAY 257 

    0x2b87ee19,// 295 PAY 258 

    0x1397e1e1,// 296 PAY 259 

    0x25f8c2c3,// 297 PAY 260 

    0x39efbce4,// 298 PAY 261 

    0x4a287a35,// 299 PAY 262 

    0xd22e61ec,// 300 PAY 263 

    0xb449ad9d,// 301 PAY 264 

    0xb764c542,// 302 PAY 265 

    0x3dc51f12,// 303 PAY 266 

    0xb31864a9,// 304 PAY 267 

    0x090c9da8,// 305 PAY 268 

    0x69070010,// 306 PAY 269 

    0x90116b8c,// 307 PAY 270 

    0x54df863a,// 308 PAY 271 

    0xa147441e,// 309 PAY 272 

    0x564b9e14,// 310 PAY 273 

    0x4012f6ad,// 311 PAY 274 

    0x3ff03110,// 312 PAY 275 

    0xb6df8afa,// 313 PAY 276 

    0xb6988cb0,// 314 PAY 277 

    0xf48a97aa,// 315 PAY 278 

    0x908c816b,// 316 PAY 279 

    0x31809010,// 317 PAY 280 

    0x27b3aef6,// 318 PAY 281 

    0xf8224840,// 319 PAY 282 

    0x8bfdd505,// 320 PAY 283 

    0xc1d5feb8,// 321 PAY 284 

    0x2dd6397d,// 322 PAY 285 

    0xd9b21b87,// 323 PAY 286 

    0xb6054050,// 324 PAY 287 

    0xf8752de8,// 325 PAY 288 

    0xf0cbad42,// 326 PAY 289 

    0x84027f3b,// 327 PAY 290 

    0x8f6e08d1,// 328 PAY 291 

    0xb3786410,// 329 PAY 292 

    0x43b7b11d,// 330 PAY 293 

    0xb2205b50,// 331 PAY 294 

    0x6db5f779,// 332 PAY 295 

    0x1c71d7ac,// 333 PAY 296 

    0x73a605ad,// 334 PAY 297 

    0x211e7326,// 335 PAY 298 

    0xe7bd45ba,// 336 PAY 299 

    0x519b2e70,// 337 PAY 300 

    0x81f36a3d,// 338 PAY 301 

    0x0813c465,// 339 PAY 302 

    0xff7bf94f,// 340 PAY 303 

/// STA is 1 words. 

/// STA num_pkts       : 132 

/// STA pkt_idx        : 124 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x26 

    0x01f12684 // 341 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc !incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt15_tmpl[] = {
    0xa8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x06 

/// ECH pdu_tag        : 0x00 

    0x00060000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0000000f,// 3 SCX   1 

    0x804248cc,// 4 SCX   2 

    0x00003100,// 5 SCX   3 

    0xadd4a2a9,// 6 SCX   4 

    0xf384d6b2,// 7 SCX   5 

    0x4c3120ea,// 8 SCX   6 

    0x6ae61ec3,// 9 SCX   7 

    0x7248417e,// 10 SCX   8 

    0x79a78b39,// 11 SCX   9 

    0xfcc04107,// 12 SCX  10 

    0x72b9fdd9,// 13 SCX  11 

    0x836e0a31,// 14 SCX  12 

    0x5934f1df,// 15 SCX  13 

    0x81c97049,// 16 SCX  14 

    0x8fe16794,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 194 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 31 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 31 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 20 

/// BFD (ofst+len)cry  : 28 

/// BFD ofstiv         : 8 

/// BFD ofsticv        : 172 

    0x0000001f,// 18 BFD   1 

    0x00140008,// 19 BFD   2 

    0x00ac0008,// 20 BFD   3 

/// BDA is 50 words. 

/// BDA size     is 194 (0xc2) 

/// BDA id       is 0xa24 

    0x00c20a24,// 21 BDA   1 

/// PAY Generic Data size   : 194 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x436db5cb,// 22 PAY   1 

    0x3cea67e6,// 23 PAY   2 

    0x0c4e3d93,// 24 PAY   3 

    0x96510e8e,// 25 PAY   4 

    0x46ff83a1,// 26 PAY   5 

    0x6b6a8fa1,// 27 PAY   6 

    0xa80554d1,// 28 PAY   7 

    0x883de9f3,// 29 PAY   8 

    0xcfc11ba8,// 30 PAY   9 

    0xf031c5f8,// 31 PAY  10 

    0xf6ce2774,// 32 PAY  11 

    0x8d78b1cb,// 33 PAY  12 

    0x3b3befd1,// 34 PAY  13 

    0x6e93b9dd,// 35 PAY  14 

    0x327a5b4c,// 36 PAY  15 

    0xa43f3a97,// 37 PAY  16 

    0x1a1caa8f,// 38 PAY  17 

    0xa8682e9c,// 39 PAY  18 

    0x890552f8,// 40 PAY  19 

    0x73260d03,// 41 PAY  20 

    0x54f979a0,// 42 PAY  21 

    0x90b0dbaf,// 43 PAY  22 

    0xda810f0c,// 44 PAY  23 

    0x23511260,// 45 PAY  24 

    0x55a7424f,// 46 PAY  25 

    0x5e6c73b3,// 47 PAY  26 

    0x384cef42,// 48 PAY  27 

    0x2d63d83e,// 49 PAY  28 

    0x5f5212a3,// 50 PAY  29 

    0x7b306669,// 51 PAY  30 

    0x6ab0af8d,// 52 PAY  31 

    0xd456c3c0,// 53 PAY  32 

    0x2fad6279,// 54 PAY  33 

    0x7a374d22,// 55 PAY  34 

    0x06978533,// 56 PAY  35 

    0xcb3255bb,// 57 PAY  36 

    0xdca531f4,// 58 PAY  37 

    0xb3ff11d0,// 59 PAY  38 

    0xafa281e6,// 60 PAY  39 

    0x95b68e4e,// 61 PAY  40 

    0xa7322a7d,// 62 PAY  41 

    0x2fb90315,// 63 PAY  42 

    0x32492be3,// 64 PAY  43 

    0x8fb911bc,// 65 PAY  44 

    0x42e37ff2,// 66 PAY  45 

    0xa896ef3c,// 67 PAY  46 

    0x2eda34e0,// 68 PAY  47 

    0x80c57db2,// 69 PAY  48 

    0x73a60000,// 70 PAY  49 

/// STA is 1 words. 

/// STA num_pkts       : 92 

/// STA pkt_idx        : 100 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xde 

    0x0191de5c // 71 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt16_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x09 

/// ECH pdu_tag        : 0x00 

    0x00090000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x5 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0800000f,// 3 SCX   1 

    0x80404838,// 4 SCX   2 

    0x00003500,// 5 SCX   3 

    0x3301f00c,// 6 SCX   4 

    0x8cb7fcb0,// 7 SCX   5 

    0xe46fd4fa,// 8 SCX   6 

    0x27cd181b,// 9 SCX   7 

    0xcb8f32aa,// 10 SCX   8 

    0xcabb1b0f,// 11 SCX   9 

    0x32811373,// 12 SCX  10 

    0x2230f135,// 13 SCX  11 

    0x12316fba,// 14 SCX  12 

    0xc1bb2219,// 15 SCX  13 

    0x35ccd899,// 16 SCX  14 

    0xa3fee89d,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 324 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 266 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 266 

/// BFD lencrypto      : 32 

/// BFD ofstcrypto     : 176 

/// BFD (ofst+len)cry  : 208 

/// BFD ofstiv         : 160 

/// BFD ofsticv        : 268 

    0x0000010a,// 18 BFD   1 

    0x00b00020,// 19 BFD   2 

    0x010c00a0,// 20 BFD   3 

/// MFM is 2 words. 

/// MFM vldnibs        : c 

    0x0c00e0e7,// 21 MFM   1 

    0xbbbd2c92,// 22 MFM   2 

/// BDA is 82 words. 

/// BDA size     is 324 (0x144) 

/// BDA id       is 0x8a3d 

    0x01448a3d,// 23 BDA   1 

/// PAY Generic Data size   : 324 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x4097a599,// 24 PAY   1 

    0x04da4b99,// 25 PAY   2 

    0x0ac20c76,// 26 PAY   3 

    0x4b0d03f0,// 27 PAY   4 

    0xbde167a0,// 28 PAY   5 

    0xd6ec2b0e,// 29 PAY   6 

    0x57c379a1,// 30 PAY   7 

    0x7a3bacbe,// 31 PAY   8 

    0x897eaa7a,// 32 PAY   9 

    0xdeaa1025,// 33 PAY  10 

    0x62f95478,// 34 PAY  11 

    0xdc6bcd9c,// 35 PAY  12 

    0xcd21adb1,// 36 PAY  13 

    0x936c93a5,// 37 PAY  14 

    0x65166f71,// 38 PAY  15 

    0x24ecd272,// 39 PAY  16 

    0xc4e09331,// 40 PAY  17 

    0x08d6880d,// 41 PAY  18 

    0x1dc4105c,// 42 PAY  19 

    0x9b277432,// 43 PAY  20 

    0xc2c30a8b,// 44 PAY  21 

    0x789ced9b,// 45 PAY  22 

    0x951446d2,// 46 PAY  23 

    0xa99560c5,// 47 PAY  24 

    0xc1b16564,// 48 PAY  25 

    0x696585fc,// 49 PAY  26 

    0x3a5a3dfe,// 50 PAY  27 

    0x46bd60cd,// 51 PAY  28 

    0x8c1a8a0c,// 52 PAY  29 

    0xfbe1a72d,// 53 PAY  30 

    0xa2416c85,// 54 PAY  31 

    0x142e932e,// 55 PAY  32 

    0xe9cb5ed8,// 56 PAY  33 

    0xa0b38cce,// 57 PAY  34 

    0x61beb0a7,// 58 PAY  35 

    0x0441b0f5,// 59 PAY  36 

    0x3654ff7b,// 60 PAY  37 

    0xee950e53,// 61 PAY  38 

    0x13f503b5,// 62 PAY  39 

    0x57dacba0,// 63 PAY  40 

    0x6c4a4c4e,// 64 PAY  41 

    0x0b35a841,// 65 PAY  42 

    0xbdde5084,// 66 PAY  43 

    0x242fab69,// 67 PAY  44 

    0xa65c08a0,// 68 PAY  45 

    0xfbda7c61,// 69 PAY  46 

    0x75583984,// 70 PAY  47 

    0xb27624fb,// 71 PAY  48 

    0xd7a0e191,// 72 PAY  49 

    0x25bc9b7c,// 73 PAY  50 

    0xf693f179,// 74 PAY  51 

    0x5364cf26,// 75 PAY  52 

    0xdac9c854,// 76 PAY  53 

    0x18585741,// 77 PAY  54 

    0xb194b9c7,// 78 PAY  55 

    0x42bb6c25,// 79 PAY  56 

    0x53aff12e,// 80 PAY  57 

    0x292ae46f,// 81 PAY  58 

    0x42a0ff06,// 82 PAY  59 

    0xdf434399,// 83 PAY  60 

    0x4bdd1314,// 84 PAY  61 

    0x827ba9e4,// 85 PAY  62 

    0x9873a51d,// 86 PAY  63 

    0xbba3e8a7,// 87 PAY  64 

    0xb8a062be,// 88 PAY  65 

    0x025381da,// 89 PAY  66 

    0x819ec04b,// 90 PAY  67 

    0x9ec150f0,// 91 PAY  68 

    0x73b61b84,// 92 PAY  69 

    0x006a9117,// 93 PAY  70 

    0xf9a2eca8,// 94 PAY  71 

    0x89458043,// 95 PAY  72 

    0xaffa00f9,// 96 PAY  73 

    0xb6126c66,// 97 PAY  74 

    0x30187af8,// 98 PAY  75 

    0xd8cb6e5a,// 99 PAY  76 

    0xd39403e8,// 100 PAY  77 

    0x4b4b6912,// 101 PAY  78 

    0x1e84c385,// 102 PAY  79 

    0xf6ad0277,// 103 PAY  80 

    0xeeb4ddd5,// 104 PAY  81 

/// STA is 1 words. 

/// STA num_pkts       : 124 

/// STA pkt_idx        : 247 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xc5 

    0x03dcc57c // 105 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt17_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x0f 

/// ECH pdu_tag        : 0x00 

    0x000f0000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x5 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0800000f,// 3 SCX   1 

    0x8040487b,// 4 SCX   2 

    0x00002500,// 5 SCX   3 

    0x57dedb2b,// 6 SCX   4 

    0x8f54cafa,// 7 SCX   5 

    0xab1c2ea3,// 8 SCX   6 

    0x7f603a58,// 9 SCX   7 

    0xc9761f97,// 10 SCX   8 

    0x80a3ce17,// 11 SCX   9 

    0xab8ac270,// 12 SCX  10 

    0xcdadfd9c,// 13 SCX  11 

    0x0cf6c986,// 14 SCX  12 

    0x7d7f7bb2,// 15 SCX  13 

    0x3eec2f49,// 16 SCX  14 

    0x257643de,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 1922 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 883 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 883 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 464 

/// BFD (ofst+len)cry  : 472 

/// BFD ofstiv         : 96 

/// BFD ofsticv        : 1360 

    0x00000373,// 18 BFD   1 

    0x01d00008,// 19 BFD   2 

    0x05500060,// 20 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c008595,// 21 MFM   1 

    0x8f0de884,// 22 MFM   2 

    0x26532ce8,// 23 MFM   3 

    0x6cea436a,// 24 MFM   4 

    0xb468c1ac,// 25 MFM   5 

    0xd371673d,// 26 MFM   6 

    0xdf8375f8,// 27 MFM   7 

    0x533987f2,// 28 MFM   8 

    0xa5be95df,// 29 MFM   9 

    0xc6a3a5f7,// 30 MFM  10 

    0xd78c2066,// 31 MFM  11 

    0x2c5e870d,// 32 MFM  12 

    0x96a275a2,// 33 MFM  13 

    0xe520f845,// 34 MFM  14 

    0xbb1274c1,// 35 MFM  15 

    0x01651677,// 36 MFM  16 

/// BDA is 482 words. 

/// BDA size     is 1922 (0x782) 

/// BDA id       is 0xc3ba 

    0x0782c3ba,// 37 BDA   1 

/// PAY Generic Data size   : 1922 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x8bba353c,// 38 PAY   1 

    0x3e7dec84,// 39 PAY   2 

    0x010b0da9,// 40 PAY   3 

    0xc8088058,// 41 PAY   4 

    0x25a81c0b,// 42 PAY   5 

    0xbda826c4,// 43 PAY   6 

    0x4e7c21cc,// 44 PAY   7 

    0x73f3d61d,// 45 PAY   8 

    0xe739ae09,// 46 PAY   9 

    0x7791aabb,// 47 PAY  10 

    0xd9fc40dd,// 48 PAY  11 

    0x69a4dbc9,// 49 PAY  12 

    0x88fffb9e,// 50 PAY  13 

    0x6d8d5609,// 51 PAY  14 

    0xfd308f38,// 52 PAY  15 

    0x10b1911e,// 53 PAY  16 

    0xc8c294d6,// 54 PAY  17 

    0xc4bbb7e5,// 55 PAY  18 

    0xd967c849,// 56 PAY  19 

    0x88e750e4,// 57 PAY  20 

    0xadbd7f91,// 58 PAY  21 

    0x7efd05dd,// 59 PAY  22 

    0x866efb02,// 60 PAY  23 

    0x12391a15,// 61 PAY  24 

    0xf55eb464,// 62 PAY  25 

    0x317e0f29,// 63 PAY  26 

    0xf25d5037,// 64 PAY  27 

    0x71a833b6,// 65 PAY  28 

    0x1648e696,// 66 PAY  29 

    0xcb9949a1,// 67 PAY  30 

    0xe8f83439,// 68 PAY  31 

    0xa06cc068,// 69 PAY  32 

    0x3b0c095c,// 70 PAY  33 

    0x6cc70313,// 71 PAY  34 

    0xacab14c6,// 72 PAY  35 

    0xfd51b6bf,// 73 PAY  36 

    0x08754a4b,// 74 PAY  37 

    0xd4615f45,// 75 PAY  38 

    0x998ecf25,// 76 PAY  39 

    0xc8d8fd59,// 77 PAY  40 

    0xab0fb83b,// 78 PAY  41 

    0x4e8ac1c6,// 79 PAY  42 

    0x96fee4d9,// 80 PAY  43 

    0x7d8fc21e,// 81 PAY  44 

    0x22627f0e,// 82 PAY  45 

    0xcd90384b,// 83 PAY  46 

    0xb5b66c99,// 84 PAY  47 

    0x4c1061f8,// 85 PAY  48 

    0xb068a0ee,// 86 PAY  49 

    0x08fef841,// 87 PAY  50 

    0xfaf8a575,// 88 PAY  51 

    0xb813de9c,// 89 PAY  52 

    0xb3618e06,// 90 PAY  53 

    0xcb05bda7,// 91 PAY  54 

    0xf48e760e,// 92 PAY  55 

    0xe389c79a,// 93 PAY  56 

    0x8d53bbf1,// 94 PAY  57 

    0x94f471eb,// 95 PAY  58 

    0x9653551d,// 96 PAY  59 

    0x33dec2b6,// 97 PAY  60 

    0xd6c2dfef,// 98 PAY  61 

    0xd826ef6a,// 99 PAY  62 

    0x2249f93c,// 100 PAY  63 

    0x8cfdef87,// 101 PAY  64 

    0x896a9652,// 102 PAY  65 

    0x1116aa46,// 103 PAY  66 

    0x4020cbc9,// 104 PAY  67 

    0x9687cbb1,// 105 PAY  68 

    0x9958aabe,// 106 PAY  69 

    0xadad8167,// 107 PAY  70 

    0xd71e9aa8,// 108 PAY  71 

    0x93518a69,// 109 PAY  72 

    0xf494939c,// 110 PAY  73 

    0x0237e022,// 111 PAY  74 

    0xedd14f98,// 112 PAY  75 

    0x85c08de7,// 113 PAY  76 

    0xe4e59b7d,// 114 PAY  77 

    0xe3925297,// 115 PAY  78 

    0xaa0a91cd,// 116 PAY  79 

    0x9128a168,// 117 PAY  80 

    0xe6abc90f,// 118 PAY  81 

    0x86a6052c,// 119 PAY  82 

    0xb47342aa,// 120 PAY  83 

    0xe3b106b0,// 121 PAY  84 

    0x7671395b,// 122 PAY  85 

    0xe0d0d9c7,// 123 PAY  86 

    0x67edc5af,// 124 PAY  87 

    0x405d83cf,// 125 PAY  88 

    0x9d3942a0,// 126 PAY  89 

    0x5258282a,// 127 PAY  90 

    0x51732f05,// 128 PAY  91 

    0xe363d5d8,// 129 PAY  92 

    0xb826efa5,// 130 PAY  93 

    0xb3a95439,// 131 PAY  94 

    0x881fa2a4,// 132 PAY  95 

    0xa04d2df1,// 133 PAY  96 

    0x5a8dc412,// 134 PAY  97 

    0xaded396b,// 135 PAY  98 

    0x1834a98b,// 136 PAY  99 

    0x898391a9,// 137 PAY 100 

    0x0c6531de,// 138 PAY 101 

    0xef7dd1d8,// 139 PAY 102 

    0x387276fa,// 140 PAY 103 

    0x618f2c95,// 141 PAY 104 

    0xbb84c89a,// 142 PAY 105 

    0xa69f8a61,// 143 PAY 106 

    0x714e2fef,// 144 PAY 107 

    0xcd719bf0,// 145 PAY 108 

    0xf538704d,// 146 PAY 109 

    0x9448a395,// 147 PAY 110 

    0x88e06ce4,// 148 PAY 111 

    0x1ade376a,// 149 PAY 112 

    0x5df95e5d,// 150 PAY 113 

    0x94bd1ce2,// 151 PAY 114 

    0x7201d5a3,// 152 PAY 115 

    0x97f496fc,// 153 PAY 116 

    0xfed12a5c,// 154 PAY 117 

    0x5f2ef7ab,// 155 PAY 118 

    0x8976c38e,// 156 PAY 119 

    0xee16a877,// 157 PAY 120 

    0xd95d774f,// 158 PAY 121 

    0x793ebd99,// 159 PAY 122 

    0x0600857e,// 160 PAY 123 

    0xe90c9640,// 161 PAY 124 

    0x0d723895,// 162 PAY 125 

    0x160f5cee,// 163 PAY 126 

    0xd0a3599d,// 164 PAY 127 

    0x7351462a,// 165 PAY 128 

    0x76b7e299,// 166 PAY 129 

    0x13c5dd27,// 167 PAY 130 

    0x8eb11bf7,// 168 PAY 131 

    0xc9ce8933,// 169 PAY 132 

    0x2337fb2b,// 170 PAY 133 

    0x62896df6,// 171 PAY 134 

    0x7d91e9ad,// 172 PAY 135 

    0x4dadf760,// 173 PAY 136 

    0xc0724ac2,// 174 PAY 137 

    0x2d102bb6,// 175 PAY 138 

    0xdb46a07f,// 176 PAY 139 

    0x1eaa06f1,// 177 PAY 140 

    0x91692df1,// 178 PAY 141 

    0xf7eab869,// 179 PAY 142 

    0xc3b20574,// 180 PAY 143 

    0xe19bf4c4,// 181 PAY 144 

    0xc15da5c3,// 182 PAY 145 

    0x24b7f79d,// 183 PAY 146 

    0xf1d5ab72,// 184 PAY 147 

    0x016d8988,// 185 PAY 148 

    0x6373c78b,// 186 PAY 149 

    0xe41ad8a2,// 187 PAY 150 

    0x50c570a1,// 188 PAY 151 

    0x9c557c3e,// 189 PAY 152 

    0x9082c806,// 190 PAY 153 

    0xbf25879f,// 191 PAY 154 

    0x5bd1cbb8,// 192 PAY 155 

    0xcbf8bee0,// 193 PAY 156 

    0xb3e2b971,// 194 PAY 157 

    0x10d38568,// 195 PAY 158 

    0x3dc947ba,// 196 PAY 159 

    0x536fc5d0,// 197 PAY 160 

    0x1ce7201e,// 198 PAY 161 

    0xe1cf9e0d,// 199 PAY 162 

    0x4a30d65c,// 200 PAY 163 

    0x4d199c2f,// 201 PAY 164 

    0x4c623984,// 202 PAY 165 

    0xaba96ccc,// 203 PAY 166 

    0xd8c6ac42,// 204 PAY 167 

    0x6f825c19,// 205 PAY 168 

    0xa0ef5588,// 206 PAY 169 

    0x1f324b30,// 207 PAY 170 

    0x3e48bae0,// 208 PAY 171 

    0x524fbfb5,// 209 PAY 172 

    0x4870fe17,// 210 PAY 173 

    0x039ebc44,// 211 PAY 174 

    0x7d9908db,// 212 PAY 175 

    0x73d0b925,// 213 PAY 176 

    0x80236510,// 214 PAY 177 

    0xf808c71a,// 215 PAY 178 

    0x4c02e872,// 216 PAY 179 

    0x3eb71bb0,// 217 PAY 180 

    0x8d970c7a,// 218 PAY 181 

    0x60411262,// 219 PAY 182 

    0x009d0204,// 220 PAY 183 

    0xb019451f,// 221 PAY 184 

    0x6d51377e,// 222 PAY 185 

    0xda649e2f,// 223 PAY 186 

    0x88d2e594,// 224 PAY 187 

    0x53eefeb0,// 225 PAY 188 

    0xe7ef110f,// 226 PAY 189 

    0x8b09a8b7,// 227 PAY 190 

    0xbb1611f6,// 228 PAY 191 

    0x3352a938,// 229 PAY 192 

    0x3954c5ef,// 230 PAY 193 

    0x4ffeb2ae,// 231 PAY 194 

    0x982779ed,// 232 PAY 195 

    0x176b023a,// 233 PAY 196 

    0x5f24552b,// 234 PAY 197 

    0x9543135b,// 235 PAY 198 

    0x47a29bf5,// 236 PAY 199 

    0x629ab7b5,// 237 PAY 200 

    0x05960861,// 238 PAY 201 

    0xce5fd20f,// 239 PAY 202 

    0x2d67bc6c,// 240 PAY 203 

    0x998308e9,// 241 PAY 204 

    0x4ae3ec89,// 242 PAY 205 

    0x7e2e0e42,// 243 PAY 206 

    0x74189848,// 244 PAY 207 

    0xcb6e2041,// 245 PAY 208 

    0xb816ae5e,// 246 PAY 209 

    0x9fad92d0,// 247 PAY 210 

    0x5c92bd67,// 248 PAY 211 

    0x1b192721,// 249 PAY 212 

    0xeb93652f,// 250 PAY 213 

    0xc104bcb7,// 251 PAY 214 

    0xe9c9975e,// 252 PAY 215 

    0x2481f8a0,// 253 PAY 216 

    0xb110d244,// 254 PAY 217 

    0x9843be5e,// 255 PAY 218 

    0x405eb80d,// 256 PAY 219 

    0x5385c5b9,// 257 PAY 220 

    0xbd466b20,// 258 PAY 221 

    0x510af210,// 259 PAY 222 

    0x26467813,// 260 PAY 223 

    0x00735a92,// 261 PAY 224 

    0x905b7edd,// 262 PAY 225 

    0x514c0e54,// 263 PAY 226 

    0x1810e595,// 264 PAY 227 

    0x1059845a,// 265 PAY 228 

    0x3b8f2324,// 266 PAY 229 

    0xae6d7ab3,// 267 PAY 230 

    0xce58e1ce,// 268 PAY 231 

    0xf568761e,// 269 PAY 232 

    0x672b4eec,// 270 PAY 233 

    0x92426fcc,// 271 PAY 234 

    0x4cbee6b7,// 272 PAY 235 

    0x8a91aa14,// 273 PAY 236 

    0x8805bd1c,// 274 PAY 237 

    0x21527953,// 275 PAY 238 

    0x0c2edbd8,// 276 PAY 239 

    0x40d41120,// 277 PAY 240 

    0x95b186ba,// 278 PAY 241 

    0x7a8de434,// 279 PAY 242 

    0xd2ac05de,// 280 PAY 243 

    0x5efebf5d,// 281 PAY 244 

    0x29e49c37,// 282 PAY 245 

    0xf80db2be,// 283 PAY 246 

    0xb0f02b15,// 284 PAY 247 

    0x0e483d02,// 285 PAY 248 

    0x2be58b6d,// 286 PAY 249 

    0xa05165ad,// 287 PAY 250 

    0xdac5bd2f,// 288 PAY 251 

    0x3fc95823,// 289 PAY 252 

    0x4240fbf0,// 290 PAY 253 

    0x75428b2a,// 291 PAY 254 

    0xd535f1e3,// 292 PAY 255 

    0x7216c36f,// 293 PAY 256 

    0xf7f8b7b1,// 294 PAY 257 

    0x7df709b3,// 295 PAY 258 

    0x20115765,// 296 PAY 259 

    0xcfcb6f49,// 297 PAY 260 

    0x5cf1216e,// 298 PAY 261 

    0xd2758d44,// 299 PAY 262 

    0xe51ed5d1,// 300 PAY 263 

    0x6cd98e4d,// 301 PAY 264 

    0x501dd550,// 302 PAY 265 

    0x827ae6b9,// 303 PAY 266 

    0xefaa9668,// 304 PAY 267 

    0x5ecafdf3,// 305 PAY 268 

    0xa3f44401,// 306 PAY 269 

    0x056e5e45,// 307 PAY 270 

    0x4022a876,// 308 PAY 271 

    0xe540b7ed,// 309 PAY 272 

    0x19ee1847,// 310 PAY 273 

    0x035825ca,// 311 PAY 274 

    0xeb990693,// 312 PAY 275 

    0x4ef4b8fa,// 313 PAY 276 

    0xdebb2777,// 314 PAY 277 

    0x9292866d,// 315 PAY 278 

    0x989681c0,// 316 PAY 279 

    0x3aa509da,// 317 PAY 280 

    0x4a78b342,// 318 PAY 281 

    0x7d9cc6e5,// 319 PAY 282 

    0xa3c27430,// 320 PAY 283 

    0x61ac4ea4,// 321 PAY 284 

    0x92cb7651,// 322 PAY 285 

    0x5bf12b80,// 323 PAY 286 

    0x22d22570,// 324 PAY 287 

    0x34b2422a,// 325 PAY 288 

    0xc67973c3,// 326 PAY 289 

    0x19ab06b0,// 327 PAY 290 

    0x56c5bfd1,// 328 PAY 291 

    0xf2174b83,// 329 PAY 292 

    0xca9b3f8d,// 330 PAY 293 

    0x53ae881a,// 331 PAY 294 

    0x5d53d10c,// 332 PAY 295 

    0x08ce71ef,// 333 PAY 296 

    0x1af107f9,// 334 PAY 297 

    0xdbe8af62,// 335 PAY 298 

    0x24dedc23,// 336 PAY 299 

    0xa71fb770,// 337 PAY 300 

    0x7bc2331d,// 338 PAY 301 

    0x27ec7195,// 339 PAY 302 

    0x9409b735,// 340 PAY 303 

    0xaabc677e,// 341 PAY 304 

    0x2e935f5d,// 342 PAY 305 

    0x0d6bbe7d,// 343 PAY 306 

    0x157c7963,// 344 PAY 307 

    0x85998556,// 345 PAY 308 

    0xdfcbd999,// 346 PAY 309 

    0x826210d0,// 347 PAY 310 

    0xa3d4157a,// 348 PAY 311 

    0x6342c8b8,// 349 PAY 312 

    0x1c36bb31,// 350 PAY 313 

    0xa9c25808,// 351 PAY 314 

    0xd80a5297,// 352 PAY 315 

    0x39a07a24,// 353 PAY 316 

    0x475204d4,// 354 PAY 317 

    0x80a55511,// 355 PAY 318 

    0x3da530ed,// 356 PAY 319 

    0x947e23b7,// 357 PAY 320 

    0x9a99620c,// 358 PAY 321 

    0x5a032b5b,// 359 PAY 322 

    0xaab447c3,// 360 PAY 323 

    0x6590db73,// 361 PAY 324 

    0x113177b1,// 362 PAY 325 

    0x0416fbbf,// 363 PAY 326 

    0x9fc6d080,// 364 PAY 327 

    0x8cf3aa55,// 365 PAY 328 

    0x50015a02,// 366 PAY 329 

    0x6e279afd,// 367 PAY 330 

    0x78296460,// 368 PAY 331 

    0x0b206262,// 369 PAY 332 

    0x029f3c06,// 370 PAY 333 

    0x06e129eb,// 371 PAY 334 

    0x2d207292,// 372 PAY 335 

    0xe06a89ce,// 373 PAY 336 

    0x8e3b857d,// 374 PAY 337 

    0xf85e0d58,// 375 PAY 338 

    0x669a7df2,// 376 PAY 339 

    0xbfcef3fa,// 377 PAY 340 

    0xecccf1a1,// 378 PAY 341 

    0xea39f248,// 379 PAY 342 

    0x2b749e2b,// 380 PAY 343 

    0xac2630ed,// 381 PAY 344 

    0xfcc63bba,// 382 PAY 345 

    0xcbb4bef5,// 383 PAY 346 

    0xbe755f54,// 384 PAY 347 

    0x95d3c9e7,// 385 PAY 348 

    0xb6e5f174,// 386 PAY 349 

    0x10ff2a66,// 387 PAY 350 

    0x5850868a,// 388 PAY 351 

    0x2201fda4,// 389 PAY 352 

    0x1e4e08de,// 390 PAY 353 

    0x0e036c1b,// 391 PAY 354 

    0xaf41dd44,// 392 PAY 355 

    0xd23c67a8,// 393 PAY 356 

    0xc9502521,// 394 PAY 357 

    0xc79168bf,// 395 PAY 358 

    0x1c3cf261,// 396 PAY 359 

    0x441361b4,// 397 PAY 360 

    0x927c80dc,// 398 PAY 361 

    0x3580110f,// 399 PAY 362 

    0x868331da,// 400 PAY 363 

    0x77ee9ab2,// 401 PAY 364 

    0x19e3d98e,// 402 PAY 365 

    0xa79b13e3,// 403 PAY 366 

    0x66d5c596,// 404 PAY 367 

    0x3aaffcb3,// 405 PAY 368 

    0x1b4f7274,// 406 PAY 369 

    0xb7a0dbfe,// 407 PAY 370 

    0x69f30d07,// 408 PAY 371 

    0x93ce4a92,// 409 PAY 372 

    0xf5def4ba,// 410 PAY 373 

    0x4827109e,// 411 PAY 374 

    0xad961191,// 412 PAY 375 

    0xe4c71d0b,// 413 PAY 376 

    0x70a1ef42,// 414 PAY 377 

    0x06dc5fba,// 415 PAY 378 

    0x0ee1ecb8,// 416 PAY 379 

    0xa7ae1663,// 417 PAY 380 

    0xb533959d,// 418 PAY 381 

    0x47a0020f,// 419 PAY 382 

    0xce43ccfa,// 420 PAY 383 

    0xd2433472,// 421 PAY 384 

    0xf9ae1193,// 422 PAY 385 

    0xbcf45d65,// 423 PAY 386 

    0x25f0254d,// 424 PAY 387 

    0x3a1b1bdb,// 425 PAY 388 

    0x8fbb7dcd,// 426 PAY 389 

    0xe2cb8b1c,// 427 PAY 390 

    0x72cada00,// 428 PAY 391 

    0xe207ef5c,// 429 PAY 392 

    0xf690f819,// 430 PAY 393 

    0xb5d4217f,// 431 PAY 394 

    0x8f2749d2,// 432 PAY 395 

    0xa6ffc83b,// 433 PAY 396 

    0x2f9235bc,// 434 PAY 397 

    0xb58f5e11,// 435 PAY 398 

    0x7217f52b,// 436 PAY 399 

    0xb811ed76,// 437 PAY 400 

    0xb3f4f713,// 438 PAY 401 

    0x8d47ec36,// 439 PAY 402 

    0x8332cfb6,// 440 PAY 403 

    0xcd391cf2,// 441 PAY 404 

    0xd476971a,// 442 PAY 405 

    0x681e209e,// 443 PAY 406 

    0x7e7ce548,// 444 PAY 407 

    0x16fb2b7c,// 445 PAY 408 

    0x8ca37551,// 446 PAY 409 

    0x5b15d678,// 447 PAY 410 

    0x8929c7c3,// 448 PAY 411 

    0xc436f324,// 449 PAY 412 

    0x1fb195a6,// 450 PAY 413 

    0x9561e13b,// 451 PAY 414 

    0x129a5d3d,// 452 PAY 415 

    0x41897ec2,// 453 PAY 416 

    0x98d32395,// 454 PAY 417 

    0xf0521c9f,// 455 PAY 418 

    0x1ba54330,// 456 PAY 419 

    0x091cb417,// 457 PAY 420 

    0xf21294cf,// 458 PAY 421 

    0xa75efe93,// 459 PAY 422 

    0x1f1db6a9,// 460 PAY 423 

    0x844e346c,// 461 PAY 424 

    0x6f11c2d5,// 462 PAY 425 

    0x0b8f97b1,// 463 PAY 426 

    0xacaa12a8,// 464 PAY 427 

    0x37d22d51,// 465 PAY 428 

    0x48fa9b7c,// 466 PAY 429 

    0x69d304c3,// 467 PAY 430 

    0x8b927e26,// 468 PAY 431 

    0x74ac7dec,// 469 PAY 432 

    0xebd012b8,// 470 PAY 433 

    0x13ffe71a,// 471 PAY 434 

    0xacfddace,// 472 PAY 435 

    0x2528fe4e,// 473 PAY 436 

    0xc64828ef,// 474 PAY 437 

    0xbd93894d,// 475 PAY 438 

    0x47158067,// 476 PAY 439 

    0x0c8a3d35,// 477 PAY 440 

    0x9da1505c,// 478 PAY 441 

    0x2303e8f1,// 479 PAY 442 

    0x5ec1f636,// 480 PAY 443 

    0x16db887c,// 481 PAY 444 

    0xa7c6ea0b,// 482 PAY 445 

    0x99e84dfc,// 483 PAY 446 

    0x9e10daa0,// 484 PAY 447 

    0x6570f990,// 485 PAY 448 

    0xb1f97f28,// 486 PAY 449 

    0xa01f9d16,// 487 PAY 450 

    0x42a5742b,// 488 PAY 451 

    0xdd03139d,// 489 PAY 452 

    0x793d89f7,// 490 PAY 453 

    0x47c90fcf,// 491 PAY 454 

    0x5dc7367d,// 492 PAY 455 

    0x465f17f0,// 493 PAY 456 

    0x044bc444,// 494 PAY 457 

    0xf68cb8c8,// 495 PAY 458 

    0xc32cce52,// 496 PAY 459 

    0xa4815027,// 497 PAY 460 

    0x3edc1fcb,// 498 PAY 461 

    0xad8f5e8f,// 499 PAY 462 

    0xf0a63567,// 500 PAY 463 

    0xba288c68,// 501 PAY 464 

    0x88e44a6a,// 502 PAY 465 

    0xd06eed2c,// 503 PAY 466 

    0x566d7683,// 504 PAY 467 

    0x4dec8985,// 505 PAY 468 

    0xf9c9afe5,// 506 PAY 469 

    0xba334357,// 507 PAY 470 

    0xb0a0f709,// 508 PAY 471 

    0xda7b6898,// 509 PAY 472 

    0xe65ccdb4,// 510 PAY 473 

    0xaf0657fc,// 511 PAY 474 

    0xda92ebf2,// 512 PAY 475 

    0x19725407,// 513 PAY 476 

    0xcb0612df,// 514 PAY 477 

    0x2c8ba4fe,// 515 PAY 478 

    0xc5b510d2,// 516 PAY 479 

    0xc3a79d56,// 517 PAY 480 

    0x44ef0000,// 518 PAY 481 

/// STA is 1 words. 

/// STA num_pkts       : 137 

/// STA pkt_idx        : 109 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xc0 

    0x01b5c089 // 519 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt18_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x05 

/// ECH pdu_tag        : 0x00 

    0x00050000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv !insert_icv !check_icv !sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0000000f,// 3 SCX   1 

    0x804448a9,// 4 SCX   2 

    0x00004142,// 5 SCX   3 

    0x8f55a53f,// 6 SCX   4 

    0xc4055260,// 7 SCX   5 

    0x58b9576b,// 8 SCX   6 

    0xea162c95,// 9 SCX   7 

    0x91444c1e,// 10 SCX   8 

    0x9714ac4b,// 11 SCX   9 

    0xaaad240f,// 12 SCX  10 

    0xe748f3dc,// 13 SCX  11 

    0x2f42ecac,// 14 SCX  12 

    0x4066986b,// 15 SCX  13 

    0xf6dc0409,// 16 SCX  14 

    0xddd7e84a,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 1207 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 841 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 841 

/// BFD lencrypto      : 240 

/// BFD ofstcrypto     : 592 

/// BFD (ofst+len)cry  : 832 

/// BFD ofstiv         : 320 

/// BFD ofsticv        : 872 

    0x00000349,// 18 BFD   1 

    0x025000f0,// 19 BFD   2 

    0x03680140,// 20 BFD   3 

/// MFM is 2 words. 

/// MFM vldnibs        : 6 

    0x0600738e,// 21 MFM   1 

    0xf3000000,// 22 MFM   2 

/// BDA is 303 words. 

/// BDA size     is 1207 (0x4b7) 

/// BDA id       is 0xdbea 

    0x04b7dbea,// 23 BDA   1 

/// PAY Generic Data size   : 1207 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0xdb09bb79,// 24 PAY   1 

    0x2b7f0b58,// 25 PAY   2 

    0xec9e9b07,// 26 PAY   3 

    0xe58ae5de,// 27 PAY   4 

    0xadfd22dc,// 28 PAY   5 

    0xe73b86f3,// 29 PAY   6 

    0x8b405f69,// 30 PAY   7 

    0x6a32ee9d,// 31 PAY   8 

    0xa763704d,// 32 PAY   9 

    0x65bcbbe7,// 33 PAY  10 

    0x7cde02a7,// 34 PAY  11 

    0x555f8ff9,// 35 PAY  12 

    0xfae6c43a,// 36 PAY  13 

    0xbad1ada1,// 37 PAY  14 

    0xa306655e,// 38 PAY  15 

    0x3c1767c3,// 39 PAY  16 

    0xcbe5643c,// 40 PAY  17 

    0xb4432836,// 41 PAY  18 

    0xbf0fde2d,// 42 PAY  19 

    0xd6b67e81,// 43 PAY  20 

    0xa38aef23,// 44 PAY  21 

    0x1bc89327,// 45 PAY  22 

    0xcdba0158,// 46 PAY  23 

    0x8a6e224f,// 47 PAY  24 

    0x91c11ca3,// 48 PAY  25 

    0x0d2fc465,// 49 PAY  26 

    0xd55abae0,// 50 PAY  27 

    0xf239849d,// 51 PAY  28 

    0x138bf6c9,// 52 PAY  29 

    0xf872b3eb,// 53 PAY  30 

    0xfaf92b6c,// 54 PAY  31 

    0x61e483fb,// 55 PAY  32 

    0x21b7aad2,// 56 PAY  33 

    0xf5f7ce0c,// 57 PAY  34 

    0xdab48014,// 58 PAY  35 

    0x880a4016,// 59 PAY  36 

    0x2e5f8979,// 60 PAY  37 

    0x8ecfb2cb,// 61 PAY  38 

    0x18754ff7,// 62 PAY  39 

    0x98522089,// 63 PAY  40 

    0xf769e9c0,// 64 PAY  41 

    0x623efbbd,// 65 PAY  42 

    0xe03d41cf,// 66 PAY  43 

    0x3a3dc714,// 67 PAY  44 

    0xf9569fa2,// 68 PAY  45 

    0x7b4db31e,// 69 PAY  46 

    0xad972af9,// 70 PAY  47 

    0xd1afc5d8,// 71 PAY  48 

    0xf8aed718,// 72 PAY  49 

    0x28cacd53,// 73 PAY  50 

    0x329e7dfe,// 74 PAY  51 

    0x2f535442,// 75 PAY  52 

    0x0cf69ec5,// 76 PAY  53 

    0x52004cf4,// 77 PAY  54 

    0x7ced60fc,// 78 PAY  55 

    0x9e4d6f1c,// 79 PAY  56 

    0x90d564a0,// 80 PAY  57 

    0x1c1297c7,// 81 PAY  58 

    0xff3af8ba,// 82 PAY  59 

    0xc3ecf2bb,// 83 PAY  60 

    0x37d29bd3,// 84 PAY  61 

    0xae7bf82b,// 85 PAY  62 

    0xb1c68acb,// 86 PAY  63 

    0x2ab7f9fb,// 87 PAY  64 

    0x2a02c1db,// 88 PAY  65 

    0xc3c1a17a,// 89 PAY  66 

    0xaa02cf69,// 90 PAY  67 

    0xc0d0cbf6,// 91 PAY  68 

    0x5108a395,// 92 PAY  69 

    0x164fa5ef,// 93 PAY  70 

    0x399a0548,// 94 PAY  71 

    0xfcd8ccb6,// 95 PAY  72 

    0x6e8f9430,// 96 PAY  73 

    0x434aa55e,// 97 PAY  74 

    0x9e4adc92,// 98 PAY  75 

    0xfeb4c01a,// 99 PAY  76 

    0x9004a6f9,// 100 PAY  77 

    0xf1d32517,// 101 PAY  78 

    0xa22db90a,// 102 PAY  79 

    0x7386a2c2,// 103 PAY  80 

    0x540209f6,// 104 PAY  81 

    0xca307a0e,// 105 PAY  82 

    0x90a0e602,// 106 PAY  83 

    0x7b61aa98,// 107 PAY  84 

    0xf6c96265,// 108 PAY  85 

    0x226f7a3b,// 109 PAY  86 

    0xb39a0c5b,// 110 PAY  87 

    0x7840392c,// 111 PAY  88 

    0xe534e546,// 112 PAY  89 

    0xad479c54,// 113 PAY  90 

    0x75543414,// 114 PAY  91 

    0x255b50eb,// 115 PAY  92 

    0x6eef5235,// 116 PAY  93 

    0x0008ab4d,// 117 PAY  94 

    0x18142cd6,// 118 PAY  95 

    0x7286198e,// 119 PAY  96 

    0x619ee447,// 120 PAY  97 

    0xa0b7d70b,// 121 PAY  98 

    0x8573b2e6,// 122 PAY  99 

    0xae125311,// 123 PAY 100 

    0xd38b2887,// 124 PAY 101 

    0x0e03f605,// 125 PAY 102 

    0x29f0e3b7,// 126 PAY 103 

    0xb13ece3c,// 127 PAY 104 

    0x66e4bee1,// 128 PAY 105 

    0x0b142e46,// 129 PAY 106 

    0xd837529c,// 130 PAY 107 

    0x4f050dd6,// 131 PAY 108 

    0xe31735e3,// 132 PAY 109 

    0xe210eb5f,// 133 PAY 110 

    0x63eb5e48,// 134 PAY 111 

    0x32241a93,// 135 PAY 112 

    0x91fb269a,// 136 PAY 113 

    0xb6f13b3c,// 137 PAY 114 

    0xa4fc483e,// 138 PAY 115 

    0x17bc71b6,// 139 PAY 116 

    0xaae1460a,// 140 PAY 117 

    0x7eaa1d97,// 141 PAY 118 

    0x9273ec58,// 142 PAY 119 

    0xac19a89c,// 143 PAY 120 

    0x0e6b4e1e,// 144 PAY 121 

    0x5039d399,// 145 PAY 122 

    0x73e208f3,// 146 PAY 123 

    0x12968318,// 147 PAY 124 

    0x8c6f88de,// 148 PAY 125 

    0xd0d9018e,// 149 PAY 126 

    0xe9e5bbd3,// 150 PAY 127 

    0xd0840aaf,// 151 PAY 128 

    0x9c4b00e6,// 152 PAY 129 

    0x2ea681a5,// 153 PAY 130 

    0x424d69bd,// 154 PAY 131 

    0x88e3e303,// 155 PAY 132 

    0x4e7a9b06,// 156 PAY 133 

    0xf517bb2a,// 157 PAY 134 

    0x0920a8b5,// 158 PAY 135 

    0xeb6b0353,// 159 PAY 136 

    0xb2b36be1,// 160 PAY 137 

    0x1c35cd81,// 161 PAY 138 

    0xab94274c,// 162 PAY 139 

    0xfbe5f14e,// 163 PAY 140 

    0xf5bbbcba,// 164 PAY 141 

    0x6dbd64bc,// 165 PAY 142 

    0xcb1e2e31,// 166 PAY 143 

    0x38a03466,// 167 PAY 144 

    0x44d2d089,// 168 PAY 145 

    0x65447379,// 169 PAY 146 

    0xcbd30d15,// 170 PAY 147 

    0xe32c8cff,// 171 PAY 148 

    0x3a599c56,// 172 PAY 149 

    0x23532991,// 173 PAY 150 

    0x59157b85,// 174 PAY 151 

    0x1a6218cc,// 175 PAY 152 

    0xbb11c1c3,// 176 PAY 153 

    0x7283a699,// 177 PAY 154 

    0x3ca674c9,// 178 PAY 155 

    0x9a98f7dd,// 179 PAY 156 

    0xc629f568,// 180 PAY 157 

    0x8eeb534e,// 181 PAY 158 

    0xee90428d,// 182 PAY 159 

    0x431ea014,// 183 PAY 160 

    0x25c65f13,// 184 PAY 161 

    0x1891f87d,// 185 PAY 162 

    0xbe47c821,// 186 PAY 163 

    0xfdd9fb5e,// 187 PAY 164 

    0x7ccd2fe9,// 188 PAY 165 

    0x249ebcc1,// 189 PAY 166 

    0x27ce7e72,// 190 PAY 167 

    0xe3382cb0,// 191 PAY 168 

    0x7aa05f0f,// 192 PAY 169 

    0x4c41355a,// 193 PAY 170 

    0x8cbe3039,// 194 PAY 171 

    0xac458c47,// 195 PAY 172 

    0x57b19e0d,// 196 PAY 173 

    0xfd81fedd,// 197 PAY 174 

    0xff0b1b63,// 198 PAY 175 

    0x5f8260b3,// 199 PAY 176 

    0x58a99ba0,// 200 PAY 177 

    0x98ef6610,// 201 PAY 178 

    0x42a67294,// 202 PAY 179 

    0x96bc0208,// 203 PAY 180 

    0x6587df78,// 204 PAY 181 

    0x281b904e,// 205 PAY 182 

    0x067569f6,// 206 PAY 183 

    0x01804c54,// 207 PAY 184 

    0x85748268,// 208 PAY 185 

    0x6812d957,// 209 PAY 186 

    0x626645c0,// 210 PAY 187 

    0x479b94b4,// 211 PAY 188 

    0x85bfda89,// 212 PAY 189 

    0xea56e2a1,// 213 PAY 190 

    0x9457f659,// 214 PAY 191 

    0xdeafb950,// 215 PAY 192 

    0xbe8c8565,// 216 PAY 193 

    0x4f4d5138,// 217 PAY 194 

    0xfb144582,// 218 PAY 195 

    0xa8db28d5,// 219 PAY 196 

    0xfd404e1e,// 220 PAY 197 

    0xb017dca6,// 221 PAY 198 

    0x214c8dea,// 222 PAY 199 

    0xc262e46f,// 223 PAY 200 

    0x533ea017,// 224 PAY 201 

    0x60289519,// 225 PAY 202 

    0x8477cdb0,// 226 PAY 203 

    0x209d00b9,// 227 PAY 204 

    0x851670b1,// 228 PAY 205 

    0x0149acf0,// 229 PAY 206 

    0xf7da9cf4,// 230 PAY 207 

    0xaee67ad6,// 231 PAY 208 

    0xbaac16cc,// 232 PAY 209 

    0x85d225d4,// 233 PAY 210 

    0x9ba18dd5,// 234 PAY 211 

    0x00a44a1f,// 235 PAY 212 

    0xc7b7622f,// 236 PAY 213 

    0xe4664418,// 237 PAY 214 

    0x8b817dc9,// 238 PAY 215 

    0x66db06c6,// 239 PAY 216 

    0x00e5d2a3,// 240 PAY 217 

    0x2dc3e9ae,// 241 PAY 218 

    0xea0f19b1,// 242 PAY 219 

    0xc4e7f974,// 243 PAY 220 

    0xa67a4644,// 244 PAY 221 

    0x664bd416,// 245 PAY 222 

    0x0a328de8,// 246 PAY 223 

    0x52d85121,// 247 PAY 224 

    0xca2df507,// 248 PAY 225 

    0x3992adab,// 249 PAY 226 

    0xf4542260,// 250 PAY 227 

    0x272d7a38,// 251 PAY 228 

    0xc680dcf5,// 252 PAY 229 

    0x0bbb8714,// 253 PAY 230 

    0xde4e2da7,// 254 PAY 231 

    0x545acf03,// 255 PAY 232 

    0xb5678a06,// 256 PAY 233 

    0x49082682,// 257 PAY 234 

    0x7270164c,// 258 PAY 235 

    0x02981a5e,// 259 PAY 236 

    0x5b594f66,// 260 PAY 237 

    0xf5d7ea51,// 261 PAY 238 

    0x65a38f4f,// 262 PAY 239 

    0x97426613,// 263 PAY 240 

    0x36428f2c,// 264 PAY 241 

    0xd64f23b7,// 265 PAY 242 

    0xdd30084e,// 266 PAY 243 

    0x7add85c8,// 267 PAY 244 

    0x6afb6e7e,// 268 PAY 245 

    0xc8bb52c2,// 269 PAY 246 

    0xe43ef0c3,// 270 PAY 247 

    0x38d83f03,// 271 PAY 248 

    0x52229996,// 272 PAY 249 

    0xc470b571,// 273 PAY 250 

    0xa4dcd2cf,// 274 PAY 251 

    0x0ed51a59,// 275 PAY 252 

    0x01bbf8bc,// 276 PAY 253 

    0x507f0cd6,// 277 PAY 254 

    0xbb5e85a3,// 278 PAY 255 

    0x5b032dd1,// 279 PAY 256 

    0xfd259909,// 280 PAY 257 

    0x61a0b487,// 281 PAY 258 

    0x81a3e888,// 282 PAY 259 

    0x5ef8289d,// 283 PAY 260 

    0xec9650b5,// 284 PAY 261 

    0x38e7a72f,// 285 PAY 262 

    0xd0fadb15,// 286 PAY 263 

    0x2ebe694d,// 287 PAY 264 

    0x871d188d,// 288 PAY 265 

    0xd99a9914,// 289 PAY 266 

    0xe1117ef4,// 290 PAY 267 

    0x96233b9c,// 291 PAY 268 

    0x3cae317e,// 292 PAY 269 

    0xef3dc9c9,// 293 PAY 270 

    0x2ba0d83c,// 294 PAY 271 

    0x48e908c7,// 295 PAY 272 

    0xc34d8842,// 296 PAY 273 

    0x5eeba3a0,// 297 PAY 274 

    0x772a4e54,// 298 PAY 275 

    0x925fbf28,// 299 PAY 276 

    0xba544482,// 300 PAY 277 

    0x2409e174,// 301 PAY 278 

    0x55442991,// 302 PAY 279 

    0x8919575c,// 303 PAY 280 

    0xa7a8bc1d,// 304 PAY 281 

    0xd443f896,// 305 PAY 282 

    0xc51073ee,// 306 PAY 283 

    0x4c78bb2f,// 307 PAY 284 

    0x3cbebc2e,// 308 PAY 285 

    0x5acc046a,// 309 PAY 286 

    0xe178e63a,// 310 PAY 287 

    0x3df664e1,// 311 PAY 288 

    0x3d0c59d8,// 312 PAY 289 

    0xb2018e0c,// 313 PAY 290 

    0xfde799db,// 314 PAY 291 

    0xbe7d217a,// 315 PAY 292 

    0x203619da,// 316 PAY 293 

    0x86d627eb,// 317 PAY 294 

    0x9efd8101,// 318 PAY 295 

    0x3a66a1e4,// 319 PAY 296 

    0x6499efac,// 320 PAY 297 

    0x222d569d,// 321 PAY 298 

    0xf40cbce1,// 322 PAY 299 

    0x86b2b863,// 323 PAY 300 

    0xc0e84a59,// 324 PAY 301 

    0x12af9d00,// 325 PAY 302 

/// STA is 1 words. 

/// STA num_pkts       : 212 

/// STA pkt_idx        : 86 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xe6 

    0x0158e6d4 // 326 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt19_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x02 

/// ECH pdu_tag        : 0x00 

    0x00020000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x5 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0800000f,// 3 SCX   1 

    0x804148c6,// 4 SCX   2 

    0x00006500,// 5 SCX   3 

    0x9cb6831d,// 6 SCX   4 

    0x6e0fd957,// 7 SCX   5 

    0x63f87a7a,// 8 SCX   6 

    0xde25b1f1,// 9 SCX   7 

    0xc3c11b00,// 10 SCX   8 

    0x405a2968,// 11 SCX   9 

    0xa0d348d9,// 12 SCX  10 

    0xb51ad2e3,// 13 SCX  11 

    0xb44b5f3c,// 14 SCX  12 

    0xb2ee353a,// 15 SCX  13 

    0xbec2581a,// 16 SCX  14 

    0xa9b299e4,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 551 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 283 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 283 

/// BFD lencrypto      : 96 

/// BFD ofstcrypto     : 176 

/// BFD (ofst+len)cry  : 272 

/// BFD ofstiv         : 60 

/// BFD ofsticv        : 328 

    0x0000011b,// 18 BFD   1 

    0x00b00060,// 19 BFD   2 

    0x0148003c,// 20 BFD   3 

/// MFM is 4 words. 

/// MFM vldnibs        : 16 

    0x16009668,// 21 MFM   1 

    0x334ba2be,// 22 MFM   2 

    0x690d8e22,// 23 MFM   3 

    0xa5000000,// 24 MFM   4 

/// BDA is 139 words. 

/// BDA size     is 551 (0x227) 

/// BDA id       is 0x426c 

    0x0227426c,// 25 BDA   1 

/// PAY Generic Data size   : 551 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0xffc26e1a,// 26 PAY   1 

    0x0d426658,// 27 PAY   2 

    0xa17a2be6,// 28 PAY   3 

    0x84d98c9a,// 29 PAY   4 

    0xa7b72b50,// 30 PAY   5 

    0x25fa4781,// 31 PAY   6 

    0xb09dc61a,// 32 PAY   7 

    0xd82d7fc9,// 33 PAY   8 

    0xfce28fe1,// 34 PAY   9 

    0x5ef6f9a7,// 35 PAY  10 

    0x0e5f1dc8,// 36 PAY  11 

    0xe566116c,// 37 PAY  12 

    0x35ba864d,// 38 PAY  13 

    0x4265553d,// 39 PAY  14 

    0xee1173d0,// 40 PAY  15 

    0x7e44b9da,// 41 PAY  16 

    0xe3672f72,// 42 PAY  17 

    0xa02c399f,// 43 PAY  18 

    0xd95b4ebd,// 44 PAY  19 

    0x203c754b,// 45 PAY  20 

    0x79e5f3d2,// 46 PAY  21 

    0x7e93a981,// 47 PAY  22 

    0x832c4be2,// 48 PAY  23 

    0xba0e4f38,// 49 PAY  24 

    0x0f6eaaca,// 50 PAY  25 

    0xdfdec57d,// 51 PAY  26 

    0x6aecfd2f,// 52 PAY  27 

    0x7e4a4712,// 53 PAY  28 

    0xd823f988,// 54 PAY  29 

    0x0b6f3c03,// 55 PAY  30 

    0x13aaabe1,// 56 PAY  31 

    0xb49c9a67,// 57 PAY  32 

    0x659b6ea0,// 58 PAY  33 

    0x8e082c71,// 59 PAY  34 

    0x3cb6ca28,// 60 PAY  35 

    0x59adc412,// 61 PAY  36 

    0x32832c88,// 62 PAY  37 

    0x8464d3da,// 63 PAY  38 

    0xdcb1f6c0,// 64 PAY  39 

    0xe4fc130b,// 65 PAY  40 

    0xb385dd1c,// 66 PAY  41 

    0xf7728119,// 67 PAY  42 

    0x96b53c8f,// 68 PAY  43 

    0x85f32c30,// 69 PAY  44 

    0xce390be4,// 70 PAY  45 

    0x7acb47a3,// 71 PAY  46 

    0xc75ab6ff,// 72 PAY  47 

    0x7b1d9f10,// 73 PAY  48 

    0xa5e87bc1,// 74 PAY  49 

    0x50f197ce,// 75 PAY  50 

    0xdc7d2014,// 76 PAY  51 

    0xe9409c7c,// 77 PAY  52 

    0x6fa120fa,// 78 PAY  53 

    0xc2877a7f,// 79 PAY  54 

    0x33796d2c,// 80 PAY  55 

    0xec06518d,// 81 PAY  56 

    0xa67330c6,// 82 PAY  57 

    0x4fb28655,// 83 PAY  58 

    0x455af25b,// 84 PAY  59 

    0x416e86f2,// 85 PAY  60 

    0x46119624,// 86 PAY  61 

    0x0bf403d2,// 87 PAY  62 

    0x215cc805,// 88 PAY  63 

    0x2f4fc0f6,// 89 PAY  64 

    0xcc15f9f6,// 90 PAY  65 

    0xbccbed16,// 91 PAY  66 

    0x69726f19,// 92 PAY  67 

    0x3c4fefd4,// 93 PAY  68 

    0xb1494c58,// 94 PAY  69 

    0xd427a3b7,// 95 PAY  70 

    0x4359cef6,// 96 PAY  71 

    0x3d8deacb,// 97 PAY  72 

    0xf75dfad7,// 98 PAY  73 

    0x99c2dfb7,// 99 PAY  74 

    0xdee07c65,// 100 PAY  75 

    0xc7c80cd6,// 101 PAY  76 

    0xe713ae3a,// 102 PAY  77 

    0xd528c2c7,// 103 PAY  78 

    0x28eee043,// 104 PAY  79 

    0x286501c1,// 105 PAY  80 

    0xcec45cb2,// 106 PAY  81 

    0x1f37587b,// 107 PAY  82 

    0x22affe32,// 108 PAY  83 

    0x0fabba2e,// 109 PAY  84 

    0xb8c3a74f,// 110 PAY  85 

    0x52414704,// 111 PAY  86 

    0x667d9b53,// 112 PAY  87 

    0x835cc724,// 113 PAY  88 

    0x3f471c2a,// 114 PAY  89 

    0x3719d82f,// 115 PAY  90 

    0x903d5f1b,// 116 PAY  91 

    0x927f0b19,// 117 PAY  92 

    0x5224917d,// 118 PAY  93 

    0xb843d3e2,// 119 PAY  94 

    0x09286a23,// 120 PAY  95 

    0x431f95f9,// 121 PAY  96 

    0xd8a4e08f,// 122 PAY  97 

    0xe36d9df7,// 123 PAY  98 

    0x446f72c9,// 124 PAY  99 

    0xfe2731d0,// 125 PAY 100 

    0x23ae23b2,// 126 PAY 101 

    0xa11d9284,// 127 PAY 102 

    0x6f0e84f3,// 128 PAY 103 

    0xe6e47cb1,// 129 PAY 104 

    0x3b6f5ef6,// 130 PAY 105 

    0x34408367,// 131 PAY 106 

    0x55ca0810,// 132 PAY 107 

    0xb2312f2e,// 133 PAY 108 

    0x6fa8aed4,// 134 PAY 109 

    0x27529af8,// 135 PAY 110 

    0x3e0f0e69,// 136 PAY 111 

    0xd29a2465,// 137 PAY 112 

    0x5cbdd730,// 138 PAY 113 

    0x95ee6948,// 139 PAY 114 

    0xa392a7ca,// 140 PAY 115 

    0xbaac6564,// 141 PAY 116 

    0xc343b8fa,// 142 PAY 117 

    0xcf29760d,// 143 PAY 118 

    0x4ee041e5,// 144 PAY 119 

    0x9ffbe18d,// 145 PAY 120 

    0x750442e7,// 146 PAY 121 

    0xc65a76ec,// 147 PAY 122 

    0x71bcc36e,// 148 PAY 123 

    0xbef965ca,// 149 PAY 124 

    0xf6d8f5c3,// 150 PAY 125 

    0x625f2515,// 151 PAY 126 

    0xc8c488e9,// 152 PAY 127 

    0x0b662b8a,// 153 PAY 128 

    0xb4dfca3c,// 154 PAY 129 

    0xec96183f,// 155 PAY 130 

    0x6f0af78f,// 156 PAY 131 

    0xec12becc,// 157 PAY 132 

    0xc8bb0b40,// 158 PAY 133 

    0x4ce64d2b,// 159 PAY 134 

    0x037e1225,// 160 PAY 135 

    0x4ab6f646,// 161 PAY 136 

    0xea25e6ad,// 162 PAY 137 

    0x64eb5500,// 163 PAY 138 

/// STA is 1 words. 

/// STA num_pkts       : 27 

/// STA pkt_idx        : 179 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x3c 

    0x02cc3c1b // 164 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt20_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x07 

/// ECH pdu_tag        : 0x00 

    0x00070000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0800000f,// 3 SCX   1 

    0x804048a8,// 4 SCX   2 

    0x00004400,// 5 SCX   3 

    0x01724b61,// 6 SCX   4 

    0xe56ec4ed,// 7 SCX   5 

    0x591f1d2f,// 8 SCX   6 

    0x16ea72c9,// 9 SCX   7 

    0x41a3360e,// 10 SCX   8 

    0x5e50088e,// 11 SCX   9 

    0x0f43e3fd,// 12 SCX  10 

    0x26f421c8,// 13 SCX  11 

    0x958191e8,// 14 SCX  12 

    0xee3f2dde,// 15 SCX  13 

    0x20b24ad1,// 16 SCX  14 

    0x93e976d3,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 620 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 496 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 496 

/// BFD lencrypto      : 32 

/// BFD ofstcrypto     : 460 

/// BFD (ofst+len)cry  : 492 

/// BFD ofstiv         : 112 

/// BFD ofsticv        : 588 

    0x000001f0,// 18 BFD   1 

    0x01cc0020,// 19 BFD   2 

    0x024c0070,// 20 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 76 

    0x7600be97,// 21 MFM   1 

    0x455e0422,// 22 MFM   2 

    0x44a7cbc6,// 23 MFM   3 

    0x3e26f29d,// 24 MFM   4 

    0x3c717981,// 25 MFM   5 

    0xdbd60254,// 26 MFM   6 

    0xe0471496,// 27 MFM   7 

    0x4d068f54,// 28 MFM   8 

    0x5fd5d83f,// 29 MFM   9 

    0x78ae763b,// 30 MFM  10 

    0x30e9285f,// 31 MFM  11 

    0xf8b1c585,// 32 MFM  12 

    0x34b2435b,// 33 MFM  13 

    0x2d183293,// 34 MFM  14 

    0x7a062381,// 35 MFM  15 

    0xf4000000,// 36 MFM  16 

/// BDA is 156 words. 

/// BDA size     is 620 (0x26c) 

/// BDA id       is 0x1692 

    0x026c1692,// 37 BDA   1 

/// PAY Generic Data size   : 620 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x74e9fb19,// 38 PAY   1 

    0x216ce32a,// 39 PAY   2 

    0x59280c87,// 40 PAY   3 

    0xa4d5b50c,// 41 PAY   4 

    0x8602db43,// 42 PAY   5 

    0xf7a5b9b1,// 43 PAY   6 

    0x7268164b,// 44 PAY   7 

    0x8a50203f,// 45 PAY   8 

    0xf75de2d8,// 46 PAY   9 

    0xc8372649,// 47 PAY  10 

    0xdda4c283,// 48 PAY  11 

    0xe27fcf28,// 49 PAY  12 

    0x00dd1a92,// 50 PAY  13 

    0xddf78b0a,// 51 PAY  14 

    0x944ca458,// 52 PAY  15 

    0x3db4cef6,// 53 PAY  16 

    0x1331b786,// 54 PAY  17 

    0xfe966e9c,// 55 PAY  18 

    0xfc09a0b0,// 56 PAY  19 

    0x5c4aa83d,// 57 PAY  20 

    0x6ef679f0,// 58 PAY  21 

    0xff747ed8,// 59 PAY  22 

    0x86d34b09,// 60 PAY  23 

    0x9906ac97,// 61 PAY  24 

    0x9a250401,// 62 PAY  25 

    0x8419ca5f,// 63 PAY  26 

    0x0313be60,// 64 PAY  27 

    0xfa39ed46,// 65 PAY  28 

    0x8654f0d4,// 66 PAY  29 

    0x1ccf1a27,// 67 PAY  30 

    0x5fc545da,// 68 PAY  31 

    0xac701665,// 69 PAY  32 

    0x43429d52,// 70 PAY  33 

    0x7ab93a84,// 71 PAY  34 

    0x1f867a6a,// 72 PAY  35 

    0xce82e971,// 73 PAY  36 

    0xc97049c2,// 74 PAY  37 

    0x308aa1de,// 75 PAY  38 

    0xf2a769f7,// 76 PAY  39 

    0x68e05089,// 77 PAY  40 

    0xb08e1307,// 78 PAY  41 

    0x897d61f0,// 79 PAY  42 

    0xd9058209,// 80 PAY  43 

    0xa8959c48,// 81 PAY  44 

    0xe6dcbef4,// 82 PAY  45 

    0xbd2a4bec,// 83 PAY  46 

    0x882cbf33,// 84 PAY  47 

    0x0711d793,// 85 PAY  48 

    0xa2938634,// 86 PAY  49 

    0x944943d3,// 87 PAY  50 

    0xeb792dec,// 88 PAY  51 

    0x64e6118f,// 89 PAY  52 

    0xd856e76c,// 90 PAY  53 

    0x0f280e62,// 91 PAY  54 

    0xe04de893,// 92 PAY  55 

    0x8b89711d,// 93 PAY  56 

    0x9738743e,// 94 PAY  57 

    0x678ff8d1,// 95 PAY  58 

    0x02c596c3,// 96 PAY  59 

    0x4a82edf5,// 97 PAY  60 

    0x18cbb3d7,// 98 PAY  61 

    0xd0105883,// 99 PAY  62 

    0xf958c837,// 100 PAY  63 

    0x8599b64b,// 101 PAY  64 

    0x3dd9f037,// 102 PAY  65 

    0xa5719c68,// 103 PAY  66 

    0xf29a39bb,// 104 PAY  67 

    0xf1a8ce61,// 105 PAY  68 

    0xcfe5a9b4,// 106 PAY  69 

    0x0cfffac5,// 107 PAY  70 

    0xe5f26910,// 108 PAY  71 

    0xed55c2c1,// 109 PAY  72 

    0x9be8249b,// 110 PAY  73 

    0x45cf8ace,// 111 PAY  74 

    0x98d0b335,// 112 PAY  75 

    0xa39f858b,// 113 PAY  76 

    0x11e32e68,// 114 PAY  77 

    0x0f7a61d9,// 115 PAY  78 

    0x520a00ba,// 116 PAY  79 

    0x51bdf617,// 117 PAY  80 

    0xe73c1ba7,// 118 PAY  81 

    0x40235b22,// 119 PAY  82 

    0xa1eb5183,// 120 PAY  83 

    0xe98b8f56,// 121 PAY  84 

    0x86db59bc,// 122 PAY  85 

    0xc42a688d,// 123 PAY  86 

    0x52e03012,// 124 PAY  87 

    0x599bad64,// 125 PAY  88 

    0x884aca85,// 126 PAY  89 

    0xf6a28373,// 127 PAY  90 

    0x40125293,// 128 PAY  91 

    0x13099cb8,// 129 PAY  92 

    0xe00dc833,// 130 PAY  93 

    0x0a9d4138,// 131 PAY  94 

    0x1a135831,// 132 PAY  95 

    0xe3a22e86,// 133 PAY  96 

    0x779920b7,// 134 PAY  97 

    0xa9157d04,// 135 PAY  98 

    0x66f50141,// 136 PAY  99 

    0xc46b52b3,// 137 PAY 100 

    0xc909c740,// 138 PAY 101 

    0x48ac4a2b,// 139 PAY 102 

    0x06f7fc59,// 140 PAY 103 

    0x663460bf,// 141 PAY 104 

    0xd96d9738,// 142 PAY 105 

    0x25c1b219,// 143 PAY 106 

    0x7a6b4c07,// 144 PAY 107 

    0xed6160ac,// 145 PAY 108 

    0x72048e41,// 146 PAY 109 

    0x4ad589a2,// 147 PAY 110 

    0x9eea4cfc,// 148 PAY 111 

    0x098f459e,// 149 PAY 112 

    0x3445af5d,// 150 PAY 113 

    0x9944043d,// 151 PAY 114 

    0xe07f07e1,// 152 PAY 115 

    0x1b593a43,// 153 PAY 116 

    0xad8aa79c,// 154 PAY 117 

    0x634c8ec6,// 155 PAY 118 

    0x94cfa502,// 156 PAY 119 

    0x00185443,// 157 PAY 120 

    0xbb48c3ea,// 158 PAY 121 

    0x7b85dc06,// 159 PAY 122 

    0x43bd0e31,// 160 PAY 123 

    0x2a82ba1c,// 161 PAY 124 

    0x2c50b503,// 162 PAY 125 

    0xb13766bb,// 163 PAY 126 

    0x7486521a,// 164 PAY 127 

    0x8884a061,// 165 PAY 128 

    0x1a7d5c70,// 166 PAY 129 

    0x60f5f9e0,// 167 PAY 130 

    0x5076fa5c,// 168 PAY 131 

    0x19ee123f,// 169 PAY 132 

    0xe2ff59f3,// 170 PAY 133 

    0x4ff17e40,// 171 PAY 134 

    0x8c9e2ea7,// 172 PAY 135 

    0xd03290e0,// 173 PAY 136 

    0x959904dc,// 174 PAY 137 

    0x99d8304f,// 175 PAY 138 

    0x681c9fcb,// 176 PAY 139 

    0xe92e8f4f,// 177 PAY 140 

    0x0dd5636d,// 178 PAY 141 

    0xdf99e13e,// 179 PAY 142 

    0x59ff730c,// 180 PAY 143 

    0x666ca776,// 181 PAY 144 

    0xb7009497,// 182 PAY 145 

    0x0b5b0b12,// 183 PAY 146 

    0x376b0fd7,// 184 PAY 147 

    0x0acd7a65,// 185 PAY 148 

    0xf485e473,// 186 PAY 149 

    0xcfb838d4,// 187 PAY 150 

    0x39ac01bd,// 188 PAY 151 

    0xbe4bec55,// 189 PAY 152 

    0x653bf2a6,// 190 PAY 153 

    0x5bd02184,// 191 PAY 154 

    0x44fb5f4b,// 192 PAY 155 

/// STA is 1 words. 

/// STA num_pkts       : 230 

/// STA pkt_idx        : 23 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x5b 

    0x005c5be6 // 193 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt21_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x02 

/// ECH pdu_tag        : 0x00 

    0x00020000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0800000f,// 3 SCX   1 

    0x80414811,// 4 SCX   2 

    0x00003200,// 5 SCX   3 

    0xc42ead8d,// 6 SCX   4 

    0x110325c5,// 7 SCX   5 

    0xe8486e02,// 8 SCX   6 

    0x43386d37,// 9 SCX   7 

    0x041a0fa7,// 10 SCX   8 

    0x2df25cf6,// 11 SCX   9 

    0x99eb2d26,// 12 SCX  10 

    0x870706bd,// 13 SCX  11 

    0x6d64b319,// 14 SCX  12 

    0xe891e593,// 15 SCX  13 

    0x7b82ea71,// 16 SCX  14 

    0x3db1e274,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 353 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 325 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 325 

/// BFD lencrypto      : 144 

/// BFD ofstcrypto     : 104 

/// BFD (ofst+len)cry  : 248 

/// BFD ofstiv         : 88 

/// BFD ofsticv        : 328 

    0x00000145,// 18 BFD   1 

    0x00680090,// 19 BFD   2 

    0x01480058,// 20 BFD   3 

/// MFM is 1 words. 

/// MFM vldnibs        : 4 

    0x04009a78,// 21 MFM   1 

/// BDA is 90 words. 

/// BDA size     is 353 (0x161) 

/// BDA id       is 0xb7c2 

    0x0161b7c2,// 22 BDA   1 

/// PAY Generic Data size   : 353 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0xb6591da0,// 23 PAY   1 

    0x922ef262,// 24 PAY   2 

    0x75e9f0ac,// 25 PAY   3 

    0xca6f0a1c,// 26 PAY   4 

    0x4f6ea0d3,// 27 PAY   5 

    0xdee66eda,// 28 PAY   6 

    0x49f9b79e,// 29 PAY   7 

    0xebae19bf,// 30 PAY   8 

    0x8fcb7ec2,// 31 PAY   9 

    0x439d9722,// 32 PAY  10 

    0x37e58514,// 33 PAY  11 

    0x5c73e96d,// 34 PAY  12 

    0x8b98e4c8,// 35 PAY  13 

    0x5e9502eb,// 36 PAY  14 

    0x8511c5e5,// 37 PAY  15 

    0xb2cda944,// 38 PAY  16 

    0x19eb87cc,// 39 PAY  17 

    0xb4735207,// 40 PAY  18 

    0xa40142a3,// 41 PAY  19 

    0xf112ae01,// 42 PAY  20 

    0xbb762c9a,// 43 PAY  21 

    0x20d6ed75,// 44 PAY  22 

    0x6fe95012,// 45 PAY  23 

    0xd7c788ab,// 46 PAY  24 

    0x2f4cd4ca,// 47 PAY  25 

    0x070796f5,// 48 PAY  26 

    0xc31e34d3,// 49 PAY  27 

    0x2bea26dc,// 50 PAY  28 

    0x7a83c87d,// 51 PAY  29 

    0x6e467021,// 52 PAY  30 

    0xa44eb700,// 53 PAY  31 

    0xc68e4649,// 54 PAY  32 

    0xcbee435a,// 55 PAY  33 

    0x09dd524c,// 56 PAY  34 

    0x7187c72e,// 57 PAY  35 

    0x0acc1c6c,// 58 PAY  36 

    0x70057cb9,// 59 PAY  37 

    0x7a7c0c04,// 60 PAY  38 

    0x1a9a381a,// 61 PAY  39 

    0xbcb8c67f,// 62 PAY  40 

    0x476187f8,// 63 PAY  41 

    0x847ec9e0,// 64 PAY  42 

    0x7dd8256d,// 65 PAY  43 

    0x4eef3e0f,// 66 PAY  44 

    0x53cc17c8,// 67 PAY  45 

    0x625b90a1,// 68 PAY  46 

    0x71ffc155,// 69 PAY  47 

    0x49013ded,// 70 PAY  48 

    0xbc4d5b09,// 71 PAY  49 

    0x03f8fa20,// 72 PAY  50 

    0x42e50ba4,// 73 PAY  51 

    0xae629a15,// 74 PAY  52 

    0x8affc0ca,// 75 PAY  53 

    0xafeaea71,// 76 PAY  54 

    0xd95e90aa,// 77 PAY  55 

    0x61fca0c5,// 78 PAY  56 

    0x5ae963da,// 79 PAY  57 

    0x00d18632,// 80 PAY  58 

    0xa6211d1b,// 81 PAY  59 

    0x6860eac7,// 82 PAY  60 

    0xc7b84222,// 83 PAY  61 

    0x5ff5c8b3,// 84 PAY  62 

    0x9d192e92,// 85 PAY  63 

    0xcae0d908,// 86 PAY  64 

    0xddca430a,// 87 PAY  65 

    0xc730d333,// 88 PAY  66 

    0x24448528,// 89 PAY  67 

    0x2262f405,// 90 PAY  68 

    0x1d723e08,// 91 PAY  69 

    0x72c4faf0,// 92 PAY  70 

    0xd49f6772,// 93 PAY  71 

    0x6062eca4,// 94 PAY  72 

    0x82a847ae,// 95 PAY  73 

    0xf03ad882,// 96 PAY  74 

    0xa59e5f5f,// 97 PAY  75 

    0x9c8b95f3,// 98 PAY  76 

    0xd1a1fce8,// 99 PAY  77 

    0x08a8934f,// 100 PAY  78 

    0x6e0ddea2,// 101 PAY  79 

    0x230065f5,// 102 PAY  80 

    0xf8d8411f,// 103 PAY  81 

    0xbe28d514,// 104 PAY  82 

    0xd77f0796,// 105 PAY  83 

    0xdbf84842,// 106 PAY  84 

    0x73dc6712,// 107 PAY  85 

    0x531b2e1a,// 108 PAY  86 

    0xb091e342,// 109 PAY  87 

    0xe03aba8c,// 110 PAY  88 

    0x37000000,// 111 PAY  89 

/// STA is 1 words. 

/// STA num_pkts       : 133 

/// STA pkt_idx        : 59 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x14 

    0x00ec1485 // 112 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt22_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x05 

/// ECH pdu_tag        : 0x00 

    0x00050000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0000000f,// 3 SCX   1 

    0x804048e0,// 4 SCX   2 

    0x00002100,// 5 SCX   3 

    0x6d5a45ec,// 6 SCX   4 

    0x5fa2a5af,// 7 SCX   5 

    0x314d2249,// 8 SCX   6 

    0xd7876329,// 9 SCX   7 

    0x8fd8d8dc,// 10 SCX   8 

    0x7a5b27f1,// 11 SCX   9 

    0x780c70bf,// 12 SCX  10 

    0xbfd845de,// 13 SCX  11 

    0x8e14724f,// 14 SCX  12 

    0xc48fa869,// 15 SCX  13 

    0xa4983056,// 16 SCX  14 

    0xc0347b9d,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 192 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 38 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 38 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 24 

/// BFD (ofst+len)cry  : 32 

/// BFD ofstiv         : 12 

/// BFD ofsticv        : 48 

    0x00000026,// 18 BFD   1 

    0x00180008,// 19 BFD   2 

    0x0030000c,// 20 BFD   3 

/// MFM is 2 words. 

/// MFM vldnibs        : 7 

    0x07003580,// 21 MFM   1 

    0x32200000,// 22 MFM   2 

/// BDA is 49 words. 

/// BDA size     is 192 (0xc0) 

/// BDA id       is 0x393e 

    0x00c0393e,// 23 BDA   1 

/// PAY Generic Data size   : 192 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x418c52d4,// 24 PAY   1 

    0xd60898d1,// 25 PAY   2 

    0x8182a67c,// 26 PAY   3 

    0x6c78a494,// 27 PAY   4 

    0x65bf36ff,// 28 PAY   5 

    0x48aefdfd,// 29 PAY   6 

    0x4b2a39f4,// 30 PAY   7 

    0xa33b28a6,// 31 PAY   8 

    0xbcff692e,// 32 PAY   9 

    0x268788ab,// 33 PAY  10 

    0xeed82f2f,// 34 PAY  11 

    0x1a551e4d,// 35 PAY  12 

    0x23001631,// 36 PAY  13 

    0xd0d11b3d,// 37 PAY  14 

    0xc5c57d96,// 38 PAY  15 

    0x080e3c74,// 39 PAY  16 

    0xcbc46fbb,// 40 PAY  17 

    0x485385e8,// 41 PAY  18 

    0x1a8f3bd2,// 42 PAY  19 

    0x2fe9f5ce,// 43 PAY  20 

    0xaa7cbf16,// 44 PAY  21 

    0x32efcc51,// 45 PAY  22 

    0x864b274b,// 46 PAY  23 

    0xbb4b808c,// 47 PAY  24 

    0xee77e78c,// 48 PAY  25 

    0xc016f331,// 49 PAY  26 

    0xccacaeac,// 50 PAY  27 

    0x38845d1e,// 51 PAY  28 

    0x50e608a7,// 52 PAY  29 

    0x5daef07b,// 53 PAY  30 

    0xc79b7880,// 54 PAY  31 

    0x83601c74,// 55 PAY  32 

    0xb8394a90,// 56 PAY  33 

    0xe440ed5a,// 57 PAY  34 

    0x8772bc53,// 58 PAY  35 

    0x6dbf306a,// 59 PAY  36 

    0xa08a3160,// 60 PAY  37 

    0x0f5bc0bd,// 61 PAY  38 

    0x69882ecf,// 62 PAY  39 

    0x8bc8930a,// 63 PAY  40 

    0x62e73e7c,// 64 PAY  41 

    0x51462a73,// 65 PAY  42 

    0xab0cf552,// 66 PAY  43 

    0x2a6ecfb9,// 67 PAY  44 

    0x12f556be,// 68 PAY  45 

    0xac222cb3,// 69 PAY  46 

    0x69ff1604,// 70 PAY  47 

    0xf1a7e87b,// 71 PAY  48 

/// STA is 1 words. 

/// STA num_pkts       : 76 

/// STA pkt_idx        : 88 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x80 

    0x0160804c // 72 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt23_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x06 

/// ECH pdu_tag        : 0x00 

    0x00060000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv insert_icv check_icv !sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0800000f,// 3 SCX   1 

    0x80464813,// 4 SCX   2 

    0x00007442,// 5 SCX   3 

    0xfa41ade5,// 6 SCX   4 

    0x3cb26810,// 7 SCX   5 

    0x57040bf5,// 8 SCX   6 

    0xd9d40c3c,// 9 SCX   7 

    0x73f33a3f,// 10 SCX   8 

    0x7a185994,// 11 SCX   9 

    0x5a01e625,// 12 SCX  10 

    0xd74fa3f1,// 13 SCX  11 

    0x164af3ea,// 14 SCX  12 

    0xc5db3cbe,// 15 SCX  13 

    0x33b65972,// 16 SCX  14 

    0xcf62274c,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 303 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 243 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 243 

/// BFD lencrypto      : 16 

/// BFD ofstcrypto     : 224 

/// BFD (ofst+len)cry  : 240 

/// BFD ofstiv         : 120 

/// BFD ofsticv        : 276 

    0x000000f3,// 18 BFD   1 

    0x00e00010,// 19 BFD   2 

    0x01140078,// 20 BFD   3 

/// MFM is 6 words. 

/// MFM vldnibs        : 2b 

    0x2b006307,// 21 MFM   1 

    0x16abfbfc,// 22 MFM   2 

    0x6b53f60a,// 23 MFM   3 

    0xd70a1c5d,// 24 MFM   4 

    0xed233f89,// 25 MFM   5 

    0xbef41000,// 26 MFM   6 

/// BDA is 77 words. 

/// BDA size     is 303 (0x12f) 

/// BDA id       is 0x6a15 

    0x012f6a15,// 27 BDA   1 

/// PAY Generic Data size   : 303 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x3220ea17,// 28 PAY   1 

    0xc62717e4,// 29 PAY   2 

    0x4ff878ef,// 30 PAY   3 

    0x1275b11e,// 31 PAY   4 

    0x5025efaa,// 32 PAY   5 

    0xa37cf9ea,// 33 PAY   6 

    0x90ec4c6b,// 34 PAY   7 

    0x9632c572,// 35 PAY   8 

    0x4688546d,// 36 PAY   9 

    0xb111a0af,// 37 PAY  10 

    0xb09e15ad,// 38 PAY  11 

    0xcc38780d,// 39 PAY  12 

    0xa3055a3c,// 40 PAY  13 

    0xa71a0ee8,// 41 PAY  14 

    0x10b71338,// 42 PAY  15 

    0x6a26bb3c,// 43 PAY  16 

    0x0ece6c90,// 44 PAY  17 

    0x91a6f263,// 45 PAY  18 

    0x6138212f,// 46 PAY  19 

    0xe91aa4fd,// 47 PAY  20 

    0xf663fc5e,// 48 PAY  21 

    0x5f1d545d,// 49 PAY  22 

    0x2c06d337,// 50 PAY  23 

    0xa22f2e38,// 51 PAY  24 

    0x4b1e101a,// 52 PAY  25 

    0xa229aaf6,// 53 PAY  26 

    0x29065055,// 54 PAY  27 

    0x67fe1cab,// 55 PAY  28 

    0x1e73b8a8,// 56 PAY  29 

    0x83c3b379,// 57 PAY  30 

    0xccc88bbc,// 58 PAY  31 

    0x568c14a5,// 59 PAY  32 

    0x92b11151,// 60 PAY  33 

    0xc4f5ec86,// 61 PAY  34 

    0xd0a4e31a,// 62 PAY  35 

    0x2eaae476,// 63 PAY  36 

    0x9455f01d,// 64 PAY  37 

    0x083aa7f3,// 65 PAY  38 

    0xe069e128,// 66 PAY  39 

    0x4f5ea006,// 67 PAY  40 

    0x1f864fcf,// 68 PAY  41 

    0x60dd4069,// 69 PAY  42 

    0x6bc771ce,// 70 PAY  43 

    0x182c8a14,// 71 PAY  44 

    0xd1dacb79,// 72 PAY  45 

    0xb2c6f969,// 73 PAY  46 

    0x5bbcda09,// 74 PAY  47 

    0x2272382f,// 75 PAY  48 

    0x6db758a8,// 76 PAY  49 

    0x3c6d6141,// 77 PAY  50 

    0xf5eb9c13,// 78 PAY  51 

    0x071824cd,// 79 PAY  52 

    0xbae54ebf,// 80 PAY  53 

    0x7281b5e2,// 81 PAY  54 

    0x274792ed,// 82 PAY  55 

    0xc4b5c19a,// 83 PAY  56 

    0x440e0501,// 84 PAY  57 

    0xe3663c87,// 85 PAY  58 

    0xb3823220,// 86 PAY  59 

    0x57a5f326,// 87 PAY  60 

    0xa90b0e84,// 88 PAY  61 

    0x1e51db66,// 89 PAY  62 

    0x476adf27,// 90 PAY  63 

    0x86df435f,// 91 PAY  64 

    0x719c2938,// 92 PAY  65 

    0xf58f4d66,// 93 PAY  66 

    0x03c22949,// 94 PAY  67 

    0x3f2b6ec3,// 95 PAY  68 

    0x258ab9ab,// 96 PAY  69 

    0x6efa4197,// 97 PAY  70 

    0x44a2bd09,// 98 PAY  71 

    0xaea7b2f4,// 99 PAY  72 

    0xdba9c85a,// 100 PAY  73 

    0xcb0a9b73,// 101 PAY  74 

    0xbbd157ce,// 102 PAY  75 

    0xee80c600,// 103 PAY  76 

/// STA is 1 words. 

/// STA num_pkts       : 23 

/// STA pkt_idx        : 246 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xd8 

    0x03d9d817 // 104 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt24_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x0f 

/// ECH pdu_tag        : 0x00 

    0x000f0000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv insert_icv check_icv !sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0000000f,// 3 SCX   1 

    0x8044487f,// 4 SCX   2 

    0x00003242,// 5 SCX   3 

    0xf96ee650,// 6 SCX   4 

    0x17a5bc0c,// 7 SCX   5 

    0x8951a09b,// 8 SCX   6 

    0x5ba07c7d,// 9 SCX   7 

    0x20dfab72,// 10 SCX   8 

    0x9544d9a2,// 11 SCX   9 

    0xc93d4646,// 12 SCX  10 

    0x1a0a9196,// 13 SCX  11 

    0x5bc7b0f9,// 14 SCX  12 

    0x36a76641,// 15 SCX  13 

    0x4c586807,// 16 SCX  14 

    0x21c0267f,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 391 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 126 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 126 

/// BFD lencrypto      : 32 

/// BFD ofstcrypto     : 92 

/// BFD (ofst+len)cry  : 124 

/// BFD ofstiv         : 40 

/// BFD ofsticv        : 132 

    0x0000007e,// 18 BFD   1 

    0x005c0020,// 19 BFD   2 

    0x00840028,// 20 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : 10 

    0x1000213e,// 21 MFM   1 

    0x4cc7fe11,// 22 MFM   2 

    0xfc730000,// 23 MFM   3 

/// BDA is 99 words. 

/// BDA size     is 391 (0x187) 

/// BDA id       is 0x2a9b 

    0x01872a9b,// 24 BDA   1 

/// PAY Generic Data size   : 391 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0xf69b4fbf,// 25 PAY   1 

    0xb6688db8,// 26 PAY   2 

    0x14f73122,// 27 PAY   3 

    0xcce95ba7,// 28 PAY   4 

    0xd9a321b9,// 29 PAY   5 

    0x9f877cf3,// 30 PAY   6 

    0xf8edbee8,// 31 PAY   7 

    0x228b5303,// 32 PAY   8 

    0xaa81c0fe,// 33 PAY   9 

    0xb368922d,// 34 PAY  10 

    0xd8a4bd86,// 35 PAY  11 

    0xe794d5b7,// 36 PAY  12 

    0xb8a813bc,// 37 PAY  13 

    0xef1780b5,// 38 PAY  14 

    0xe900886a,// 39 PAY  15 

    0x212d31b5,// 40 PAY  16 

    0x1011eb65,// 41 PAY  17 

    0x46a1debd,// 42 PAY  18 

    0x9cc20f91,// 43 PAY  19 

    0x759c5ea9,// 44 PAY  20 

    0xe83ccddd,// 45 PAY  21 

    0xc52915cc,// 46 PAY  22 

    0x9308ec13,// 47 PAY  23 

    0x89e7d23c,// 48 PAY  24 

    0xf4574322,// 49 PAY  25 

    0xd31d790d,// 50 PAY  26 

    0x60bdebba,// 51 PAY  27 

    0xfdfc31a6,// 52 PAY  28 

    0x02da0391,// 53 PAY  29 

    0xb6b6d6ac,// 54 PAY  30 

    0xd53c5f54,// 55 PAY  31 

    0x51a3fd28,// 56 PAY  32 

    0x773b5f28,// 57 PAY  33 

    0xba3e5feb,// 58 PAY  34 

    0xc721eb62,// 59 PAY  35 

    0xf5641777,// 60 PAY  36 

    0x6950d00b,// 61 PAY  37 

    0x9849d94c,// 62 PAY  38 

    0x3b7f963a,// 63 PAY  39 

    0x3224a363,// 64 PAY  40 

    0xc0f48359,// 65 PAY  41 

    0x80b4bfdb,// 66 PAY  42 

    0x0a6e2271,// 67 PAY  43 

    0xfbab37ab,// 68 PAY  44 

    0x8c802f4a,// 69 PAY  45 

    0x11b79297,// 70 PAY  46 

    0x57f11283,// 71 PAY  47 

    0x927c9ec7,// 72 PAY  48 

    0x9676c564,// 73 PAY  49 

    0x2db76391,// 74 PAY  50 

    0x85518125,// 75 PAY  51 

    0xdf92d815,// 76 PAY  52 

    0xeed87add,// 77 PAY  53 

    0x9ee247aa,// 78 PAY  54 

    0x6194ac5d,// 79 PAY  55 

    0x0be4d40d,// 80 PAY  56 

    0x3f53e24a,// 81 PAY  57 

    0x569e418e,// 82 PAY  58 

    0x493c0ab6,// 83 PAY  59 

    0xf72cdf5a,// 84 PAY  60 

    0x11c8e4e0,// 85 PAY  61 

    0xab53388a,// 86 PAY  62 

    0x42782ccf,// 87 PAY  63 

    0x769938ad,// 88 PAY  64 

    0x4102fcdd,// 89 PAY  65 

    0x290a874f,// 90 PAY  66 

    0x6d467ab9,// 91 PAY  67 

    0x4b28ced0,// 92 PAY  68 

    0x73f36f27,// 93 PAY  69 

    0xb6f4a54a,// 94 PAY  70 

    0x17ae2873,// 95 PAY  71 

    0x50ed9195,// 96 PAY  72 

    0xa2a92a23,// 97 PAY  73 

    0x54fb0c56,// 98 PAY  74 

    0xe25caed2,// 99 PAY  75 

    0x9bc7cd02,// 100 PAY  76 

    0x6b8c3eeb,// 101 PAY  77 

    0x79110be1,// 102 PAY  78 

    0x222029fa,// 103 PAY  79 

    0x3f47cce2,// 104 PAY  80 

    0x66c4e230,// 105 PAY  81 

    0x017205be,// 106 PAY  82 

    0xc1142bcc,// 107 PAY  83 

    0x387594d5,// 108 PAY  84 

    0xf33b09d0,// 109 PAY  85 

    0x14439f2a,// 110 PAY  86 

    0x561cffc4,// 111 PAY  87 

    0x52ed032a,// 112 PAY  88 

    0x82cb44d3,// 113 PAY  89 

    0xba4342fc,// 114 PAY  90 

    0x8b33c303,// 115 PAY  91 

    0x66a0fb09,// 116 PAY  92 

    0xf0ed431d,// 117 PAY  93 

    0x8963a3dd,// 118 PAY  94 

    0xb62310e8,// 119 PAY  95 

    0xb99d53eb,// 120 PAY  96 

    0x6e904060,// 121 PAY  97 

    0x314c6b00,// 122 PAY  98 

/// STA is 1 words. 

/// STA num_pkts       : 151 

/// STA pkt_idx        : 156 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x3c 

    0x02703c97 // 123 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt25_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x07 

/// ECH pdu_tag        : 0x00 

    0x00070000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0800000f,// 3 SCX   1 

    0x80404846,// 4 SCX   2 

    0x00004400,// 5 SCX   3 

    0xb14f48ac,// 6 SCX   4 

    0x16453001,// 7 SCX   5 

    0x04e83d2d,// 8 SCX   6 

    0x60a4c345,// 9 SCX   7 

    0x755211c8,// 10 SCX   8 

    0xd42ec6cb,// 11 SCX   9 

    0xbed1b9d1,// 12 SCX  10 

    0x668e2582,// 13 SCX  11 

    0x4765a242,// 14 SCX  12 

    0xca4286f0,// 15 SCX  13 

    0xde37de17,// 16 SCX  14 

    0x526d7767,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 604 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 369 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 369 

/// BFD lencrypto      : 224 

/// BFD ofstcrypto     : 40 

/// BFD (ofst+len)cry  : 264 

/// BFD ofstiv         : 24 

/// BFD ofsticv        : 448 

    0x00000171,// 18 BFD   1 

    0x002800e0,// 19 BFD   2 

    0x01c00018,// 20 BFD   3 

/// MFM is 10 words. 

/// MFM vldnibs        : 45 

    0x4500efea,// 21 MFM   1 

    0xb109e467,// 22 MFM   2 

    0x343edc51,// 23 MFM   3 

    0x38870c35,// 24 MFM   4 

    0xf00c538d,// 25 MFM   5 

    0x95a879ed,// 26 MFM   6 

    0x2de3a96a,// 27 MFM   7 

    0xd72b80d6,// 28 MFM   8 

    0x4bdb429c,// 29 MFM   9 

    0x70000000,// 30 MFM  10 

/// BDA is 152 words. 

/// BDA size     is 604 (0x25c) 

/// BDA id       is 0xdca0 

    0x025cdca0,// 31 BDA   1 

/// PAY Generic Data size   : 604 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x765a2763,// 32 PAY   1 

    0xcb98b105,// 33 PAY   2 

    0x11c77263,// 34 PAY   3 

    0xc9719261,// 35 PAY   4 

    0x84f4e884,// 36 PAY   5 

    0x2a5498e7,// 37 PAY   6 

    0xd032c78d,// 38 PAY   7 

    0x6ea3728a,// 39 PAY   8 

    0xbd4cda88,// 40 PAY   9 

    0xb3016017,// 41 PAY  10 

    0x1569a086,// 42 PAY  11 

    0x6e793dca,// 43 PAY  12 

    0x83544c0c,// 44 PAY  13 

    0xab3fe452,// 45 PAY  14 

    0x93243039,// 46 PAY  15 

    0x1b04515c,// 47 PAY  16 

    0x5487e7cd,// 48 PAY  17 

    0xf9f5dba4,// 49 PAY  18 

    0xc0944f88,// 50 PAY  19 

    0x46ec692a,// 51 PAY  20 

    0xa89ef9a6,// 52 PAY  21 

    0xb3f06dc7,// 53 PAY  22 

    0x9627205c,// 54 PAY  23 

    0xcfa61ea6,// 55 PAY  24 

    0x5168a0f5,// 56 PAY  25 

    0x430f96b3,// 57 PAY  26 

    0x0d6a80d5,// 58 PAY  27 

    0x81e611d1,// 59 PAY  28 

    0xced7b04b,// 60 PAY  29 

    0x84a4e95b,// 61 PAY  30 

    0x11972257,// 62 PAY  31 

    0xb5394858,// 63 PAY  32 

    0x226938d9,// 64 PAY  33 

    0x96334621,// 65 PAY  34 

    0xa40fcd35,// 66 PAY  35 

    0xe8833359,// 67 PAY  36 

    0x3b25faca,// 68 PAY  37 

    0x020877b6,// 69 PAY  38 

    0x5782d298,// 70 PAY  39 

    0x59fe904a,// 71 PAY  40 

    0x46caf3ed,// 72 PAY  41 

    0x0e258130,// 73 PAY  42 

    0x7ec2d52a,// 74 PAY  43 

    0x30670850,// 75 PAY  44 

    0x3ee903f3,// 76 PAY  45 

    0xd321b840,// 77 PAY  46 

    0xdcb19d35,// 78 PAY  47 

    0xe15899f0,// 79 PAY  48 

    0x353dc8f1,// 80 PAY  49 

    0xb0c811b4,// 81 PAY  50 

    0xc2bccc71,// 82 PAY  51 

    0xb4ad5856,// 83 PAY  52 

    0x216a6f52,// 84 PAY  53 

    0x0bcc6251,// 85 PAY  54 

    0xe51bbeba,// 86 PAY  55 

    0xa7dbd165,// 87 PAY  56 

    0xaa30ba33,// 88 PAY  57 

    0xda35d6c3,// 89 PAY  58 

    0x77b70b35,// 90 PAY  59 

    0x445f22cd,// 91 PAY  60 

    0xadc2d2be,// 92 PAY  61 

    0xd4568c4e,// 93 PAY  62 

    0x4e303b3c,// 94 PAY  63 

    0x4a0a7efd,// 95 PAY  64 

    0x0c965311,// 96 PAY  65 

    0xdd9d2e52,// 97 PAY  66 

    0xff4c8ce3,// 98 PAY  67 

    0xf5df04c0,// 99 PAY  68 

    0x87673677,// 100 PAY  69 

    0xa8c7f57f,// 101 PAY  70 

    0x39b4fc49,// 102 PAY  71 

    0x00161428,// 103 PAY  72 

    0x07039c71,// 104 PAY  73 

    0xc744839c,// 105 PAY  74 

    0x2dd59421,// 106 PAY  75 

    0x4bc00bfd,// 107 PAY  76 

    0xc14134f6,// 108 PAY  77 

    0x4a1f7048,// 109 PAY  78 

    0xe85a3c99,// 110 PAY  79 

    0xf2fc8d6d,// 111 PAY  80 

    0xea05f237,// 112 PAY  81 

    0x719e9572,// 113 PAY  82 

    0xb3c7db66,// 114 PAY  83 

    0x2fbfe980,// 115 PAY  84 

    0x42a44acd,// 116 PAY  85 

    0x94a89e98,// 117 PAY  86 

    0xf2b97b76,// 118 PAY  87 

    0x2bcdad43,// 119 PAY  88 

    0xe7426bc3,// 120 PAY  89 

    0x772e2bf2,// 121 PAY  90 

    0x0e12d841,// 122 PAY  91 

    0xa4690f12,// 123 PAY  92 

    0xc13d83b1,// 124 PAY  93 

    0xb096ef02,// 125 PAY  94 

    0xfb0484a4,// 126 PAY  95 

    0xe8782b14,// 127 PAY  96 

    0x118614a3,// 128 PAY  97 

    0xdd2f89ad,// 129 PAY  98 

    0x8eba930e,// 130 PAY  99 

    0x961a92c5,// 131 PAY 100 

    0x4f42578e,// 132 PAY 101 

    0xe017005f,// 133 PAY 102 

    0x3628699a,// 134 PAY 103 

    0xd368c698,// 135 PAY 104 

    0x3a788571,// 136 PAY 105 

    0xdca892d9,// 137 PAY 106 

    0x828c97ea,// 138 PAY 107 

    0xad75441f,// 139 PAY 108 

    0x454afe68,// 140 PAY 109 

    0xe8062bc3,// 141 PAY 110 

    0x7eb9044d,// 142 PAY 111 

    0x274ef03f,// 143 PAY 112 

    0x6e793dff,// 144 PAY 113 

    0x50fbbac4,// 145 PAY 114 

    0x4f909c11,// 146 PAY 115 

    0x2b925014,// 147 PAY 116 

    0x88df44da,// 148 PAY 117 

    0x4ceb72ff,// 149 PAY 118 

    0x0f844d6f,// 150 PAY 119 

    0xbb66b6e2,// 151 PAY 120 

    0xd5503bb1,// 152 PAY 121 

    0xf6c5319a,// 153 PAY 122 

    0x497ea22b,// 154 PAY 123 

    0x1e3b796e,// 155 PAY 124 

    0x6a2178f5,// 156 PAY 125 

    0xe7d8f259,// 157 PAY 126 

    0x0dde3f60,// 158 PAY 127 

    0x5c3012ba,// 159 PAY 128 

    0x37e8541d,// 160 PAY 129 

    0x8dea4678,// 161 PAY 130 

    0x12ebbb46,// 162 PAY 131 

    0xd039803c,// 163 PAY 132 

    0x48a51c46,// 164 PAY 133 

    0x752e4697,// 165 PAY 134 

    0x52ecde21,// 166 PAY 135 

    0x673ee5d3,// 167 PAY 136 

    0xd8208bca,// 168 PAY 137 

    0x935752a3,// 169 PAY 138 

    0xd9fbc3d9,// 170 PAY 139 

    0x6503f912,// 171 PAY 140 

    0x092a9d4b,// 172 PAY 141 

    0x676331c9,// 173 PAY 142 

    0x138e1c0a,// 174 PAY 143 

    0xbf680b03,// 175 PAY 144 

    0xcfb58f5c,// 176 PAY 145 

    0xaa489033,// 177 PAY 146 

    0x01d56012,// 178 PAY 147 

    0x5dd16939,// 179 PAY 148 

    0xa28495b6,// 180 PAY 149 

    0x4862083b,// 181 PAY 150 

    0x13fe2db5,// 182 PAY 151 

/// STA is 1 words. 

/// STA num_pkts       : 145 

/// STA pkt_idx        : 230 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x4d 

    0x03994d91 // 183 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt26_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x00 

/// ECH pdu_tag        : 0x00 

    0x00000000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x5 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0800000f,// 3 SCX   1 

    0x8041480c,// 4 SCX   2 

    0x00001500,// 5 SCX   3 

    0x07c4248e,// 6 SCX   4 

    0xabacf235,// 7 SCX   5 

    0xf37f50c0,// 8 SCX   6 

    0xb3d5e538,// 9 SCX   7 

    0xbd79e6a2,// 10 SCX   8 

    0x5f8216ec,// 11 SCX   9 

    0x9804c1dc,// 12 SCX  10 

    0xeeb8b8fc,// 13 SCX  11 

    0x389fa894,// 14 SCX  12 

    0xcac2e3a6,// 15 SCX  13 

    0x85df8166,// 16 SCX  14 

    0x25f84af2,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 1175 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 729 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 729 

/// BFD lencrypto      : 112 

/// BFD ofstcrypto     : 160 

/// BFD (ofst+len)cry  : 272 

/// BFD ofstiv         : 116 

/// BFD ofsticv        : 948 

    0x000002d9,// 18 BFD   1 

    0x00a00070,// 19 BFD   2 

    0x03b40074,// 20 BFD   3 

/// MFM is 14 words. 

/// MFM vldnibs        : 67 

    0x670039ec,// 21 MFM   1 

    0x31f21406,// 22 MFM   2 

    0x63b5d948,// 23 MFM   3 

    0xfe12c277,// 24 MFM   4 

    0x1f6a4164,// 25 MFM   5 

    0x97530d81,// 26 MFM   6 

    0xb34c3f7c,// 27 MFM   7 

    0x9f7036d2,// 28 MFM   8 

    0xc058332e,// 29 MFM   9 

    0xd8e1cc05,// 30 MFM  10 

    0x377e38a9,// 31 MFM  11 

    0xb90dfceb,// 32 MFM  12 

    0x57b3fcdd,// 33 MFM  13 

    0xb7c00000,// 34 MFM  14 

/// BDA is 295 words. 

/// BDA size     is 1175 (0x497) 

/// BDA id       is 0x9ed4 

    0x04979ed4,// 35 BDA   1 

/// PAY Generic Data size   : 1175 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x7cb399fd,// 36 PAY   1 

    0xdd277b25,// 37 PAY   2 

    0xd4fedf62,// 38 PAY   3 

    0x4dac0c91,// 39 PAY   4 

    0x5eb1bec0,// 40 PAY   5 

    0x76c38205,// 41 PAY   6 

    0x50b03b5a,// 42 PAY   7 

    0x879d3a22,// 43 PAY   8 

    0xf55619d2,// 44 PAY   9 

    0x2312b2f4,// 45 PAY  10 

    0x8b773bd2,// 46 PAY  11 

    0xabc23b37,// 47 PAY  12 

    0x7597fd38,// 48 PAY  13 

    0x303fcaaf,// 49 PAY  14 

    0xd3e39c74,// 50 PAY  15 

    0x5a973d9b,// 51 PAY  16 

    0xb8333ebe,// 52 PAY  17 

    0x0e5045dd,// 53 PAY  18 

    0x9ce92bce,// 54 PAY  19 

    0x43b78583,// 55 PAY  20 

    0x2073b36c,// 56 PAY  21 

    0x1a903987,// 57 PAY  22 

    0x178f52ba,// 58 PAY  23 

    0x194ba172,// 59 PAY  24 

    0xe49d419a,// 60 PAY  25 

    0x5ec6dae5,// 61 PAY  26 

    0xac24fcf1,// 62 PAY  27 

    0xd4084c25,// 63 PAY  28 

    0xe426b64d,// 64 PAY  29 

    0xe8bd03c6,// 65 PAY  30 

    0x926d1a6d,// 66 PAY  31 

    0x1e705504,// 67 PAY  32 

    0xaebaf796,// 68 PAY  33 

    0x033e66af,// 69 PAY  34 

    0xf93d5d41,// 70 PAY  35 

    0x75f0a1ca,// 71 PAY  36 

    0x223e8d31,// 72 PAY  37 

    0x3219aba0,// 73 PAY  38 

    0x4f3bc1f7,// 74 PAY  39 

    0x3fb9ddf7,// 75 PAY  40 

    0x091b6d01,// 76 PAY  41 

    0x1cffb3fc,// 77 PAY  42 

    0xfe2fc4e9,// 78 PAY  43 

    0xc76763b7,// 79 PAY  44 

    0x5dc5df2b,// 80 PAY  45 

    0xad8e3a74,// 81 PAY  46 

    0xc4ed7028,// 82 PAY  47 

    0x9ce68c0a,// 83 PAY  48 

    0x592a1912,// 84 PAY  49 

    0x48178aee,// 85 PAY  50 

    0x7043308a,// 86 PAY  51 

    0x4d1400ec,// 87 PAY  52 

    0x95fd35cd,// 88 PAY  53 

    0xebe0ce25,// 89 PAY  54 

    0x9801a1e1,// 90 PAY  55 

    0x3f461466,// 91 PAY  56 

    0xc7506cc2,// 92 PAY  57 

    0xc81bb9af,// 93 PAY  58 

    0xe9f5c18a,// 94 PAY  59 

    0xf447da44,// 95 PAY  60 

    0xdcfddc32,// 96 PAY  61 

    0xf1334414,// 97 PAY  62 

    0xf86285bb,// 98 PAY  63 

    0xca6c283d,// 99 PAY  64 

    0xcf947578,// 100 PAY  65 

    0x0637f74b,// 101 PAY  66 

    0x2b11dfad,// 102 PAY  67 

    0x72af973c,// 103 PAY  68 

    0xd3041eea,// 104 PAY  69 

    0xe98d7c8f,// 105 PAY  70 

    0x98c6508a,// 106 PAY  71 

    0x87ed0d25,// 107 PAY  72 

    0xde9c2b61,// 108 PAY  73 

    0x5b91427d,// 109 PAY  74 

    0x7454f58e,// 110 PAY  75 

    0xe83150cd,// 111 PAY  76 

    0x73239ebf,// 112 PAY  77 

    0x7dc45047,// 113 PAY  78 

    0xd80201f1,// 114 PAY  79 

    0x9f1f81e5,// 115 PAY  80 

    0x6e63d969,// 116 PAY  81 

    0x74fa6165,// 117 PAY  82 

    0x63485d9c,// 118 PAY  83 

    0xbfdbd37c,// 119 PAY  84 

    0xac7634e0,// 120 PAY  85 

    0x2fde3a7d,// 121 PAY  86 

    0xa24c4338,// 122 PAY  87 

    0xc1d29bfa,// 123 PAY  88 

    0x92c803c1,// 124 PAY  89 

    0xa5dac28e,// 125 PAY  90 

    0xfcc84ce2,// 126 PAY  91 

    0x8298b189,// 127 PAY  92 

    0x5530d0ba,// 128 PAY  93 

    0xa1eff4ae,// 129 PAY  94 

    0x3012f6b8,// 130 PAY  95 

    0x71d61f74,// 131 PAY  96 

    0x87cd10bd,// 132 PAY  97 

    0x8a43669a,// 133 PAY  98 

    0xb548279f,// 134 PAY  99 

    0x0a8bee17,// 135 PAY 100 

    0xfe389be7,// 136 PAY 101 

    0x7501a92e,// 137 PAY 102 

    0xbc46b148,// 138 PAY 103 

    0x892657bc,// 139 PAY 104 

    0x8f3183c0,// 140 PAY 105 

    0x1c4c7f2d,// 141 PAY 106 

    0xa2abfd45,// 142 PAY 107 

    0xbe950715,// 143 PAY 108 

    0x062cbbf5,// 144 PAY 109 

    0x87f0fa8d,// 145 PAY 110 

    0x167ab394,// 146 PAY 111 

    0xc14b481a,// 147 PAY 112 

    0x6ef857cf,// 148 PAY 113 

    0x3ac294ec,// 149 PAY 114 

    0x96d44e59,// 150 PAY 115 

    0xd9a7499c,// 151 PAY 116 

    0x7d3d4825,// 152 PAY 117 

    0x92ca0eb6,// 153 PAY 118 

    0x00234111,// 154 PAY 119 

    0xc2b7f24d,// 155 PAY 120 

    0xe7b67a63,// 156 PAY 121 

    0xf01663c4,// 157 PAY 122 

    0xb991564f,// 158 PAY 123 

    0x3d1ba290,// 159 PAY 124 

    0xe430d0a7,// 160 PAY 125 

    0xea9e6441,// 161 PAY 126 

    0x3b272914,// 162 PAY 127 

    0x89cbd0ac,// 163 PAY 128 

    0x6881a57a,// 164 PAY 129 

    0xc4472840,// 165 PAY 130 

    0x2dea35ca,// 166 PAY 131 

    0x7cf80498,// 167 PAY 132 

    0xa020d081,// 168 PAY 133 

    0x8cdb55db,// 169 PAY 134 

    0x7f27398c,// 170 PAY 135 

    0x2c91a3ca,// 171 PAY 136 

    0x28639a9e,// 172 PAY 137 

    0x9f804aca,// 173 PAY 138 

    0x14bd2a01,// 174 PAY 139 

    0x823f41a0,// 175 PAY 140 

    0xbfae014d,// 176 PAY 141 

    0xff26fb48,// 177 PAY 142 

    0x63b2e221,// 178 PAY 143 

    0xc924a421,// 179 PAY 144 

    0x3302888b,// 180 PAY 145 

    0xb4a971ba,// 181 PAY 146 

    0x6e1ff127,// 182 PAY 147 

    0x290be738,// 183 PAY 148 

    0xe98c1512,// 184 PAY 149 

    0xca68609f,// 185 PAY 150 

    0x2a1ffc28,// 186 PAY 151 

    0xaf3462da,// 187 PAY 152 

    0x8c0ac601,// 188 PAY 153 

    0x64cece64,// 189 PAY 154 

    0x611691f1,// 190 PAY 155 

    0x78be3a7d,// 191 PAY 156 

    0x3c3244b6,// 192 PAY 157 

    0xb4cbb768,// 193 PAY 158 

    0xc34838ac,// 194 PAY 159 

    0x63e28c9d,// 195 PAY 160 

    0xcff1a796,// 196 PAY 161 

    0x2d163e39,// 197 PAY 162 

    0x3059b99d,// 198 PAY 163 

    0x6f3375cf,// 199 PAY 164 

    0xba57a608,// 200 PAY 165 

    0xf27c1bee,// 201 PAY 166 

    0x829178b0,// 202 PAY 167 

    0x7281af6b,// 203 PAY 168 

    0x6b5b3bee,// 204 PAY 169 

    0x230c65a8,// 205 PAY 170 

    0x71224a56,// 206 PAY 171 

    0xe43facbe,// 207 PAY 172 

    0x09cdbb6d,// 208 PAY 173 

    0x2b39b0e4,// 209 PAY 174 

    0x9c815b64,// 210 PAY 175 

    0xbf857892,// 211 PAY 176 

    0x919ce6f0,// 212 PAY 177 

    0xa183ed0a,// 213 PAY 178 

    0x7f4ef415,// 214 PAY 179 

    0xb869f6b9,// 215 PAY 180 

    0xda82bff0,// 216 PAY 181 

    0xa3ae439f,// 217 PAY 182 

    0xddc9021c,// 218 PAY 183 

    0x7bdb7f81,// 219 PAY 184 

    0xb2069e7a,// 220 PAY 185 

    0x3f1663ad,// 221 PAY 186 

    0x22b17a79,// 222 PAY 187 

    0xbd595ae6,// 223 PAY 188 

    0x3d5c91d3,// 224 PAY 189 

    0x969cdaa1,// 225 PAY 190 

    0xb9db2eae,// 226 PAY 191 

    0xe9458902,// 227 PAY 192 

    0x67adfda7,// 228 PAY 193 

    0xb6996274,// 229 PAY 194 

    0xc78801b5,// 230 PAY 195 

    0xbea988ae,// 231 PAY 196 

    0x46f60c03,// 232 PAY 197 

    0x68fe2e76,// 233 PAY 198 

    0x5513f889,// 234 PAY 199 

    0x42a9e3f6,// 235 PAY 200 

    0x9f61285d,// 236 PAY 201 

    0xe8fddb92,// 237 PAY 202 

    0x92bfb559,// 238 PAY 203 

    0x555316f0,// 239 PAY 204 

    0x52e6de94,// 240 PAY 205 

    0x873c8019,// 241 PAY 206 

    0x8412dd19,// 242 PAY 207 

    0xbc1bf365,// 243 PAY 208 

    0xb24377a2,// 244 PAY 209 

    0xd01bdac4,// 245 PAY 210 

    0x52422f78,// 246 PAY 211 

    0x8b870aa7,// 247 PAY 212 

    0x17acfd8d,// 248 PAY 213 

    0xf0847a37,// 249 PAY 214 

    0xf245be2d,// 250 PAY 215 

    0x781cac1f,// 251 PAY 216 

    0x319507b9,// 252 PAY 217 

    0x99a4adc4,// 253 PAY 218 

    0xe849a308,// 254 PAY 219 

    0x073cc81b,// 255 PAY 220 

    0xedf7bd87,// 256 PAY 221 

    0x083e9c84,// 257 PAY 222 

    0xf8d9e0a0,// 258 PAY 223 

    0x2a097f9c,// 259 PAY 224 

    0x162f2fa7,// 260 PAY 225 

    0x99bb6d8a,// 261 PAY 226 

    0xe374ab75,// 262 PAY 227 

    0xecb96f38,// 263 PAY 228 

    0x82d39eda,// 264 PAY 229 

    0x1d705210,// 265 PAY 230 

    0x6fca323d,// 266 PAY 231 

    0x60fd275f,// 267 PAY 232 

    0xfed5dc3c,// 268 PAY 233 

    0x0fe7a062,// 269 PAY 234 

    0x4f9cdc4a,// 270 PAY 235 

    0x6be3f988,// 271 PAY 236 

    0x0c51297e,// 272 PAY 237 

    0x109d8ca2,// 273 PAY 238 

    0xd75a94b5,// 274 PAY 239 

    0x3b443e3a,// 275 PAY 240 

    0x079ce2b6,// 276 PAY 241 

    0xfa503581,// 277 PAY 242 

    0xe07c498b,// 278 PAY 243 

    0x73127dbd,// 279 PAY 244 

    0x3a8b0ed7,// 280 PAY 245 

    0x61a9ab09,// 281 PAY 246 

    0x02835ab2,// 282 PAY 247 

    0x27d11b13,// 283 PAY 248 

    0xa8603a69,// 284 PAY 249 

    0x84e7291a,// 285 PAY 250 

    0x756e7275,// 286 PAY 251 

    0xd6912bd2,// 287 PAY 252 

    0x6a3c9a71,// 288 PAY 253 

    0xeac7beaa,// 289 PAY 254 

    0x36782f0d,// 290 PAY 255 

    0x23d55869,// 291 PAY 256 

    0x57f122c7,// 292 PAY 257 

    0x400d6973,// 293 PAY 258 

    0xd23671fb,// 294 PAY 259 

    0xbdbd106f,// 295 PAY 260 

    0xe0cb787c,// 296 PAY 261 

    0xc07b2283,// 297 PAY 262 

    0xaeb5e645,// 298 PAY 263 

    0x1fe76012,// 299 PAY 264 

    0xcf177c19,// 300 PAY 265 

    0xa13fb766,// 301 PAY 266 

    0x6c6cc4f0,// 302 PAY 267 

    0xd0a55442,// 303 PAY 268 

    0x8bafa729,// 304 PAY 269 

    0xc16f1c5d,// 305 PAY 270 

    0x937706bc,// 306 PAY 271 

    0x87977526,// 307 PAY 272 

    0x6e14aff0,// 308 PAY 273 

    0x9b4c40f9,// 309 PAY 274 

    0x45853ce2,// 310 PAY 275 

    0x258519bf,// 311 PAY 276 

    0xca556c95,// 312 PAY 277 

    0x4449649a,// 313 PAY 278 

    0x944986aa,// 314 PAY 279 

    0xc172cedf,// 315 PAY 280 

    0xb271f66b,// 316 PAY 281 

    0x995f5118,// 317 PAY 282 

    0x1f441d44,// 318 PAY 283 

    0xeb9e9112,// 319 PAY 284 

    0xb233a7f2,// 320 PAY 285 

    0x17b53ea8,// 321 PAY 286 

    0xaa866110,// 322 PAY 287 

    0x28f734ea,// 323 PAY 288 

    0x5db38a8c,// 324 PAY 289 

    0xb526fe7c,// 325 PAY 290 

    0x683eeac0,// 326 PAY 291 

    0x3d295065,// 327 PAY 292 

    0xe877d41c,// 328 PAY 293 

    0xa5a22e00,// 329 PAY 294 

/// STA is 1 words. 

/// STA num_pkts       : 14 

/// STA pkt_idx        : 249 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xc8 

    0x03e4c80e // 330 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt27_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x06 

/// ECH pdu_tag        : 0x00 

    0x00060000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv check_icv sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x08000011,// 3 SCX   1 

    0x804548b1,// 4 SCX   2 

    0x000034c2,// 5 SCX   3 

    0x864581f7,// 6 SCX   4 

    0x4f04043e,// 7 SCX   5 

    0xc0667ed4,// 8 SCX   6 

    0x68d66dea,// 9 SCX   7 

    0x048b29d5,// 10 SCX   8 

    0xa588b8a2,// 11 SCX   9 

    0xd318be3b,// 12 SCX  10 

    0xa8139da5,// 13 SCX  11 

    0x39f4431d,// 14 SCX  12 

    0x3663c1bd,// 15 SCX  13 

    0x6d58203d,// 16 SCX  14 

    0xca1d6679,// 17 SCX  15 

    0x681cda68,// 18 SCX  16 

    0x0f4dcef0,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1851 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1533 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1533 

/// BFD lencrypto      : 136 

/// BFD ofstcrypto     : 1380 

/// BFD (ofst+len)cry  : 1516 

/// BFD ofstiv         : 424 

/// BFD ofsticv        : 1772 

    0x000005fd,// 20 BFD   1 

    0x05640088,// 21 BFD   2 

    0x06ec01a8,// 22 BFD   3 

/// MFM is 4 words. 

/// MFM vldnibs        : 18 

    0x180021be,// 23 MFM   1 

    0x724cc6cb,// 24 MFM   2 

    0x873ee439,// 25 MFM   3 

    0x4d6e0000,// 26 MFM   4 

/// BDA is 464 words. 

/// BDA size     is 1851 (0x73b) 

/// BDA id       is 0x601b 

    0x073b601b,// 27 BDA   1 

/// PAY Generic Data size   : 1851 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x4caf6171,// 28 PAY   1 

    0xc3cada88,// 29 PAY   2 

    0xafd8b4bc,// 30 PAY   3 

    0x38ffa337,// 31 PAY   4 

    0x6b6c87a5,// 32 PAY   5 

    0xe5c1f9fc,// 33 PAY   6 

    0x2e25df86,// 34 PAY   7 

    0x59646d30,// 35 PAY   8 

    0xda1ace77,// 36 PAY   9 

    0xfde0f0d6,// 37 PAY  10 

    0xe6b01292,// 38 PAY  11 

    0xc050b042,// 39 PAY  12 

    0x8779d0cc,// 40 PAY  13 

    0xfe1d4807,// 41 PAY  14 

    0xeb6190e0,// 42 PAY  15 

    0x821607f8,// 43 PAY  16 

    0x44d3d106,// 44 PAY  17 

    0xe54c6deb,// 45 PAY  18 

    0xe50335c2,// 46 PAY  19 

    0x96c0a8e5,// 47 PAY  20 

    0xb5def83b,// 48 PAY  21 

    0xed1c69fe,// 49 PAY  22 

    0x30934be7,// 50 PAY  23 

    0xc8f67965,// 51 PAY  24 

    0x1cda1053,// 52 PAY  25 

    0x2075724f,// 53 PAY  26 

    0x2802ba31,// 54 PAY  27 

    0x3f13b03e,// 55 PAY  28 

    0x59584817,// 56 PAY  29 

    0x0beb7dbf,// 57 PAY  30 

    0x5ecadbb4,// 58 PAY  31 

    0x65071c52,// 59 PAY  32 

    0x2b83d669,// 60 PAY  33 

    0xa215162e,// 61 PAY  34 

    0x55e822d9,// 62 PAY  35 

    0x44b1b620,// 63 PAY  36 

    0xecffa843,// 64 PAY  37 

    0xeff6f4ef,// 65 PAY  38 

    0x3b794e8d,// 66 PAY  39 

    0x497945e1,// 67 PAY  40 

    0x0fab4181,// 68 PAY  41 

    0xc60cc56a,// 69 PAY  42 

    0x9cb36323,// 70 PAY  43 

    0xcecc69c4,// 71 PAY  44 

    0x23b6d830,// 72 PAY  45 

    0xed457ba4,// 73 PAY  46 

    0x0c6b1db0,// 74 PAY  47 

    0xf0976b90,// 75 PAY  48 

    0xf32369c3,// 76 PAY  49 

    0xdd19ecf4,// 77 PAY  50 

    0x4a9e5f82,// 78 PAY  51 

    0xb94bc9ee,// 79 PAY  52 

    0xfa711bab,// 80 PAY  53 

    0x12637d67,// 81 PAY  54 

    0xdf6782b2,// 82 PAY  55 

    0x4704f523,// 83 PAY  56 

    0x87145ff7,// 84 PAY  57 

    0xbbad2053,// 85 PAY  58 

    0x4e9006ba,// 86 PAY  59 

    0x086eb00c,// 87 PAY  60 

    0xb5556976,// 88 PAY  61 

    0xc4de6018,// 89 PAY  62 

    0x92f32f7f,// 90 PAY  63 

    0x4fa946ad,// 91 PAY  64 

    0xee3f2ce2,// 92 PAY  65 

    0x7de045c7,// 93 PAY  66 

    0x38292758,// 94 PAY  67 

    0xaca509bf,// 95 PAY  68 

    0x2f489dec,// 96 PAY  69 

    0x4e0d167e,// 97 PAY  70 

    0x1c4e32a9,// 98 PAY  71 

    0xf6c0b554,// 99 PAY  72 

    0x515cb24b,// 100 PAY  73 

    0xaa8d00b8,// 101 PAY  74 

    0x37300051,// 102 PAY  75 

    0x921f7e30,// 103 PAY  76 

    0x1edaa9a4,// 104 PAY  77 

    0xe67ed09d,// 105 PAY  78 

    0x512a2f27,// 106 PAY  79 

    0xd69d7eca,// 107 PAY  80 

    0x9ff59006,// 108 PAY  81 

    0x214e632d,// 109 PAY  82 

    0xcbd5eec8,// 110 PAY  83 

    0xcc6a2ab7,// 111 PAY  84 

    0xbfe8024f,// 112 PAY  85 

    0x36d580a2,// 113 PAY  86 

    0xbdaa35a5,// 114 PAY  87 

    0x04eed0f2,// 115 PAY  88 

    0x920c726b,// 116 PAY  89 

    0x97e3da8c,// 117 PAY  90 

    0xb67451bd,// 118 PAY  91 

    0x11eab909,// 119 PAY  92 

    0x1977885c,// 120 PAY  93 

    0x449632c8,// 121 PAY  94 

    0x6b91d573,// 122 PAY  95 

    0xae6ae94b,// 123 PAY  96 

    0x19d117ac,// 124 PAY  97 

    0x5a948075,// 125 PAY  98 

    0x893b2971,// 126 PAY  99 

    0x37fca9c9,// 127 PAY 100 

    0x402de510,// 128 PAY 101 

    0x14d60337,// 129 PAY 102 

    0x123c8cd5,// 130 PAY 103 

    0x4c59f9be,// 131 PAY 104 

    0xcbce21b2,// 132 PAY 105 

    0xc5250e3f,// 133 PAY 106 

    0x2e4d9978,// 134 PAY 107 

    0x16e514f4,// 135 PAY 108 

    0x4c7ea33c,// 136 PAY 109 

    0xc9810fe4,// 137 PAY 110 

    0x34a574fb,// 138 PAY 111 

    0x302d5692,// 139 PAY 112 

    0xba7fb3a1,// 140 PAY 113 

    0xe4738503,// 141 PAY 114 

    0xa6d4a551,// 142 PAY 115 

    0x2c8bccb0,// 143 PAY 116 

    0x8a6b7041,// 144 PAY 117 

    0x7804d68e,// 145 PAY 118 

    0x1a17824d,// 146 PAY 119 

    0x41f650ad,// 147 PAY 120 

    0x211852b9,// 148 PAY 121 

    0xc0e05082,// 149 PAY 122 

    0x6db89269,// 150 PAY 123 

    0xd2f13e02,// 151 PAY 124 

    0x7911c321,// 152 PAY 125 

    0x3061cdfd,// 153 PAY 126 

    0x4d096a15,// 154 PAY 127 

    0x83258d45,// 155 PAY 128 

    0xe141bf2b,// 156 PAY 129 

    0x58f54027,// 157 PAY 130 

    0x3ba6a050,// 158 PAY 131 

    0x3724d0be,// 159 PAY 132 

    0x8a6d9380,// 160 PAY 133 

    0xa69d79e0,// 161 PAY 134 

    0x6ff9fdec,// 162 PAY 135 

    0xf31502e2,// 163 PAY 136 

    0xd22cda81,// 164 PAY 137 

    0x168baf74,// 165 PAY 138 

    0x0cd847cd,// 166 PAY 139 

    0xf4e87489,// 167 PAY 140 

    0x263463db,// 168 PAY 141 

    0x564a4e66,// 169 PAY 142 

    0xa45457a7,// 170 PAY 143 

    0xb388b6c2,// 171 PAY 144 

    0x32a7741f,// 172 PAY 145 

    0xe96dda63,// 173 PAY 146 

    0xec0bc9f2,// 174 PAY 147 

    0x15849baf,// 175 PAY 148 

    0xe017f489,// 176 PAY 149 

    0x9e2cd1bf,// 177 PAY 150 

    0x4e54e292,// 178 PAY 151 

    0xb454f764,// 179 PAY 152 

    0x79d3467e,// 180 PAY 153 

    0x69db21c5,// 181 PAY 154 

    0x0530b022,// 182 PAY 155 

    0x7ab299ef,// 183 PAY 156 

    0xea54ad31,// 184 PAY 157 

    0xa0470d7a,// 185 PAY 158 

    0x0655ceb8,// 186 PAY 159 

    0x14fe1749,// 187 PAY 160 

    0x97648580,// 188 PAY 161 

    0xf57f2cd4,// 189 PAY 162 

    0x7bc2ceb9,// 190 PAY 163 

    0xe1ccb177,// 191 PAY 164 

    0xf4e999b9,// 192 PAY 165 

    0x69c15926,// 193 PAY 166 

    0x66ecaf25,// 194 PAY 167 

    0x4e666fea,// 195 PAY 168 

    0x3b19348e,// 196 PAY 169 

    0xaa15e9f3,// 197 PAY 170 

    0x9a6c45eb,// 198 PAY 171 

    0xa9eaa008,// 199 PAY 172 

    0x6b8f848f,// 200 PAY 173 

    0x525ee4f3,// 201 PAY 174 

    0x8976e934,// 202 PAY 175 

    0xc3b1c1f0,// 203 PAY 176 

    0xa623d261,// 204 PAY 177 

    0xdfaffdbe,// 205 PAY 178 

    0x5c566f38,// 206 PAY 179 

    0xfb253181,// 207 PAY 180 

    0x4ecc12d4,// 208 PAY 181 

    0xcdd4abc5,// 209 PAY 182 

    0x0dc0dbd6,// 210 PAY 183 

    0x0896647e,// 211 PAY 184 

    0x86f9caaf,// 212 PAY 185 

    0x09d3d721,// 213 PAY 186 

    0xf60047f0,// 214 PAY 187 

    0xdb8d5bf3,// 215 PAY 188 

    0x4261605d,// 216 PAY 189 

    0x3c83d69a,// 217 PAY 190 

    0xbca4fe8f,// 218 PAY 191 

    0xd006ce1c,// 219 PAY 192 

    0x53f02c0d,// 220 PAY 193 

    0x65d864f4,// 221 PAY 194 

    0xf6ff76e4,// 222 PAY 195 

    0xabd769aa,// 223 PAY 196 

    0x8592bba8,// 224 PAY 197 

    0x6bca728b,// 225 PAY 198 

    0x8153856f,// 226 PAY 199 

    0xfbc075fd,// 227 PAY 200 

    0xc0d2eac4,// 228 PAY 201 

    0xd98178e1,// 229 PAY 202 

    0x17f71a62,// 230 PAY 203 

    0xd134f851,// 231 PAY 204 

    0xcc6ea311,// 232 PAY 205 

    0xd9c1ca12,// 233 PAY 206 

    0xb9e9f8b1,// 234 PAY 207 

    0xa1822f3c,// 235 PAY 208 

    0x6f6165d5,// 236 PAY 209 

    0x21c763df,// 237 PAY 210 

    0x63057320,// 238 PAY 211 

    0x3d8c66cf,// 239 PAY 212 

    0xa3cba1ff,// 240 PAY 213 

    0xaf0158d0,// 241 PAY 214 

    0x904a29d5,// 242 PAY 215 

    0x512c9d4a,// 243 PAY 216 

    0x1da12df3,// 244 PAY 217 

    0xe02fa5b4,// 245 PAY 218 

    0xd278ae22,// 246 PAY 219 

    0x1deaa853,// 247 PAY 220 

    0xb9923bb4,// 248 PAY 221 

    0xef1b1313,// 249 PAY 222 

    0xaa85c938,// 250 PAY 223 

    0x93c5dc27,// 251 PAY 224 

    0x5fb32893,// 252 PAY 225 

    0x28101560,// 253 PAY 226 

    0xe0970638,// 254 PAY 227 

    0x35e553a5,// 255 PAY 228 

    0x0ae66f2c,// 256 PAY 229 

    0xbf432d1b,// 257 PAY 230 

    0x8b6822bf,// 258 PAY 231 

    0x0521286d,// 259 PAY 232 

    0x4777e933,// 260 PAY 233 

    0xd0858db6,// 261 PAY 234 

    0xe8f37f63,// 262 PAY 235 

    0xc8e56613,// 263 PAY 236 

    0x33e4976b,// 264 PAY 237 

    0xfccaf747,// 265 PAY 238 

    0xdba64db8,// 266 PAY 239 

    0x2f1166b3,// 267 PAY 240 

    0xe49ccdc5,// 268 PAY 241 

    0x8fba5a12,// 269 PAY 242 

    0xf1c618bf,// 270 PAY 243 

    0x1bcc36cc,// 271 PAY 244 

    0x3dbf72bc,// 272 PAY 245 

    0x7752ed55,// 273 PAY 246 

    0xc08e1ab1,// 274 PAY 247 

    0x053688dd,// 275 PAY 248 

    0x13b61792,// 276 PAY 249 

    0x832607c9,// 277 PAY 250 

    0x8055db37,// 278 PAY 251 

    0xf6c59957,// 279 PAY 252 

    0x473c698a,// 280 PAY 253 

    0x25d20a0a,// 281 PAY 254 

    0x5a6fd67a,// 282 PAY 255 

    0x34824930,// 283 PAY 256 

    0xa45557f5,// 284 PAY 257 

    0xaa190428,// 285 PAY 258 

    0xad735a3b,// 286 PAY 259 

    0xa3671d47,// 287 PAY 260 

    0xa225254f,// 288 PAY 261 

    0x7be260a6,// 289 PAY 262 

    0x75a70932,// 290 PAY 263 

    0x4314e949,// 291 PAY 264 

    0x0bddcd86,// 292 PAY 265 

    0xf4ad681e,// 293 PAY 266 

    0xc2d0adfa,// 294 PAY 267 

    0x142f2d20,// 295 PAY 268 

    0xb928cfae,// 296 PAY 269 

    0x69b35a4a,// 297 PAY 270 

    0x74795b0c,// 298 PAY 271 

    0x26111565,// 299 PAY 272 

    0x8fb49b1a,// 300 PAY 273 

    0xac978841,// 301 PAY 274 

    0xc0391fb9,// 302 PAY 275 

    0x4c72967f,// 303 PAY 276 

    0x676f15c1,// 304 PAY 277 

    0xe3f04e55,// 305 PAY 278 

    0x6dd3dd83,// 306 PAY 279 

    0x148f3fe0,// 307 PAY 280 

    0x5fb63df9,// 308 PAY 281 

    0x640ad9cf,// 309 PAY 282 

    0x57071785,// 310 PAY 283 

    0xbe689f08,// 311 PAY 284 

    0x03e7a23c,// 312 PAY 285 

    0x43fbcde3,// 313 PAY 286 

    0xaf2ffd48,// 314 PAY 287 

    0x9c6e5ba1,// 315 PAY 288 

    0x748dbc91,// 316 PAY 289 

    0x6e4acd68,// 317 PAY 290 

    0x7bea989e,// 318 PAY 291 

    0x2d02650c,// 319 PAY 292 

    0x6202a46c,// 320 PAY 293 

    0x615cd7b5,// 321 PAY 294 

    0x06d6b3d1,// 322 PAY 295 

    0x56c133b6,// 323 PAY 296 

    0xb588a583,// 324 PAY 297 

    0x060d7e8d,// 325 PAY 298 

    0x5a4df92e,// 326 PAY 299 

    0xf1695c33,// 327 PAY 300 

    0x05a263ae,// 328 PAY 301 

    0x9465cbdb,// 329 PAY 302 

    0xfe1cfcba,// 330 PAY 303 

    0xf5ac324c,// 331 PAY 304 

    0xd302ab60,// 332 PAY 305 

    0x17123458,// 333 PAY 306 

    0xc3d240a8,// 334 PAY 307 

    0x4a1a7061,// 335 PAY 308 

    0x50ffcb73,// 336 PAY 309 

    0x7ce8aa82,// 337 PAY 310 

    0x4d8c3bc5,// 338 PAY 311 

    0xdf7ee746,// 339 PAY 312 

    0x47a120db,// 340 PAY 313 

    0x3d93c132,// 341 PAY 314 

    0xc81bdad2,// 342 PAY 315 

    0xdbdbb053,// 343 PAY 316 

    0x0fdc7f82,// 344 PAY 317 

    0x39d704ef,// 345 PAY 318 

    0x46383d0f,// 346 PAY 319 

    0x21f1530a,// 347 PAY 320 

    0x66459bc6,// 348 PAY 321 

    0x5612ab68,// 349 PAY 322 

    0x8283e68c,// 350 PAY 323 

    0x34f36ead,// 351 PAY 324 

    0x2c1789e9,// 352 PAY 325 

    0x79aad830,// 353 PAY 326 

    0x33591d83,// 354 PAY 327 

    0x8351b019,// 355 PAY 328 

    0xb23530a3,// 356 PAY 329 

    0x78d9bca0,// 357 PAY 330 

    0x4243546c,// 358 PAY 331 

    0x8972883e,// 359 PAY 332 

    0x5b3df9bc,// 360 PAY 333 

    0x6d3e6210,// 361 PAY 334 

    0x6b3bab66,// 362 PAY 335 

    0x8b9f316d,// 363 PAY 336 

    0xa3fdb9f9,// 364 PAY 337 

    0xc1d47029,// 365 PAY 338 

    0xaa7bc224,// 366 PAY 339 

    0xb63403f2,// 367 PAY 340 

    0x049d913e,// 368 PAY 341 

    0x19d1f3cd,// 369 PAY 342 

    0x33bba504,// 370 PAY 343 

    0x15479661,// 371 PAY 344 

    0xf2a9788e,// 372 PAY 345 

    0x712fe44f,// 373 PAY 346 

    0x8b6cd2a8,// 374 PAY 347 

    0x14c45a90,// 375 PAY 348 

    0xaacbd8f1,// 376 PAY 349 

    0x985a26c2,// 377 PAY 350 

    0x4e34909a,// 378 PAY 351 

    0xbf50e4c1,// 379 PAY 352 

    0x092105d8,// 380 PAY 353 

    0xc117cafa,// 381 PAY 354 

    0x05867e5e,// 382 PAY 355 

    0xd0c962ce,// 383 PAY 356 

    0x438632ca,// 384 PAY 357 

    0xb2fa8d6e,// 385 PAY 358 

    0xa69f81a3,// 386 PAY 359 

    0x6cf7ce48,// 387 PAY 360 

    0xa0f1f734,// 388 PAY 361 

    0x782cc0fb,// 389 PAY 362 

    0xabd76eb8,// 390 PAY 363 

    0xcebab856,// 391 PAY 364 

    0x754a9155,// 392 PAY 365 

    0x0cd88516,// 393 PAY 366 

    0x53f3b426,// 394 PAY 367 

    0xa23fbc84,// 395 PAY 368 

    0x73c6fcd2,// 396 PAY 369 

    0x4acf096b,// 397 PAY 370 

    0x61e56abf,// 398 PAY 371 

    0xab1b477d,// 399 PAY 372 

    0x634bc711,// 400 PAY 373 

    0xb6cbf6ec,// 401 PAY 374 

    0xd5d0f4d8,// 402 PAY 375 

    0xa0a1a0b9,// 403 PAY 376 

    0x931f81ba,// 404 PAY 377 

    0xc057f51f,// 405 PAY 378 

    0x042e377e,// 406 PAY 379 

    0x7dc6b32b,// 407 PAY 380 

    0xc0d7bffb,// 408 PAY 381 

    0x657218f9,// 409 PAY 382 

    0x93871f40,// 410 PAY 383 

    0x5168e597,// 411 PAY 384 

    0xe41617e0,// 412 PAY 385 

    0x5e06d650,// 413 PAY 386 

    0x3b19ad1f,// 414 PAY 387 

    0x0ec98945,// 415 PAY 388 

    0x058cd2f4,// 416 PAY 389 

    0xe1185fc4,// 417 PAY 390 

    0xae5eff08,// 418 PAY 391 

    0x0d5c1161,// 419 PAY 392 

    0x61f60748,// 420 PAY 393 

    0x17e38c71,// 421 PAY 394 

    0x9d566960,// 422 PAY 395 

    0xeb33b759,// 423 PAY 396 

    0x230c9c26,// 424 PAY 397 

    0x17860fdf,// 425 PAY 398 

    0xf05d10af,// 426 PAY 399 

    0xb54a32de,// 427 PAY 400 

    0x29b20064,// 428 PAY 401 

    0xbaf386bb,// 429 PAY 402 

    0x4ddecd82,// 430 PAY 403 

    0x2c3a2a47,// 431 PAY 404 

    0xc8b2c2fd,// 432 PAY 405 

    0xe6ba0565,// 433 PAY 406 

    0xac8446cf,// 434 PAY 407 

    0x89eb076d,// 435 PAY 408 

    0x6b3946d9,// 436 PAY 409 

    0x19219609,// 437 PAY 410 

    0xf4c9d20c,// 438 PAY 411 

    0xc088649a,// 439 PAY 412 

    0x40435fa7,// 440 PAY 413 

    0x4ed7b402,// 441 PAY 414 

    0x45ac1743,// 442 PAY 415 

    0xec83ac49,// 443 PAY 416 

    0xb8d962b5,// 444 PAY 417 

    0x2e938de4,// 445 PAY 418 

    0x2e45d95a,// 446 PAY 419 

    0x9e5e4cb8,// 447 PAY 420 

    0x142ffc58,// 448 PAY 421 

    0x5fb562fb,// 449 PAY 422 

    0xca88101b,// 450 PAY 423 

    0xc2d52696,// 451 PAY 424 

    0x96dbfd0c,// 452 PAY 425 

    0xaa88a8ac,// 453 PAY 426 

    0xdfd7b06c,// 454 PAY 427 

    0x61857ca2,// 455 PAY 428 

    0x3b6f3075,// 456 PAY 429 

    0x0e55d807,// 457 PAY 430 

    0x95c718a6,// 458 PAY 431 

    0x460fa4b9,// 459 PAY 432 

    0x19857c42,// 460 PAY 433 

    0xe3c066fe,// 461 PAY 434 

    0x1a69dbd1,// 462 PAY 435 

    0x394d0cb2,// 463 PAY 436 

    0x2efe1e0f,// 464 PAY 437 

    0xb5919241,// 465 PAY 438 

    0x1a39f560,// 466 PAY 439 

    0x0b3bacbd,// 467 PAY 440 

    0xa712dc03,// 468 PAY 441 

    0x3bbf798d,// 469 PAY 442 

    0x720e7390,// 470 PAY 443 

    0x00b5304d,// 471 PAY 444 

    0x32d8e43a,// 472 PAY 445 

    0xbd412470,// 473 PAY 446 

    0x556e41d9,// 474 PAY 447 

    0xd6f4c04e,// 475 PAY 448 

    0xded6c881,// 476 PAY 449 

    0xa54c4d3a,// 477 PAY 450 

    0x5329b09e,// 478 PAY 451 

    0x40879146,// 479 PAY 452 

    0xf81498ce,// 480 PAY 453 

    0x15539ee5,// 481 PAY 454 

    0xd0a4ce70,// 482 PAY 455 

    0x12cdb171,// 483 PAY 456 

    0x47741f9a,// 484 PAY 457 

    0xa39799f3,// 485 PAY 458 

    0xdee3fe30,// 486 PAY 459 

    0xeebdf926,// 487 PAY 460 

    0x8b7c9366,// 488 PAY 461 

    0xaa2cff96,// 489 PAY 462 

    0x27cbb200,// 490 PAY 463 

/// STA is 1 words. 

/// STA num_pkts       : 214 

/// STA pkt_idx        : 254 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xc1 

    0x03f8c1d6 // 491 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt28_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x0a 

/// ECH pdu_tag        : 0x00 

    0x000a0000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x5 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0800000f,// 3 SCX   1 

    0x8040487b,// 4 SCX   2 

    0x00003500,// 5 SCX   3 

    0x1d902c6f,// 6 SCX   4 

    0x9cdec43f,// 7 SCX   5 

    0xca4df573,// 8 SCX   6 

    0xd12d8c0d,// 9 SCX   7 

    0xa1626e82,// 10 SCX   8 

    0x28806b29,// 11 SCX   9 

    0xe6009d69,// 12 SCX  10 

    0x2efd22ce,// 13 SCX  11 

    0x46ed1c19,// 14 SCX  12 

    0x38150954,// 15 SCX  13 

    0x1bd385cb,// 16 SCX  14 

    0x5a1ae741,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 939 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 528 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 528 

/// BFD lencrypto      : 104 

/// BFD ofstcrypto     : 176 

/// BFD (ofst+len)cry  : 280 

/// BFD ofstiv         : 156 

/// BFD ofsticv        : 776 

    0x00000210,// 18 BFD   1 

    0x00b00068,// 19 BFD   2 

    0x0308009c,// 20 BFD   3 

/// MFM is 14 words. 

/// MFM vldnibs        : 65 

    0x65003515,// 21 MFM   1 

    0xc43ff8fb,// 22 MFM   2 

    0x4d59f594,// 23 MFM   3 

    0x7e228e4c,// 24 MFM   4 

    0x30e0c3d5,// 25 MFM   5 

    0xb36870e2,// 26 MFM   6 

    0x0f03ed5c,// 27 MFM   7 

    0x235a1147,// 28 MFM   8 

    0xc8a4779b,// 29 MFM   9 

    0x0e9657cf,// 30 MFM  10 

    0xed4fd1fe,// 31 MFM  11 

    0x0b19b2df,// 32 MFM  12 

    0xbaf0c343,// 33 MFM  13 

    0xe0000000,// 34 MFM  14 

/// BDA is 236 words. 

/// BDA size     is 939 (0x3ab) 

/// BDA id       is 0x24a3 

    0x03ab24a3,// 35 BDA   1 

/// PAY Generic Data size   : 939 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x435d4eb7,// 36 PAY   1 

    0x5d6187d7,// 37 PAY   2 

    0xcef32f24,// 38 PAY   3 

    0x21b92d69,// 39 PAY   4 

    0x1689c3ab,// 40 PAY   5 

    0xa1880128,// 41 PAY   6 

    0x14a9cd40,// 42 PAY   7 

    0xb3c0dcf2,// 43 PAY   8 

    0x2df363f1,// 44 PAY   9 

    0x0488adb2,// 45 PAY  10 

    0x0bc1aab0,// 46 PAY  11 

    0xd05aee5a,// 47 PAY  12 

    0x834f2f2c,// 48 PAY  13 

    0xa4165cff,// 49 PAY  14 

    0x6b4354b3,// 50 PAY  15 

    0x63dbbfb0,// 51 PAY  16 

    0xdce2ceeb,// 52 PAY  17 

    0x891d8688,// 53 PAY  18 

    0x47964b55,// 54 PAY  19 

    0xe699f686,// 55 PAY  20 

    0x3aa4e8d0,// 56 PAY  21 

    0x54d6ac9b,// 57 PAY  22 

    0x46a27b8e,// 58 PAY  23 

    0x8d22bddb,// 59 PAY  24 

    0x1e684bfa,// 60 PAY  25 

    0xea1aa16e,// 61 PAY  26 

    0xfb5b18c6,// 62 PAY  27 

    0x2f8187b1,// 63 PAY  28 

    0x69283ede,// 64 PAY  29 

    0xa18f387c,// 65 PAY  30 

    0x54ee1d3d,// 66 PAY  31 

    0xeb6f4991,// 67 PAY  32 

    0x3bf9c7d7,// 68 PAY  33 

    0x1943a052,// 69 PAY  34 

    0x36997cef,// 70 PAY  35 

    0xb4cbb786,// 71 PAY  36 

    0x75a6fe10,// 72 PAY  37 

    0x0e721fe4,// 73 PAY  38 

    0x82b4fc8a,// 74 PAY  39 

    0x7aefb87f,// 75 PAY  40 

    0xcea9b92d,// 76 PAY  41 

    0x0a576bbd,// 77 PAY  42 

    0xdd229c63,// 78 PAY  43 

    0x1aef47c6,// 79 PAY  44 

    0x24035532,// 80 PAY  45 

    0x114a095e,// 81 PAY  46 

    0x9964e274,// 82 PAY  47 

    0xbc5d1224,// 83 PAY  48 

    0xfd1b5a7a,// 84 PAY  49 

    0x6e8b995b,// 85 PAY  50 

    0x42d5d8f6,// 86 PAY  51 

    0x61e2f963,// 87 PAY  52 

    0xfbae19e0,// 88 PAY  53 

    0xe7bb73ed,// 89 PAY  54 

    0x62a74714,// 90 PAY  55 

    0xe6c849dd,// 91 PAY  56 

    0x34a53358,// 92 PAY  57 

    0x224c4dd2,// 93 PAY  58 

    0x83e92268,// 94 PAY  59 

    0xfc0274b1,// 95 PAY  60 

    0x5def25b9,// 96 PAY  61 

    0xa2225cf2,// 97 PAY  62 

    0x2ca98ca8,// 98 PAY  63 

    0xa1780b48,// 99 PAY  64 

    0x8f3c12fa,// 100 PAY  65 

    0x2f655f77,// 101 PAY  66 

    0x4333a6ae,// 102 PAY  67 

    0x2f6c9455,// 103 PAY  68 

    0x9b60a717,// 104 PAY  69 

    0xad2d7d43,// 105 PAY  70 

    0x3fb796f6,// 106 PAY  71 

    0x7542fcfa,// 107 PAY  72 

    0xc9db8412,// 108 PAY  73 

    0x4032158c,// 109 PAY  74 

    0xeb1388a7,// 110 PAY  75 

    0xb01db4e8,// 111 PAY  76 

    0x9ffae8b0,// 112 PAY  77 

    0x5372d6a4,// 113 PAY  78 

    0x947a8882,// 114 PAY  79 

    0x11d4f001,// 115 PAY  80 

    0xffb03bb1,// 116 PAY  81 

    0x5bfcdca0,// 117 PAY  82 

    0x0dec100f,// 118 PAY  83 

    0x07a8d1ab,// 119 PAY  84 

    0x2ada92d6,// 120 PAY  85 

    0xa3dc94fa,// 121 PAY  86 

    0x65c28623,// 122 PAY  87 

    0x086f05fe,// 123 PAY  88 

    0x6f30693c,// 124 PAY  89 

    0x3c693a05,// 125 PAY  90 

    0x4784a031,// 126 PAY  91 

    0x074d06b5,// 127 PAY  92 

    0x684b753d,// 128 PAY  93 

    0xa122739e,// 129 PAY  94 

    0xd9e0ec03,// 130 PAY  95 

    0x0bfa87d8,// 131 PAY  96 

    0x032d8d57,// 132 PAY  97 

    0xfa19181a,// 133 PAY  98 

    0xad5a5694,// 134 PAY  99 

    0x5b13338d,// 135 PAY 100 

    0xd4820527,// 136 PAY 101 

    0xe7fc1f28,// 137 PAY 102 

    0xd8344056,// 138 PAY 103 

    0x5f1ca1ec,// 139 PAY 104 

    0xc970b740,// 140 PAY 105 

    0x51b67783,// 141 PAY 106 

    0x14ccd8c5,// 142 PAY 107 

    0xeb6f6a0f,// 143 PAY 108 

    0xf07c96ad,// 144 PAY 109 

    0xfc5516cc,// 145 PAY 110 

    0x4e41da19,// 146 PAY 111 

    0x6b48cbd0,// 147 PAY 112 

    0x8775aa0f,// 148 PAY 113 

    0x402a6344,// 149 PAY 114 

    0x91633104,// 150 PAY 115 

    0x1f05206b,// 151 PAY 116 

    0xffce900f,// 152 PAY 117 

    0x7011a5ec,// 153 PAY 118 

    0xfa84239f,// 154 PAY 119 

    0x258aa528,// 155 PAY 120 

    0x1cbf179b,// 156 PAY 121 

    0xa3f553bc,// 157 PAY 122 

    0x06931961,// 158 PAY 123 

    0x955b5a6a,// 159 PAY 124 

    0x92dddffa,// 160 PAY 125 

    0x1589cbae,// 161 PAY 126 

    0x124ae5e0,// 162 PAY 127 

    0xb8618b53,// 163 PAY 128 

    0x11744156,// 164 PAY 129 

    0xb0ddc85f,// 165 PAY 130 

    0x3865ad7d,// 166 PAY 131 

    0xa0d06cea,// 167 PAY 132 

    0xd315f0bc,// 168 PAY 133 

    0xdc841d26,// 169 PAY 134 

    0xacda4f39,// 170 PAY 135 

    0x4bd7a08c,// 171 PAY 136 

    0x8dbe705e,// 172 PAY 137 

    0x018770e9,// 173 PAY 138 

    0x182a4aca,// 174 PAY 139 

    0x7250b344,// 175 PAY 140 

    0x41250cd3,// 176 PAY 141 

    0xc15dfd5f,// 177 PAY 142 

    0xa097f093,// 178 PAY 143 

    0xed43cc1c,// 179 PAY 144 

    0xcc5d942e,// 180 PAY 145 

    0xc5f41572,// 181 PAY 146 

    0x3d2198de,// 182 PAY 147 

    0x1c915083,// 183 PAY 148 

    0xcbf64d70,// 184 PAY 149 

    0x72ff52ae,// 185 PAY 150 

    0xf836a079,// 186 PAY 151 

    0xba1ae169,// 187 PAY 152 

    0xbecff53a,// 188 PAY 153 

    0x1c0ac0a9,// 189 PAY 154 

    0x99893560,// 190 PAY 155 

    0x8f00dbbc,// 191 PAY 156 

    0xd8b78fd6,// 192 PAY 157 

    0x4f1d54cf,// 193 PAY 158 

    0xfc505140,// 194 PAY 159 

    0xa5e207c0,// 195 PAY 160 

    0xb4458c08,// 196 PAY 161 

    0x611fdc72,// 197 PAY 162 

    0x948bed07,// 198 PAY 163 

    0x23376166,// 199 PAY 164 

    0x350b8d19,// 200 PAY 165 

    0xc61606d7,// 201 PAY 166 

    0x2eb0de28,// 202 PAY 167 

    0x50fada5d,// 203 PAY 168 

    0x349cbacc,// 204 PAY 169 

    0x9f9f6be0,// 205 PAY 170 

    0x15e97f22,// 206 PAY 171 

    0xc12daaab,// 207 PAY 172 

    0x9ad98026,// 208 PAY 173 

    0x42dde8db,// 209 PAY 174 

    0x0f459c16,// 210 PAY 175 

    0xd0949fed,// 211 PAY 176 

    0xe1a76db7,// 212 PAY 177 

    0xff653226,// 213 PAY 178 

    0x24b5e876,// 214 PAY 179 

    0xefd4fb1f,// 215 PAY 180 

    0x359db28f,// 216 PAY 181 

    0x1b50e11d,// 217 PAY 182 

    0xd446c5ef,// 218 PAY 183 

    0x59c5563e,// 219 PAY 184 

    0xebbe29f1,// 220 PAY 185 

    0xb783fd52,// 221 PAY 186 

    0x3575ae0d,// 222 PAY 187 

    0xd0ea5cfd,// 223 PAY 188 

    0xc99a3700,// 224 PAY 189 

    0x963b6299,// 225 PAY 190 

    0x713762a0,// 226 PAY 191 

    0x06340789,// 227 PAY 192 

    0x11336408,// 228 PAY 193 

    0x6386b9fb,// 229 PAY 194 

    0x95824f33,// 230 PAY 195 

    0x1aa66f54,// 231 PAY 196 

    0x79a71246,// 232 PAY 197 

    0x370595ed,// 233 PAY 198 

    0x273cf62a,// 234 PAY 199 

    0xf877a13c,// 235 PAY 200 

    0xbccedc51,// 236 PAY 201 

    0xf9a3ff78,// 237 PAY 202 

    0x3d7f746c,// 238 PAY 203 

    0x4d201146,// 239 PAY 204 

    0x696f0ac4,// 240 PAY 205 

    0x2713dc44,// 241 PAY 206 

    0x7f65d29e,// 242 PAY 207 

    0xb80b7bfa,// 243 PAY 208 

    0x9f5fc719,// 244 PAY 209 

    0x5e9885c2,// 245 PAY 210 

    0x2de9b3b3,// 246 PAY 211 

    0x9c6805f3,// 247 PAY 212 

    0x8fffbeee,// 248 PAY 213 

    0x53baa216,// 249 PAY 214 

    0xc3e49e4c,// 250 PAY 215 

    0x31b1e416,// 251 PAY 216 

    0x47e4215c,// 252 PAY 217 

    0xed6fe4ff,// 253 PAY 218 

    0xc8ebe382,// 254 PAY 219 

    0x00bbc057,// 255 PAY 220 

    0x7aa2bb4a,// 256 PAY 221 

    0x2808cd06,// 257 PAY 222 

    0xafcb3514,// 258 PAY 223 

    0xa0bb5bb3,// 259 PAY 224 

    0xba0fc9c5,// 260 PAY 225 

    0xe9046977,// 261 PAY 226 

    0xa756e8d4,// 262 PAY 227 

    0x8b61b408,// 263 PAY 228 

    0x29650b01,// 264 PAY 229 

    0x1084c18d,// 265 PAY 230 

    0x73b55de8,// 266 PAY 231 

    0x6c1d0a50,// 267 PAY 232 

    0x8f99d2d8,// 268 PAY 233 

    0x1c644da9,// 269 PAY 234 

    0x64ab0900,// 270 PAY 235 

/// STA is 1 words. 

/// STA num_pkts       : 128 

/// STA pkt_idx        : 122 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xe5 

    0x01e8e580 // 271 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt29_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x02 

/// ECH pdu_tag        : 0x00 

    0x00020000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv insert_icv !check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x08000011,// 3 SCX   1 

    0x80464802,// 4 SCX   2 

    0x00006282,// 5 SCX   3 

    0xe2ae96fe,// 6 SCX   4 

    0x07e24212,// 7 SCX   5 

    0x5f9b8e2e,// 8 SCX   6 

    0x33569262,// 9 SCX   7 

    0xe66fc8c8,// 10 SCX   8 

    0xcaf8e88b,// 11 SCX   9 

    0x7fa6cc30,// 12 SCX  10 

    0xa951ec99,// 13 SCX  11 

    0x55f2d818,// 14 SCX  12 

    0xd4826d8d,// 15 SCX  13 

    0xd9a8992d,// 16 SCX  14 

    0xff0de7a0,// 17 SCX  15 

    0x63e7647f,// 18 SCX  16 

    0xbea95b62,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1415 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 936 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 936 

/// BFD lencrypto      : 80 

/// BFD ofstcrypto     : 732 

/// BFD (ofst+len)cry  : 812 

/// BFD ofstiv         : 696 

/// BFD ofsticv        : 1368 

    0x000003a8,// 20 BFD   1 

    0x02dc0050,// 21 BFD   2 

    0x055802b8,// 22 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c005f96,// 23 MFM   1 

    0xa9b1b728,// 24 MFM   2 

    0x8844bdff,// 25 MFM   3 

    0x44671082,// 26 MFM   4 

    0x249ae728,// 27 MFM   5 

    0xca4d89c1,// 28 MFM   6 

    0xaf03fa12,// 29 MFM   7 

    0x45f48033,// 30 MFM   8 

    0x0ee1bd5c,// 31 MFM   9 

    0x4c8fc6ad,// 32 MFM  10 

    0x9aa03e31,// 33 MFM  11 

    0xf1e95a62,// 34 MFM  12 

    0x36ad094d,// 35 MFM  13 

    0x59ff4072,// 36 MFM  14 

    0x2eb7b2af,// 37 MFM  15 

    0x56e3c02d,// 38 MFM  16 

/// BDA is 355 words. 

/// BDA size     is 1415 (0x587) 

/// BDA id       is 0x31c5 

    0x058731c5,// 39 BDA   1 

/// PAY Generic Data size   : 1415 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x7f7cac8b,// 40 PAY   1 

    0x9c72253c,// 41 PAY   2 

    0xe1c5b1b3,// 42 PAY   3 

    0x3eeca832,// 43 PAY   4 

    0xd9b6052a,// 44 PAY   5 

    0x686709a7,// 45 PAY   6 

    0xd3608b6f,// 46 PAY   7 

    0xfffbb6f0,// 47 PAY   8 

    0x6571bc8d,// 48 PAY   9 

    0x5e357df0,// 49 PAY  10 

    0x759a57f4,// 50 PAY  11 

    0x1d18a297,// 51 PAY  12 

    0xf3aea47f,// 52 PAY  13 

    0xabaf006d,// 53 PAY  14 

    0x0d4f1c68,// 54 PAY  15 

    0x6e60d984,// 55 PAY  16 

    0xdf4139b4,// 56 PAY  17 

    0x215f0c2a,// 57 PAY  18 

    0x3f128837,// 58 PAY  19 

    0xd7bf3830,// 59 PAY  20 

    0x918ac106,// 60 PAY  21 

    0x23e41595,// 61 PAY  22 

    0xd65601fb,// 62 PAY  23 

    0x21c2743c,// 63 PAY  24 

    0x91372caf,// 64 PAY  25 

    0x3d58574f,// 65 PAY  26 

    0xeb6f9d15,// 66 PAY  27 

    0xae5c513f,// 67 PAY  28 

    0x069edebe,// 68 PAY  29 

    0x20601538,// 69 PAY  30 

    0xea7a2f70,// 70 PAY  31 

    0xdd96bf5e,// 71 PAY  32 

    0xf67eb667,// 72 PAY  33 

    0x3c3a1daa,// 73 PAY  34 

    0xaf859d40,// 74 PAY  35 

    0x4f00dd1f,// 75 PAY  36 

    0xd1d0e712,// 76 PAY  37 

    0x4535aea6,// 77 PAY  38 

    0xd49111ce,// 78 PAY  39 

    0x00cfdb89,// 79 PAY  40 

    0x93a27741,// 80 PAY  41 

    0xd82d2464,// 81 PAY  42 

    0xba3b5c1c,// 82 PAY  43 

    0x1b35fcf0,// 83 PAY  44 

    0x3554f991,// 84 PAY  45 

    0x1c337275,// 85 PAY  46 

    0x609b12c4,// 86 PAY  47 

    0x5394dabe,// 87 PAY  48 

    0x5a77bb68,// 88 PAY  49 

    0xe1b125e8,// 89 PAY  50 

    0xca2ff296,// 90 PAY  51 

    0x9c984c61,// 91 PAY  52 

    0x7e896a54,// 92 PAY  53 

    0x53dd02d0,// 93 PAY  54 

    0x7eadb562,// 94 PAY  55 

    0x8fbd92e2,// 95 PAY  56 

    0x334ce669,// 96 PAY  57 

    0xb0f45eb0,// 97 PAY  58 

    0x23ec22ba,// 98 PAY  59 

    0xaac8a4b2,// 99 PAY  60 

    0x4bf1fa9b,// 100 PAY  61 

    0x07bbecb4,// 101 PAY  62 

    0xe71d5e67,// 102 PAY  63 

    0x7f9ae1a8,// 103 PAY  64 

    0xaaf1663d,// 104 PAY  65 

    0x7334742e,// 105 PAY  66 

    0x896a27c5,// 106 PAY  67 

    0x961ff471,// 107 PAY  68 

    0xeb172cb5,// 108 PAY  69 

    0x464e7ab1,// 109 PAY  70 

    0x46254c0b,// 110 PAY  71 

    0xe7167be1,// 111 PAY  72 

    0xca492531,// 112 PAY  73 

    0x09985603,// 113 PAY  74 

    0x7fc0507b,// 114 PAY  75 

    0x0c3de502,// 115 PAY  76 

    0x84fc822c,// 116 PAY  77 

    0xec87d0c0,// 117 PAY  78 

    0xa81cff77,// 118 PAY  79 

    0xbff8fa17,// 119 PAY  80 

    0xc5a9c3f0,// 120 PAY  81 

    0x8efc5f5d,// 121 PAY  82 

    0x630f2c00,// 122 PAY  83 

    0x1bf8afac,// 123 PAY  84 

    0x37e72f5e,// 124 PAY  85 

    0x5c92f060,// 125 PAY  86 

    0xc262ce29,// 126 PAY  87 

    0x9c856ade,// 127 PAY  88 

    0x751b00d7,// 128 PAY  89 

    0x81fa0c2d,// 129 PAY  90 

    0x2252387d,// 130 PAY  91 

    0x96953931,// 131 PAY  92 

    0x1f077641,// 132 PAY  93 

    0xcca1c566,// 133 PAY  94 

    0xb1f3b200,// 134 PAY  95 

    0x035f6c3f,// 135 PAY  96 

    0x40ae7d8e,// 136 PAY  97 

    0x5a288352,// 137 PAY  98 

    0xa72a687e,// 138 PAY  99 

    0x0448c21d,// 139 PAY 100 

    0xbb6f5487,// 140 PAY 101 

    0xb8f252df,// 141 PAY 102 

    0x74ccb5f0,// 142 PAY 103 

    0x1aece0ce,// 143 PAY 104 

    0x910edfea,// 144 PAY 105 

    0x7189e639,// 145 PAY 106 

    0xfd8e718a,// 146 PAY 107 

    0x68b29105,// 147 PAY 108 

    0x1f4be6b8,// 148 PAY 109 

    0x6e510058,// 149 PAY 110 

    0xee5a9d7f,// 150 PAY 111 

    0x5b3c13e7,// 151 PAY 112 

    0xac4ae5d3,// 152 PAY 113 

    0x0e998aa2,// 153 PAY 114 

    0x8bc26b4c,// 154 PAY 115 

    0x89273a69,// 155 PAY 116 

    0x7d779966,// 156 PAY 117 

    0xccb59f31,// 157 PAY 118 

    0x2f8fee43,// 158 PAY 119 

    0xe1416717,// 159 PAY 120 

    0x4c593f9f,// 160 PAY 121 

    0x6388fd72,// 161 PAY 122 

    0x51882379,// 162 PAY 123 

    0xb31a8e39,// 163 PAY 124 

    0x210a39dd,// 164 PAY 125 

    0x567df4b3,// 165 PAY 126 

    0xa723a060,// 166 PAY 127 

    0x682bae00,// 167 PAY 128 

    0x104eac15,// 168 PAY 129 

    0xb7fe6b27,// 169 PAY 130 

    0x017cfb34,// 170 PAY 131 

    0x4e1b6328,// 171 PAY 132 

    0x7f0ccc04,// 172 PAY 133 

    0x88daa6e3,// 173 PAY 134 

    0x6d59f5e7,// 174 PAY 135 

    0xf9e8d79d,// 175 PAY 136 

    0x0431fff6,// 176 PAY 137 

    0xeb883f40,// 177 PAY 138 

    0x5d090735,// 178 PAY 139 

    0xfa8d49d8,// 179 PAY 140 

    0x74672930,// 180 PAY 141 

    0xd8d99a54,// 181 PAY 142 

    0xba66c8fc,// 182 PAY 143 

    0x5a4767a0,// 183 PAY 144 

    0x6b2451bf,// 184 PAY 145 

    0x583abf34,// 185 PAY 146 

    0x5b27f07e,// 186 PAY 147 

    0x4a348499,// 187 PAY 148 

    0x8a76c64b,// 188 PAY 149 

    0xc848e899,// 189 PAY 150 

    0x1442dba6,// 190 PAY 151 

    0xbf383f4e,// 191 PAY 152 

    0x1805d380,// 192 PAY 153 

    0x35d3f012,// 193 PAY 154 

    0x542c818b,// 194 PAY 155 

    0xa1be5ed3,// 195 PAY 156 

    0x8dd7769b,// 196 PAY 157 

    0x762f676e,// 197 PAY 158 

    0x6c3a8867,// 198 PAY 159 

    0xc7cab5b6,// 199 PAY 160 

    0xfd387165,// 200 PAY 161 

    0x78814fb2,// 201 PAY 162 

    0x0a3ad9a0,// 202 PAY 163 

    0x5389794b,// 203 PAY 164 

    0xcae715cf,// 204 PAY 165 

    0x4206ffa9,// 205 PAY 166 

    0x650f4d0b,// 206 PAY 167 

    0xe14807b6,// 207 PAY 168 

    0x99add00c,// 208 PAY 169 

    0x1370f00d,// 209 PAY 170 

    0x657406f6,// 210 PAY 171 

    0x6d4d56d3,// 211 PAY 172 

    0x811d15b7,// 212 PAY 173 

    0x0bf9e5c9,// 213 PAY 174 

    0x4f762f39,// 214 PAY 175 

    0x47253758,// 215 PAY 176 

    0x10b2379d,// 216 PAY 177 

    0x2dc83fff,// 217 PAY 178 

    0x7239345e,// 218 PAY 179 

    0xd0a9f877,// 219 PAY 180 

    0x432a992a,// 220 PAY 181 

    0x9cd6a7dd,// 221 PAY 182 

    0xd5395ff3,// 222 PAY 183 

    0x075d2e48,// 223 PAY 184 

    0x0954b061,// 224 PAY 185 

    0xc906eb5e,// 225 PAY 186 

    0xab8375fa,// 226 PAY 187 

    0x0935ef1c,// 227 PAY 188 

    0x06af28b5,// 228 PAY 189 

    0x8ae9002c,// 229 PAY 190 

    0x7cdbc093,// 230 PAY 191 

    0x2e2ae54f,// 231 PAY 192 

    0x0f70a96d,// 232 PAY 193 

    0xb314587b,// 233 PAY 194 

    0xefc5daf8,// 234 PAY 195 

    0x9bc076c7,// 235 PAY 196 

    0x9773f685,// 236 PAY 197 

    0x53afa6ab,// 237 PAY 198 

    0xdac22fdf,// 238 PAY 199 

    0xd9a708f0,// 239 PAY 200 

    0x2df28ba8,// 240 PAY 201 

    0x12b02d50,// 241 PAY 202 

    0x5c201782,// 242 PAY 203 

    0x18ff95e0,// 243 PAY 204 

    0xf9c12193,// 244 PAY 205 

    0xa6513a8c,// 245 PAY 206 

    0x8c215bfb,// 246 PAY 207 

    0xdee9106d,// 247 PAY 208 

    0x5122db8f,// 248 PAY 209 

    0x41a38880,// 249 PAY 210 

    0x96c2c08c,// 250 PAY 211 

    0x9a130361,// 251 PAY 212 

    0x70da903f,// 252 PAY 213 

    0x9f78cf48,// 253 PAY 214 

    0x6865e75a,// 254 PAY 215 

    0xdb27ddc7,// 255 PAY 216 

    0x9cf18611,// 256 PAY 217 

    0xcdfb8bad,// 257 PAY 218 

    0x661dd859,// 258 PAY 219 

    0x36fc3421,// 259 PAY 220 

    0xcaba4698,// 260 PAY 221 

    0x4d4d32f4,// 261 PAY 222 

    0xe58cee2c,// 262 PAY 223 

    0xa1245d21,// 263 PAY 224 

    0x12a6db22,// 264 PAY 225 

    0xd3515355,// 265 PAY 226 

    0xc565a8a6,// 266 PAY 227 

    0x83790d20,// 267 PAY 228 

    0xaa784fbe,// 268 PAY 229 

    0x4e042d6e,// 269 PAY 230 

    0x39826af5,// 270 PAY 231 

    0x9c3d85f1,// 271 PAY 232 

    0x1e4f9265,// 272 PAY 233 

    0x987f8158,// 273 PAY 234 

    0x1ed46684,// 274 PAY 235 

    0x22aff49e,// 275 PAY 236 

    0xf77b90d7,// 276 PAY 237 

    0x031968d9,// 277 PAY 238 

    0x311edd04,// 278 PAY 239 

    0x2e7a4a40,// 279 PAY 240 

    0x463ecece,// 280 PAY 241 

    0xf41032da,// 281 PAY 242 

    0x1635ecf2,// 282 PAY 243 

    0x4b889296,// 283 PAY 244 

    0x9d23944f,// 284 PAY 245 

    0x42805ddd,// 285 PAY 246 

    0x02cbce32,// 286 PAY 247 

    0x3b4de8c5,// 287 PAY 248 

    0xbfe15359,// 288 PAY 249 

    0x677f5319,// 289 PAY 250 

    0x71272ff8,// 290 PAY 251 

    0x88b2d154,// 291 PAY 252 

    0x9f0130bc,// 292 PAY 253 

    0x7bcc7d06,// 293 PAY 254 

    0xee1434b5,// 294 PAY 255 

    0x12cd0abd,// 295 PAY 256 

    0x4975fcc2,// 296 PAY 257 

    0xb9ab1582,// 297 PAY 258 

    0x1e90225b,// 298 PAY 259 

    0x1f400f70,// 299 PAY 260 

    0xc6893a07,// 300 PAY 261 

    0x3f314454,// 301 PAY 262 

    0xca4045fc,// 302 PAY 263 

    0xd56674c9,// 303 PAY 264 

    0xa789b3a3,// 304 PAY 265 

    0x7f4f3d1c,// 305 PAY 266 

    0x9e10bb0d,// 306 PAY 267 

    0x70ac7c14,// 307 PAY 268 

    0x8efef134,// 308 PAY 269 

    0x2ab19480,// 309 PAY 270 

    0x954eed78,// 310 PAY 271 

    0xed8a0244,// 311 PAY 272 

    0xa30a2e68,// 312 PAY 273 

    0xf5c8b771,// 313 PAY 274 

    0xf6f0cec2,// 314 PAY 275 

    0xd3ef512b,// 315 PAY 276 

    0xa69f547d,// 316 PAY 277 

    0x0ffd8b4e,// 317 PAY 278 

    0x6d782326,// 318 PAY 279 

    0x10d34c02,// 319 PAY 280 

    0x601f684c,// 320 PAY 281 

    0xa8fdeba7,// 321 PAY 282 

    0x7d82fc7a,// 322 PAY 283 

    0x20d08fb4,// 323 PAY 284 

    0x2925892c,// 324 PAY 285 

    0x6e9e13a4,// 325 PAY 286 

    0x549ab820,// 326 PAY 287 

    0x63c6fec9,// 327 PAY 288 

    0x43707279,// 328 PAY 289 

    0xbf7a3c55,// 329 PAY 290 

    0x30696545,// 330 PAY 291 

    0xdc215c81,// 331 PAY 292 

    0x61ed6494,// 332 PAY 293 

    0x4e062b47,// 333 PAY 294 

    0x0b6d1f5f,// 334 PAY 295 

    0x657715d3,// 335 PAY 296 

    0xa2373b06,// 336 PAY 297 

    0xb183ef53,// 337 PAY 298 

    0x3c4e5545,// 338 PAY 299 

    0xbe2f2fd7,// 339 PAY 300 

    0xcd0f28ba,// 340 PAY 301 

    0x0ede6b6a,// 341 PAY 302 

    0x10fbddb8,// 342 PAY 303 

    0xc9391b86,// 343 PAY 304 

    0x97d6d358,// 344 PAY 305 

    0xe25449d8,// 345 PAY 306 

    0x1dff35db,// 346 PAY 307 

    0xcef21b91,// 347 PAY 308 

    0xcb502799,// 348 PAY 309 

    0xeb09a772,// 349 PAY 310 

    0xd28bdac0,// 350 PAY 311 

    0x1b35a946,// 351 PAY 312 

    0x6b5fb813,// 352 PAY 313 

    0x40233fd3,// 353 PAY 314 

    0x69f71886,// 354 PAY 315 

    0x54d8a8bd,// 355 PAY 316 

    0x8fab434e,// 356 PAY 317 

    0x0bb355be,// 357 PAY 318 

    0xa09dd0bb,// 358 PAY 319 

    0x30458666,// 359 PAY 320 

    0x489f19c4,// 360 PAY 321 

    0x24f656f0,// 361 PAY 322 

    0xcf3bc443,// 362 PAY 323 

    0x6067a823,// 363 PAY 324 

    0x9ba9a018,// 364 PAY 325 

    0x4fb7c7ca,// 365 PAY 326 

    0xfa2806f6,// 366 PAY 327 

    0x51463dbd,// 367 PAY 328 

    0x266a290a,// 368 PAY 329 

    0xdad4e60a,// 369 PAY 330 

    0x708604a3,// 370 PAY 331 

    0x88d84a7f,// 371 PAY 332 

    0x3e5ac9a9,// 372 PAY 333 

    0x235e3d9f,// 373 PAY 334 

    0x6447663f,// 374 PAY 335 

    0xc2f87018,// 375 PAY 336 

    0xb28e39b2,// 376 PAY 337 

    0x4085fe54,// 377 PAY 338 

    0xab9ec9c1,// 378 PAY 339 

    0xe42fcfa7,// 379 PAY 340 

    0xf5f78ff4,// 380 PAY 341 

    0xf68a204f,// 381 PAY 342 

    0xc2e12ffc,// 382 PAY 343 

    0x6c6ae378,// 383 PAY 344 

    0xbc59fd91,// 384 PAY 345 

    0x94732e91,// 385 PAY 346 

    0x8d2312d4,// 386 PAY 347 

    0x071d254d,// 387 PAY 348 

    0xa1f5165f,// 388 PAY 349 

    0xda0fff3d,// 389 PAY 350 

    0x148ca7b7,// 390 PAY 351 

    0xaf6243ea,// 391 PAY 352 

    0x359f05e6,// 392 PAY 353 

    0xa7107000,// 393 PAY 354 

/// STA is 1 words. 

/// STA num_pkts       : 28 

/// STA pkt_idx        : 43 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x6e 

    0x00ac6e1c // 394 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt30_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x03 

/// ECH pdu_tag        : 0x00 

    0x00030000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0800000f,// 3 SCX   1 

    0x8042483e,// 4 SCX   2 

    0x00005100,// 5 SCX   3 

    0xe554c192,// 6 SCX   4 

    0x2e36029a,// 7 SCX   5 

    0xbbc07892,// 8 SCX   6 

    0x9dbd9995,// 9 SCX   7 

    0x2ed286ca,// 10 SCX   8 

    0xa68a93ea,// 11 SCX   9 

    0x350037b3,// 12 SCX  10 

    0xc000b8ed,// 13 SCX  11 

    0x434c09d6,// 14 SCX  12 

    0x1b3818ec,// 15 SCX  13 

    0xd5cc2c6e,// 16 SCX  14 

    0x303ef685,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 571 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 215 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 215 

/// BFD lencrypto      : 16 

/// BFD ofstcrypto     : 88 

/// BFD (ofst+len)cry  : 104 

/// BFD ofstiv         : 32 

/// BFD ofsticv        : 480 

    0x000000d7,// 18 BFD   1 

    0x00580010,// 19 BFD   2 

    0x01e00020,// 20 BFD   3 

/// MFM is 2 words. 

/// MFM vldnibs        : b 

    0x0b003569,// 21 MFM   1 

    0x7580e390,// 22 MFM   2 

/// BDA is 144 words. 

/// BDA size     is 571 (0x23b) 

/// BDA id       is 0x15c 

    0x023b015c,// 23 BDA   1 

/// PAY Generic Data size   : 571 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x23a654b7,// 24 PAY   1 

    0x4fe1fa57,// 25 PAY   2 

    0x10f97228,// 26 PAY   3 

    0x5060b8c1,// 27 PAY   4 

    0xf9cd9e16,// 28 PAY   5 

    0xfc114b16,// 29 PAY   6 

    0x4f942479,// 30 PAY   7 

    0x85c76346,// 31 PAY   8 

    0xbe21d250,// 32 PAY   9 

    0x50db7306,// 33 PAY  10 

    0xcf614709,// 34 PAY  11 

    0x84998627,// 35 PAY  12 

    0xb9e0834b,// 36 PAY  13 

    0xc76509be,// 37 PAY  14 

    0x5a9b0d1c,// 38 PAY  15 

    0x369eaaa4,// 39 PAY  16 

    0xdaf6790e,// 40 PAY  17 

    0xac445c77,// 41 PAY  18 

    0xb6ba6810,// 42 PAY  19 

    0xd3926b07,// 43 PAY  20 

    0x302b3d81,// 44 PAY  21 

    0x298184ed,// 45 PAY  22 

    0x6cf0ccf0,// 46 PAY  23 

    0x24a8e86f,// 47 PAY  24 

    0xf80ed74a,// 48 PAY  25 

    0x2c089e0b,// 49 PAY  26 

    0x1fdd3c9e,// 50 PAY  27 

    0xcc6b88c0,// 51 PAY  28 

    0x861ccab4,// 52 PAY  29 

    0x1d00b8ce,// 53 PAY  30 

    0x4d537828,// 54 PAY  31 

    0x474d3dba,// 55 PAY  32 

    0x2055ede8,// 56 PAY  33 

    0xd8757278,// 57 PAY  34 

    0xc9b23765,// 58 PAY  35 

    0x8e870fff,// 59 PAY  36 

    0x4c38ec13,// 60 PAY  37 

    0x9d72af98,// 61 PAY  38 

    0x788bfe87,// 62 PAY  39 

    0xe10df9a8,// 63 PAY  40 

    0xd1cbc666,// 64 PAY  41 

    0xa220a256,// 65 PAY  42 

    0x77a240ff,// 66 PAY  43 

    0x3646d7cf,// 67 PAY  44 

    0x0d916670,// 68 PAY  45 

    0x7caea41e,// 69 PAY  46 

    0x8c0253c1,// 70 PAY  47 

    0xbde8eba9,// 71 PAY  48 

    0x6ea54282,// 72 PAY  49 

    0x31719bcd,// 73 PAY  50 

    0x030d0fe7,// 74 PAY  51 

    0x95b0c7a6,// 75 PAY  52 

    0x07578966,// 76 PAY  53 

    0xbeb8ae47,// 77 PAY  54 

    0xbcb5efca,// 78 PAY  55 

    0xf348c518,// 79 PAY  56 

    0x6eab1f9c,// 80 PAY  57 

    0x912e8066,// 81 PAY  58 

    0x246597cf,// 82 PAY  59 

    0xef244605,// 83 PAY  60 

    0x4baf4282,// 84 PAY  61 

    0xffcebe5f,// 85 PAY  62 

    0x89a2662a,// 86 PAY  63 

    0x70f066d9,// 87 PAY  64 

    0xbcd42656,// 88 PAY  65 

    0x95f76f9d,// 89 PAY  66 

    0x6b51a52f,// 90 PAY  67 

    0x8436f1f7,// 91 PAY  68 

    0xc5c1183a,// 92 PAY  69 

    0x88f334c0,// 93 PAY  70 

    0x6997b0b8,// 94 PAY  71 

    0x44737bba,// 95 PAY  72 

    0x54da4072,// 96 PAY  73 

    0x09cdf752,// 97 PAY  74 

    0x2a1da16d,// 98 PAY  75 

    0xcefe4e10,// 99 PAY  76 

    0x3d0ef6ee,// 100 PAY  77 

    0x836d983d,// 101 PAY  78 

    0xf71394d6,// 102 PAY  79 

    0xbb97319b,// 103 PAY  80 

    0x3401ec65,// 104 PAY  81 

    0x2c83f2a3,// 105 PAY  82 

    0xae86afc0,// 106 PAY  83 

    0x494f58cb,// 107 PAY  84 

    0x4e46ae3d,// 108 PAY  85 

    0x2bcb5b61,// 109 PAY  86 

    0xddfb7e91,// 110 PAY  87 

    0x4a8750fc,// 111 PAY  88 

    0x1b0927ab,// 112 PAY  89 

    0x413d05a5,// 113 PAY  90 

    0x692d7c13,// 114 PAY  91 

    0x28421a61,// 115 PAY  92 

    0x03f60817,// 116 PAY  93 

    0x55a094fa,// 117 PAY  94 

    0xc159a35d,// 118 PAY  95 

    0x1f468196,// 119 PAY  96 

    0xec7a55d5,// 120 PAY  97 

    0x9b4236b3,// 121 PAY  98 

    0x4cb94f02,// 122 PAY  99 

    0x22aebf68,// 123 PAY 100 

    0xdddbec70,// 124 PAY 101 

    0x957eeb0b,// 125 PAY 102 

    0xcd980a45,// 126 PAY 103 

    0x6b90d376,// 127 PAY 104 

    0xcb425232,// 128 PAY 105 

    0xab523b04,// 129 PAY 106 

    0x38ef2afb,// 130 PAY 107 

    0xa6c89718,// 131 PAY 108 

    0x5f8d49c6,// 132 PAY 109 

    0x4091aeaf,// 133 PAY 110 

    0x969a6c93,// 134 PAY 111 

    0x094ae59c,// 135 PAY 112 

    0x01fa44b0,// 136 PAY 113 

    0x6e065ef2,// 137 PAY 114 

    0x40b4dd19,// 138 PAY 115 

    0x03398b74,// 139 PAY 116 

    0x95eee99f,// 140 PAY 117 

    0xd93f9154,// 141 PAY 118 

    0x44b281ac,// 142 PAY 119 

    0x3bf552a6,// 143 PAY 120 

    0x5c707ac6,// 144 PAY 121 

    0x1799ef59,// 145 PAY 122 

    0x84d9b2b7,// 146 PAY 123 

    0xb33dca79,// 147 PAY 124 

    0x01106e4d,// 148 PAY 125 

    0x6b1c91d8,// 149 PAY 126 

    0xb6d2cb0d,// 150 PAY 127 

    0x05f6a94c,// 151 PAY 128 

    0x36301011,// 152 PAY 129 

    0x3fa25cd4,// 153 PAY 130 

    0xd1d9995a,// 154 PAY 131 

    0x383265cf,// 155 PAY 132 

    0xb745cb6a,// 156 PAY 133 

    0xbc4781e9,// 157 PAY 134 

    0xc4da061f,// 158 PAY 135 

    0x769c7142,// 159 PAY 136 

    0x0422d762,// 160 PAY 137 

    0x7ba5fa5c,// 161 PAY 138 

    0xb9024a7f,// 162 PAY 139 

    0x0b78f4c8,// 163 PAY 140 

    0x1fe4af63,// 164 PAY 141 

    0x3b81dbf0,// 165 PAY 142 

    0xf6043600,// 166 PAY 143 

/// STA is 1 words. 

/// STA num_pkts       : 6 

/// STA pkt_idx        : 105 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x53 

    0x01a55306 // 167 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt31_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x0e 

/// ECH pdu_tag        : 0x00 

    0x000e0000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv insert_icv !check_icv sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x00000011,// 3 SCX   1 

    0x80454870,// 4 SCX   2 

    0x000061c2,// 5 SCX   3 

    0x22980b94,// 6 SCX   4 

    0x1e72eadb,// 7 SCX   5 

    0xec6c6536,// 8 SCX   6 

    0x749ab9b9,// 9 SCX   7 

    0xfbeeefff,// 10 SCX   8 

    0x71b8f0c6,// 11 SCX   9 

    0x5d61c124,// 12 SCX  10 

    0xfbf23f22,// 13 SCX  11 

    0xb3e87b63,// 14 SCX  12 

    0x7d3ce26d,// 15 SCX  13 

    0xa1d01263,// 16 SCX  14 

    0x4d5c304e,// 17 SCX  15 

    0xa27b4bf0,// 18 SCX  16 

    0x2f913d52,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1175 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 701 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 701 

/// BFD lencrypto      : 200 

/// BFD ofstcrypto     : 184 

/// BFD (ofst+len)cry  : 384 

/// BFD ofstiv         : 40 

/// BFD ofsticv        : 1152 

    0x000002bd,// 20 BFD   1 

    0x00b800c8,// 21 BFD   2 

    0x04800028,// 22 BFD   3 

/// MFM is 4 words. 

/// MFM vldnibs        : 18 

    0x18008efc,// 23 MFM   1 

    0x91c20bf8,// 24 MFM   2 

    0x3cae7dd4,// 25 MFM   3 

    0x633f0000,// 26 MFM   4 

/// BDA is 295 words. 

/// BDA size     is 1175 (0x497) 

/// BDA id       is 0x2b67 

    0x04972b67,// 27 BDA   1 

/// PAY Generic Data size   : 1175 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0xc0b9698d,// 28 PAY   1 

    0x91d3fe47,// 29 PAY   2 

    0x9dbccc99,// 30 PAY   3 

    0x345bc19a,// 31 PAY   4 

    0xefe25556,// 32 PAY   5 

    0x5aac0377,// 33 PAY   6 

    0xa4df94f1,// 34 PAY   7 

    0x99a50150,// 35 PAY   8 

    0xb93b7c4a,// 36 PAY   9 

    0xf8d430c7,// 37 PAY  10 

    0xbed7b2ab,// 38 PAY  11 

    0x513089ca,// 39 PAY  12 

    0xa542a31f,// 40 PAY  13 

    0xda2e6a87,// 41 PAY  14 

    0x85024d40,// 42 PAY  15 

    0x6644c0e3,// 43 PAY  16 

    0x71a348b0,// 44 PAY  17 

    0x9b329b00,// 45 PAY  18 

    0x979b37d6,// 46 PAY  19 

    0xb4ec20e9,// 47 PAY  20 

    0xd46a738d,// 48 PAY  21 

    0x1dac5041,// 49 PAY  22 

    0x61e7ed33,// 50 PAY  23 

    0x5f53265b,// 51 PAY  24 

    0x64ae5326,// 52 PAY  25 

    0xd1556110,// 53 PAY  26 

    0x60e74c10,// 54 PAY  27 

    0x0facacdf,// 55 PAY  28 

    0xa7b61a02,// 56 PAY  29 

    0x140df53f,// 57 PAY  30 

    0x55ba32ed,// 58 PAY  31 

    0x1b911dd9,// 59 PAY  32 

    0xd2c7bb7b,// 60 PAY  33 

    0x12793d36,// 61 PAY  34 

    0x04937993,// 62 PAY  35 

    0xee940935,// 63 PAY  36 

    0xd487b034,// 64 PAY  37 

    0xf804c2a2,// 65 PAY  38 

    0xa5fbddc1,// 66 PAY  39 

    0xa177e7ea,// 67 PAY  40 

    0xaeeec320,// 68 PAY  41 

    0xb804c3e2,// 69 PAY  42 

    0x7fef1071,// 70 PAY  43 

    0x7a2d41e4,// 71 PAY  44 

    0xfc0d21d3,// 72 PAY  45 

    0x0afed52f,// 73 PAY  46 

    0xa1736ce3,// 74 PAY  47 

    0xc142e4b7,// 75 PAY  48 

    0x2a6e30c6,// 76 PAY  49 

    0xb39e2daa,// 77 PAY  50 

    0x98ffb906,// 78 PAY  51 

    0x82549d47,// 79 PAY  52 

    0xdc68ed7c,// 80 PAY  53 

    0x11f68e9f,// 81 PAY  54 

    0x889ecb26,// 82 PAY  55 

    0x18ac2985,// 83 PAY  56 

    0xc05a8f19,// 84 PAY  57 

    0x0c134326,// 85 PAY  58 

    0xfbef3869,// 86 PAY  59 

    0xe9f5f122,// 87 PAY  60 

    0x1b07af6c,// 88 PAY  61 

    0xd19e56c2,// 89 PAY  62 

    0xb8baa3ee,// 90 PAY  63 

    0xfe7d3682,// 91 PAY  64 

    0xefe4c3a1,// 92 PAY  65 

    0xfca058cd,// 93 PAY  66 

    0x5fc90c6c,// 94 PAY  67 

    0xc1fdaf88,// 95 PAY  68 

    0x1e55b670,// 96 PAY  69 

    0xd4ba0119,// 97 PAY  70 

    0x796bd88c,// 98 PAY  71 

    0xd2dda763,// 99 PAY  72 

    0x2b0d7598,// 100 PAY  73 

    0x42b5d035,// 101 PAY  74 

    0x4cf4425e,// 102 PAY  75 

    0x4de18de8,// 103 PAY  76 

    0xf610c1b2,// 104 PAY  77 

    0x0deef352,// 105 PAY  78 

    0x7c835554,// 106 PAY  79 

    0x593c53a7,// 107 PAY  80 

    0xe67f9887,// 108 PAY  81 

    0x510d1d1e,// 109 PAY  82 

    0xe5e3b9df,// 110 PAY  83 

    0x8c2af995,// 111 PAY  84 

    0x1fe359a4,// 112 PAY  85 

    0xa9674bea,// 113 PAY  86 

    0x4ead9d80,// 114 PAY  87 

    0x5a58b6ba,// 115 PAY  88 

    0xb488c824,// 116 PAY  89 

    0x3add49b8,// 117 PAY  90 

    0xb21593f2,// 118 PAY  91 

    0x8c5f1c9d,// 119 PAY  92 

    0x14ea3567,// 120 PAY  93 

    0x029c393d,// 121 PAY  94 

    0x144c464f,// 122 PAY  95 

    0x71f69ce4,// 123 PAY  96 

    0xee55d621,// 124 PAY  97 

    0xc9fc6bf4,// 125 PAY  98 

    0x6f6fa126,// 126 PAY  99 

    0xbfeff0a7,// 127 PAY 100 

    0xfe9811a7,// 128 PAY 101 

    0xb63fcb22,// 129 PAY 102 

    0x389fbdaa,// 130 PAY 103 

    0xf5d6e886,// 131 PAY 104 

    0xc30b05a3,// 132 PAY 105 

    0x4e5ab0e9,// 133 PAY 106 

    0x9f54d24d,// 134 PAY 107 

    0x38fae6c1,// 135 PAY 108 

    0x67cb9d76,// 136 PAY 109 

    0xc78e5169,// 137 PAY 110 

    0x88f74f7e,// 138 PAY 111 

    0xcbcd211b,// 139 PAY 112 

    0xe02c5729,// 140 PAY 113 

    0xd7572720,// 141 PAY 114 

    0xd785241e,// 142 PAY 115 

    0x3617f120,// 143 PAY 116 

    0x7f931991,// 144 PAY 117 

    0x0facf5eb,// 145 PAY 118 

    0x08ec273d,// 146 PAY 119 

    0x39f0574a,// 147 PAY 120 

    0xaed03c4a,// 148 PAY 121 

    0x386218fd,// 149 PAY 122 

    0x7da04401,// 150 PAY 123 

    0xdb25b1f1,// 151 PAY 124 

    0xefb689a9,// 152 PAY 125 

    0xdb5e3fb7,// 153 PAY 126 

    0xc15d08c7,// 154 PAY 127 

    0x8dd20ce4,// 155 PAY 128 

    0x1ba21329,// 156 PAY 129 

    0x613b247a,// 157 PAY 130 

    0x3f45b009,// 158 PAY 131 

    0xd7f20566,// 159 PAY 132 

    0x54e4b6ff,// 160 PAY 133 

    0x038ef826,// 161 PAY 134 

    0xf0735369,// 162 PAY 135 

    0x176eb81a,// 163 PAY 136 

    0x81bcf51d,// 164 PAY 137 

    0x09dd71e2,// 165 PAY 138 

    0x3ca34708,// 166 PAY 139 

    0x9ed60315,// 167 PAY 140 

    0xf9ddaa4e,// 168 PAY 141 

    0xe8548d3a,// 169 PAY 142 

    0x1d33acfe,// 170 PAY 143 

    0xe9ce01b5,// 171 PAY 144 

    0xb84189e5,// 172 PAY 145 

    0x85391d98,// 173 PAY 146 

    0x6cece17d,// 174 PAY 147 

    0x761939b0,// 175 PAY 148 

    0x40ad74dc,// 176 PAY 149 

    0x2933a88e,// 177 PAY 150 

    0x774deb6d,// 178 PAY 151 

    0x469e8370,// 179 PAY 152 

    0x34ef951d,// 180 PAY 153 

    0xb558b748,// 181 PAY 154 

    0x3f5f046a,// 182 PAY 155 

    0xbba2bb1a,// 183 PAY 156 

    0x4c2001d1,// 184 PAY 157 

    0xdb328285,// 185 PAY 158 

    0xc5d73b1f,// 186 PAY 159 

    0x4cf240fe,// 187 PAY 160 

    0x26b90fa9,// 188 PAY 161 

    0x52113337,// 189 PAY 162 

    0x8c03c598,// 190 PAY 163 

    0x531101c1,// 191 PAY 164 

    0xf2031bc5,// 192 PAY 165 

    0x869a3902,// 193 PAY 166 

    0xe8e1de58,// 194 PAY 167 

    0xe18f674b,// 195 PAY 168 

    0xc1ad7739,// 196 PAY 169 

    0x279812a1,// 197 PAY 170 

    0xba281bd6,// 198 PAY 171 

    0xbfa371c2,// 199 PAY 172 

    0x0d5c1b53,// 200 PAY 173 

    0xa5f5c98f,// 201 PAY 174 

    0x5e47e5a3,// 202 PAY 175 

    0x5761f8be,// 203 PAY 176 

    0x6a5e50bc,// 204 PAY 177 

    0xe4ef8b50,// 205 PAY 178 

    0x9a01d152,// 206 PAY 179 

    0x88a615f1,// 207 PAY 180 

    0xe268227f,// 208 PAY 181 

    0x64394bf4,// 209 PAY 182 

    0x99d194d8,// 210 PAY 183 

    0x058533bc,// 211 PAY 184 

    0x1c4228b3,// 212 PAY 185 

    0xcf098f46,// 213 PAY 186 

    0x5ea49c24,// 214 PAY 187 

    0x33b2283c,// 215 PAY 188 

    0xffbae27a,// 216 PAY 189 

    0xd7884843,// 217 PAY 190 

    0x469a0c97,// 218 PAY 191 

    0xe396a31e,// 219 PAY 192 

    0x494df5a0,// 220 PAY 193 

    0xf7659839,// 221 PAY 194 

    0x1833c568,// 222 PAY 195 

    0x82f93d36,// 223 PAY 196 

    0x1e500d7d,// 224 PAY 197 

    0xa1774794,// 225 PAY 198 

    0x8f1d65df,// 226 PAY 199 

    0x07c590f6,// 227 PAY 200 

    0x9fbc1004,// 228 PAY 201 

    0xc121c18e,// 229 PAY 202 

    0xf45e503c,// 230 PAY 203 

    0x0cd326cf,// 231 PAY 204 

    0x12a3f678,// 232 PAY 205 

    0x906e7296,// 233 PAY 206 

    0x568588b1,// 234 PAY 207 

    0x506016bc,// 235 PAY 208 

    0xab794ef5,// 236 PAY 209 

    0xcc97b91a,// 237 PAY 210 

    0xea3a10b4,// 238 PAY 211 

    0xf4e2dae3,// 239 PAY 212 

    0x16d39aab,// 240 PAY 213 

    0x33497a03,// 241 PAY 214 

    0xf84cdfb4,// 242 PAY 215 

    0xf759353f,// 243 PAY 216 

    0x968d5c3e,// 244 PAY 217 

    0xcf3fae3a,// 245 PAY 218 

    0x35edc071,// 246 PAY 219 

    0x0765cf38,// 247 PAY 220 

    0xc31e3ab5,// 248 PAY 221 

    0xdbc23bf4,// 249 PAY 222 

    0x10423526,// 250 PAY 223 

    0x53b461cd,// 251 PAY 224 

    0xdfe41662,// 252 PAY 225 

    0xa8e2b450,// 253 PAY 226 

    0xef102264,// 254 PAY 227 

    0x1b2247b8,// 255 PAY 228 

    0x94706fe5,// 256 PAY 229 

    0x264f406c,// 257 PAY 230 

    0xb73f9318,// 258 PAY 231 

    0xf16acd04,// 259 PAY 232 

    0x8bff9605,// 260 PAY 233 

    0x93cdf187,// 261 PAY 234 

    0x6408039b,// 262 PAY 235 

    0xfba46069,// 263 PAY 236 

    0x6ffb8c23,// 264 PAY 237 

    0xe2cf1ff5,// 265 PAY 238 

    0xd0e8f5fa,// 266 PAY 239 

    0xef3f52a5,// 267 PAY 240 

    0x010de071,// 268 PAY 241 

    0xb426ac9d,// 269 PAY 242 

    0x773f44ab,// 270 PAY 243 

    0x53eb5b6f,// 271 PAY 244 

    0x10039187,// 272 PAY 245 

    0x99afe9d7,// 273 PAY 246 

    0x83cf8cd1,// 274 PAY 247 

    0x2ff4c20b,// 275 PAY 248 

    0x1b46ce4b,// 276 PAY 249 

    0x55b193ba,// 277 PAY 250 

    0xc5b62717,// 278 PAY 251 

    0xf74749e5,// 279 PAY 252 

    0x63d25e51,// 280 PAY 253 

    0x5cb7916a,// 281 PAY 254 

    0x014b36a6,// 282 PAY 255 

    0xde041fd8,// 283 PAY 256 

    0x6445d734,// 284 PAY 257 

    0x905de24b,// 285 PAY 258 

    0xe87f9af9,// 286 PAY 259 

    0x54bdab44,// 287 PAY 260 

    0xe5ee39e7,// 288 PAY 261 

    0xcf709848,// 289 PAY 262 

    0x4b01555b,// 290 PAY 263 

    0xfac353e3,// 291 PAY 264 

    0xf2d089fa,// 292 PAY 265 

    0x40aeb3b4,// 293 PAY 266 

    0x6c8016e8,// 294 PAY 267 

    0xc04b74ec,// 295 PAY 268 

    0x6712bcac,// 296 PAY 269 

    0x989278e3,// 297 PAY 270 

    0x93da1293,// 298 PAY 271 

    0x94b9573c,// 299 PAY 272 

    0x138ebc7d,// 300 PAY 273 

    0xf61b4bce,// 301 PAY 274 

    0x853c23cf,// 302 PAY 275 

    0x6affcc29,// 303 PAY 276 

    0xb8cbdab4,// 304 PAY 277 

    0x08ab97c3,// 305 PAY 278 

    0x15ee197b,// 306 PAY 279 

    0x554b3358,// 307 PAY 280 

    0x091164ef,// 308 PAY 281 

    0x0953d51e,// 309 PAY 282 

    0x154732e6,// 310 PAY 283 

    0xbab957a5,// 311 PAY 284 

    0x3b02de3b,// 312 PAY 285 

    0xb34a1b6a,// 313 PAY 286 

    0x9fd800b5,// 314 PAY 287 

    0xca315db8,// 315 PAY 288 

    0xf3f9c461,// 316 PAY 289 

    0x2c0d6593,// 317 PAY 290 

    0x79c92fcc,// 318 PAY 291 

    0xe736dcf7,// 319 PAY 292 

    0x13033f50,// 320 PAY 293 

    0x32e5ba00,// 321 PAY 294 

/// STA is 1 words. 

/// STA num_pkts       : 179 

/// STA pkt_idx        : 154 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xb8 

    0x0269b8b3 // 322 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt32_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x0a 

/// ECH pdu_tag        : 0x00 

    0x000a0000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv !check_icv sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x08000011,// 3 SCX   1 

    0x804548f5,// 4 SCX   2 

    0x000043c2,// 5 SCX   3 

    0x07bd12f1,// 6 SCX   4 

    0x641af403,// 7 SCX   5 

    0xe9c10c4e,// 8 SCX   6 

    0x786fc2e2,// 9 SCX   7 

    0xccf6c305,// 10 SCX   8 

    0x4c510960,// 11 SCX   9 

    0xe02b8e01,// 12 SCX  10 

    0xeb57f924,// 13 SCX  11 

    0xdf531721,// 14 SCX  12 

    0xf31f4f65,// 15 SCX  13 

    0xaf56675e,// 16 SCX  14 

    0xcefdfa57,// 17 SCX  15 

    0x3d584de7,// 18 SCX  16 

    0x7cbea924,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1717 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 415 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 415 

/// BFD lencrypto      : 16 

/// BFD ofstcrypto     : 396 

/// BFD (ofst+len)cry  : 412 

/// BFD ofstiv         : 184 

/// BFD ofsticv        : 512 

    0x0000019f,// 20 BFD   1 

    0x018c0010,// 21 BFD   2 

    0x020000b8,// 22 BFD   3 

/// MFM is 8 words. 

/// MFM vldnibs        : 39 

    0x390088ca,// 23 MFM   1 

    0x890d2f48,// 24 MFM   2 

    0x9118b1dc,// 25 MFM   3 

    0x959bbfcb,// 26 MFM   4 

    0x598e9573,// 27 MFM   5 

    0x2070536e,// 28 MFM   6 

    0x6afbd012,// 29 MFM   7 

    0x4f962000,// 30 MFM   8 

/// BDA is 431 words. 

/// BDA size     is 1717 (0x6b5) 

/// BDA id       is 0x1659 

    0x06b51659,// 31 BDA   1 

/// PAY Generic Data size   : 1717 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0xcb708fb6,// 32 PAY   1 

    0xcc3f97cd,// 33 PAY   2 

    0x87769167,// 34 PAY   3 

    0x6797b0a7,// 35 PAY   4 

    0xb15b5efd,// 36 PAY   5 

    0x490eabe7,// 37 PAY   6 

    0xbdf0e28f,// 38 PAY   7 

    0x93482352,// 39 PAY   8 

    0x87aed7bd,// 40 PAY   9 

    0x47ab4638,// 41 PAY  10 

    0xceb01282,// 42 PAY  11 

    0x78b4e3f9,// 43 PAY  12 

    0x048d4678,// 44 PAY  13 

    0x9858ae62,// 45 PAY  14 

    0xf628e0c4,// 46 PAY  15 

    0xda653e77,// 47 PAY  16 

    0x7ad419c0,// 48 PAY  17 

    0xf9450080,// 49 PAY  18 

    0xa70f76de,// 50 PAY  19 

    0x0814d024,// 51 PAY  20 

    0x77ce2440,// 52 PAY  21 

    0x4dd80348,// 53 PAY  22 

    0xb3615fce,// 54 PAY  23 

    0xa812ed65,// 55 PAY  24 

    0x708cd149,// 56 PAY  25 

    0xcd205567,// 57 PAY  26 

    0x9bcf9443,// 58 PAY  27 

    0xb042395b,// 59 PAY  28 

    0xe7b72cff,// 60 PAY  29 

    0x4347b12f,// 61 PAY  30 

    0x44131d62,// 62 PAY  31 

    0x391b023c,// 63 PAY  32 

    0x884b452d,// 64 PAY  33 

    0x0a640e09,// 65 PAY  34 

    0x985f0fbd,// 66 PAY  35 

    0x6c0343dc,// 67 PAY  36 

    0x6a9d170e,// 68 PAY  37 

    0xa0bb88d3,// 69 PAY  38 

    0x566a0bfb,// 70 PAY  39 

    0x1eb398eb,// 71 PAY  40 

    0x758be03f,// 72 PAY  41 

    0xaa3ecec4,// 73 PAY  42 

    0x3488bc9e,// 74 PAY  43 

    0x8de0e85b,// 75 PAY  44 

    0xbfb71c72,// 76 PAY  45 

    0xb4121330,// 77 PAY  46 

    0x40c47c66,// 78 PAY  47 

    0xf6427592,// 79 PAY  48 

    0x8b35b8fa,// 80 PAY  49 

    0x3d426d15,// 81 PAY  50 

    0xc4e46513,// 82 PAY  51 

    0x6da3342e,// 83 PAY  52 

    0x0380c97c,// 84 PAY  53 

    0x56ec9841,// 85 PAY  54 

    0x24357a77,// 86 PAY  55 

    0xc47722ca,// 87 PAY  56 

    0x98f8731d,// 88 PAY  57 

    0x080eb503,// 89 PAY  58 

    0xfd55f456,// 90 PAY  59 

    0x3b6c5a76,// 91 PAY  60 

    0x59c1a2fc,// 92 PAY  61 

    0xa8f90ffd,// 93 PAY  62 

    0xe924390c,// 94 PAY  63 

    0x755edd8d,// 95 PAY  64 

    0x0946f8fd,// 96 PAY  65 

    0xf42586e1,// 97 PAY  66 

    0x276e9621,// 98 PAY  67 

    0xc6e37a62,// 99 PAY  68 

    0xdc66a414,// 100 PAY  69 

    0x0d0e1348,// 101 PAY  70 

    0xe101b6fc,// 102 PAY  71 

    0xe2d0b0fc,// 103 PAY  72 

    0xfc29ef1a,// 104 PAY  73 

    0xa3218286,// 105 PAY  74 

    0xc34c76af,// 106 PAY  75 

    0x81674056,// 107 PAY  76 

    0xf1f83950,// 108 PAY  77 

    0xe8490a03,// 109 PAY  78 

    0xec7f089c,// 110 PAY  79 

    0xaba41b29,// 111 PAY  80 

    0x4921e315,// 112 PAY  81 

    0xa4851790,// 113 PAY  82 

    0x527337cc,// 114 PAY  83 

    0x4da83836,// 115 PAY  84 

    0xf389b714,// 116 PAY  85 

    0x670044e7,// 117 PAY  86 

    0xafc85df1,// 118 PAY  87 

    0x6b6f1566,// 119 PAY  88 

    0xe1560309,// 120 PAY  89 

    0xf79ef567,// 121 PAY  90 

    0xcefddcee,// 122 PAY  91 

    0x7c8c3189,// 123 PAY  92 

    0xfef402fa,// 124 PAY  93 

    0xf92b91a6,// 125 PAY  94 

    0xd60010df,// 126 PAY  95 

    0xed4e230c,// 127 PAY  96 

    0xdee30f98,// 128 PAY  97 

    0x86d49486,// 129 PAY  98 

    0xbdcae232,// 130 PAY  99 

    0x5b59bd83,// 131 PAY 100 

    0x708a6a18,// 132 PAY 101 

    0x41d7308c,// 133 PAY 102 

    0xdd5a7d95,// 134 PAY 103 

    0xe1802f07,// 135 PAY 104 

    0x496bc812,// 136 PAY 105 

    0x148de4dd,// 137 PAY 106 

    0xbf7e795b,// 138 PAY 107 

    0xa4d2753a,// 139 PAY 108 

    0x2ca5c862,// 140 PAY 109 

    0xb71c8fb0,// 141 PAY 110 

    0xf614558a,// 142 PAY 111 

    0xaf9a73c4,// 143 PAY 112 

    0x1ff36370,// 144 PAY 113 

    0xfe7de949,// 145 PAY 114 

    0xef967870,// 146 PAY 115 

    0x5d8293e5,// 147 PAY 116 

    0xdaa4d0ed,// 148 PAY 117 

    0xa3ede4ed,// 149 PAY 118 

    0x34d6ce94,// 150 PAY 119 

    0xc0445f55,// 151 PAY 120 

    0x67db0668,// 152 PAY 121 

    0xf1624832,// 153 PAY 122 

    0x501c5058,// 154 PAY 123 

    0x39c5f79c,// 155 PAY 124 

    0x1109e017,// 156 PAY 125 

    0x5a1ec6ee,// 157 PAY 126 

    0x369d95ad,// 158 PAY 127 

    0x2d49be40,// 159 PAY 128 

    0x45494d1e,// 160 PAY 129 

    0x839a2ebe,// 161 PAY 130 

    0x5aea56e7,// 162 PAY 131 

    0x04ff5791,// 163 PAY 132 

    0xdb54db4a,// 164 PAY 133 

    0x84683829,// 165 PAY 134 

    0xc2bf8539,// 166 PAY 135 

    0x76a056e7,// 167 PAY 136 

    0xa46686dc,// 168 PAY 137 

    0x4fdf6530,// 169 PAY 138 

    0x669d73ff,// 170 PAY 139 

    0x6d8611c2,// 171 PAY 140 

    0xe0202df8,// 172 PAY 141 

    0xedb83a2a,// 173 PAY 142 

    0xab2ed3ab,// 174 PAY 143 

    0x356bfc49,// 175 PAY 144 

    0xe3e71992,// 176 PAY 145 

    0xfa4b0aee,// 177 PAY 146 

    0x296b43a0,// 178 PAY 147 

    0x3ed82008,// 179 PAY 148 

    0xad64e42f,// 180 PAY 149 

    0xde826f67,// 181 PAY 150 

    0x89feeb58,// 182 PAY 151 

    0x82ec627a,// 183 PAY 152 

    0x03af211c,// 184 PAY 153 

    0x0d992ce1,// 185 PAY 154 

    0xe3a903f2,// 186 PAY 155 

    0xcd9ce720,// 187 PAY 156 

    0x5e642533,// 188 PAY 157 

    0x6ac930dc,// 189 PAY 158 

    0x372c5833,// 190 PAY 159 

    0xe5f7e2c4,// 191 PAY 160 

    0x78e662f3,// 192 PAY 161 

    0xb20ac4bb,// 193 PAY 162 

    0x28b671d0,// 194 PAY 163 

    0x9764febd,// 195 PAY 164 

    0xab4e3a7e,// 196 PAY 165 

    0xbe2309a4,// 197 PAY 166 

    0x9319950d,// 198 PAY 167 

    0x9067a976,// 199 PAY 168 

    0xe332ed3f,// 200 PAY 169 

    0x00925daa,// 201 PAY 170 

    0x3500e2d8,// 202 PAY 171 

    0x4d4b4bb4,// 203 PAY 172 

    0x7bca1e2e,// 204 PAY 173 

    0xf81317f1,// 205 PAY 174 

    0x228a9dc0,// 206 PAY 175 

    0x2f2e290f,// 207 PAY 176 

    0x0c3f0465,// 208 PAY 177 

    0x9c816185,// 209 PAY 178 

    0x76ef3291,// 210 PAY 179 

    0xcb524dcc,// 211 PAY 180 

    0x58a94e24,// 212 PAY 181 

    0xcbf6cf59,// 213 PAY 182 

    0x2e44ebf8,// 214 PAY 183 

    0x2ed209ea,// 215 PAY 184 

    0x49eb1917,// 216 PAY 185 

    0x7841a5a4,// 217 PAY 186 

    0x5bedfcb2,// 218 PAY 187 

    0x2db7683e,// 219 PAY 188 

    0xf59a2dd8,// 220 PAY 189 

    0xaf37d5a5,// 221 PAY 190 

    0x2d0ce308,// 222 PAY 191 

    0x527a9320,// 223 PAY 192 

    0x73b8c864,// 224 PAY 193 

    0x4f9464e0,// 225 PAY 194 

    0xf27c60ff,// 226 PAY 195 

    0xf7b85b63,// 227 PAY 196 

    0x352dd401,// 228 PAY 197 

    0x614a17b3,// 229 PAY 198 

    0xd4bfdfe5,// 230 PAY 199 

    0x6fc92e8e,// 231 PAY 200 

    0xda538c7d,// 232 PAY 201 

    0x1425cd9e,// 233 PAY 202 

    0x69e8f6cb,// 234 PAY 203 

    0x7bbc0d8e,// 235 PAY 204 

    0x8c378b8b,// 236 PAY 205 

    0x671aa0cb,// 237 PAY 206 

    0x33880aff,// 238 PAY 207 

    0x4327f49d,// 239 PAY 208 

    0x3df71093,// 240 PAY 209 

    0x54f1c138,// 241 PAY 210 

    0x2bf61121,// 242 PAY 211 

    0xdc8b2b6a,// 243 PAY 212 

    0x73bc093e,// 244 PAY 213 

    0xae9d0693,// 245 PAY 214 

    0x16af64c4,// 246 PAY 215 

    0xe18e1af4,// 247 PAY 216 

    0x9aea380b,// 248 PAY 217 

    0x9868d705,// 249 PAY 218 

    0xa9a0d7e3,// 250 PAY 219 

    0xe1fb86d8,// 251 PAY 220 

    0x343454a0,// 252 PAY 221 

    0x00e4363b,// 253 PAY 222 

    0x3bdf14ed,// 254 PAY 223 

    0x05ead44b,// 255 PAY 224 

    0x027c2938,// 256 PAY 225 

    0xee210b2e,// 257 PAY 226 

    0x91cd5ff4,// 258 PAY 227 

    0x3b74e469,// 259 PAY 228 

    0x6d8afd4f,// 260 PAY 229 

    0x4f6e5f43,// 261 PAY 230 

    0x96cbc1ef,// 262 PAY 231 

    0x24f16789,// 263 PAY 232 

    0x91652e65,// 264 PAY 233 

    0xceb360a4,// 265 PAY 234 

    0xa0770ee5,// 266 PAY 235 

    0x0403f0d4,// 267 PAY 236 

    0x558315c4,// 268 PAY 237 

    0x583d3d6e,// 269 PAY 238 

    0xf38285ab,// 270 PAY 239 

    0x2722b3b2,// 271 PAY 240 

    0x9022eaac,// 272 PAY 241 

    0xebedbd1a,// 273 PAY 242 

    0xa7c2c18b,// 274 PAY 243 

    0x4b55ee4c,// 275 PAY 244 

    0xfb872784,// 276 PAY 245 

    0xda03cbe5,// 277 PAY 246 

    0x82856583,// 278 PAY 247 

    0x1a78503b,// 279 PAY 248 

    0x47a2a654,// 280 PAY 249 

    0x766f965f,// 281 PAY 250 

    0xd7898c7e,// 282 PAY 251 

    0xf58e245a,// 283 PAY 252 

    0x2f1ed373,// 284 PAY 253 

    0x86f35c3d,// 285 PAY 254 

    0xfcb22a49,// 286 PAY 255 

    0x86d72692,// 287 PAY 256 

    0xeafc60db,// 288 PAY 257 

    0xafe7f4d6,// 289 PAY 258 

    0x9c806667,// 290 PAY 259 

    0x215cd579,// 291 PAY 260 

    0x8d6f58bc,// 292 PAY 261 

    0x4724512c,// 293 PAY 262 

    0x4a8bd6c8,// 294 PAY 263 

    0xd07247e1,// 295 PAY 264 

    0xd4acf821,// 296 PAY 265 

    0xc3bf11ba,// 297 PAY 266 

    0x6ad629d3,// 298 PAY 267 

    0xbc3d305c,// 299 PAY 268 

    0x98829e69,// 300 PAY 269 

    0xd4762a42,// 301 PAY 270 

    0x2184da8f,// 302 PAY 271 

    0x1a3eb327,// 303 PAY 272 

    0x22c68361,// 304 PAY 273 

    0xf0170121,// 305 PAY 274 

    0x00ba7401,// 306 PAY 275 

    0xf7ebfd3e,// 307 PAY 276 

    0x2f12af7e,// 308 PAY 277 

    0x04882835,// 309 PAY 278 

    0xb7935d08,// 310 PAY 279 

    0xb82bacb4,// 311 PAY 280 

    0x9bb4d163,// 312 PAY 281 

    0x79dfb8fd,// 313 PAY 282 

    0x55d600c9,// 314 PAY 283 

    0xd995cf71,// 315 PAY 284 

    0xd317307c,// 316 PAY 285 

    0x848e1d3b,// 317 PAY 286 

    0x598bc1a5,// 318 PAY 287 

    0x7d737d01,// 319 PAY 288 

    0x302fe7cc,// 320 PAY 289 

    0x121e3b87,// 321 PAY 290 

    0x09184172,// 322 PAY 291 

    0x42d89f5a,// 323 PAY 292 

    0x288f0ca4,// 324 PAY 293 

    0x7fdff556,// 325 PAY 294 

    0x639dbe1b,// 326 PAY 295 

    0x3571583c,// 327 PAY 296 

    0xe07c3a96,// 328 PAY 297 

    0xe297f4b9,// 329 PAY 298 

    0x820cfd3e,// 330 PAY 299 

    0x01059d53,// 331 PAY 300 

    0x361fdc67,// 332 PAY 301 

    0xcb1a5fb0,// 333 PAY 302 

    0x5a5d6709,// 334 PAY 303 

    0x405e9c78,// 335 PAY 304 

    0x1929046b,// 336 PAY 305 

    0x24762d47,// 337 PAY 306 

    0x7ce8c9e9,// 338 PAY 307 

    0xdc6b6ffb,// 339 PAY 308 

    0xe18a6fba,// 340 PAY 309 

    0xad6b8018,// 341 PAY 310 

    0x5b715b71,// 342 PAY 311 

    0x807f3089,// 343 PAY 312 

    0xc42d3ee3,// 344 PAY 313 

    0xfb553a7a,// 345 PAY 314 

    0xca9c59bc,// 346 PAY 315 

    0x13885e0d,// 347 PAY 316 

    0xc7c51533,// 348 PAY 317 

    0x0f15015a,// 349 PAY 318 

    0x8f8dfc0b,// 350 PAY 319 

    0xfa3aed2f,// 351 PAY 320 

    0x3112277d,// 352 PAY 321 

    0x596f70c1,// 353 PAY 322 

    0x10326c58,// 354 PAY 323 

    0x9c933db4,// 355 PAY 324 

    0x1eb0a115,// 356 PAY 325 

    0xa508477a,// 357 PAY 326 

    0x6d776fb9,// 358 PAY 327 

    0x712836c4,// 359 PAY 328 

    0x03ab5d77,// 360 PAY 329 

    0x310bbe49,// 361 PAY 330 

    0x257e3bf8,// 362 PAY 331 

    0x0a5bc5f5,// 363 PAY 332 

    0xa8c9678a,// 364 PAY 333 

    0xfcfd89a4,// 365 PAY 334 

    0x728d0738,// 366 PAY 335 

    0x3d57f376,// 367 PAY 336 

    0x5946c3be,// 368 PAY 337 

    0xb51b4fc9,// 369 PAY 338 

    0x98ac4917,// 370 PAY 339 

    0x2903b967,// 371 PAY 340 

    0xdd3da8a7,// 372 PAY 341 

    0x54296891,// 373 PAY 342 

    0xaff94688,// 374 PAY 343 

    0xb0ae5696,// 375 PAY 344 

    0xddaef993,// 376 PAY 345 

    0x78d248b9,// 377 PAY 346 

    0x1992a810,// 378 PAY 347 

    0xb366b5b4,// 379 PAY 348 

    0x325802e5,// 380 PAY 349 

    0x348fa571,// 381 PAY 350 

    0x0ed7d0b0,// 382 PAY 351 

    0x7ee6244e,// 383 PAY 352 

    0x46caf135,// 384 PAY 353 

    0x452fdbae,// 385 PAY 354 

    0x2bc2dcff,// 386 PAY 355 

    0x4a493acb,// 387 PAY 356 

    0x4678bbf7,// 388 PAY 357 

    0x4e25fd57,// 389 PAY 358 

    0x7b66335d,// 390 PAY 359 

    0x405d3ff4,// 391 PAY 360 

    0x7d5bb931,// 392 PAY 361 

    0x52ef9a76,// 393 PAY 362 

    0x8181b40b,// 394 PAY 363 

    0xff287703,// 395 PAY 364 

    0x478903c7,// 396 PAY 365 

    0x5d15cf24,// 397 PAY 366 

    0xbad10cd5,// 398 PAY 367 

    0xd0ab45b8,// 399 PAY 368 

    0xab37ff49,// 400 PAY 369 

    0xbd7ed0b0,// 401 PAY 370 

    0xf8e68554,// 402 PAY 371 

    0x099f9165,// 403 PAY 372 

    0xada0d06b,// 404 PAY 373 

    0x15146088,// 405 PAY 374 

    0x05966173,// 406 PAY 375 

    0x3560d1ae,// 407 PAY 376 

    0x67dc6ff0,// 408 PAY 377 

    0x7c56a6c0,// 409 PAY 378 

    0x8fc5a114,// 410 PAY 379 

    0x17515eb7,// 411 PAY 380 

    0xfeec1beb,// 412 PAY 381 

    0xbf299699,// 413 PAY 382 

    0xc9ea6a31,// 414 PAY 383 

    0x88399cc3,// 415 PAY 384 

    0x8d12dcba,// 416 PAY 385 

    0x485b9102,// 417 PAY 386 

    0x59d4a077,// 418 PAY 387 

    0xeebae2cb,// 419 PAY 388 

    0x7b63162b,// 420 PAY 389 

    0xeac27ead,// 421 PAY 390 

    0x5d5ef659,// 422 PAY 391 

    0xdc9588d3,// 423 PAY 392 

    0x20658942,// 424 PAY 393 

    0xa5ee238b,// 425 PAY 394 

    0x2f54233d,// 426 PAY 395 

    0x00d0d763,// 427 PAY 396 

    0xbfcf39b9,// 428 PAY 397 

    0xd40d860b,// 429 PAY 398 

    0x97dbe337,// 430 PAY 399 

    0x75585dd4,// 431 PAY 400 

    0x65d2925f,// 432 PAY 401 

    0xe82a1205,// 433 PAY 402 

    0x7ece700f,// 434 PAY 403 

    0x8ef99c19,// 435 PAY 404 

    0x7ff91348,// 436 PAY 405 

    0xcdc15188,// 437 PAY 406 

    0xd01b9e8a,// 438 PAY 407 

    0x853f9ee2,// 439 PAY 408 

    0x78d1adc2,// 440 PAY 409 

    0xa7b8b4b8,// 441 PAY 410 

    0x2d2b829e,// 442 PAY 411 

    0x4b56e197,// 443 PAY 412 

    0x84101720,// 444 PAY 413 

    0x81fe67ea,// 445 PAY 414 

    0xc125a5d1,// 446 PAY 415 

    0x02170a79,// 447 PAY 416 

    0x5630957c,// 448 PAY 417 

    0xd41db11f,// 449 PAY 418 

    0x62e5e3d2,// 450 PAY 419 

    0x72644d32,// 451 PAY 420 

    0x32000dbd,// 452 PAY 421 

    0x30db2b89,// 453 PAY 422 

    0xdbb70e89,// 454 PAY 423 

    0x50aa89d5,// 455 PAY 424 

    0x64a8c93c,// 456 PAY 425 

    0x01cc3b5f,// 457 PAY 426 

    0x271e3a6a,// 458 PAY 427 

    0x11cca92c,// 459 PAY 428 

    0xd1fddc23,// 460 PAY 429 

    0x26000000,// 461 PAY 430 

/// STA is 1 words. 

/// STA num_pkts       : 75 

/// STA pkt_idx        : 68 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x28 

    0x0111284b // 462 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt33_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x06 

/// ECH pdu_tag        : 0x00 

    0x00060000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x5 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0800000f,// 3 SCX   1 

    0x8041485f,// 4 SCX   2 

    0x00001500,// 5 SCX   3 

    0x4db8129a,// 6 SCX   4 

    0x61c4bca0,// 7 SCX   5 

    0x956c95b8,// 8 SCX   6 

    0xc27a4c66,// 9 SCX   7 

    0x510b4293,// 10 SCX   8 

    0x961eb6f1,// 11 SCX   9 

    0xc6f89957,// 12 SCX  10 

    0x03105da5,// 13 SCX  11 

    0x3fdbc817,// 14 SCX  12 

    0xa67abd27,// 15 SCX  13 

    0x1efa2a46,// 16 SCX  14 

    0x75c906a3,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 974 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 924 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 924 

/// BFD lencrypto      : 56 

/// BFD ofstcrypto     : 544 

/// BFD (ofst+len)cry  : 600 

/// BFD ofstiv         : 400 

/// BFD ofsticv        : 924 

    0x0000039c,// 18 BFD   1 

    0x02200038,// 19 BFD   2 

    0x039c0190,// 20 BFD   3 

/// MFM is 11 words. 

/// MFM vldnibs        : 4e 

    0x4e00058f,// 21 MFM   1 

    0xe6fb000c,// 22 MFM   2 

    0x4766ac60,// 23 MFM   3 

    0x577e112c,// 24 MFM   4 

    0x832cd83e,// 25 MFM   5 

    0xfcbe2bc2,// 26 MFM   6 

    0x43a179da,// 27 MFM   7 

    0x57e70efd,// 28 MFM   8 

    0x23eb48e6,// 29 MFM   9 

    0x1557dc52,// 30 MFM  10 

    0xb9000000,// 31 MFM  11 

/// BDA is 245 words. 

/// BDA size     is 974 (0x3ce) 

/// BDA id       is 0x8db2 

    0x03ce8db2,// 32 BDA   1 

/// PAY Generic Data size   : 974 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x4f940b6a,// 33 PAY   1 

    0x2abd848e,// 34 PAY   2 

    0xe653f38a,// 35 PAY   3 

    0xca30e849,// 36 PAY   4 

    0xef2541a4,// 37 PAY   5 

    0x35d3b16b,// 38 PAY   6 

    0x02e66a51,// 39 PAY   7 

    0x2d115028,// 40 PAY   8 

    0x0ab24a8b,// 41 PAY   9 

    0xd0552c9c,// 42 PAY  10 

    0xea0c15b8,// 43 PAY  11 

    0x79744112,// 44 PAY  12 

    0xbb70dad1,// 45 PAY  13 

    0xb98169dd,// 46 PAY  14 

    0x629734f4,// 47 PAY  15 

    0x4ac0b885,// 48 PAY  16 

    0xde89f7e2,// 49 PAY  17 

    0xb814edc8,// 50 PAY  18 

    0x8d4786ec,// 51 PAY  19 

    0x3fd2d8bb,// 52 PAY  20 

    0x14da1c82,// 53 PAY  21 

    0xbc3d16de,// 54 PAY  22 

    0xb6d177ae,// 55 PAY  23 

    0x7447db56,// 56 PAY  24 

    0xc50ee470,// 57 PAY  25 

    0xbc4cf9a3,// 58 PAY  26 

    0x64a8e39c,// 59 PAY  27 

    0x34ea3348,// 60 PAY  28 

    0x5f7ecd35,// 61 PAY  29 

    0xb6a6aaf1,// 62 PAY  30 

    0x9105c6fb,// 63 PAY  31 

    0xa157bb6c,// 64 PAY  32 

    0xe09a33be,// 65 PAY  33 

    0x40dd219c,// 66 PAY  34 

    0x97236308,// 67 PAY  35 

    0xd809e585,// 68 PAY  36 

    0x4b81f895,// 69 PAY  37 

    0xc446cf58,// 70 PAY  38 

    0xc231a844,// 71 PAY  39 

    0x0e467be6,// 72 PAY  40 

    0x44e0c4e5,// 73 PAY  41 

    0xf9725de6,// 74 PAY  42 

    0xcd570a68,// 75 PAY  43 

    0x0450c727,// 76 PAY  44 

    0xeddf55ed,// 77 PAY  45 

    0xc35bc22a,// 78 PAY  46 

    0xa246a7c7,// 79 PAY  47 

    0xb89fc750,// 80 PAY  48 

    0xe0afac88,// 81 PAY  49 

    0xd53bd6e7,// 82 PAY  50 

    0x3fa6a171,// 83 PAY  51 

    0xc9698728,// 84 PAY  52 

    0x118cdd88,// 85 PAY  53 

    0x92f878d8,// 86 PAY  54 

    0x51777b08,// 87 PAY  55 

    0x08471989,// 88 PAY  56 

    0x6e5bda65,// 89 PAY  57 

    0x2b30fd72,// 90 PAY  58 

    0xcbfc0343,// 91 PAY  59 

    0x1cde6eaf,// 92 PAY  60 

    0xe33b914c,// 93 PAY  61 

    0x6ca3ffe7,// 94 PAY  62 

    0xc3fa74bf,// 95 PAY  63 

    0x169a28d1,// 96 PAY  64 

    0x13d8f724,// 97 PAY  65 

    0x094e701c,// 98 PAY  66 

    0x1b895a33,// 99 PAY  67 

    0x0fca1359,// 100 PAY  68 

    0x052e391d,// 101 PAY  69 

    0x179ed43e,// 102 PAY  70 

    0x1090fe5a,// 103 PAY  71 

    0x8e90916b,// 104 PAY  72 

    0x5b27607a,// 105 PAY  73 

    0x1342b550,// 106 PAY  74 

    0xc8131276,// 107 PAY  75 

    0xf6915c70,// 108 PAY  76 

    0x00de7160,// 109 PAY  77 

    0x93956c64,// 110 PAY  78 

    0x867b5bb6,// 111 PAY  79 

    0x228dc8c8,// 112 PAY  80 

    0x67622ca1,// 113 PAY  81 

    0x48557a72,// 114 PAY  82 

    0x2ff4ad73,// 115 PAY  83 

    0xe42fbcc4,// 116 PAY  84 

    0x7455cdf1,// 117 PAY  85 

    0x8a40d3f6,// 118 PAY  86 

    0x21839277,// 119 PAY  87 

    0x5984e342,// 120 PAY  88 

    0x36bbb44a,// 121 PAY  89 

    0x59347117,// 122 PAY  90 

    0x301984e4,// 123 PAY  91 

    0x6f875000,// 124 PAY  92 

    0xfe1f794b,// 125 PAY  93 

    0xa69d9d8b,// 126 PAY  94 

    0x4f8f5b10,// 127 PAY  95 

    0x8b2e186a,// 128 PAY  96 

    0xe61f12a9,// 129 PAY  97 

    0xc891a330,// 130 PAY  98 

    0x4bf1b890,// 131 PAY  99 

    0x593b4576,// 132 PAY 100 

    0xf216c60b,// 133 PAY 101 

    0xb5d7d9db,// 134 PAY 102 

    0x3d56cf73,// 135 PAY 103 

    0xbe060561,// 136 PAY 104 

    0x875d37b2,// 137 PAY 105 

    0xbaaa2093,// 138 PAY 106 

    0xdac61be8,// 139 PAY 107 

    0x651ffc1f,// 140 PAY 108 

    0xfd3c5b34,// 141 PAY 109 

    0x902dd27c,// 142 PAY 110 

    0x4575a5a6,// 143 PAY 111 

    0x9a3548a0,// 144 PAY 112 

    0x9f4d6e6f,// 145 PAY 113 

    0x1b1bb5bf,// 146 PAY 114 

    0xacbeafa6,// 147 PAY 115 

    0x3d08bedd,// 148 PAY 116 

    0xd1329c5a,// 149 PAY 117 

    0x65802473,// 150 PAY 118 

    0xf568490a,// 151 PAY 119 

    0x6dcfd04e,// 152 PAY 120 

    0xac19b859,// 153 PAY 121 

    0x904f6d80,// 154 PAY 122 

    0x8980e288,// 155 PAY 123 

    0xdeda0b3f,// 156 PAY 124 

    0x9da08166,// 157 PAY 125 

    0xe540ce50,// 158 PAY 126 

    0xacb0c98a,// 159 PAY 127 

    0x92fc86fe,// 160 PAY 128 

    0x576c5ae1,// 161 PAY 129 

    0x72ca6392,// 162 PAY 130 

    0x82a2bdd6,// 163 PAY 131 

    0x199787d9,// 164 PAY 132 

    0x493dedde,// 165 PAY 133 

    0x6002da19,// 166 PAY 134 

    0x474cf468,// 167 PAY 135 

    0x656bc8c8,// 168 PAY 136 

    0x4bc6f509,// 169 PAY 137 

    0x4b7df811,// 170 PAY 138 

    0xb3102341,// 171 PAY 139 

    0x2ba55e6b,// 172 PAY 140 

    0xd193cc04,// 173 PAY 141 

    0xdc113fae,// 174 PAY 142 

    0x9da2a2ad,// 175 PAY 143 

    0x66aa968e,// 176 PAY 144 

    0x06cda758,// 177 PAY 145 

    0xf2239d90,// 178 PAY 146 

    0xb3375816,// 179 PAY 147 

    0x7192e82d,// 180 PAY 148 

    0x062d191b,// 181 PAY 149 

    0x17a45c6d,// 182 PAY 150 

    0x0a1c3096,// 183 PAY 151 

    0xb2ab531f,// 184 PAY 152 

    0xbcdf44cf,// 185 PAY 153 

    0x542f388f,// 186 PAY 154 

    0x4d041037,// 187 PAY 155 

    0xa2a3466b,// 188 PAY 156 

    0xa3c2ef23,// 189 PAY 157 

    0xb37ef63f,// 190 PAY 158 

    0x4fca7635,// 191 PAY 159 

    0xa31c2a59,// 192 PAY 160 

    0xb6774f57,// 193 PAY 161 

    0x3ebe6dd4,// 194 PAY 162 

    0xa53368d5,// 195 PAY 163 

    0xecd2830e,// 196 PAY 164 

    0xa1d38c7d,// 197 PAY 165 

    0xf4b163e1,// 198 PAY 166 

    0xc45dcfe7,// 199 PAY 167 

    0x0ac6e791,// 200 PAY 168 

    0x839d075f,// 201 PAY 169 

    0x81d2a178,// 202 PAY 170 

    0x3e7f316c,// 203 PAY 171 

    0x658c0ec4,// 204 PAY 172 

    0x06c6cd1a,// 205 PAY 173 

    0x91b47f6b,// 206 PAY 174 

    0x78b8ebf3,// 207 PAY 175 

    0xd7aa7686,// 208 PAY 176 

    0xf91cb518,// 209 PAY 177 

    0xe789455a,// 210 PAY 178 

    0xf88aa746,// 211 PAY 179 

    0xd6725d68,// 212 PAY 180 

    0x0e978116,// 213 PAY 181 

    0xd2277f33,// 214 PAY 182 

    0xce8ab423,// 215 PAY 183 

    0x682f7b30,// 216 PAY 184 

    0x14de08fc,// 217 PAY 185 

    0x9f244cd3,// 218 PAY 186 

    0xb5354c4f,// 219 PAY 187 

    0x127a5aff,// 220 PAY 188 

    0x0f2eb3b4,// 221 PAY 189 

    0x5eac89c3,// 222 PAY 190 

    0x11ee2607,// 223 PAY 191 

    0xec4d1710,// 224 PAY 192 

    0x1c40cab3,// 225 PAY 193 

    0xb6b91cdb,// 226 PAY 194 

    0x5a98e7d4,// 227 PAY 195 

    0xe5c62fe9,// 228 PAY 196 

    0x1b5591d2,// 229 PAY 197 

    0x5bdff056,// 230 PAY 198 

    0x4ce9660d,// 231 PAY 199 

    0x0e82381b,// 232 PAY 200 

    0x3ac0cf02,// 233 PAY 201 

    0x3707ec3a,// 234 PAY 202 

    0x74445feb,// 235 PAY 203 

    0x55e2a0eb,// 236 PAY 204 

    0x1ddbd3cc,// 237 PAY 205 

    0xf2037385,// 238 PAY 206 

    0xed934ee0,// 239 PAY 207 

    0xdc6991a2,// 240 PAY 208 

    0xca006cc4,// 241 PAY 209 

    0xe8832d4f,// 242 PAY 210 

    0xa6f4748c,// 243 PAY 211 

    0xea69d6dc,// 244 PAY 212 

    0x2b653b48,// 245 PAY 213 

    0x624bf70f,// 246 PAY 214 

    0x13c924db,// 247 PAY 215 

    0xdbdc0c25,// 248 PAY 216 

    0xe62a55cb,// 249 PAY 217 

    0xcc03a7b7,// 250 PAY 218 

    0x8e50e9d0,// 251 PAY 219 

    0xbe1a0279,// 252 PAY 220 

    0x911d917b,// 253 PAY 221 

    0x5fcf3f74,// 254 PAY 222 

    0x1cc1fc9f,// 255 PAY 223 

    0xc50eafe0,// 256 PAY 224 

    0xb03a9c11,// 257 PAY 225 

    0xf81e4170,// 258 PAY 226 

    0xb3da49db,// 259 PAY 227 

    0x9a28ce0f,// 260 PAY 228 

    0x61c68353,// 261 PAY 229 

    0xd0b85f6b,// 262 PAY 230 

    0x87fb5545,// 263 PAY 231 

    0x89edfa00,// 264 PAY 232 

    0x655c9448,// 265 PAY 233 

    0x18749531,// 266 PAY 234 

    0x200c3ba2,// 267 PAY 235 

    0xc9e81b20,// 268 PAY 236 

    0x27ca305c,// 269 PAY 237 

    0xd413ece9,// 270 PAY 238 

    0x213ba55c,// 271 PAY 239 

    0x2af6b27d,// 272 PAY 240 

    0x73dc82a7,// 273 PAY 241 

    0x65d1300e,// 274 PAY 242 

    0xd7bcc133,// 275 PAY 243 

    0xe1c10000,// 276 PAY 244 

/// STA is 1 words. 

/// STA num_pkts       : 55 

/// STA pkt_idx        : 141 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xb2 

    0x0234b237 // 277 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt34_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x0e 

/// ECH pdu_tag        : 0x00 

    0x000e0000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0000000f,// 3 SCX   1 

    0x8042484a,// 4 SCX   2 

    0x00006300,// 5 SCX   3 

    0xfa634ba9,// 6 SCX   4 

    0xdb5fd7e6,// 7 SCX   5 

    0x5624d51b,// 8 SCX   6 

    0xdd23dbed,// 9 SCX   7 

    0x44913200,// 10 SCX   8 

    0xe32f1946,// 11 SCX   9 

    0x79a82a58,// 12 SCX  10 

    0x1d0957b9,// 13 SCX  11 

    0x250df77e,// 14 SCX  12 

    0xdafc1e2c,// 15 SCX  13 

    0x02d709eb,// 16 SCX  14 

    0x2e5a7d44,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 1601 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1485 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1485 

/// BFD lencrypto      : 856 

/// BFD ofstcrypto     : 176 

/// BFD (ofst+len)cry  : 1032 

/// BFD ofstiv         : 156 

/// BFD ofsticv        : 1580 

    0x000005cd,// 18 BFD   1 

    0x00b00358,// 19 BFD   2 

    0x062c009c,// 20 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c007871,// 21 MFM   1 

    0x625f7a56,// 22 MFM   2 

    0x154f2943,// 23 MFM   3 

    0x864708a4,// 24 MFM   4 

    0x38c8db42,// 25 MFM   5 

    0x469e74fa,// 26 MFM   6 

    0x8f48d0ad,// 27 MFM   7 

    0x9fe93282,// 28 MFM   8 

    0xf8285024,// 29 MFM   9 

    0xb35efa8f,// 30 MFM  10 

    0x90b09705,// 31 MFM  11 

    0x5e6f6524,// 32 MFM  12 

    0xb0b1c923,// 33 MFM  13 

    0x0f1b3941,// 34 MFM  14 

    0x12406f0f,// 35 MFM  15 

    0xbcde2e35,// 36 MFM  16 

/// BDA is 402 words. 

/// BDA size     is 1601 (0x641) 

/// BDA id       is 0xaed0 

    0x0641aed0,// 37 BDA   1 

/// PAY Generic Data size   : 1601 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0xa7e41548,// 38 PAY   1 

    0x0f0080ba,// 39 PAY   2 

    0x7dc32ee4,// 40 PAY   3 

    0x358d2acb,// 41 PAY   4 

    0x395692b5,// 42 PAY   5 

    0xd9827350,// 43 PAY   6 

    0x5a0aa4bf,// 44 PAY   7 

    0x83873264,// 45 PAY   8 

    0xf7eb1eec,// 46 PAY   9 

    0xf2cdb23c,// 47 PAY  10 

    0x37c2992c,// 48 PAY  11 

    0x0352037d,// 49 PAY  12 

    0x2825a077,// 50 PAY  13 

    0x76a028d1,// 51 PAY  14 

    0x551f8239,// 52 PAY  15 

    0x9d982f34,// 53 PAY  16 

    0x2aba992a,// 54 PAY  17 

    0x9e051cfe,// 55 PAY  18 

    0xc0c87811,// 56 PAY  19 

    0x3b49727d,// 57 PAY  20 

    0x3be1785f,// 58 PAY  21 

    0xa472e933,// 59 PAY  22 

    0x68bb7fa5,// 60 PAY  23 

    0xf03f21ce,// 61 PAY  24 

    0x41a9a3dc,// 62 PAY  25 

    0xab506eb6,// 63 PAY  26 

    0x4aa7aa0d,// 64 PAY  27 

    0xd8eab594,// 65 PAY  28 

    0xbc9160f5,// 66 PAY  29 

    0x67fa8fac,// 67 PAY  30 

    0xe61eea09,// 68 PAY  31 

    0x7b7bbc15,// 69 PAY  32 

    0x73d64f9a,// 70 PAY  33 

    0x75191bb2,// 71 PAY  34 

    0x91fd0bfb,// 72 PAY  35 

    0x7b17f556,// 73 PAY  36 

    0xc9c77013,// 74 PAY  37 

    0xbdb6ffa4,// 75 PAY  38 

    0x6ccc5889,// 76 PAY  39 

    0xd232d7ec,// 77 PAY  40 

    0x71dc7b16,// 78 PAY  41 

    0x6f979eb0,// 79 PAY  42 

    0xea6910db,// 80 PAY  43 

    0x74d2f3e2,// 81 PAY  44 

    0x407665e0,// 82 PAY  45 

    0xbdb4abff,// 83 PAY  46 

    0x34144e3e,// 84 PAY  47 

    0x4368971f,// 85 PAY  48 

    0xba60c1c5,// 86 PAY  49 

    0x48971e82,// 87 PAY  50 

    0x547718b6,// 88 PAY  51 

    0xcdcd2789,// 89 PAY  52 

    0x0da77861,// 90 PAY  53 

    0x49e9caf6,// 91 PAY  54 

    0x8e2253a4,// 92 PAY  55 

    0x436002ac,// 93 PAY  56 

    0x791be92c,// 94 PAY  57 

    0x0fca00a6,// 95 PAY  58 

    0xa5d0a9c1,// 96 PAY  59 

    0x9f55de3c,// 97 PAY  60 

    0xe93b4ede,// 98 PAY  61 

    0xf8c0b1bc,// 99 PAY  62 

    0x21b58193,// 100 PAY  63 

    0xf59c49d0,// 101 PAY  64 

    0x0092a0be,// 102 PAY  65 

    0x96e2ab9e,// 103 PAY  66 

    0xdde28a4f,// 104 PAY  67 

    0x45e38f94,// 105 PAY  68 

    0xf3e8a027,// 106 PAY  69 

    0xe6367da6,// 107 PAY  70 

    0xe38148e0,// 108 PAY  71 

    0xa3871a18,// 109 PAY  72 

    0x797cb724,// 110 PAY  73 

    0xfa05520a,// 111 PAY  74 

    0xcf8473d6,// 112 PAY  75 

    0x221f7612,// 113 PAY  76 

    0x05793905,// 114 PAY  77 

    0x8e856ee1,// 115 PAY  78 

    0xdc8f2add,// 116 PAY  79 

    0xb14c1444,// 117 PAY  80 

    0xfe9759e9,// 118 PAY  81 

    0x86c2aab6,// 119 PAY  82 

    0x1dd86006,// 120 PAY  83 

    0x6aca09b0,// 121 PAY  84 

    0xb2afd651,// 122 PAY  85 

    0x5c1054d0,// 123 PAY  86 

    0x78e06a3f,// 124 PAY  87 

    0x6361ed01,// 125 PAY  88 

    0xfe1b624d,// 126 PAY  89 

    0x1b34b5df,// 127 PAY  90 

    0x3ce9fd03,// 128 PAY  91 

    0xf33fc6f6,// 129 PAY  92 

    0x6ee29954,// 130 PAY  93 

    0x56cb4d3d,// 131 PAY  94 

    0xd348b978,// 132 PAY  95 

    0xd0ae9bcf,// 133 PAY  96 

    0x4742769a,// 134 PAY  97 

    0xd3e1bf2e,// 135 PAY  98 

    0x45b5cb19,// 136 PAY  99 

    0xd6167f61,// 137 PAY 100 

    0xec82c08d,// 138 PAY 101 

    0x5235999b,// 139 PAY 102 

    0xe766baab,// 140 PAY 103 

    0x444ed7f6,// 141 PAY 104 

    0xbfa43526,// 142 PAY 105 

    0x6996e012,// 143 PAY 106 

    0x9e1d2ac7,// 144 PAY 107 

    0x0898ddc8,// 145 PAY 108 

    0x9fb2fdf0,// 146 PAY 109 

    0x2d30f0ba,// 147 PAY 110 

    0x28f88940,// 148 PAY 111 

    0x15d464e8,// 149 PAY 112 

    0x4746598d,// 150 PAY 113 

    0xa1d76e7d,// 151 PAY 114 

    0x23ad57a4,// 152 PAY 115 

    0xc960a562,// 153 PAY 116 

    0x7a15c98c,// 154 PAY 117 

    0xde875c50,// 155 PAY 118 

    0xcb0a2720,// 156 PAY 119 

    0xc2cee6c2,// 157 PAY 120 

    0xd87e9701,// 158 PAY 121 

    0xa740dcb8,// 159 PAY 122 

    0x2205e2b4,// 160 PAY 123 

    0x8f81cac4,// 161 PAY 124 

    0x519f494c,// 162 PAY 125 

    0x040f705f,// 163 PAY 126 

    0x26922e8e,// 164 PAY 127 

    0x199b2f5d,// 165 PAY 128 

    0xd380dddc,// 166 PAY 129 

    0x1feb4252,// 167 PAY 130 

    0x0b60338b,// 168 PAY 131 

    0xbecd4190,// 169 PAY 132 

    0xc80631a2,// 170 PAY 133 

    0xda0a2cfd,// 171 PAY 134 

    0xed7bf917,// 172 PAY 135 

    0x7c8fe939,// 173 PAY 136 

    0xcd7d1036,// 174 PAY 137 

    0x9202d06a,// 175 PAY 138 

    0x947b09a9,// 176 PAY 139 

    0x6f004650,// 177 PAY 140 

    0x4d6e5504,// 178 PAY 141 

    0x0c60e49a,// 179 PAY 142 

    0x1c02fe70,// 180 PAY 143 

    0xa5e3a673,// 181 PAY 144 

    0x62f45a86,// 182 PAY 145 

    0x886f6788,// 183 PAY 146 

    0xcca1103b,// 184 PAY 147 

    0x8d2f8ed4,// 185 PAY 148 

    0xd8fce1a5,// 186 PAY 149 

    0x743ded3e,// 187 PAY 150 

    0x28f24aea,// 188 PAY 151 

    0x9eb77d70,// 189 PAY 152 

    0xa4a9b14c,// 190 PAY 153 

    0x49847a76,// 191 PAY 154 

    0x646dc03a,// 192 PAY 155 

    0x1801daa1,// 193 PAY 156 

    0xad9b4851,// 194 PAY 157 

    0x34c686cf,// 195 PAY 158 

    0xeb0de5b2,// 196 PAY 159 

    0x98624655,// 197 PAY 160 

    0xc179f555,// 198 PAY 161 

    0x44c7eacf,// 199 PAY 162 

    0x57abf856,// 200 PAY 163 

    0x5e58e34e,// 201 PAY 164 

    0x571c6b4e,// 202 PAY 165 

    0x564da462,// 203 PAY 166 

    0x20c1de83,// 204 PAY 167 

    0x092676c3,// 205 PAY 168 

    0x99d65898,// 206 PAY 169 

    0xb46882e5,// 207 PAY 170 

    0x81fc13d5,// 208 PAY 171 

    0x3967dbd5,// 209 PAY 172 

    0xec8c8ae4,// 210 PAY 173 

    0xf2a406d6,// 211 PAY 174 

    0x4df5ed43,// 212 PAY 175 

    0x8d2394cc,// 213 PAY 176 

    0xe75ba32b,// 214 PAY 177 

    0x4afca28b,// 215 PAY 178 

    0x1a019d4e,// 216 PAY 179 

    0xef0dddb0,// 217 PAY 180 

    0x95af5790,// 218 PAY 181 

    0xb06ff084,// 219 PAY 182 

    0x6602ae64,// 220 PAY 183 

    0x06c1b40d,// 221 PAY 184 

    0x2a680db6,// 222 PAY 185 

    0x78b9ebab,// 223 PAY 186 

    0x98334aaa,// 224 PAY 187 

    0x1aec9345,// 225 PAY 188 

    0x200f2023,// 226 PAY 189 

    0xf465464c,// 227 PAY 190 

    0x4008e32c,// 228 PAY 191 

    0x051566e9,// 229 PAY 192 

    0x10cbfd79,// 230 PAY 193 

    0x11d91105,// 231 PAY 194 

    0x29389307,// 232 PAY 195 

    0x3301a20f,// 233 PAY 196 

    0x8f11928a,// 234 PAY 197 

    0x945b5a7f,// 235 PAY 198 

    0x7f0d148d,// 236 PAY 199 

    0x23c33eb7,// 237 PAY 200 

    0x92b8f33e,// 238 PAY 201 

    0xf776a6b2,// 239 PAY 202 

    0x1c571f98,// 240 PAY 203 

    0x1efa9b80,// 241 PAY 204 

    0x4c4bc7e9,// 242 PAY 205 

    0xaa5b232a,// 243 PAY 206 

    0xd7a191b3,// 244 PAY 207 

    0x1e2d5ede,// 245 PAY 208 

    0x610ded87,// 246 PAY 209 

    0x8355ab59,// 247 PAY 210 

    0xce6e476d,// 248 PAY 211 

    0xded6f083,// 249 PAY 212 

    0x650f6007,// 250 PAY 213 

    0x83cbb057,// 251 PAY 214 

    0x46ef9058,// 252 PAY 215 

    0xe73dc81c,// 253 PAY 216 

    0xe98bf1e9,// 254 PAY 217 

    0x9d5c27e4,// 255 PAY 218 

    0x192d1822,// 256 PAY 219 

    0xb7ef255f,// 257 PAY 220 

    0x62c20d5f,// 258 PAY 221 

    0x3b5f6b6f,// 259 PAY 222 

    0x39bb9e5c,// 260 PAY 223 

    0xe70a7fbb,// 261 PAY 224 

    0x7dc34f7e,// 262 PAY 225 

    0x21949702,// 263 PAY 226 

    0x6d20fbda,// 264 PAY 227 

    0x87b60add,// 265 PAY 228 

    0x7c5e2516,// 266 PAY 229 

    0x3ad43101,// 267 PAY 230 

    0xbfa987fc,// 268 PAY 231 

    0x65afba34,// 269 PAY 232 

    0x741bc9ea,// 270 PAY 233 

    0xba020c6b,// 271 PAY 234 

    0xd95c58bf,// 272 PAY 235 

    0x26ce59a6,// 273 PAY 236 

    0xeb7f0f14,// 274 PAY 237 

    0xa1c28605,// 275 PAY 238 

    0x63073b24,// 276 PAY 239 

    0xd57dde57,// 277 PAY 240 

    0x589fac7f,// 278 PAY 241 

    0xb8ffc0f2,// 279 PAY 242 

    0x2e5e2b1e,// 280 PAY 243 

    0x3ef11ee9,// 281 PAY 244 

    0x9cf681d7,// 282 PAY 245 

    0x1eadfef4,// 283 PAY 246 

    0xc271fce5,// 284 PAY 247 

    0x052be6e7,// 285 PAY 248 

    0x445554f7,// 286 PAY 249 

    0xa13278f8,// 287 PAY 250 

    0x82252b61,// 288 PAY 251 

    0xe58f6fb4,// 289 PAY 252 

    0xdc29230d,// 290 PAY 253 

    0xae899c95,// 291 PAY 254 

    0xd305525f,// 292 PAY 255 

    0x58905c89,// 293 PAY 256 

    0x16793d51,// 294 PAY 257 

    0x35c15be6,// 295 PAY 258 

    0x8b40e11d,// 296 PAY 259 

    0x65da9e53,// 297 PAY 260 

    0x06fa45d2,// 298 PAY 261 

    0x0c01d937,// 299 PAY 262 

    0xb70c49a6,// 300 PAY 263 

    0xbaf927b7,// 301 PAY 264 

    0x4b0b157e,// 302 PAY 265 

    0xd7f06a10,// 303 PAY 266 

    0x4b4a9bd0,// 304 PAY 267 

    0x2545aeb3,// 305 PAY 268 

    0x71498839,// 306 PAY 269 

    0xf0e5c9df,// 307 PAY 270 

    0xe92a5965,// 308 PAY 271 

    0x4af32a96,// 309 PAY 272 

    0x74f2f203,// 310 PAY 273 

    0x93647cb4,// 311 PAY 274 

    0x52374408,// 312 PAY 275 

    0x3183d534,// 313 PAY 276 

    0xe423a493,// 314 PAY 277 

    0x3a3f1fcc,// 315 PAY 278 

    0x402871b7,// 316 PAY 279 

    0xb9c88a3f,// 317 PAY 280 

    0x614c1484,// 318 PAY 281 

    0x08fcb9db,// 319 PAY 282 

    0x600bb3d3,// 320 PAY 283 

    0xc8bd16e4,// 321 PAY 284 

    0x6be464d6,// 322 PAY 285 

    0xea03d276,// 323 PAY 286 

    0xb0ef486d,// 324 PAY 287 

    0xdcc8e21d,// 325 PAY 288 

    0x2461fe30,// 326 PAY 289 

    0xa97d17fa,// 327 PAY 290 

    0xc16effa9,// 328 PAY 291 

    0x0527ff33,// 329 PAY 292 

    0xb7f05911,// 330 PAY 293 

    0xca82ad1e,// 331 PAY 294 

    0xecf4b30f,// 332 PAY 295 

    0x86f1557f,// 333 PAY 296 

    0x72a8619a,// 334 PAY 297 

    0x27e3f5da,// 335 PAY 298 

    0xe6e14e4d,// 336 PAY 299 

    0x8508dae4,// 337 PAY 300 

    0xed2a7a1c,// 338 PAY 301 

    0xf55ec87f,// 339 PAY 302 

    0xb2b25811,// 340 PAY 303 

    0xae51e9d0,// 341 PAY 304 

    0x00799602,// 342 PAY 305 

    0xa7a5b9c8,// 343 PAY 306 

    0x8e420739,// 344 PAY 307 

    0x08bbc7c4,// 345 PAY 308 

    0xca33d641,// 346 PAY 309 

    0x5d693347,// 347 PAY 310 

    0xf9f655b0,// 348 PAY 311 

    0x7bf9704b,// 349 PAY 312 

    0x1cc1188f,// 350 PAY 313 

    0x9d7488c6,// 351 PAY 314 

    0x885a5071,// 352 PAY 315 

    0xa0fc0d4f,// 353 PAY 316 

    0x15552445,// 354 PAY 317 

    0x6ceff593,// 355 PAY 318 

    0x9cf0c3af,// 356 PAY 319 

    0x30c985c9,// 357 PAY 320 

    0x5eb642de,// 358 PAY 321 

    0x25188492,// 359 PAY 322 

    0x845f61c3,// 360 PAY 323 

    0x5ca7207c,// 361 PAY 324 

    0x9ca7e81e,// 362 PAY 325 

    0x34917a4e,// 363 PAY 326 

    0x77a3b762,// 364 PAY 327 

    0xee227809,// 365 PAY 328 

    0x6b8a69ca,// 366 PAY 329 

    0xa4e8f9b2,// 367 PAY 330 

    0x418186d5,// 368 PAY 331 

    0x79b2f12c,// 369 PAY 332 

    0x31851f12,// 370 PAY 333 

    0xd00c6623,// 371 PAY 334 

    0x319a977e,// 372 PAY 335 

    0x432b03be,// 373 PAY 336 

    0x6043777a,// 374 PAY 337 

    0xb510d73f,// 375 PAY 338 

    0x74d11c00,// 376 PAY 339 

    0x97964cd5,// 377 PAY 340 

    0x9da03fe8,// 378 PAY 341 

    0xe4bfa627,// 379 PAY 342 

    0xb9257901,// 380 PAY 343 

    0x8b1ea506,// 381 PAY 344 

    0x916f8fda,// 382 PAY 345 

    0x537b4228,// 383 PAY 346 

    0x82941333,// 384 PAY 347 

    0x061b83b0,// 385 PAY 348 

    0xe6282a41,// 386 PAY 349 

    0xd0fc2855,// 387 PAY 350 

    0xea3aff46,// 388 PAY 351 

    0x9b070124,// 389 PAY 352 

    0x3b4370be,// 390 PAY 353 

    0x811ff64d,// 391 PAY 354 

    0x1d8a956a,// 392 PAY 355 

    0x662ad993,// 393 PAY 356 

    0xdd55eb56,// 394 PAY 357 

    0x0107d520,// 395 PAY 358 

    0x995800e4,// 396 PAY 359 

    0xb601fe98,// 397 PAY 360 

    0x175199a4,// 398 PAY 361 

    0xf209a461,// 399 PAY 362 

    0x4e847c22,// 400 PAY 363 

    0x94b9e2b2,// 401 PAY 364 

    0x50dfd18f,// 402 PAY 365 

    0xe2cd49c6,// 403 PAY 366 

    0x3c4a909c,// 404 PAY 367 

    0x5a89d799,// 405 PAY 368 

    0x4b7622a6,// 406 PAY 369 

    0x3bac38d9,// 407 PAY 370 

    0xde9334a9,// 408 PAY 371 

    0x04c0c320,// 409 PAY 372 

    0x03ba2472,// 410 PAY 373 

    0xe452b2c7,// 411 PAY 374 

    0xed71cd37,// 412 PAY 375 

    0x38017a48,// 413 PAY 376 

    0x8c39eb37,// 414 PAY 377 

    0xc75334ab,// 415 PAY 378 

    0x2f28d248,// 416 PAY 379 

    0xfb48fbe5,// 417 PAY 380 

    0xe5563282,// 418 PAY 381 

    0xd23804f6,// 419 PAY 382 

    0xd9f5584d,// 420 PAY 383 

    0x02e0c81d,// 421 PAY 384 

    0x469fd1c4,// 422 PAY 385 

    0x72208c13,// 423 PAY 386 

    0x2278cab0,// 424 PAY 387 

    0x5166ac2a,// 425 PAY 388 

    0xe0ecc17b,// 426 PAY 389 

    0xf7ae33a2,// 427 PAY 390 

    0xcf8326dc,// 428 PAY 391 

    0xd7e26124,// 429 PAY 392 

    0x2c2df0a3,// 430 PAY 393 

    0xc66e4657,// 431 PAY 394 

    0x7e2f0c2f,// 432 PAY 395 

    0x2243f7ad,// 433 PAY 396 

    0xc36a5014,// 434 PAY 397 

    0x04ea79fe,// 435 PAY 398 

    0xf8c98512,// 436 PAY 399 

    0xfb4d902a,// 437 PAY 400 

    0xde000000,// 438 PAY 401 

/// STA is 1 words. 

/// STA num_pkts       : 84 

/// STA pkt_idx        : 173 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x3d 

    0x02b53d54 // 439 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt35_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x05 

/// ECH pdu_tag        : 0x00 

    0x00050000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0000000f,// 3 SCX   1 

    0x80414840,// 4 SCX   2 

    0x00002300,// 5 SCX   3 

    0x5fcc81fa,// 6 SCX   4 

    0x91a45d98,// 7 SCX   5 

    0x082e871b,// 8 SCX   6 

    0xa55d3466,// 9 SCX   7 

    0xe38ac5eb,// 10 SCX   8 

    0x98231ae1,// 11 SCX   9 

    0x1ad532d9,// 12 SCX  10 

    0x0fff690d,// 13 SCX  11 

    0x8abb4718,// 14 SCX  12 

    0x1913554e,// 15 SCX  13 

    0x7a0036e0,// 16 SCX  14 

    0x7b1d2471,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 1365 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1279 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1279 

/// BFD lencrypto      : 176 

/// BFD ofstcrypto     : 812 

/// BFD (ofst+len)cry  : 988 

/// BFD ofstiv         : 280 

/// BFD ofsticv        : 1312 

    0x000004ff,// 18 BFD   1 

    0x032c00b0,// 19 BFD   2 

    0x05200118,// 20 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c005326,// 21 MFM   1 

    0x45bc16ae,// 22 MFM   2 

    0x2d7a1c62,// 23 MFM   3 

    0xfae01724,// 24 MFM   4 

    0xaece30f3,// 25 MFM   5 

    0x67dbf359,// 26 MFM   6 

    0x34eb4210,// 27 MFM   7 

    0xcd14b00d,// 28 MFM   8 

    0x45b82bba,// 29 MFM   9 

    0x56292131,// 30 MFM  10 

    0xef5b0f15,// 31 MFM  11 

    0x8254ee86,// 32 MFM  12 

    0x010b019d,// 33 MFM  13 

    0xab5ce5b9,// 34 MFM  14 

    0x97c476ae,// 35 MFM  15 

    0xcd151a72,// 36 MFM  16 

/// BDA is 343 words. 

/// BDA size     is 1365 (0x555) 

/// BDA id       is 0x41dc 

    0x055541dc,// 37 BDA   1 

/// PAY Generic Data size   : 1365 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0xfde5c171,// 38 PAY   1 

    0xd44ca933,// 39 PAY   2 

    0xe6bb8a72,// 40 PAY   3 

    0x9d13346c,// 41 PAY   4 

    0x4916733b,// 42 PAY   5 

    0x6afd9439,// 43 PAY   6 

    0xc4778cb8,// 44 PAY   7 

    0x8a146238,// 45 PAY   8 

    0x7114c0da,// 46 PAY   9 

    0xbab72ef3,// 47 PAY  10 

    0x7a24ae7d,// 48 PAY  11 

    0xe600382e,// 49 PAY  12 

    0x346c475d,// 50 PAY  13 

    0xbead2674,// 51 PAY  14 

    0x48864f6e,// 52 PAY  15 

    0x644938f5,// 53 PAY  16 

    0x1d8951f9,// 54 PAY  17 

    0xd908c362,// 55 PAY  18 

    0x684d96ec,// 56 PAY  19 

    0x72a7fd8e,// 57 PAY  20 

    0x5438e0c1,// 58 PAY  21 

    0xc7a00af3,// 59 PAY  22 

    0xa72254fe,// 60 PAY  23 

    0xbf722670,// 61 PAY  24 

    0x6653d29d,// 62 PAY  25 

    0x783b228e,// 63 PAY  26 

    0x73dcccc8,// 64 PAY  27 

    0xc59c3b3c,// 65 PAY  28 

    0xd3d0214d,// 66 PAY  29 

    0xb1119947,// 67 PAY  30 

    0x235bd3b5,// 68 PAY  31 

    0xd63ec8b2,// 69 PAY  32 

    0x69cbe16c,// 70 PAY  33 

    0xda4aa076,// 71 PAY  34 

    0x23cd4682,// 72 PAY  35 

    0xfc14721f,// 73 PAY  36 

    0x5561bbfb,// 74 PAY  37 

    0x88298c97,// 75 PAY  38 

    0xe7c2bb8a,// 76 PAY  39 

    0x0bb0986a,// 77 PAY  40 

    0x58422145,// 78 PAY  41 

    0xf24433c3,// 79 PAY  42 

    0x581bcce3,// 80 PAY  43 

    0xd5efa748,// 81 PAY  44 

    0x49b323ed,// 82 PAY  45 

    0x998d4ed4,// 83 PAY  46 

    0x36fab34c,// 84 PAY  47 

    0xd74e9e2b,// 85 PAY  48 

    0xbebbe2c0,// 86 PAY  49 

    0x0ec59874,// 87 PAY  50 

    0xaab40aec,// 88 PAY  51 

    0xcb066015,// 89 PAY  52 

    0x5340b008,// 90 PAY  53 

    0xaa840ff3,// 91 PAY  54 

    0x9005647e,// 92 PAY  55 

    0xa48e2ab2,// 93 PAY  56 

    0x9e6d795f,// 94 PAY  57 

    0x624b5e26,// 95 PAY  58 

    0xdf82b516,// 96 PAY  59 

    0xfed52b87,// 97 PAY  60 

    0xd3a8f927,// 98 PAY  61 

    0x924ac432,// 99 PAY  62 

    0x52cac760,// 100 PAY  63 

    0x4f82a6db,// 101 PAY  64 

    0xdb9f370d,// 102 PAY  65 

    0xe8bf071c,// 103 PAY  66 

    0xd033f76e,// 104 PAY  67 

    0x2b7f7442,// 105 PAY  68 

    0x1f0e30aa,// 106 PAY  69 

    0x13542bb5,// 107 PAY  70 

    0x3f1f874a,// 108 PAY  71 

    0xcc98089c,// 109 PAY  72 

    0xaf8ae6f4,// 110 PAY  73 

    0x242b3ad3,// 111 PAY  74 

    0x8f8fd074,// 112 PAY  75 

    0x3991a4b6,// 113 PAY  76 

    0xb546490b,// 114 PAY  77 

    0x9b6710e2,// 115 PAY  78 

    0xd12b1203,// 116 PAY  79 

    0xa7eecf63,// 117 PAY  80 

    0x3afac131,// 118 PAY  81 

    0x1a03e452,// 119 PAY  82 

    0xa4631156,// 120 PAY  83 

    0x1b3f3aa7,// 121 PAY  84 

    0x7ec09be4,// 122 PAY  85 

    0x1d4e7799,// 123 PAY  86 

    0x2a8ecde9,// 124 PAY  87 

    0x1160be04,// 125 PAY  88 

    0xb1e2bd31,// 126 PAY  89 

    0xa01c87e2,// 127 PAY  90 

    0x78cfa6e3,// 128 PAY  91 

    0xb97bc8bc,// 129 PAY  92 

    0x720e038c,// 130 PAY  93 

    0xc99294ca,// 131 PAY  94 

    0x67254191,// 132 PAY  95 

    0x6489babc,// 133 PAY  96 

    0x9620e662,// 134 PAY  97 

    0xbffd79d9,// 135 PAY  98 

    0xab8628c2,// 136 PAY  99 

    0x5220916b,// 137 PAY 100 

    0xf9fe2743,// 138 PAY 101 

    0x692ad1dd,// 139 PAY 102 

    0x1f6178d1,// 140 PAY 103 

    0x1f0b6d47,// 141 PAY 104 

    0x9f312e92,// 142 PAY 105 

    0xf3901249,// 143 PAY 106 

    0x22baf82b,// 144 PAY 107 

    0x70bfb14f,// 145 PAY 108 

    0x64c3eaf0,// 146 PAY 109 

    0x932e3998,// 147 PAY 110 

    0x75d876fe,// 148 PAY 111 

    0xabce4c79,// 149 PAY 112 

    0xbd6f503e,// 150 PAY 113 

    0x4d564b7b,// 151 PAY 114 

    0x240baa53,// 152 PAY 115 

    0xceadad08,// 153 PAY 116 

    0x183b01fe,// 154 PAY 117 

    0xeb1d0192,// 155 PAY 118 

    0xb5a10c6f,// 156 PAY 119 

    0x493a67d0,// 157 PAY 120 

    0x5f65b62b,// 158 PAY 121 

    0x43debf57,// 159 PAY 122 

    0x389e5285,// 160 PAY 123 

    0xc573eb35,// 161 PAY 124 

    0x0d33d5ae,// 162 PAY 125 

    0x7162d489,// 163 PAY 126 

    0xebe873bb,// 164 PAY 127 

    0x5b8d84ba,// 165 PAY 128 

    0x27e72bea,// 166 PAY 129 

    0xb2fd3fe1,// 167 PAY 130 

    0xa663ffab,// 168 PAY 131 

    0x63c9fbca,// 169 PAY 132 

    0x154d248e,// 170 PAY 133 

    0xeca9319d,// 171 PAY 134 

    0xf326b6b3,// 172 PAY 135 

    0x59defe6e,// 173 PAY 136 

    0x9f0fc344,// 174 PAY 137 

    0xc4efcb1f,// 175 PAY 138 

    0x1737d976,// 176 PAY 139 

    0xaebf1bd3,// 177 PAY 140 

    0x3524fb2e,// 178 PAY 141 

    0x1cc42099,// 179 PAY 142 

    0x3c734213,// 180 PAY 143 

    0x64e5c4cb,// 181 PAY 144 

    0xe25d448a,// 182 PAY 145 

    0x3fea48a3,// 183 PAY 146 

    0x47ee5f75,// 184 PAY 147 

    0x57859dc0,// 185 PAY 148 

    0x153c3701,// 186 PAY 149 

    0xe0a75ee1,// 187 PAY 150 

    0x44fec166,// 188 PAY 151 

    0x6f8c97e0,// 189 PAY 152 

    0xcb41f179,// 190 PAY 153 

    0xf331a3f8,// 191 PAY 154 

    0x4781ac6f,// 192 PAY 155 

    0x55f66936,// 193 PAY 156 

    0xb5c9f11a,// 194 PAY 157 

    0x37e476ff,// 195 PAY 158 

    0x765de2fd,// 196 PAY 159 

    0x1d9200cf,// 197 PAY 160 

    0xd4470cdc,// 198 PAY 161 

    0x1a96cd4e,// 199 PAY 162 

    0x848b0dba,// 200 PAY 163 

    0x159dab3a,// 201 PAY 164 

    0x5810fd2c,// 202 PAY 165 

    0x0db1af08,// 203 PAY 166 

    0x6eb5ac9d,// 204 PAY 167 

    0x08338e52,// 205 PAY 168 

    0x29c8a957,// 206 PAY 169 

    0x15c70bb7,// 207 PAY 170 

    0x2e6137a0,// 208 PAY 171 

    0xe5f1d76e,// 209 PAY 172 

    0x3f3ff384,// 210 PAY 173 

    0xd1c4282a,// 211 PAY 174 

    0x86fa97a6,// 212 PAY 175 

    0x6ec9e4d5,// 213 PAY 176 

    0x2fcde2c7,// 214 PAY 177 

    0xd63825ae,// 215 PAY 178 

    0xe144d865,// 216 PAY 179 

    0x3ccaaffb,// 217 PAY 180 

    0x516d22e8,// 218 PAY 181 

    0x089937a6,// 219 PAY 182 

    0x538f2595,// 220 PAY 183 

    0x08e4fb63,// 221 PAY 184 

    0x51bf9e05,// 222 PAY 185 

    0xda0f56a1,// 223 PAY 186 

    0xea519ecc,// 224 PAY 187 

    0x087906ad,// 225 PAY 188 

    0xea3d12bc,// 226 PAY 189 

    0x70ca5888,// 227 PAY 190 

    0x6d36bd46,// 228 PAY 191 

    0x6cea6842,// 229 PAY 192 

    0xc823abb3,// 230 PAY 193 

    0x7c83710f,// 231 PAY 194 

    0x02de8f91,// 232 PAY 195 

    0xb8ae1f23,// 233 PAY 196 

    0x918cb028,// 234 PAY 197 

    0xb8cbcfac,// 235 PAY 198 

    0xa3590257,// 236 PAY 199 

    0x7d1c2004,// 237 PAY 200 

    0x325a35d6,// 238 PAY 201 

    0x7c2de067,// 239 PAY 202 

    0xfe963efe,// 240 PAY 203 

    0x44095ea1,// 241 PAY 204 

    0xc0ed5c51,// 242 PAY 205 

    0xf595da96,// 243 PAY 206 

    0x23485d35,// 244 PAY 207 

    0x74705d4e,// 245 PAY 208 

    0xa5af0e4f,// 246 PAY 209 

    0x1f3edf5a,// 247 PAY 210 

    0xe8fb5459,// 248 PAY 211 

    0x709e5444,// 249 PAY 212 

    0x13a2757c,// 250 PAY 213 

    0xfee7559d,// 251 PAY 214 

    0x3ff31f6c,// 252 PAY 215 

    0xb3fb1f87,// 253 PAY 216 

    0x5d324d00,// 254 PAY 217 

    0x3d55510b,// 255 PAY 218 

    0xd897e64b,// 256 PAY 219 

    0x14d418b6,// 257 PAY 220 

    0x5256cdb7,// 258 PAY 221 

    0xf9947919,// 259 PAY 222 

    0xa5bcbbba,// 260 PAY 223 

    0xd1562fa1,// 261 PAY 224 

    0x6553ee4d,// 262 PAY 225 

    0x489a7b82,// 263 PAY 226 

    0x621550fa,// 264 PAY 227 

    0xd0cde6ed,// 265 PAY 228 

    0xcf9e42e7,// 266 PAY 229 

    0xa81bc2fd,// 267 PAY 230 

    0x2d4876d3,// 268 PAY 231 

    0xf92f29cc,// 269 PAY 232 

    0x71baa202,// 270 PAY 233 

    0x76f1bd98,// 271 PAY 234 

    0xf17e2e80,// 272 PAY 235 

    0xa9f028b4,// 273 PAY 236 

    0x069a77f1,// 274 PAY 237 

    0xb5a57330,// 275 PAY 238 

    0x584b834d,// 276 PAY 239 

    0x974ade52,// 277 PAY 240 

    0x0ba2db85,// 278 PAY 241 

    0xa07ad8b0,// 279 PAY 242 

    0x4d4c7098,// 280 PAY 243 

    0x146ee237,// 281 PAY 244 

    0x66e62046,// 282 PAY 245 

    0x219d36e7,// 283 PAY 246 

    0x0bd1f85f,// 284 PAY 247 

    0xb40e5c6c,// 285 PAY 248 

    0x8b314a14,// 286 PAY 249 

    0x922c00f3,// 287 PAY 250 

    0x8a16a96f,// 288 PAY 251 

    0xbfed4183,// 289 PAY 252 

    0x951211d0,// 290 PAY 253 

    0x795bb441,// 291 PAY 254 

    0xdbbd3cd1,// 292 PAY 255 

    0x838c4be5,// 293 PAY 256 

    0x055da33c,// 294 PAY 257 

    0x7f220c7b,// 295 PAY 258 

    0x9feab058,// 296 PAY 259 

    0x7a448178,// 297 PAY 260 

    0xa3ddb1f7,// 298 PAY 261 

    0xcc953e51,// 299 PAY 262 

    0xe5b8813f,// 300 PAY 263 

    0xe83069ad,// 301 PAY 264 

    0x6c32ac74,// 302 PAY 265 

    0xfe659c8d,// 303 PAY 266 

    0x071fb86f,// 304 PAY 267 

    0xf75bed8d,// 305 PAY 268 

    0xf39c869d,// 306 PAY 269 

    0x153a2bce,// 307 PAY 270 

    0xa4b9bf26,// 308 PAY 271 

    0x2c72d362,// 309 PAY 272 

    0x6f38acc4,// 310 PAY 273 

    0xcce02ceb,// 311 PAY 274 

    0x22b4c356,// 312 PAY 275 

    0xcae1bfa3,// 313 PAY 276 

    0x10312665,// 314 PAY 277 

    0xaccfd1cf,// 315 PAY 278 

    0x40868523,// 316 PAY 279 

    0x1a2dae3d,// 317 PAY 280 

    0xd39dcda8,// 318 PAY 281 

    0x4fbdc83a,// 319 PAY 282 

    0x9074a77d,// 320 PAY 283 

    0xc269c51a,// 321 PAY 284 

    0xe4cbed97,// 322 PAY 285 

    0x432ef1ad,// 323 PAY 286 

    0x4dbecd01,// 324 PAY 287 

    0xc95b15d2,// 325 PAY 288 

    0x8c437606,// 326 PAY 289 

    0xaaad52e2,// 327 PAY 290 

    0x8a68fecd,// 328 PAY 291 

    0x51bebe1a,// 329 PAY 292 

    0xee75c0ce,// 330 PAY 293 

    0xf3e26442,// 331 PAY 294 

    0x7c46eed0,// 332 PAY 295 

    0x9566db09,// 333 PAY 296 

    0xf6563858,// 334 PAY 297 

    0x51d22f9f,// 335 PAY 298 

    0x618a4ac3,// 336 PAY 299 

    0x237665ad,// 337 PAY 300 

    0xed9fbfd3,// 338 PAY 301 

    0xaa84a84f,// 339 PAY 302 

    0x3648fc19,// 340 PAY 303 

    0x5c90411d,// 341 PAY 304 

    0x1406526b,// 342 PAY 305 

    0xc26462a4,// 343 PAY 306 

    0x881b5048,// 344 PAY 307 

    0x83613b26,// 345 PAY 308 

    0x800d5718,// 346 PAY 309 

    0x763dce69,// 347 PAY 310 

    0x4ed185b5,// 348 PAY 311 

    0x4e61ecfc,// 349 PAY 312 

    0xf2a0b9ef,// 350 PAY 313 

    0x5acbaee0,// 351 PAY 314 

    0xb76345bf,// 352 PAY 315 

    0x0bc7d42e,// 353 PAY 316 

    0x9bfe687f,// 354 PAY 317 

    0xbac78eea,// 355 PAY 318 

    0xe278a498,// 356 PAY 319 

    0x537e1523,// 357 PAY 320 

    0x870e4947,// 358 PAY 321 

    0xed26e2da,// 359 PAY 322 

    0x49730cfe,// 360 PAY 323 

    0x45c0ff75,// 361 PAY 324 

    0x6fda5188,// 362 PAY 325 

    0xb8ce1d16,// 363 PAY 326 

    0xcfbd4c58,// 364 PAY 327 

    0x579e2371,// 365 PAY 328 

    0xf3d3a13f,// 366 PAY 329 

    0x1f182632,// 367 PAY 330 

    0x8c53293b,// 368 PAY 331 

    0xd46969d4,// 369 PAY 332 

    0x3474b4a2,// 370 PAY 333 

    0x6982c76e,// 371 PAY 334 

    0x4da85e77,// 372 PAY 335 

    0x6fef04a4,// 373 PAY 336 

    0x958a7716,// 374 PAY 337 

    0x3f2e0614,// 375 PAY 338 

    0xefc31558,// 376 PAY 339 

    0xbe96babb,// 377 PAY 340 

    0x575b007c,// 378 PAY 341 

    0xdd000000,// 379 PAY 342 

/// STA is 1 words. 

/// STA num_pkts       : 214 

/// STA pkt_idx        : 7 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xfa 

    0x001cfad6 // 380 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt36_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x03 

/// ECH pdu_tag        : 0x00 

    0x00030000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv check_icv !sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0800000f,// 3 SCX   1 

    0x80454879,// 4 SCX   2 

    0x00005342,// 5 SCX   3 

    0x87405254,// 6 SCX   4 

    0x7a867b94,// 7 SCX   5 

    0x923d8a6f,// 8 SCX   6 

    0xee387601,// 9 SCX   7 

    0xe1ed32d5,// 10 SCX   8 

    0xa9ace4b5,// 11 SCX   9 

    0x361b7de5,// 12 SCX  10 

    0xe8d441b7,// 13 SCX  11 

    0x7082cb31,// 14 SCX  12 

    0xe7956b93,// 15 SCX  13 

    0x30e99c54,// 16 SCX  14 

    0x4203d84e,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 1065 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 527 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 527 

/// BFD lencrypto      : 120 

/// BFD ofstcrypto     : 52 

/// BFD (ofst+len)cry  : 172 

/// BFD ofstiv         : 44 

/// BFD ofsticv        : 996 

    0x0000020f,// 18 BFD   1 

    0x00340078,// 19 BFD   2 

    0x03e4002c,// 20 BFD   3 

/// MFM is 15 words. 

/// MFM vldnibs        : 71 

    0x71006081,// 21 MFM   1 

    0x1f75f3ef,// 22 MFM   2 

    0x535cd429,// 23 MFM   3 

    0x317cc1f5,// 24 MFM   4 

    0x0a3106f8,// 25 MFM   5 

    0xaf2bc953,// 26 MFM   6 

    0xf3bf4113,// 27 MFM   7 

    0xd66b62bf,// 28 MFM   8 

    0x3edf822d,// 29 MFM   9 

    0xbfad7670,// 30 MFM  10 

    0x31bdf36e,// 31 MFM  11 

    0x7c21d4f4,// 32 MFM  12 

    0x87f0decc,// 33 MFM  13 

    0x953f18e5,// 34 MFM  14 

    0x287a7000,// 35 MFM  15 

/// BDA is 268 words. 

/// BDA size     is 1065 (0x429) 

/// BDA id       is 0xda48 

    0x0429da48,// 36 BDA   1 

/// PAY Generic Data size   : 1065 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0xe548d3b6,// 37 PAY   1 

    0xa2d438e0,// 38 PAY   2 

    0x4b5cc796,// 39 PAY   3 

    0x87cea418,// 40 PAY   4 

    0x4eff9eb5,// 41 PAY   5 

    0xe58791ac,// 42 PAY   6 

    0x5f05b81d,// 43 PAY   7 

    0x173a6c82,// 44 PAY   8 

    0x54f64565,// 45 PAY   9 

    0xc293c25d,// 46 PAY  10 

    0x7c314b3f,// 47 PAY  11 

    0x437bea6b,// 48 PAY  12 

    0x0bbcc469,// 49 PAY  13 

    0x2dbf636d,// 50 PAY  14 

    0x41dcdc1c,// 51 PAY  15 

    0xac3c37b6,// 52 PAY  16 

    0x0e15ccce,// 53 PAY  17 

    0x614e7762,// 54 PAY  18 

    0x8590dce8,// 55 PAY  19 

    0x731f94d3,// 56 PAY  20 

    0xae140751,// 57 PAY  21 

    0x8075252c,// 58 PAY  22 

    0x1fb8be13,// 59 PAY  23 

    0x8a96115e,// 60 PAY  24 

    0xb102f69f,// 61 PAY  25 

    0xfcfeff03,// 62 PAY  26 

    0x1a825af4,// 63 PAY  27 

    0x6b111d55,// 64 PAY  28 

    0x6f1cb00b,// 65 PAY  29 

    0x6a4ef7ef,// 66 PAY  30 

    0x141d5f48,// 67 PAY  31 

    0x93b64e88,// 68 PAY  32 

    0xa45b8e62,// 69 PAY  33 

    0x61ce7dd0,// 70 PAY  34 

    0x9db75ab4,// 71 PAY  35 

    0x3ac5b07e,// 72 PAY  36 

    0x7eeb9ce6,// 73 PAY  37 

    0x51aa6b89,// 74 PAY  38 

    0xae855c6e,// 75 PAY  39 

    0x2357aee6,// 76 PAY  40 

    0xa3cc1600,// 77 PAY  41 

    0x04819644,// 78 PAY  42 

    0xf5a644bb,// 79 PAY  43 

    0xb11ad5cb,// 80 PAY  44 

    0xb4b16c7e,// 81 PAY  45 

    0x95cc4e2c,// 82 PAY  46 

    0x2c60cf80,// 83 PAY  47 

    0x22445a81,// 84 PAY  48 

    0x7dbfb0ee,// 85 PAY  49 

    0x223fcf53,// 86 PAY  50 

    0x851b00aa,// 87 PAY  51 

    0xa4e66d33,// 88 PAY  52 

    0x2eb69f53,// 89 PAY  53 

    0xcb6f8817,// 90 PAY  54 

    0x581c1330,// 91 PAY  55 

    0x9474c778,// 92 PAY  56 

    0xe06b47d7,// 93 PAY  57 

    0x1c26b797,// 94 PAY  58 

    0xce4f32c7,// 95 PAY  59 

    0x5569c16e,// 96 PAY  60 

    0xac66ccd8,// 97 PAY  61 

    0x25e6cb43,// 98 PAY  62 

    0x5f09f622,// 99 PAY  63 

    0xe23356a0,// 100 PAY  64 

    0xf6cb9db2,// 101 PAY  65 

    0x5123f992,// 102 PAY  66 

    0x5efd03ce,// 103 PAY  67 

    0xb4607222,// 104 PAY  68 

    0x5b915b65,// 105 PAY  69 

    0x68ebaca3,// 106 PAY  70 

    0x4ae7efae,// 107 PAY  71 

    0x466ac891,// 108 PAY  72 

    0x0981550a,// 109 PAY  73 

    0x97d28bfb,// 110 PAY  74 

    0x5421b0ba,// 111 PAY  75 

    0x9a985b00,// 112 PAY  76 

    0x92b6f676,// 113 PAY  77 

    0x7d201e87,// 114 PAY  78 

    0x68d94a9c,// 115 PAY  79 

    0x6a482faf,// 116 PAY  80 

    0xe7a04a31,// 117 PAY  81 

    0x7f60d6ac,// 118 PAY  82 

    0x7e58a854,// 119 PAY  83 

    0xf47e6927,// 120 PAY  84 

    0x55850a40,// 121 PAY  85 

    0xf911e6b2,// 122 PAY  86 

    0x7ceda1f2,// 123 PAY  87 

    0x83df8bad,// 124 PAY  88 

    0xe09eaeac,// 125 PAY  89 

    0x14fcc4b9,// 126 PAY  90 

    0xdb5d68ed,// 127 PAY  91 

    0x457270a5,// 128 PAY  92 

    0x289543cc,// 129 PAY  93 

    0xf0d68512,// 130 PAY  94 

    0xf8d70f96,// 131 PAY  95 

    0xcc0f7d53,// 132 PAY  96 

    0x4c42c4e0,// 133 PAY  97 

    0x68709158,// 134 PAY  98 

    0xa7faaa6f,// 135 PAY  99 

    0xe3e11682,// 136 PAY 100 

    0x6ce6f122,// 137 PAY 101 

    0x5fe448df,// 138 PAY 102 

    0x2ed558f0,// 139 PAY 103 

    0x1c582ac9,// 140 PAY 104 

    0x9b26337d,// 141 PAY 105 

    0x7ca6877c,// 142 PAY 106 

    0xeb519d8a,// 143 PAY 107 

    0xa98a6dcd,// 144 PAY 108 

    0x44546879,// 145 PAY 109 

    0x2b853595,// 146 PAY 110 

    0x62363c2d,// 147 PAY 111 

    0x662997dc,// 148 PAY 112 

    0x5d04c0bb,// 149 PAY 113 

    0xd15e1838,// 150 PAY 114 

    0xac2c6067,// 151 PAY 115 

    0xc860719a,// 152 PAY 116 

    0x94436586,// 153 PAY 117 

    0xe11eab69,// 154 PAY 118 

    0xa1736c83,// 155 PAY 119 

    0x6f543f8e,// 156 PAY 120 

    0xfe3b06b7,// 157 PAY 121 

    0x2753ccc9,// 158 PAY 122 

    0x1ed6260b,// 159 PAY 123 

    0xf3a059dd,// 160 PAY 124 

    0xbc51a405,// 161 PAY 125 

    0x316affc2,// 162 PAY 126 

    0x2d777d49,// 163 PAY 127 

    0x20219c21,// 164 PAY 128 

    0x8e48a16e,// 165 PAY 129 

    0xb8a1f739,// 166 PAY 130 

    0x63cfd480,// 167 PAY 131 

    0x2afdb21b,// 168 PAY 132 

    0x52770be1,// 169 PAY 133 

    0x55fe5403,// 170 PAY 134 

    0xf790fda9,// 171 PAY 135 

    0xc74d3b2d,// 172 PAY 136 

    0x5c6f829a,// 173 PAY 137 

    0x64eb4c61,// 174 PAY 138 

    0x1d0f38b5,// 175 PAY 139 

    0x7ab0523c,// 176 PAY 140 

    0xd4143530,// 177 PAY 141 

    0x42f8899a,// 178 PAY 142 

    0x78b56e89,// 179 PAY 143 

    0xb139b0c1,// 180 PAY 144 

    0x70f1eb90,// 181 PAY 145 

    0x9956d31b,// 182 PAY 146 

    0x20e48e35,// 183 PAY 147 

    0xbb65d496,// 184 PAY 148 

    0x2f855c44,// 185 PAY 149 

    0x30f9e957,// 186 PAY 150 

    0x64c70319,// 187 PAY 151 

    0x9d309894,// 188 PAY 152 

    0x793fcd17,// 189 PAY 153 

    0x479b7857,// 190 PAY 154 

    0x9e6454e4,// 191 PAY 155 

    0x4bd08c98,// 192 PAY 156 

    0xee3d5558,// 193 PAY 157 

    0xc5e7058a,// 194 PAY 158 

    0x59d8425e,// 195 PAY 159 

    0x314ef0f5,// 196 PAY 160 

    0xd8655f73,// 197 PAY 161 

    0x7a91b4e6,// 198 PAY 162 

    0x1158b5f6,// 199 PAY 163 

    0x9f4ad3f3,// 200 PAY 164 

    0x0592ad47,// 201 PAY 165 

    0x2540efee,// 202 PAY 166 

    0xbcb17a77,// 203 PAY 167 

    0x70fcc651,// 204 PAY 168 

    0x0946df42,// 205 PAY 169 

    0xb828a4d5,// 206 PAY 170 

    0xa94cc6b6,// 207 PAY 171 

    0xb5f2eaaa,// 208 PAY 172 

    0xeea47f98,// 209 PAY 173 

    0x1864447c,// 210 PAY 174 

    0x6c52202a,// 211 PAY 175 

    0xfa9774f1,// 212 PAY 176 

    0x306c6a6e,// 213 PAY 177 

    0x1d5c23c6,// 214 PAY 178 

    0x1b979186,// 215 PAY 179 

    0xf6af1ef0,// 216 PAY 180 

    0xfd839aa4,// 217 PAY 181 

    0xaf8c03b0,// 218 PAY 182 

    0xd66e3f74,// 219 PAY 183 

    0x59d96b20,// 220 PAY 184 

    0x8c815dae,// 221 PAY 185 

    0xb652bd56,// 222 PAY 186 

    0xace4fb2c,// 223 PAY 187 

    0xaf92bdab,// 224 PAY 188 

    0x92949cd8,// 225 PAY 189 

    0xffe5b3d6,// 226 PAY 190 

    0xc81fdba3,// 227 PAY 191 

    0xa72fef16,// 228 PAY 192 

    0x301a2011,// 229 PAY 193 

    0xdf157854,// 230 PAY 194 

    0x72f7c331,// 231 PAY 195 

    0xc220ff8a,// 232 PAY 196 

    0xc0f9d67e,// 233 PAY 197 

    0xd572ce5f,// 234 PAY 198 

    0x8b22933d,// 235 PAY 199 

    0x8c930082,// 236 PAY 200 

    0xbcaa9a51,// 237 PAY 201 

    0x31859a70,// 238 PAY 202 

    0x6eaf6b87,// 239 PAY 203 

    0x73ab0652,// 240 PAY 204 

    0xce0eb0ba,// 241 PAY 205 

    0x5b3f81fb,// 242 PAY 206 

    0x5b3d3c77,// 243 PAY 207 

    0xbe206c8a,// 244 PAY 208 

    0x9392fe18,// 245 PAY 209 

    0xbdd66538,// 246 PAY 210 

    0xb3a50421,// 247 PAY 211 

    0xadb34218,// 248 PAY 212 

    0x82947629,// 249 PAY 213 

    0xa2a58b03,// 250 PAY 214 

    0x9f86a174,// 251 PAY 215 

    0xff7e249d,// 252 PAY 216 

    0x5bca5076,// 253 PAY 217 

    0x8acc21ce,// 254 PAY 218 

    0xe246c692,// 255 PAY 219 

    0x3cb04808,// 256 PAY 220 

    0xb27b474e,// 257 PAY 221 

    0xd10e2c71,// 258 PAY 222 

    0x2b963a6f,// 259 PAY 223 

    0xbeb985e1,// 260 PAY 224 

    0x667b76ca,// 261 PAY 225 

    0x952a090c,// 262 PAY 226 

    0x88b44bcc,// 263 PAY 227 

    0x6a705571,// 264 PAY 228 

    0x0b2b27df,// 265 PAY 229 

    0xcacfad69,// 266 PAY 230 

    0xda9fb245,// 267 PAY 231 

    0x14fa8cd8,// 268 PAY 232 

    0x39927342,// 269 PAY 233 

    0x0f054867,// 270 PAY 234 

    0x79b9e119,// 271 PAY 235 

    0x4cd66fd6,// 272 PAY 236 

    0x11839461,// 273 PAY 237 

    0xe480b3c4,// 274 PAY 238 

    0x2f792723,// 275 PAY 239 

    0x9f478d4d,// 276 PAY 240 

    0x24770dff,// 277 PAY 241 

    0xeb37641b,// 278 PAY 242 

    0xca0326e9,// 279 PAY 243 

    0x096113ca,// 280 PAY 244 

    0x046aa317,// 281 PAY 245 

    0x16714986,// 282 PAY 246 

    0x9eb79df3,// 283 PAY 247 

    0x351a163a,// 284 PAY 248 

    0x4fca6f16,// 285 PAY 249 

    0x9d2eaab2,// 286 PAY 250 

    0xcfcd3f17,// 287 PAY 251 

    0x4eee3525,// 288 PAY 252 

    0x7c8736a0,// 289 PAY 253 

    0x2122c969,// 290 PAY 254 

    0xe46132fd,// 291 PAY 255 

    0xa9f7b8b4,// 292 PAY 256 

    0xfffb6202,// 293 PAY 257 

    0x5b81096d,// 294 PAY 258 

    0x5e9aae75,// 295 PAY 259 

    0x904cfefb,// 296 PAY 260 

    0x4a85e84f,// 297 PAY 261 

    0xd90c31af,// 298 PAY 262 

    0x7d59eca0,// 299 PAY 263 

    0x1af9bb89,// 300 PAY 264 

    0xa4901c73,// 301 PAY 265 

    0x59838242,// 302 PAY 266 

    0xe9000000,// 303 PAY 267 

/// STA is 1 words. 

/// STA num_pkts       : 178 

/// STA pkt_idx        : 254 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x32 

    0x03f932b2 // 304 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt37_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x0b 

/// ECH pdu_tag        : 0x00 

    0x000b0000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0800000f,// 3 SCX   1 

    0x804148cd,// 4 SCX   2 

    0x00004100,// 5 SCX   3 

    0x1ca850d0,// 6 SCX   4 

    0xe74abff4,// 7 SCX   5 

    0x4ac3b173,// 8 SCX   6 

    0xadd0b928,// 9 SCX   7 

    0x1d629380,// 10 SCX   8 

    0x015e08e6,// 11 SCX   9 

    0x75f8749c,// 12 SCX  10 

    0xccc60f11,// 13 SCX  11 

    0x09d59da7,// 14 SCX  12 

    0xca85e5b3,// 15 SCX  13 

    0xf5115ccf,// 16 SCX  14 

    0x33bc2472,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 1075 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 804 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 804 

/// BFD lencrypto      : 512 

/// BFD ofstcrypto     : 132 

/// BFD (ofst+len)cry  : 644 

/// BFD ofstiv         : 0 

/// BFD ofsticv        : 968 

    0x00000324,// 18 BFD   1 

    0x00840200,// 19 BFD   2 

    0x03c80000,// 20 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c00d2a9,// 21 MFM   1 

    0xbc24e2f9,// 22 MFM   2 

    0x4bd95447,// 23 MFM   3 

    0xb54561b2,// 24 MFM   4 

    0xb9bb29f2,// 25 MFM   5 

    0xfc8c7ec3,// 26 MFM   6 

    0x9e76797e,// 27 MFM   7 

    0x77c09f58,// 28 MFM   8 

    0xb7112e03,// 29 MFM   9 

    0x76340d10,// 30 MFM  10 

    0x753c7f70,// 31 MFM  11 

    0x6e8c9530,// 32 MFM  12 

    0x3af8573e,// 33 MFM  13 

    0xb9639b52,// 34 MFM  14 

    0xfe927cc7,// 35 MFM  15 

    0xe5035e9a,// 36 MFM  16 

/// BDA is 270 words. 

/// BDA size     is 1075 (0x433) 

/// BDA id       is 0x1608 

    0x04331608,// 37 BDA   1 

/// PAY Generic Data size   : 1075 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0xf97f79c3,// 38 PAY   1 

    0x9adb5ce6,// 39 PAY   2 

    0xf8462229,// 40 PAY   3 

    0xb824a34d,// 41 PAY   4 

    0xab448bdd,// 42 PAY   5 

    0x32e64083,// 43 PAY   6 

    0x171a8ce5,// 44 PAY   7 

    0x424639fc,// 45 PAY   8 

    0x40774957,// 46 PAY   9 

    0xfd955496,// 47 PAY  10 

    0x0afe9c20,// 48 PAY  11 

    0x0f7a00f0,// 49 PAY  12 

    0x48681c0e,// 50 PAY  13 

    0xe7c8a83e,// 51 PAY  14 

    0xfb9ded83,// 52 PAY  15 

    0x22d98b60,// 53 PAY  16 

    0x1365282e,// 54 PAY  17 

    0x85d99589,// 55 PAY  18 

    0x278a2977,// 56 PAY  19 

    0x01eccc25,// 57 PAY  20 

    0xc0e4bc7a,// 58 PAY  21 

    0xb40d8273,// 59 PAY  22 

    0xa98ea55f,// 60 PAY  23 

    0x6ee49f9d,// 61 PAY  24 

    0x35636fc4,// 62 PAY  25 

    0xc70211eb,// 63 PAY  26 

    0x9d7bfe7b,// 64 PAY  27 

    0x8d90e5ba,// 65 PAY  28 

    0x815f1e49,// 66 PAY  29 

    0x063319b7,// 67 PAY  30 

    0xb733d6c4,// 68 PAY  31 

    0x33488da1,// 69 PAY  32 

    0xa1a917d5,// 70 PAY  33 

    0x29e07905,// 71 PAY  34 

    0xd95dcbce,// 72 PAY  35 

    0x961b3f5f,// 73 PAY  36 

    0xcd22e9b4,// 74 PAY  37 

    0xf22471d4,// 75 PAY  38 

    0xfd7214e2,// 76 PAY  39 

    0x08cb27a8,// 77 PAY  40 

    0x4b03ee65,// 78 PAY  41 

    0x452a1b03,// 79 PAY  42 

    0xbc891eb7,// 80 PAY  43 

    0xcbbeb4a7,// 81 PAY  44 

    0x13b1bd0b,// 82 PAY  45 

    0x070fef96,// 83 PAY  46 

    0xf956edd3,// 84 PAY  47 

    0xa76653b4,// 85 PAY  48 

    0xbd701fd5,// 86 PAY  49 

    0x9a5eb45a,// 87 PAY  50 

    0x7d799feb,// 88 PAY  51 

    0x1d8e88a5,// 89 PAY  52 

    0xd2de4ac9,// 90 PAY  53 

    0xeeb8e70d,// 91 PAY  54 

    0xa14961bb,// 92 PAY  55 

    0xd6831c8e,// 93 PAY  56 

    0x7202470a,// 94 PAY  57 

    0x93ee0eec,// 95 PAY  58 

    0x2d3973a6,// 96 PAY  59 

    0x5b613833,// 97 PAY  60 

    0xb50f272a,// 98 PAY  61 

    0x425ae8a6,// 99 PAY  62 

    0x0296e4b9,// 100 PAY  63 

    0x6eddcd6e,// 101 PAY  64 

    0xa8ca9916,// 102 PAY  65 

    0xb3280b45,// 103 PAY  66 

    0x7825743e,// 104 PAY  67 

    0x9d6df0e0,// 105 PAY  68 

    0xeaafc171,// 106 PAY  69 

    0xfaec9928,// 107 PAY  70 

    0x365b2330,// 108 PAY  71 

    0x48f9bf82,// 109 PAY  72 

    0xa5c62d4a,// 110 PAY  73 

    0xf30bc367,// 111 PAY  74 

    0x35dde6a5,// 112 PAY  75 

    0x76c069c3,// 113 PAY  76 

    0xfb875fec,// 114 PAY  77 

    0x87075d6e,// 115 PAY  78 

    0xc4ae129d,// 116 PAY  79 

    0xcaca3d11,// 117 PAY  80 

    0x9e4d5241,// 118 PAY  81 

    0x19efcacf,// 119 PAY  82 

    0x0be14f1c,// 120 PAY  83 

    0x44eb185e,// 121 PAY  84 

    0xded2e2dd,// 122 PAY  85 

    0x108c70a8,// 123 PAY  86 

    0x4e9d2f0e,// 124 PAY  87 

    0xf3fdb6ae,// 125 PAY  88 

    0x2207560f,// 126 PAY  89 

    0x71962229,// 127 PAY  90 

    0x35121d67,// 128 PAY  91 

    0x21fb23bc,// 129 PAY  92 

    0xa27a65cd,// 130 PAY  93 

    0x72464bb0,// 131 PAY  94 

    0x7969c33c,// 132 PAY  95 

    0x27a8b72c,// 133 PAY  96 

    0xdf894ce1,// 134 PAY  97 

    0xc144c8ba,// 135 PAY  98 

    0xa6b5befc,// 136 PAY  99 

    0xc960902f,// 137 PAY 100 

    0xb3bb214b,// 138 PAY 101 

    0xf14d4240,// 139 PAY 102 

    0xcb24d65b,// 140 PAY 103 

    0x9a9fec18,// 141 PAY 104 

    0xb9c04824,// 142 PAY 105 

    0xf285824b,// 143 PAY 106 

    0xcb3ff0a8,// 144 PAY 107 

    0x0a1735b5,// 145 PAY 108 

    0x81d38675,// 146 PAY 109 

    0xeb84f557,// 147 PAY 110 

    0xf4c2a4e8,// 148 PAY 111 

    0xf5c81d9d,// 149 PAY 112 

    0xbbd6a386,// 150 PAY 113 

    0x470f749f,// 151 PAY 114 

    0x97dfaa1d,// 152 PAY 115 

    0x1d674713,// 153 PAY 116 

    0x2ed4024d,// 154 PAY 117 

    0xf1c5035b,// 155 PAY 118 

    0x27e80383,// 156 PAY 119 

    0x87f7c50d,// 157 PAY 120 

    0xffb0bf94,// 158 PAY 121 

    0x3330d7cb,// 159 PAY 122 

    0x57e31519,// 160 PAY 123 

    0xdc48d27b,// 161 PAY 124 

    0x959c1048,// 162 PAY 125 

    0xc28ce656,// 163 PAY 126 

    0x73f6de99,// 164 PAY 127 

    0xe200f4b2,// 165 PAY 128 

    0x3e3f2ca7,// 166 PAY 129 

    0x67567325,// 167 PAY 130 

    0xe7f86cd2,// 168 PAY 131 

    0xb066cc4b,// 169 PAY 132 

    0x15b42d60,// 170 PAY 133 

    0xc9671870,// 171 PAY 134 

    0xc7e1a798,// 172 PAY 135 

    0xb0d80e74,// 173 PAY 136 

    0x6070edbf,// 174 PAY 137 

    0xd294ea67,// 175 PAY 138 

    0x2d87e5dd,// 176 PAY 139 

    0x056a37fb,// 177 PAY 140 

    0x08850635,// 178 PAY 141 

    0x294fca4a,// 179 PAY 142 

    0x213d912b,// 180 PAY 143 

    0x7963527c,// 181 PAY 144 

    0xd8b4f55a,// 182 PAY 145 

    0x2da32fb6,// 183 PAY 146 

    0x15410cab,// 184 PAY 147 

    0xf4504e22,// 185 PAY 148 

    0xe65675dd,// 186 PAY 149 

    0xfcedfb2b,// 187 PAY 150 

    0x1eba6807,// 188 PAY 151 

    0xc123bb9f,// 189 PAY 152 

    0xf726bcbd,// 190 PAY 153 

    0xcecc564d,// 191 PAY 154 

    0x98af7611,// 192 PAY 155 

    0xfd9fa338,// 193 PAY 156 

    0xdb135dc2,// 194 PAY 157 

    0x9d3125f8,// 195 PAY 158 

    0x796e633c,// 196 PAY 159 

    0x217ac4e4,// 197 PAY 160 

    0xdd49f591,// 198 PAY 161 

    0x88587bd5,// 199 PAY 162 

    0x19e896a4,// 200 PAY 163 

    0x638ea73e,// 201 PAY 164 

    0x523fd6a2,// 202 PAY 165 

    0x5693c05e,// 203 PAY 166 

    0x97527c78,// 204 PAY 167 

    0xe2aa1bca,// 205 PAY 168 

    0xb758217e,// 206 PAY 169 

    0x07a93dd2,// 207 PAY 170 

    0xee6fbff8,// 208 PAY 171 

    0x1f72e0a8,// 209 PAY 172 

    0x8e752f25,// 210 PAY 173 

    0xde4a22b3,// 211 PAY 174 

    0xa3822471,// 212 PAY 175 

    0x8599a777,// 213 PAY 176 

    0x0fafd115,// 214 PAY 177 

    0xd3cba904,// 215 PAY 178 

    0xbe359855,// 216 PAY 179 

    0xed6c0661,// 217 PAY 180 

    0xa6a77bd4,// 218 PAY 181 

    0xdce8a201,// 219 PAY 182 

    0x69d01330,// 220 PAY 183 

    0x9a303913,// 221 PAY 184 

    0xf62cf56b,// 222 PAY 185 

    0x694ef12e,// 223 PAY 186 

    0x94b632b0,// 224 PAY 187 

    0x9a2e78c6,// 225 PAY 188 

    0xe5243f58,// 226 PAY 189 

    0x1f9cec72,// 227 PAY 190 

    0xe28cf8bc,// 228 PAY 191 

    0x3531e3a3,// 229 PAY 192 

    0x841a06ce,// 230 PAY 193 

    0x355f7a04,// 231 PAY 194 

    0x58503669,// 232 PAY 195 

    0x4339800f,// 233 PAY 196 

    0x6f2ff798,// 234 PAY 197 

    0xff57cd1a,// 235 PAY 198 

    0x4351297e,// 236 PAY 199 

    0xfff22ef6,// 237 PAY 200 

    0x0640c918,// 238 PAY 201 

    0x60c11565,// 239 PAY 202 

    0xc894a7bd,// 240 PAY 203 

    0x0feb8a76,// 241 PAY 204 

    0x84d49e0e,// 242 PAY 205 

    0x127fe61a,// 243 PAY 206 

    0x7230b18f,// 244 PAY 207 

    0xb6deda93,// 245 PAY 208 

    0x7df72b6f,// 246 PAY 209 

    0x6b90a3ba,// 247 PAY 210 

    0xd6632d47,// 248 PAY 211 

    0x51b7360c,// 249 PAY 212 

    0x1b7b87fd,// 250 PAY 213 

    0xce8b0801,// 251 PAY 214 

    0x57dafd24,// 252 PAY 215 

    0xcc714fc9,// 253 PAY 216 

    0x6d64cd8a,// 254 PAY 217 

    0xe9eb607a,// 255 PAY 218 

    0x178864ca,// 256 PAY 219 

    0x2411ac8a,// 257 PAY 220 

    0xe76eb78c,// 258 PAY 221 

    0x5f4653de,// 259 PAY 222 

    0xcba7b8db,// 260 PAY 223 

    0x40026596,// 261 PAY 224 

    0x1ea054b1,// 262 PAY 225 

    0xab37a807,// 263 PAY 226 

    0xf2565de4,// 264 PAY 227 

    0x9e6b04f7,// 265 PAY 228 

    0x8c51ba18,// 266 PAY 229 

    0xef07ae36,// 267 PAY 230 

    0x931b1b47,// 268 PAY 231 

    0x780ad61f,// 269 PAY 232 

    0x3ca8e81e,// 270 PAY 233 

    0xd896b109,// 271 PAY 234 

    0x31f2e7d3,// 272 PAY 235 

    0xf1d907b3,// 273 PAY 236 

    0x81a2ae42,// 274 PAY 237 

    0x7716c74b,// 275 PAY 238 

    0xceddc49b,// 276 PAY 239 

    0xfdb80a10,// 277 PAY 240 

    0x689d2314,// 278 PAY 241 

    0x4e3b0266,// 279 PAY 242 

    0x9cfe6a2d,// 280 PAY 243 

    0xe5897583,// 281 PAY 244 

    0xd7ead58a,// 282 PAY 245 

    0x2f73cf1b,// 283 PAY 246 

    0xa7ef5d49,// 284 PAY 247 

    0x6f72662c,// 285 PAY 248 

    0x558ad1ec,// 286 PAY 249 

    0x00d6382e,// 287 PAY 250 

    0x5b410d82,// 288 PAY 251 

    0x9ddd1a4d,// 289 PAY 252 

    0x4a8f62dc,// 290 PAY 253 

    0xf987801c,// 291 PAY 254 

    0x29789fcd,// 292 PAY 255 

    0x0e9f6a7a,// 293 PAY 256 

    0x4c7717cb,// 294 PAY 257 

    0x6f7e7ff3,// 295 PAY 258 

    0x888f4f55,// 296 PAY 259 

    0x4faecb12,// 297 PAY 260 

    0x8705d013,// 298 PAY 261 

    0xba3adeda,// 299 PAY 262 

    0x232b3ed1,// 300 PAY 263 

    0xd6f63614,// 301 PAY 264 

    0xb433cb1d,// 302 PAY 265 

    0x9a984133,// 303 PAY 266 

    0x1ef7204b,// 304 PAY 267 

    0x3819bb95,// 305 PAY 268 

    0x3dfb1800,// 306 PAY 269 

/// STA is 1 words. 

/// STA num_pkts       : 164 

/// STA pkt_idx        : 88 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xbe 

    0x0161bea4 // 307 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc !incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt38_tmpl[] = {
    0xa8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x06 

/// ECH pdu_tag        : 0x00 

    0x00060000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv insert_icv !check_icv sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x5 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x00000011,// 3 SCX   1 

    0x8044480c,// 4 SCX   2 

    0x000025c2,// 5 SCX   3 

    0x6f4a946a,// 6 SCX   4 

    0xcb60c496,// 7 SCX   5 

    0x1b3e5ed9,// 8 SCX   6 

    0x02d6bf71,// 9 SCX   7 

    0x2b1c463d,// 10 SCX   8 

    0x38598d95,// 11 SCX   9 

    0xd9df876d,// 12 SCX  10 

    0xe8537f3e,// 13 SCX  11 

    0x195d0fb5,// 14 SCX  12 

    0x681ff0ad,// 15 SCX  13 

    0x7152982c,// 16 SCX  14 

    0x3c1c4d04,// 17 SCX  15 

    0x36fae823,// 18 SCX  16 

    0xa4f8fff3,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1274 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 850 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 850 

/// BFD lencrypto      : 128 

/// BFD ofstcrypto     : 412 

/// BFD (ofst+len)cry  : 540 

/// BFD ofstiv         : 20 

/// BFD ofsticv        : 1060 

    0x00000352,// 20 BFD   1 

    0x019c0080,// 21 BFD   2 

    0x04240014,// 22 BFD   3 

/// BDA is 320 words. 

/// BDA size     is 1274 (0x4fa) 

/// BDA id       is 0x1528 

    0x04fa1528,// 23 BDA   1 

/// PAY Generic Data size   : 1274 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x1aa90ea7,// 24 PAY   1 

    0x338743c6,// 25 PAY   2 

    0xa7fa6f1f,// 26 PAY   3 

    0x7e0aeb65,// 27 PAY   4 

    0x1f4ac56b,// 28 PAY   5 

    0x0d3f93f7,// 29 PAY   6 

    0x90f4111a,// 30 PAY   7 

    0x45c3d4ed,// 31 PAY   8 

    0x745e3e69,// 32 PAY   9 

    0x4ed9beae,// 33 PAY  10 

    0x92141ba4,// 34 PAY  11 

    0xd4c32577,// 35 PAY  12 

    0xb561e3c3,// 36 PAY  13 

    0x71b1e631,// 37 PAY  14 

    0x6af3086c,// 38 PAY  15 

    0x08a8a073,// 39 PAY  16 

    0xbbd37a0c,// 40 PAY  17 

    0x477a45dd,// 41 PAY  18 

    0x784d0dba,// 42 PAY  19 

    0x7e5a5585,// 43 PAY  20 

    0xdea1888a,// 44 PAY  21 

    0x1f5ef799,// 45 PAY  22 

    0xc25d8032,// 46 PAY  23 

    0x4c4890b6,// 47 PAY  24 

    0x433015cf,// 48 PAY  25 

    0xa00e1514,// 49 PAY  26 

    0xeb1953a4,// 50 PAY  27 

    0x2c4d764c,// 51 PAY  28 

    0xe2a4d49b,// 52 PAY  29 

    0x4cd1aead,// 53 PAY  30 

    0x2c6dc081,// 54 PAY  31 

    0x614f1755,// 55 PAY  32 

    0x8ee608f2,// 56 PAY  33 

    0x29a0653c,// 57 PAY  34 

    0x93a8f463,// 58 PAY  35 

    0xcaea84e6,// 59 PAY  36 

    0xa6093972,// 60 PAY  37 

    0x4439f146,// 61 PAY  38 

    0xd94ba73e,// 62 PAY  39 

    0x12526217,// 63 PAY  40 

    0x1bad5456,// 64 PAY  41 

    0x6017124f,// 65 PAY  42 

    0x7f1327e0,// 66 PAY  43 

    0x8f9896d9,// 67 PAY  44 

    0xdeaa6193,// 68 PAY  45 

    0x33b2254f,// 69 PAY  46 

    0x6bacd1b3,// 70 PAY  47 

    0x4a2bbdf5,// 71 PAY  48 

    0xbf880d81,// 72 PAY  49 

    0x81d765ec,// 73 PAY  50 

    0xb3b7deb8,// 74 PAY  51 

    0x499907c9,// 75 PAY  52 

    0x6e28b621,// 76 PAY  53 

    0x9b31b02d,// 77 PAY  54 

    0x596cb5e8,// 78 PAY  55 

    0x25ca388b,// 79 PAY  56 

    0xba47902b,// 80 PAY  57 

    0xeacfe727,// 81 PAY  58 

    0xcc33ea7b,// 82 PAY  59 

    0x8f71d4ac,// 83 PAY  60 

    0x42e97985,// 84 PAY  61 

    0xdc5db8ea,// 85 PAY  62 

    0xc91e7d0d,// 86 PAY  63 

    0x54159c12,// 87 PAY  64 

    0x0cb784b8,// 88 PAY  65 

    0x5d2122f3,// 89 PAY  66 

    0xfa4659b4,// 90 PAY  67 

    0xe3473d6f,// 91 PAY  68 

    0x4ffb20f0,// 92 PAY  69 

    0x6b0e4d99,// 93 PAY  70 

    0x1ca390a7,// 94 PAY  71 

    0x9a97f3ea,// 95 PAY  72 

    0x2a36db1c,// 96 PAY  73 

    0x60908c8b,// 97 PAY  74 

    0x25f87166,// 98 PAY  75 

    0xe13c7c7e,// 99 PAY  76 

    0x06c6f672,// 100 PAY  77 

    0xf10e165b,// 101 PAY  78 

    0xc8eef476,// 102 PAY  79 

    0x29a7f778,// 103 PAY  80 

    0x65c83940,// 104 PAY  81 

    0x29f20f29,// 105 PAY  82 

    0xa4666d2f,// 106 PAY  83 

    0x60c4e426,// 107 PAY  84 

    0xfd0bca75,// 108 PAY  85 

    0x0a5e3cc9,// 109 PAY  86 

    0x59bd49de,// 110 PAY  87 

    0xc68cba13,// 111 PAY  88 

    0x848c41b7,// 112 PAY  89 

    0x26fa0409,// 113 PAY  90 

    0x29aea08d,// 114 PAY  91 

    0xeb2bc07e,// 115 PAY  92 

    0x93a83450,// 116 PAY  93 

    0xf2dd7880,// 117 PAY  94 

    0x17f19fee,// 118 PAY  95 

    0x7539ecbd,// 119 PAY  96 

    0x91d663be,// 120 PAY  97 

    0x04b1a6e3,// 121 PAY  98 

    0xf01bb22f,// 122 PAY  99 

    0x5e1a6ba1,// 123 PAY 100 

    0xe2772779,// 124 PAY 101 

    0x5492056c,// 125 PAY 102 

    0xc0093abb,// 126 PAY 103 

    0x64baf946,// 127 PAY 104 

    0x12848c6b,// 128 PAY 105 

    0x94f5ab9c,// 129 PAY 106 

    0xca443917,// 130 PAY 107 

    0x1d9b7dfa,// 131 PAY 108 

    0x1fb0ed53,// 132 PAY 109 

    0x226bfb92,// 133 PAY 110 

    0x4076878c,// 134 PAY 111 

    0x245a6d54,// 135 PAY 112 

    0xe7b7d621,// 136 PAY 113 

    0x1b85fc18,// 137 PAY 114 

    0xa41d6010,// 138 PAY 115 

    0x943da192,// 139 PAY 116 

    0x1e348f05,// 140 PAY 117 

    0xad9598a1,// 141 PAY 118 

    0x2633a582,// 142 PAY 119 

    0xe5ca9e8f,// 143 PAY 120 

    0x6518bd73,// 144 PAY 121 

    0x96403f3f,// 145 PAY 122 

    0x156b9ab0,// 146 PAY 123 

    0xbb23ea16,// 147 PAY 124 

    0x589a6344,// 148 PAY 125 

    0xf37bf5d3,// 149 PAY 126 

    0x2ba7197e,// 150 PAY 127 

    0x78bc8cdd,// 151 PAY 128 

    0x7e5c15f3,// 152 PAY 129 

    0x65f6dd27,// 153 PAY 130 

    0xfb0cbc8b,// 154 PAY 131 

    0x3bd9daea,// 155 PAY 132 

    0xe11fbd21,// 156 PAY 133 

    0xfa3bbc20,// 157 PAY 134 

    0x84004d00,// 158 PAY 135 

    0x23242fc1,// 159 PAY 136 

    0xbcd72c38,// 160 PAY 137 

    0x745d9e80,// 161 PAY 138 

    0xfdc64884,// 162 PAY 139 

    0x17df21fc,// 163 PAY 140 

    0x07279ed9,// 164 PAY 141 

    0x1713e878,// 165 PAY 142 

    0xe6cacdc0,// 166 PAY 143 

    0xfaebbefb,// 167 PAY 144 

    0xc5b8e089,// 168 PAY 145 

    0x136ae343,// 169 PAY 146 

    0x4dd055ea,// 170 PAY 147 

    0x99b5d323,// 171 PAY 148 

    0x0ad611ea,// 172 PAY 149 

    0x53093ed7,// 173 PAY 150 

    0x43d41734,// 174 PAY 151 

    0xc8a5f6fe,// 175 PAY 152 

    0xc531d12b,// 176 PAY 153 

    0xd1c66cef,// 177 PAY 154 

    0x9a1bd474,// 178 PAY 155 

    0xc3e167ce,// 179 PAY 156 

    0x6565d131,// 180 PAY 157 

    0xf7bc01a5,// 181 PAY 158 

    0x31187c66,// 182 PAY 159 

    0x67ff70ae,// 183 PAY 160 

    0x48053762,// 184 PAY 161 

    0x9d1f1b4b,// 185 PAY 162 

    0x11648bd3,// 186 PAY 163 

    0xdaec3509,// 187 PAY 164 

    0xeffa229a,// 188 PAY 165 

    0xe0f85e02,// 189 PAY 166 

    0x9a873a80,// 190 PAY 167 

    0xbe1ad08b,// 191 PAY 168 

    0xa248e14c,// 192 PAY 169 

    0x62929a25,// 193 PAY 170 

    0x10a4ad31,// 194 PAY 171 

    0xb7b1e57d,// 195 PAY 172 

    0x65e72f4b,// 196 PAY 173 

    0xcd178e6f,// 197 PAY 174 

    0x4866ed53,// 198 PAY 175 

    0x5c4dc581,// 199 PAY 176 

    0xdbbcd713,// 200 PAY 177 

    0x8db0ca34,// 201 PAY 178 

    0xe8183f1c,// 202 PAY 179 

    0x1b9a4c3d,// 203 PAY 180 

    0x5f9f617a,// 204 PAY 181 

    0x3e58f76a,// 205 PAY 182 

    0x9b41120e,// 206 PAY 183 

    0x7dd90482,// 207 PAY 184 

    0xbd861bf6,// 208 PAY 185 

    0xeba995a7,// 209 PAY 186 

    0xeb782870,// 210 PAY 187 

    0x8cc61ff2,// 211 PAY 188 

    0x451b823e,// 212 PAY 189 

    0x4fca352e,// 213 PAY 190 

    0x5e70d48b,// 214 PAY 191 

    0xb3655ddb,// 215 PAY 192 

    0x3528bf4e,// 216 PAY 193 

    0xf9ca4e98,// 217 PAY 194 

    0x0e936047,// 218 PAY 195 

    0x2d7135f4,// 219 PAY 196 

    0x5f67073b,// 220 PAY 197 

    0x7ad946de,// 221 PAY 198 

    0x3075fc39,// 222 PAY 199 

    0x636fd6f8,// 223 PAY 200 

    0xc295581e,// 224 PAY 201 

    0x690ba5cc,// 225 PAY 202 

    0x484d9936,// 226 PAY 203 

    0x08b1bad3,// 227 PAY 204 

    0x653680c4,// 228 PAY 205 

    0xfb00d800,// 229 PAY 206 

    0xed547b9d,// 230 PAY 207 

    0x9a6e6ffe,// 231 PAY 208 

    0x96de8fc1,// 232 PAY 209 

    0x68cb3078,// 233 PAY 210 

    0x47d2d94a,// 234 PAY 211 

    0x95fa56f5,// 235 PAY 212 

    0xd636a19f,// 236 PAY 213 

    0xa6b8b32e,// 237 PAY 214 

    0x72b2e884,// 238 PAY 215 

    0xc42893fc,// 239 PAY 216 

    0x9890dfa9,// 240 PAY 217 

    0xbdc6d211,// 241 PAY 218 

    0x1f32ac05,// 242 PAY 219 

    0xdea20b1d,// 243 PAY 220 

    0xab934723,// 244 PAY 221 

    0x4eadda82,// 245 PAY 222 

    0xf59337de,// 246 PAY 223 

    0xd1c1927c,// 247 PAY 224 

    0x1338d7a3,// 248 PAY 225 

    0xf0c60543,// 249 PAY 226 

    0x7b78b6c5,// 250 PAY 227 

    0x8b7f860d,// 251 PAY 228 

    0xed6940d2,// 252 PAY 229 

    0xb131508b,// 253 PAY 230 

    0x08e36f18,// 254 PAY 231 

    0xea478520,// 255 PAY 232 

    0xbc6b1b68,// 256 PAY 233 

    0xf4b9c6a3,// 257 PAY 234 

    0x31d34cae,// 258 PAY 235 

    0x72b2f31d,// 259 PAY 236 

    0xeede18be,// 260 PAY 237 

    0xdabf5d63,// 261 PAY 238 

    0xf4d8a26c,// 262 PAY 239 

    0xea224630,// 263 PAY 240 

    0xbdb9bc71,// 264 PAY 241 

    0xc18b2841,// 265 PAY 242 

    0x07907135,// 266 PAY 243 

    0x70969afc,// 267 PAY 244 

    0x991dca7d,// 268 PAY 245 

    0xf7c5204b,// 269 PAY 246 

    0x46285632,// 270 PAY 247 

    0xaf1c8fbc,// 271 PAY 248 

    0xf6e36aea,// 272 PAY 249 

    0x933b6b8e,// 273 PAY 250 

    0xb6279588,// 274 PAY 251 

    0x77b7ca9c,// 275 PAY 252 

    0x97630cc3,// 276 PAY 253 

    0xe8d467bb,// 277 PAY 254 

    0x4ad639a5,// 278 PAY 255 

    0xf0a5f2f9,// 279 PAY 256 

    0x09f7d15f,// 280 PAY 257 

    0x70727d44,// 281 PAY 258 

    0xf0fb2b9e,// 282 PAY 259 

    0x55bb9b2d,// 283 PAY 260 

    0x455ae800,// 284 PAY 261 

    0x8b0785d2,// 285 PAY 262 

    0xb316452d,// 286 PAY 263 

    0x8fd8e67b,// 287 PAY 264 

    0xb937314b,// 288 PAY 265 

    0xb39bb0d2,// 289 PAY 266 

    0x2568b4ed,// 290 PAY 267 

    0x8fb1fa68,// 291 PAY 268 

    0x3e850355,// 292 PAY 269 

    0xe28754e5,// 293 PAY 270 

    0x313cccb3,// 294 PAY 271 

    0x6276688a,// 295 PAY 272 

    0xfaa7eca1,// 296 PAY 273 

    0x6c73b127,// 297 PAY 274 

    0xaf380472,// 298 PAY 275 

    0x44e4c80e,// 299 PAY 276 

    0xd933986a,// 300 PAY 277 

    0xb5363692,// 301 PAY 278 

    0xd5af74a5,// 302 PAY 279 

    0x729c7a20,// 303 PAY 280 

    0xf898eaa1,// 304 PAY 281 

    0x500262cb,// 305 PAY 282 

    0x53e409b3,// 306 PAY 283 

    0x69036323,// 307 PAY 284 

    0x739eeaef,// 308 PAY 285 

    0x2c12006d,// 309 PAY 286 

    0x53493742,// 310 PAY 287 

    0xf807882d,// 311 PAY 288 

    0x12584588,// 312 PAY 289 

    0x20e9d4c5,// 313 PAY 290 

    0x5f5a5778,// 314 PAY 291 

    0xea7b0656,// 315 PAY 292 

    0x72425b72,// 316 PAY 293 

    0x88fe5da5,// 317 PAY 294 

    0x9ebf81c5,// 318 PAY 295 

    0xb92cdd14,// 319 PAY 296 

    0xd92e0d50,// 320 PAY 297 

    0xd84338e6,// 321 PAY 298 

    0xe05b7716,// 322 PAY 299 

    0x14611fbf,// 323 PAY 300 

    0x377e8714,// 324 PAY 301 

    0x2a0547a4,// 325 PAY 302 

    0x5b864313,// 326 PAY 303 

    0x7340e51a,// 327 PAY 304 

    0xefec5f83,// 328 PAY 305 

    0x9a5cddd3,// 329 PAY 306 

    0x6955d44b,// 330 PAY 307 

    0x14886abd,// 331 PAY 308 

    0x973b4d19,// 332 PAY 309 

    0x04f127d2,// 333 PAY 310 

    0x06462731,// 334 PAY 311 

    0xe1c5045a,// 335 PAY 312 

    0xe9cf1198,// 336 PAY 313 

    0xef62403f,// 337 PAY 314 

    0x0d250073,// 338 PAY 315 

    0x9233f1e7,// 339 PAY 316 

    0xea27869f,// 340 PAY 317 

    0x278b9d6c,// 341 PAY 318 

    0x2b080000,// 342 PAY 319 

/// STA is 1 words. 

/// STA num_pkts       : 229 

/// STA pkt_idx        : 76 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x4f 

    0x01314fe5 // 343 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt39_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x05 

/// ECH pdu_tag        : 0x00 

    0x00050000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv !insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0000000f,// 3 SCX   1 

    0x804248fb,// 4 SCX   2 

    0x00000200,// 5 SCX   3 

    0x125c18ad,// 6 SCX   4 

    0x26662ec4,// 7 SCX   5 

    0xefcf565f,// 8 SCX   6 

    0xbd6715fc,// 9 SCX   7 

    0xc80ad480,// 10 SCX   8 

    0xf6b7913b,// 11 SCX   9 

    0xcc84e040,// 12 SCX  10 

    0x09708e39,// 13 SCX  11 

    0xf613e8bf,// 14 SCX  12 

    0x4120d69e,// 15 SCX  13 

    0x667fa4ef,// 16 SCX  14 

    0xcb21c2a8,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 1088 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 201 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 201 

/// BFD lencrypto      : 56 

/// BFD ofstcrypto     : 24 

/// BFD (ofst+len)cry  : 80 

/// BFD ofstiv         : 4 

/// BFD ofsticv        : 424 

    0x000000c9,// 18 BFD   1 

    0x00180038,// 19 BFD   2 

    0x01a80004,// 20 BFD   3 

/// MFM is 2 words. 

/// MFM vldnibs        : 7 

    0x0700cc2f,// 21 MFM   1 

    0xa5100000,// 22 MFM   2 

/// BDA is 273 words. 

/// BDA size     is 1088 (0x440) 

/// BDA id       is 0xc25c 

    0x0440c25c,// 23 BDA   1 

/// PAY Generic Data size   : 1088 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0xce8e30fd,// 24 PAY   1 

    0x8788640d,// 25 PAY   2 

    0x05e3db2d,// 26 PAY   3 

    0x701fec94,// 27 PAY   4 

    0xe48ce3cf,// 28 PAY   5 

    0xa226e36c,// 29 PAY   6 

    0x4ac6eaae,// 30 PAY   7 

    0xbd56324e,// 31 PAY   8 

    0xd7134f27,// 32 PAY   9 

    0xb26ec862,// 33 PAY  10 

    0x18035e5d,// 34 PAY  11 

    0xafedd797,// 35 PAY  12 

    0xad60397e,// 36 PAY  13 

    0xd6e2436d,// 37 PAY  14 

    0x04ce19b9,// 38 PAY  15 

    0xf240fe8e,// 39 PAY  16 

    0x5ec37e3e,// 40 PAY  17 

    0xa43c7c18,// 41 PAY  18 

    0x0dd55b9f,// 42 PAY  19 

    0x77c00045,// 43 PAY  20 

    0x9e2b3227,// 44 PAY  21 

    0xd8aa92f7,// 45 PAY  22 

    0x0ff28964,// 46 PAY  23 

    0xc4183f8e,// 47 PAY  24 

    0x89324211,// 48 PAY  25 

    0xf516c6fd,// 49 PAY  26 

    0xe3a63e79,// 50 PAY  27 

    0x1c6ad627,// 51 PAY  28 

    0x24ae076d,// 52 PAY  29 

    0x3787dc18,// 53 PAY  30 

    0xdce3c0f1,// 54 PAY  31 

    0xfec22848,// 55 PAY  32 

    0x0a31070a,// 56 PAY  33 

    0x74499f2e,// 57 PAY  34 

    0xfb13018b,// 58 PAY  35 

    0x7a9bbf2f,// 59 PAY  36 

    0x2d4240e4,// 60 PAY  37 

    0xa6d2ee05,// 61 PAY  38 

    0xfd1ee60d,// 62 PAY  39 

    0x538644b8,// 63 PAY  40 

    0x7038174a,// 64 PAY  41 

    0xc1e2646b,// 65 PAY  42 

    0xb304a839,// 66 PAY  43 

    0x0ea0b66f,// 67 PAY  44 

    0x97e5ea44,// 68 PAY  45 

    0xa70c637a,// 69 PAY  46 

    0x84ba43a6,// 70 PAY  47 

    0x44902244,// 71 PAY  48 

    0x589bdaee,// 72 PAY  49 

    0x930bbb70,// 73 PAY  50 

    0x8072a95b,// 74 PAY  51 

    0xa3afc9de,// 75 PAY  52 

    0xd6514271,// 76 PAY  53 

    0xf221a7de,// 77 PAY  54 

    0x81687160,// 78 PAY  55 

    0x72cb4114,// 79 PAY  56 

    0x987f684e,// 80 PAY  57 

    0xc04cb931,// 81 PAY  58 

    0x84ac85ea,// 82 PAY  59 

    0xfe1e5d75,// 83 PAY  60 

    0xe41779e2,// 84 PAY  61 

    0xd91cadfd,// 85 PAY  62 

    0xea8aedaf,// 86 PAY  63 

    0x95848443,// 87 PAY  64 

    0xe033f000,// 88 PAY  65 

    0x245ddc5e,// 89 PAY  66 

    0xc11ad693,// 90 PAY  67 

    0x18ae9e74,// 91 PAY  68 

    0xb65b6630,// 92 PAY  69 

    0xa6303c33,// 93 PAY  70 

    0x4fb30223,// 94 PAY  71 

    0x716cb9db,// 95 PAY  72 

    0x00f9c60d,// 96 PAY  73 

    0x24477884,// 97 PAY  74 

    0x79795985,// 98 PAY  75 

    0x43651d40,// 99 PAY  76 

    0x226636b0,// 100 PAY  77 

    0x57ba228b,// 101 PAY  78 

    0x9efcfa7a,// 102 PAY  79 

    0x7af24d39,// 103 PAY  80 

    0x17005205,// 104 PAY  81 

    0xdc9e1997,// 105 PAY  82 

    0x92e1777e,// 106 PAY  83 

    0x2a6d0b8a,// 107 PAY  84 

    0x6b71ecaa,// 108 PAY  85 

    0x29ac46e8,// 109 PAY  86 

    0x27047a3e,// 110 PAY  87 

    0x7f99e736,// 111 PAY  88 

    0xa9616135,// 112 PAY  89 

    0x6204fbba,// 113 PAY  90 

    0x9f5ccebe,// 114 PAY  91 

    0x95adb53e,// 115 PAY  92 

    0x57b1c0c4,// 116 PAY  93 

    0xa3d2ffef,// 117 PAY  94 

    0x571c1f4d,// 118 PAY  95 

    0x85583b30,// 119 PAY  96 

    0xc0e99ca3,// 120 PAY  97 

    0x42057e59,// 121 PAY  98 

    0x58ededd7,// 122 PAY  99 

    0x22957bc5,// 123 PAY 100 

    0x97820abe,// 124 PAY 101 

    0xcede5b96,// 125 PAY 102 

    0x2dbafdb7,// 126 PAY 103 

    0xa06269eb,// 127 PAY 104 

    0xb80635c9,// 128 PAY 105 

    0x0093ca3e,// 129 PAY 106 

    0x37c12428,// 130 PAY 107 

    0xe1cb2669,// 131 PAY 108 

    0x2988c856,// 132 PAY 109 

    0x95a7268f,// 133 PAY 110 

    0x9cf46516,// 134 PAY 111 

    0xaa454b09,// 135 PAY 112 

    0x2b04713a,// 136 PAY 113 

    0xe8f8d8b1,// 137 PAY 114 

    0x5ff06451,// 138 PAY 115 

    0x1f90e37a,// 139 PAY 116 

    0x23e24c8c,// 140 PAY 117 

    0x0526b25b,// 141 PAY 118 

    0x1b362e36,// 142 PAY 119 

    0x8e354cbd,// 143 PAY 120 

    0x1c304966,// 144 PAY 121 

    0x814ab5c3,// 145 PAY 122 

    0x984f5c05,// 146 PAY 123 

    0x895af581,// 147 PAY 124 

    0x6f305c23,// 148 PAY 125 

    0x3c97328a,// 149 PAY 126 

    0xba752bbb,// 150 PAY 127 

    0xb66704a3,// 151 PAY 128 

    0x379391a9,// 152 PAY 129 

    0xb728a7af,// 153 PAY 130 

    0xb07a50ca,// 154 PAY 131 

    0x47c0d8b2,// 155 PAY 132 

    0x434f409e,// 156 PAY 133 

    0xe1e2498d,// 157 PAY 134 

    0x0d13824c,// 158 PAY 135 

    0xf0caea73,// 159 PAY 136 

    0xbf80155f,// 160 PAY 137 

    0xced016a0,// 161 PAY 138 

    0xcfe68243,// 162 PAY 139 

    0xfc514022,// 163 PAY 140 

    0xfd2b573c,// 164 PAY 141 

    0xedfdcb5d,// 165 PAY 142 

    0xdbd1785b,// 166 PAY 143 

    0x0ed59dd0,// 167 PAY 144 

    0xac68e836,// 168 PAY 145 

    0xfbd44d1a,// 169 PAY 146 

    0x0bdb9f2d,// 170 PAY 147 

    0xcff88b93,// 171 PAY 148 

    0x35367470,// 172 PAY 149 

    0xcc6762e7,// 173 PAY 150 

    0x7802dc5e,// 174 PAY 151 

    0x58324763,// 175 PAY 152 

    0x67aad802,// 176 PAY 153 

    0xcbc408bf,// 177 PAY 154 

    0x93f4ab9f,// 178 PAY 155 

    0x5bd62108,// 179 PAY 156 

    0xc7af81a9,// 180 PAY 157 

    0x5649ff7b,// 181 PAY 158 

    0xdcb1c79c,// 182 PAY 159 

    0x64ebd7c3,// 183 PAY 160 

    0x93e628db,// 184 PAY 161 

    0x3a6a777f,// 185 PAY 162 

    0xad5a995b,// 186 PAY 163 

    0xcf491002,// 187 PAY 164 

    0x12188a41,// 188 PAY 165 

    0x979504cf,// 189 PAY 166 

    0x6c62150b,// 190 PAY 167 

    0xf2f14ea5,// 191 PAY 168 

    0x2386f876,// 192 PAY 169 

    0xe793e1d5,// 193 PAY 170 

    0xd29ac9d6,// 194 PAY 171 

    0x78940742,// 195 PAY 172 

    0x7658a9ea,// 196 PAY 173 

    0x0d90ca01,// 197 PAY 174 

    0x4eba12b1,// 198 PAY 175 

    0x5e2a201f,// 199 PAY 176 

    0x5fece313,// 200 PAY 177 

    0x4bae7213,// 201 PAY 178 

    0x0bf83cc9,// 202 PAY 179 

    0x24b47626,// 203 PAY 180 

    0x51010cfe,// 204 PAY 181 

    0x5d03651a,// 205 PAY 182 

    0x62550629,// 206 PAY 183 

    0xde606b05,// 207 PAY 184 

    0x3c2093c2,// 208 PAY 185 

    0xc8463157,// 209 PAY 186 

    0xee89522d,// 210 PAY 187 

    0x2598b379,// 211 PAY 188 

    0x9ec3980b,// 212 PAY 189 

    0xe56c96f9,// 213 PAY 190 

    0xf44a80a9,// 214 PAY 191 

    0x2b715775,// 215 PAY 192 

    0xe5e0cef6,// 216 PAY 193 

    0x1f3c4ddf,// 217 PAY 194 

    0x05dfd04a,// 218 PAY 195 

    0x4101ea59,// 219 PAY 196 

    0xf074cbdd,// 220 PAY 197 

    0xdeb6e271,// 221 PAY 198 

    0x4d198e3e,// 222 PAY 199 

    0xfa407236,// 223 PAY 200 

    0x529d6d74,// 224 PAY 201 

    0xdb252087,// 225 PAY 202 

    0xdcb5cbd8,// 226 PAY 203 

    0x7c153031,// 227 PAY 204 

    0x147349d7,// 228 PAY 205 

    0x23ceddcc,// 229 PAY 206 

    0x1723391b,// 230 PAY 207 

    0x5636b2bd,// 231 PAY 208 

    0xee3f2d7f,// 232 PAY 209 

    0xbc9dae8c,// 233 PAY 210 

    0x8fa18b35,// 234 PAY 211 

    0x38836ee0,// 235 PAY 212 

    0xdc024b7f,// 236 PAY 213 

    0x16e52d8f,// 237 PAY 214 

    0x014c609e,// 238 PAY 215 

    0x3e79f1a7,// 239 PAY 216 

    0x405c193b,// 240 PAY 217 

    0x8f5f64bd,// 241 PAY 218 

    0x5ca0e509,// 242 PAY 219 

    0x38e2cfc5,// 243 PAY 220 

    0xb8e5d895,// 244 PAY 221 

    0x93172ed3,// 245 PAY 222 

    0x6dc37cfa,// 246 PAY 223 

    0x32f360ad,// 247 PAY 224 

    0xc777598e,// 248 PAY 225 

    0xb1a3af49,// 249 PAY 226 

    0xa61e0411,// 250 PAY 227 

    0x93e71138,// 251 PAY 228 

    0x5dd04d69,// 252 PAY 229 

    0x21b3a0e6,// 253 PAY 230 

    0x8ddc799e,// 254 PAY 231 

    0x7c8f2fd7,// 255 PAY 232 

    0x5c973442,// 256 PAY 233 

    0x53c645a9,// 257 PAY 234 

    0xf4ae8d66,// 258 PAY 235 

    0x9b85ac03,// 259 PAY 236 

    0x2eac4482,// 260 PAY 237 

    0x366b6dfd,// 261 PAY 238 

    0x82c6be39,// 262 PAY 239 

    0xfdd88c5b,// 263 PAY 240 

    0xeff27ce1,// 264 PAY 241 

    0x4dc57b3b,// 265 PAY 242 

    0x8f59289e,// 266 PAY 243 

    0x9d7e6a5b,// 267 PAY 244 

    0xf21e5fcf,// 268 PAY 245 

    0xf832a7af,// 269 PAY 246 

    0x6f3af6be,// 270 PAY 247 

    0x05844566,// 271 PAY 248 

    0x16a20867,// 272 PAY 249 

    0x44cb7eea,// 273 PAY 250 

    0xb15339e3,// 274 PAY 251 

    0x2d65d046,// 275 PAY 252 

    0xcbcda7fe,// 276 PAY 253 

    0xd31748f8,// 277 PAY 254 

    0x101e10bc,// 278 PAY 255 

    0x5bb3d345,// 279 PAY 256 

    0x3575ae9e,// 280 PAY 257 

    0x03c1562d,// 281 PAY 258 

    0x155b85ce,// 282 PAY 259 

    0x75039f2e,// 283 PAY 260 

    0x65a9f42d,// 284 PAY 261 

    0x5c158b60,// 285 PAY 262 

    0x2445a7cd,// 286 PAY 263 

    0x698322c9,// 287 PAY 264 

    0x988b1276,// 288 PAY 265 

    0x58763878,// 289 PAY 266 

    0x4a3689de,// 290 PAY 267 

    0x0dfa889f,// 291 PAY 268 

    0xafe28271,// 292 PAY 269 

    0x88fb3675,// 293 PAY 270 

    0xcb2f57f2,// 294 PAY 271 

    0xaf323cc0,// 295 PAY 272 

/// STA is 1 words. 

/// STA num_pkts       : 208 

/// STA pkt_idx        : 48 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x5f 

    0x00c05fd0 // 296 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt40_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x04 

/// ECH pdu_tag        : 0x00 

    0x00040000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv insert_icv !check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x5 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x00000011,// 3 SCX   1 

    0x80464891,// 4 SCX   2 

    0x00006582,// 5 SCX   3 

    0x6c1942fe,// 6 SCX   4 

    0x3d5afafd,// 7 SCX   5 

    0x0de06fd6,// 8 SCX   6 

    0x17e57864,// 9 SCX   7 

    0xa22e0653,// 10 SCX   8 

    0x51bcc426,// 11 SCX   9 

    0x850cc560,// 12 SCX  10 

    0x2060f867,// 13 SCX  11 

    0x4db3c84d,// 14 SCX  12 

    0xf6eff365,// 15 SCX  13 

    0xd341a566,// 16 SCX  14 

    0xb6f4411b,// 17 SCX  15 

    0x8453c348,// 18 SCX  16 

    0x25ca5954,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1749 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 220 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 220 

/// BFD lencrypto      : 40 

/// BFD ofstcrypto     : 164 

/// BFD (ofst+len)cry  : 204 

/// BFD ofstiv         : 128 

/// BFD ofsticv        : 1000 

    0x000000dc,// 20 BFD   1 

    0x00a40028,// 21 BFD   2 

    0x03e80080,// 22 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : 11 

    0x110031e5,// 23 MFM   1 

    0x24d44bfa,// 24 MFM   2 

    0xb0a0f000,// 25 MFM   3 

/// BDA is 439 words. 

/// BDA size     is 1749 (0x6d5) 

/// BDA id       is 0xd94d 

    0x06d5d94d,// 26 BDA   1 

/// PAY Generic Data size   : 1749 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0xa1a0d39a,// 27 PAY   1 

    0xdf3b5fbb,// 28 PAY   2 

    0xf3d31c45,// 29 PAY   3 

    0x440b236e,// 30 PAY   4 

    0xd4ddeaea,// 31 PAY   5 

    0x3362f0fb,// 32 PAY   6 

    0xff5296a8,// 33 PAY   7 

    0x9b9cb418,// 34 PAY   8 

    0xf0c41481,// 35 PAY   9 

    0x632f105c,// 36 PAY  10 

    0x27660b7c,// 37 PAY  11 

    0x07016435,// 38 PAY  12 

    0x659c9413,// 39 PAY  13 

    0xd5dc99ac,// 40 PAY  14 

    0x87b582ef,// 41 PAY  15 

    0x6eac083e,// 42 PAY  16 

    0x08ed721e,// 43 PAY  17 

    0x13aad280,// 44 PAY  18 

    0xa9a90c1b,// 45 PAY  19 

    0x9636e107,// 46 PAY  20 

    0xb3ac74e8,// 47 PAY  21 

    0xcc3c971f,// 48 PAY  22 

    0x6273bb0f,// 49 PAY  23 

    0xf2c368fe,// 50 PAY  24 

    0x1a89aaca,// 51 PAY  25 

    0xc6818263,// 52 PAY  26 

    0xecc77023,// 53 PAY  27 

    0x4f8d1513,// 54 PAY  28 

    0x6c37b995,// 55 PAY  29 

    0xffd3f8f7,// 56 PAY  30 

    0x64261ade,// 57 PAY  31 

    0x06f88684,// 58 PAY  32 

    0x9671e650,// 59 PAY  33 

    0x466c1bd1,// 60 PAY  34 

    0x5cd74da1,// 61 PAY  35 

    0x5c3d4812,// 62 PAY  36 

    0xba276a01,// 63 PAY  37 

    0x594f6767,// 64 PAY  38 

    0x51065e26,// 65 PAY  39 

    0xdad8260b,// 66 PAY  40 

    0x8789bd94,// 67 PAY  41 

    0x87120da8,// 68 PAY  42 

    0xccccb348,// 69 PAY  43 

    0x211936dc,// 70 PAY  44 

    0xa2b30ebc,// 71 PAY  45 

    0x574c1268,// 72 PAY  46 

    0xd4043fb0,// 73 PAY  47 

    0x09a2bd8d,// 74 PAY  48 

    0xa9f5ecbe,// 75 PAY  49 

    0xe16b0674,// 76 PAY  50 

    0x642142c2,// 77 PAY  51 

    0x6656b7e8,// 78 PAY  52 

    0xf246838d,// 79 PAY  53 

    0x6dc17766,// 80 PAY  54 

    0xd1de366c,// 81 PAY  55 

    0x3274d6a1,// 82 PAY  56 

    0x0111fc4b,// 83 PAY  57 

    0x16aec896,// 84 PAY  58 

    0x872ae94e,// 85 PAY  59 

    0x411144fb,// 86 PAY  60 

    0x49d90fb5,// 87 PAY  61 

    0xa840374c,// 88 PAY  62 

    0x84023912,// 89 PAY  63 

    0xbce07566,// 90 PAY  64 

    0xb35ed309,// 91 PAY  65 

    0x7b5a4425,// 92 PAY  66 

    0x24116836,// 93 PAY  67 

    0xaed2dbed,// 94 PAY  68 

    0xbd428593,// 95 PAY  69 

    0x3c7c1662,// 96 PAY  70 

    0xf03c8b1b,// 97 PAY  71 

    0x4095545f,// 98 PAY  72 

    0x228480aa,// 99 PAY  73 

    0x38fd219b,// 100 PAY  74 

    0xbd05bc3d,// 101 PAY  75 

    0x82c5e040,// 102 PAY  76 

    0x1621260e,// 103 PAY  77 

    0x1f728828,// 104 PAY  78 

    0xe6573a5d,// 105 PAY  79 

    0x9405fab9,// 106 PAY  80 

    0x2df5416d,// 107 PAY  81 

    0xcb9684dc,// 108 PAY  82 

    0xfb4b452f,// 109 PAY  83 

    0x3747adec,// 110 PAY  84 

    0x8c12d3e1,// 111 PAY  85 

    0x804e27fe,// 112 PAY  86 

    0xa89c2a3f,// 113 PAY  87 

    0x82216652,// 114 PAY  88 

    0x65ec1b3d,// 115 PAY  89 

    0x84409e2e,// 116 PAY  90 

    0x81c4924d,// 117 PAY  91 

    0x396d10b6,// 118 PAY  92 

    0xbec37060,// 119 PAY  93 

    0x337d6106,// 120 PAY  94 

    0xe77e13c4,// 121 PAY  95 

    0x8f6a8632,// 122 PAY  96 

    0x7c672ac7,// 123 PAY  97 

    0x03a2fe34,// 124 PAY  98 

    0x88f407aa,// 125 PAY  99 

    0x95c1dbfa,// 126 PAY 100 

    0x38adc0c3,// 127 PAY 101 

    0x15a862de,// 128 PAY 102 

    0x1d822b27,// 129 PAY 103 

    0xdb92d09a,// 130 PAY 104 

    0x8fb7cdc9,// 131 PAY 105 

    0xc6b95886,// 132 PAY 106 

    0xa45e226b,// 133 PAY 107 

    0xc8344dc8,// 134 PAY 108 

    0x15fd3d44,// 135 PAY 109 

    0xa25cd729,// 136 PAY 110 

    0x4c91a5d4,// 137 PAY 111 

    0x162bfc53,// 138 PAY 112 

    0xb7195fb5,// 139 PAY 113 

    0x1e615fd2,// 140 PAY 114 

    0xdf75e63a,// 141 PAY 115 

    0xcf600311,// 142 PAY 116 

    0x4939952c,// 143 PAY 117 

    0xd21b6562,// 144 PAY 118 

    0x3fe04938,// 145 PAY 119 

    0x7c8b2e10,// 146 PAY 120 

    0xf56049e6,// 147 PAY 121 

    0x18681429,// 148 PAY 122 

    0x6a24ffc4,// 149 PAY 123 

    0x49402b73,// 150 PAY 124 

    0xc55340ed,// 151 PAY 125 

    0x6f0ee34b,// 152 PAY 126 

    0x4d29891d,// 153 PAY 127 

    0x4a05e8d2,// 154 PAY 128 

    0x5b03e169,// 155 PAY 129 

    0x3faf8268,// 156 PAY 130 

    0x8edf7b72,// 157 PAY 131 

    0x0add7ce8,// 158 PAY 132 

    0x00ee213a,// 159 PAY 133 

    0xb19435a6,// 160 PAY 134 

    0x9f285900,// 161 PAY 135 

    0x6e247e3b,// 162 PAY 136 

    0x917cea02,// 163 PAY 137 

    0x22158e89,// 164 PAY 138 

    0xf82a52e8,// 165 PAY 139 

    0xa053fd07,// 166 PAY 140 

    0x2c16a15d,// 167 PAY 141 

    0x56af1582,// 168 PAY 142 

    0x1e5e319e,// 169 PAY 143 

    0xf7a70bf5,// 170 PAY 144 

    0x09ac55bc,// 171 PAY 145 

    0xdc2e4719,// 172 PAY 146 

    0xe839f09d,// 173 PAY 147 

    0x1ef204d2,// 174 PAY 148 

    0x19283c36,// 175 PAY 149 

    0x59456232,// 176 PAY 150 

    0xe17291d6,// 177 PAY 151 

    0x2f78c5d1,// 178 PAY 152 

    0x41b98066,// 179 PAY 153 

    0xcab2abd9,// 180 PAY 154 

    0xfae650da,// 181 PAY 155 

    0x460d6fae,// 182 PAY 156 

    0x8fb27665,// 183 PAY 157 

    0xe16c691e,// 184 PAY 158 

    0x42b923d1,// 185 PAY 159 

    0x1334d8ee,// 186 PAY 160 

    0xff41d971,// 187 PAY 161 

    0xf186da92,// 188 PAY 162 

    0x94d02db7,// 189 PAY 163 

    0x01c2a5e2,// 190 PAY 164 

    0xb3eb0d06,// 191 PAY 165 

    0x907c6b82,// 192 PAY 166 

    0x302d8e3c,// 193 PAY 167 

    0x4fab634c,// 194 PAY 168 

    0x7417d926,// 195 PAY 169 

    0x5850fa97,// 196 PAY 170 

    0xa84cd941,// 197 PAY 171 

    0x15d20d4a,// 198 PAY 172 

    0x8fd5c403,// 199 PAY 173 

    0xf1d4613f,// 200 PAY 174 

    0xe0087423,// 201 PAY 175 

    0xf810ee02,// 202 PAY 176 

    0x772939f2,// 203 PAY 177 

    0x8163a0d2,// 204 PAY 178 

    0x81652d26,// 205 PAY 179 

    0xcaee5646,// 206 PAY 180 

    0x47be7c7e,// 207 PAY 181 

    0x48d8999f,// 208 PAY 182 

    0xfe818ef1,// 209 PAY 183 

    0xad547585,// 210 PAY 184 

    0x792f282e,// 211 PAY 185 

    0x6578aa78,// 212 PAY 186 

    0x0dc5aeb7,// 213 PAY 187 

    0x3e9be63c,// 214 PAY 188 

    0x2c7ea285,// 215 PAY 189 

    0x2921754c,// 216 PAY 190 

    0x0de51da9,// 217 PAY 191 

    0x96d186ab,// 218 PAY 192 

    0x372122ef,// 219 PAY 193 

    0xd8a7138d,// 220 PAY 194 

    0x5adb3ced,// 221 PAY 195 

    0x60631de8,// 222 PAY 196 

    0xab2eb553,// 223 PAY 197 

    0xf279bd76,// 224 PAY 198 

    0x33504d6d,// 225 PAY 199 

    0xb0be4346,// 226 PAY 200 

    0x8ce3a10c,// 227 PAY 201 

    0x20627e41,// 228 PAY 202 

    0x3d3dfafc,// 229 PAY 203 

    0xe2e5e078,// 230 PAY 204 

    0xb13086cf,// 231 PAY 205 

    0xf4181e5c,// 232 PAY 206 

    0x0bb03415,// 233 PAY 207 

    0x3ca351e5,// 234 PAY 208 

    0x7f88b19a,// 235 PAY 209 

    0x8de6052c,// 236 PAY 210 

    0xe4f7eb5b,// 237 PAY 211 

    0xd20c2eb0,// 238 PAY 212 

    0xd75b3587,// 239 PAY 213 

    0x82703560,// 240 PAY 214 

    0x200d6718,// 241 PAY 215 

    0x9dba77e3,// 242 PAY 216 

    0x073364b6,// 243 PAY 217 

    0x70e29b47,// 244 PAY 218 

    0x15d7a164,// 245 PAY 219 

    0xc562eedb,// 246 PAY 220 

    0x864df969,// 247 PAY 221 

    0x95f71e28,// 248 PAY 222 

    0xee0cf7e9,// 249 PAY 223 

    0x720378e7,// 250 PAY 224 

    0x41f744cf,// 251 PAY 225 

    0x38d564f1,// 252 PAY 226 

    0x5b936703,// 253 PAY 227 

    0x3ca80102,// 254 PAY 228 

    0x4bc96d5c,// 255 PAY 229 

    0x7a9c372d,// 256 PAY 230 

    0x55fb4093,// 257 PAY 231 

    0xd42c3b62,// 258 PAY 232 

    0x0881d9da,// 259 PAY 233 

    0xe2377808,// 260 PAY 234 

    0x3d47faf4,// 261 PAY 235 

    0x3117d48c,// 262 PAY 236 

    0xc597308e,// 263 PAY 237 

    0xd6e7cfdb,// 264 PAY 238 

    0x8918c7c7,// 265 PAY 239 

    0x120b01db,// 266 PAY 240 

    0x2ce2c17c,// 267 PAY 241 

    0x57a491e6,// 268 PAY 242 

    0xb1892cd6,// 269 PAY 243 

    0xfaba168a,// 270 PAY 244 

    0x8b8d07f4,// 271 PAY 245 

    0x4baee747,// 272 PAY 246 

    0xb3374396,// 273 PAY 247 

    0x22831def,// 274 PAY 248 

    0x61d23fe6,// 275 PAY 249 

    0xa63587bf,// 276 PAY 250 

    0x11d442b4,// 277 PAY 251 

    0x51c1ff1c,// 278 PAY 252 

    0x7c784ed5,// 279 PAY 253 

    0x85ca7042,// 280 PAY 254 

    0x1a1e0e67,// 281 PAY 255 

    0xed21bd54,// 282 PAY 256 

    0x02124b0b,// 283 PAY 257 

    0xebf9b76a,// 284 PAY 258 

    0x4108a406,// 285 PAY 259 

    0xe7a17c8b,// 286 PAY 260 

    0x66b2ad5c,// 287 PAY 261 

    0x6a99344f,// 288 PAY 262 

    0x0da6272d,// 289 PAY 263 

    0x927650bd,// 290 PAY 264 

    0xb23acc49,// 291 PAY 265 

    0x7cd366d8,// 292 PAY 266 

    0xc2ea0663,// 293 PAY 267 

    0x894e4b23,// 294 PAY 268 

    0x4c5d2ea1,// 295 PAY 269 

    0xe6304b89,// 296 PAY 270 

    0x7d49bc5e,// 297 PAY 271 

    0x99e37faa,// 298 PAY 272 

    0x8d298dae,// 299 PAY 273 

    0x579db8db,// 300 PAY 274 

    0xc952ff30,// 301 PAY 275 

    0x7b1815c9,// 302 PAY 276 

    0x2b417153,// 303 PAY 277 

    0x35bf4e12,// 304 PAY 278 

    0x834bfdbc,// 305 PAY 279 

    0x8980ffe0,// 306 PAY 280 

    0xe7730495,// 307 PAY 281 

    0x8c225d06,// 308 PAY 282 

    0xea9dbdb1,// 309 PAY 283 

    0xd69144ee,// 310 PAY 284 

    0x5c30c961,// 311 PAY 285 

    0xdfe8443b,// 312 PAY 286 

    0xed948116,// 313 PAY 287 

    0x99de74c2,// 314 PAY 288 

    0xd048c9df,// 315 PAY 289 

    0xd89f6b58,// 316 PAY 290 

    0x43d050e4,// 317 PAY 291 

    0xbaead4f9,// 318 PAY 292 

    0x73edb75c,// 319 PAY 293 

    0xc0fe658c,// 320 PAY 294 

    0x61a2da90,// 321 PAY 295 

    0xe5eb4fe6,// 322 PAY 296 

    0x4b16a411,// 323 PAY 297 

    0x72537c5d,// 324 PAY 298 

    0x2d25577f,// 325 PAY 299 

    0x964d2f45,// 326 PAY 300 

    0xde378ea7,// 327 PAY 301 

    0x9a659aec,// 328 PAY 302 

    0x3562cd57,// 329 PAY 303 

    0x6da7dada,// 330 PAY 304 

    0xafbdd953,// 331 PAY 305 

    0x176c0036,// 332 PAY 306 

    0xdb83461f,// 333 PAY 307 

    0xaf8aebd3,// 334 PAY 308 

    0x9db41d75,// 335 PAY 309 

    0x8b22feb7,// 336 PAY 310 

    0xb835cfb5,// 337 PAY 311 

    0xd02e02a3,// 338 PAY 312 

    0x79399ff7,// 339 PAY 313 

    0x6cb7f79c,// 340 PAY 314 

    0x05151d00,// 341 PAY 315 

    0xf61d7487,// 342 PAY 316 

    0x89b47fb1,// 343 PAY 317 

    0x79c165ee,// 344 PAY 318 

    0x722c3a19,// 345 PAY 319 

    0xc4c39f36,// 346 PAY 320 

    0xe6283d77,// 347 PAY 321 

    0xb79a6d64,// 348 PAY 322 

    0x6302d900,// 349 PAY 323 

    0x2b562d07,// 350 PAY 324 

    0xa60b9cb7,// 351 PAY 325 

    0xcfbae2f6,// 352 PAY 326 

    0xbe1e5eb0,// 353 PAY 327 

    0x7d34b6a1,// 354 PAY 328 

    0xac62ac86,// 355 PAY 329 

    0xfdc6b6ed,// 356 PAY 330 

    0x34a50751,// 357 PAY 331 

    0xffc84142,// 358 PAY 332 

    0xf3a3a25d,// 359 PAY 333 

    0x6af41280,// 360 PAY 334 

    0xf123b94d,// 361 PAY 335 

    0x5f16358d,// 362 PAY 336 

    0xc374cc3a,// 363 PAY 337 

    0x7742988c,// 364 PAY 338 

    0xa436d3e2,// 365 PAY 339 

    0x7f9a8cd1,// 366 PAY 340 

    0xa3e71d26,// 367 PAY 341 

    0xcf510959,// 368 PAY 342 

    0x1d7de66e,// 369 PAY 343 

    0x6eabdf20,// 370 PAY 344 

    0x617b8999,// 371 PAY 345 

    0xf4a0e716,// 372 PAY 346 

    0xe873b93e,// 373 PAY 347 

    0x9f68163a,// 374 PAY 348 

    0x4b732b33,// 375 PAY 349 

    0x73314e63,// 376 PAY 350 

    0x1c0a704c,// 377 PAY 351 

    0xc3d4b94b,// 378 PAY 352 

    0x3ce58310,// 379 PAY 353 

    0xd1fc0e46,// 380 PAY 354 

    0xb0f5e0c1,// 381 PAY 355 

    0x042e7697,// 382 PAY 356 

    0xa9d63a49,// 383 PAY 357 

    0x5ba8fd77,// 384 PAY 358 

    0x0f3f7802,// 385 PAY 359 

    0x014a8387,// 386 PAY 360 

    0xf9b7d264,// 387 PAY 361 

    0x6bf453fa,// 388 PAY 362 

    0xe483d6de,// 389 PAY 363 

    0x1d00c1ea,// 390 PAY 364 

    0x8fd1f6fc,// 391 PAY 365 

    0x070852b7,// 392 PAY 366 

    0x56e10e5a,// 393 PAY 367 

    0x04268f81,// 394 PAY 368 

    0x9964c537,// 395 PAY 369 

    0x4a08cffc,// 396 PAY 370 

    0xa99a9fc3,// 397 PAY 371 

    0x2d793b24,// 398 PAY 372 

    0xcc4e0838,// 399 PAY 373 

    0xacfc823c,// 400 PAY 374 

    0xf85c8b99,// 401 PAY 375 

    0xc5c35769,// 402 PAY 376 

    0xfd49b5c9,// 403 PAY 377 

    0xa15161ed,// 404 PAY 378 

    0x60056d3d,// 405 PAY 379 

    0x2378f733,// 406 PAY 380 

    0x4b542ee2,// 407 PAY 381 

    0x26f81d2a,// 408 PAY 382 

    0x95778f69,// 409 PAY 383 

    0x1ace4d7d,// 410 PAY 384 

    0x780527be,// 411 PAY 385 

    0x79f979c4,// 412 PAY 386 

    0xc2c52ec6,// 413 PAY 387 

    0xe8b61cde,// 414 PAY 388 

    0x37f5daaf,// 415 PAY 389 

    0xc9efd3c5,// 416 PAY 390 

    0xdf0b4a6a,// 417 PAY 391 

    0x888dcd57,// 418 PAY 392 

    0x314a70b9,// 419 PAY 393 

    0x59f31e4b,// 420 PAY 394 

    0xad0cd829,// 421 PAY 395 

    0xb02a8a7a,// 422 PAY 396 

    0xc08633b1,// 423 PAY 397 

    0xd71bb318,// 424 PAY 398 

    0x47b7abf7,// 425 PAY 399 

    0xaee9cfe7,// 426 PAY 400 

    0x0581f751,// 427 PAY 401 

    0xd818bf56,// 428 PAY 402 

    0xf80f1026,// 429 PAY 403 

    0xeece9120,// 430 PAY 404 

    0xb82882db,// 431 PAY 405 

    0xf58f62c9,// 432 PAY 406 

    0x9140e1af,// 433 PAY 407 

    0x8612cd52,// 434 PAY 408 

    0x88e3db43,// 435 PAY 409 

    0x2e756e30,// 436 PAY 410 

    0x69ccc25f,// 437 PAY 411 

    0x65bc1f8e,// 438 PAY 412 

    0xc92b0462,// 439 PAY 413 

    0x6274fbba,// 440 PAY 414 

    0x5516ed4c,// 441 PAY 415 

    0x942479c1,// 442 PAY 416 

    0x80242847,// 443 PAY 417 

    0x1987d9a5,// 444 PAY 418 

    0x91a1051e,// 445 PAY 419 

    0x60b2802c,// 446 PAY 420 

    0xc445625d,// 447 PAY 421 

    0x9df1a89c,// 448 PAY 422 

    0xcfae6e2e,// 449 PAY 423 

    0x20963696,// 450 PAY 424 

    0xccb8f6e2,// 451 PAY 425 

    0x81d8696c,// 452 PAY 426 

    0x6ed1170e,// 453 PAY 427 

    0x6edc168c,// 454 PAY 428 

    0x2ebd92d5,// 455 PAY 429 

    0x1f5818c4,// 456 PAY 430 

    0x452bc949,// 457 PAY 431 

    0xc671e06a,// 458 PAY 432 

    0xba6f1b12,// 459 PAY 433 

    0xefe8d96f,// 460 PAY 434 

    0x5ce336f5,// 461 PAY 435 

    0x27c7a565,// 462 PAY 436 

    0x12b0f558,// 463 PAY 437 

    0xfa000000,// 464 PAY 438 

/// STA is 1 words. 

/// STA num_pkts       : 120 

/// STA pkt_idx        : 243 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xdb 

    0x03ccdb78 // 465 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt41_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x00 

/// ECH pdu_tag        : 0x00 

    0x00000000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0800000f,// 3 SCX   1 

    0x8041482a,// 4 SCX   2 

    0x00001400,// 5 SCX   3 

    0x62f7e0f3,// 6 SCX   4 

    0x16bd42ff,// 7 SCX   5 

    0x0c1b8de0,// 8 SCX   6 

    0xb75f6d98,// 9 SCX   7 

    0x8904d794,// 10 SCX   8 

    0x6dabb87b,// 11 SCX   9 

    0xb91c7e68,// 12 SCX  10 

    0x9eefb014,// 13 SCX  11 

    0x8c86e82e,// 14 SCX  12 

    0xb2d5b01b,// 15 SCX  13 

    0xbffbd64a,// 16 SCX  14 

    0x0791dccf,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 1925 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1326 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1326 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 1088 

/// BFD (ofst+len)cry  : 1096 

/// BFD ofstiv         : 172 

/// BFD ofsticv        : 1392 

    0x0000052e,// 18 BFD   1 

    0x04400008,// 19 BFD   2 

    0x057000ac,// 20 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c00e14f,// 21 MFM   1 

    0x12ae6e14,// 22 MFM   2 

    0x39e52552,// 23 MFM   3 

    0xb049220e,// 24 MFM   4 

    0xcfdf4d79,// 25 MFM   5 

    0x00c1454c,// 26 MFM   6 

    0x99d1257f,// 27 MFM   7 

    0x1d6ddc08,// 28 MFM   8 

    0xe49e8272,// 29 MFM   9 

    0xda5d4a84,// 30 MFM  10 

    0xe22ea065,// 31 MFM  11 

    0x550b975e,// 32 MFM  12 

    0x753cb36f,// 33 MFM  13 

    0x4e373112,// 34 MFM  14 

    0x4e1026ae,// 35 MFM  15 

    0x4c7cd303,// 36 MFM  16 

/// BDA is 483 words. 

/// BDA size     is 1925 (0x785) 

/// BDA id       is 0x4f88 

    0x07854f88,// 37 BDA   1 

/// PAY Generic Data size   : 1925 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x1d212ce8,// 38 PAY   1 

    0x136a18f8,// 39 PAY   2 

    0x55412ab5,// 40 PAY   3 

    0x6dba33e9,// 41 PAY   4 

    0x8c0e5828,// 42 PAY   5 

    0x696cda8c,// 43 PAY   6 

    0x7a308565,// 44 PAY   7 

    0xadd22981,// 45 PAY   8 

    0x6c1cdecb,// 46 PAY   9 

    0x925e3f81,// 47 PAY  10 

    0xc21d340b,// 48 PAY  11 

    0x656dee13,// 49 PAY  12 

    0xc9d8015b,// 50 PAY  13 

    0x72a47536,// 51 PAY  14 

    0x837006bd,// 52 PAY  15 

    0x144204ad,// 53 PAY  16 

    0x5142ef21,// 54 PAY  17 

    0x12705207,// 55 PAY  18 

    0xaa2837ed,// 56 PAY  19 

    0x3e1d4b5c,// 57 PAY  20 

    0xf2b9870b,// 58 PAY  21 

    0x2af24a3c,// 59 PAY  22 

    0x9a559acd,// 60 PAY  23 

    0x9659df7c,// 61 PAY  24 

    0x9829c20c,// 62 PAY  25 

    0x84fa34a9,// 63 PAY  26 

    0x4eb88b19,// 64 PAY  27 

    0xd8b259b4,// 65 PAY  28 

    0x54c89cc8,// 66 PAY  29 

    0x2386f637,// 67 PAY  30 

    0xc6b2a4fb,// 68 PAY  31 

    0x851212e9,// 69 PAY  32 

    0xe44ccaf0,// 70 PAY  33 

    0x2f198a87,// 71 PAY  34 

    0x54b0302c,// 72 PAY  35 

    0x32c52d7e,// 73 PAY  36 

    0x9efe868d,// 74 PAY  37 

    0x5c01c603,// 75 PAY  38 

    0x1c902749,// 76 PAY  39 

    0xfed5a404,// 77 PAY  40 

    0x911c2596,// 78 PAY  41 

    0xd519f9c3,// 79 PAY  42 

    0x7ba74924,// 80 PAY  43 

    0x30f1e850,// 81 PAY  44 

    0x75aa4df9,// 82 PAY  45 

    0xd25ae7db,// 83 PAY  46 

    0xb4d22dc3,// 84 PAY  47 

    0x3677d077,// 85 PAY  48 

    0x8dc77e7b,// 86 PAY  49 

    0xa7486688,// 87 PAY  50 

    0x860444be,// 88 PAY  51 

    0xba7c1566,// 89 PAY  52 

    0xb69572c3,// 90 PAY  53 

    0x69c810c2,// 91 PAY  54 

    0x67d718ad,// 92 PAY  55 

    0xea9c8842,// 93 PAY  56 

    0x09305bdc,// 94 PAY  57 

    0x912c0c86,// 95 PAY  58 

    0x63da0242,// 96 PAY  59 

    0x7f8ba8ae,// 97 PAY  60 

    0x45989fd7,// 98 PAY  61 

    0x7510dc33,// 99 PAY  62 

    0xd7480b7c,// 100 PAY  63 

    0xd491ddbd,// 101 PAY  64 

    0x3201349f,// 102 PAY  65 

    0x76d1a4bf,// 103 PAY  66 

    0x0f548645,// 104 PAY  67 

    0x0c883311,// 105 PAY  68 

    0x35ee092f,// 106 PAY  69 

    0x0aaac08b,// 107 PAY  70 

    0x19f3e4ea,// 108 PAY  71 

    0x32c3df05,// 109 PAY  72 

    0x97ac9332,// 110 PAY  73 

    0xfa239f68,// 111 PAY  74 

    0x2c1612e6,// 112 PAY  75 

    0xbd2a83ee,// 113 PAY  76 

    0xeb7f013d,// 114 PAY  77 

    0x6ceeed07,// 115 PAY  78 

    0x7720286f,// 116 PAY  79 

    0xd9d1373d,// 117 PAY  80 

    0x3e180550,// 118 PAY  81 

    0x7c46dee1,// 119 PAY  82 

    0xeb01e524,// 120 PAY  83 

    0x699eb9ed,// 121 PAY  84 

    0x988aecff,// 122 PAY  85 

    0xe644ba38,// 123 PAY  86 

    0x2615674a,// 124 PAY  87 

    0x20b834b7,// 125 PAY  88 

    0xe0ba4a42,// 126 PAY  89 

    0x38ac80f7,// 127 PAY  90 

    0xaad433ec,// 128 PAY  91 

    0x42f22469,// 129 PAY  92 

    0x53fa42dc,// 130 PAY  93 

    0x9453bd45,// 131 PAY  94 

    0x93ba2eaf,// 132 PAY  95 

    0xb682994f,// 133 PAY  96 

    0x83b068fc,// 134 PAY  97 

    0xa5b41e51,// 135 PAY  98 

    0xdd887d15,// 136 PAY  99 

    0x8fff3e3c,// 137 PAY 100 

    0x66b4b4e8,// 138 PAY 101 

    0x9601e50a,// 139 PAY 102 

    0x873a56b5,// 140 PAY 103 

    0x166882a9,// 141 PAY 104 

    0x49b9cf85,// 142 PAY 105 

    0xcf6e8483,// 143 PAY 106 

    0xa78cf770,// 144 PAY 107 

    0x05ce8945,// 145 PAY 108 

    0x374135a6,// 146 PAY 109 

    0x212d4188,// 147 PAY 110 

    0xae535310,// 148 PAY 111 

    0x9139688b,// 149 PAY 112 

    0x60deb26d,// 150 PAY 113 

    0x5207d979,// 151 PAY 114 

    0xcbe0877f,// 152 PAY 115 

    0xfa18289a,// 153 PAY 116 

    0xa95daa48,// 154 PAY 117 

    0x9736457b,// 155 PAY 118 

    0xd8825f9e,// 156 PAY 119 

    0x83eec0fb,// 157 PAY 120 

    0xfe3f5614,// 158 PAY 121 

    0xcc74c195,// 159 PAY 122 

    0x45652dc6,// 160 PAY 123 

    0x93a9f905,// 161 PAY 124 

    0x7d40df5b,// 162 PAY 125 

    0xda808b23,// 163 PAY 126 

    0x2273a7e0,// 164 PAY 127 

    0x88d822b9,// 165 PAY 128 

    0x239390b1,// 166 PAY 129 

    0x18fefc81,// 167 PAY 130 

    0x13de9a55,// 168 PAY 131 

    0x7a81d459,// 169 PAY 132 

    0x1149d76b,// 170 PAY 133 

    0x35a114ff,// 171 PAY 134 

    0xb0f38ded,// 172 PAY 135 

    0x738843df,// 173 PAY 136 

    0x54c5a28a,// 174 PAY 137 

    0x87875e19,// 175 PAY 138 

    0x1b76b5e4,// 176 PAY 139 

    0x62b3e66d,// 177 PAY 140 

    0xdd28ae24,// 178 PAY 141 

    0x89a1a736,// 179 PAY 142 

    0x6bd5d0ab,// 180 PAY 143 

    0x396e83c1,// 181 PAY 144 

    0x24599351,// 182 PAY 145 

    0x4a9553f4,// 183 PAY 146 

    0x41c44bbb,// 184 PAY 147 

    0xab3442c1,// 185 PAY 148 

    0x45c1eb52,// 186 PAY 149 

    0x9e1773ad,// 187 PAY 150 

    0x364ba428,// 188 PAY 151 

    0x7dd9ff0b,// 189 PAY 152 

    0x1a86d6ed,// 190 PAY 153 

    0xc392c523,// 191 PAY 154 

    0xfa0702c7,// 192 PAY 155 

    0xd024a2e9,// 193 PAY 156 

    0x8ab63404,// 194 PAY 157 

    0xc55eed8c,// 195 PAY 158 

    0x3379043b,// 196 PAY 159 

    0xf6898a2d,// 197 PAY 160 

    0x9ed2ab52,// 198 PAY 161 

    0xc9333576,// 199 PAY 162 

    0xfef73de6,// 200 PAY 163 

    0x3b26c890,// 201 PAY 164 

    0x76384d47,// 202 PAY 165 

    0x370aea8c,// 203 PAY 166 

    0x6ef3dd23,// 204 PAY 167 

    0x7b07cc9e,// 205 PAY 168 

    0x318dd2e0,// 206 PAY 169 

    0x0c736d7d,// 207 PAY 170 

    0x18ba78ef,// 208 PAY 171 

    0x0c89e6a9,// 209 PAY 172 

    0x3253742d,// 210 PAY 173 

    0xc0d7163e,// 211 PAY 174 

    0x9cd98513,// 212 PAY 175 

    0x8daa11c5,// 213 PAY 176 

    0xa6c91ff9,// 214 PAY 177 

    0x47bae2cb,// 215 PAY 178 

    0x008f9ac3,// 216 PAY 179 

    0xcbd3cf96,// 217 PAY 180 

    0xff4e5cde,// 218 PAY 181 

    0x7d9ea041,// 219 PAY 182 

    0x242fce91,// 220 PAY 183 

    0xdeb6f7a0,// 221 PAY 184 

    0x75df8bfc,// 222 PAY 185 

    0x4dc50974,// 223 PAY 186 

    0x3f8b9ca1,// 224 PAY 187 

    0xf7af07c9,// 225 PAY 188 

    0x5f32941a,// 226 PAY 189 

    0x742c52f2,// 227 PAY 190 

    0xc5058c71,// 228 PAY 191 

    0x75137d11,// 229 PAY 192 

    0x4fd50419,// 230 PAY 193 

    0x39951bb5,// 231 PAY 194 

    0x8c9ccfbe,// 232 PAY 195 

    0xb79ea3a7,// 233 PAY 196 

    0x77c737d1,// 234 PAY 197 

    0xd3c5f5ac,// 235 PAY 198 

    0x4b3a7fc9,// 236 PAY 199 

    0x549ec002,// 237 PAY 200 

    0x8a41318c,// 238 PAY 201 

    0xaebdf331,// 239 PAY 202 

    0x94def807,// 240 PAY 203 

    0x0721ba9e,// 241 PAY 204 

    0x9fb9340e,// 242 PAY 205 

    0x1c88eefb,// 243 PAY 206 

    0x03506de9,// 244 PAY 207 

    0x555d99df,// 245 PAY 208 

    0xf2895a65,// 246 PAY 209 

    0xe1888162,// 247 PAY 210 

    0x4a9dd23d,// 248 PAY 211 

    0x4dd07f27,// 249 PAY 212 

    0xa0653eb6,// 250 PAY 213 

    0x3a8f5e47,// 251 PAY 214 

    0xe6ff8b65,// 252 PAY 215 

    0x75ae4394,// 253 PAY 216 

    0x28a8dc3f,// 254 PAY 217 

    0x413cb02a,// 255 PAY 218 

    0xa103a87d,// 256 PAY 219 

    0x40ea7f66,// 257 PAY 220 

    0x5465e492,// 258 PAY 221 

    0x2c2c009c,// 259 PAY 222 

    0xdd3a3c6d,// 260 PAY 223 

    0x14bd49bf,// 261 PAY 224 

    0x5e78cc53,// 262 PAY 225 

    0xe25fe4d9,// 263 PAY 226 

    0xc1cfef25,// 264 PAY 227 

    0x6d9f981a,// 265 PAY 228 

    0xf0b0c391,// 266 PAY 229 

    0x04bea3c7,// 267 PAY 230 

    0x05db4639,// 268 PAY 231 

    0xa7d18ea8,// 269 PAY 232 

    0x355f642f,// 270 PAY 233 

    0x54bc070c,// 271 PAY 234 

    0x33abeac3,// 272 PAY 235 

    0x1928742c,// 273 PAY 236 

    0x1f250075,// 274 PAY 237 

    0x466aef84,// 275 PAY 238 

    0x21cc5837,// 276 PAY 239 

    0x074b8fd3,// 277 PAY 240 

    0x47a6f847,// 278 PAY 241 

    0x658e24ff,// 279 PAY 242 

    0x00b73a02,// 280 PAY 243 

    0x4f7339da,// 281 PAY 244 

    0xc282454f,// 282 PAY 245 

    0xb5b1d5a7,// 283 PAY 246 

    0xa97bdb48,// 284 PAY 247 

    0x81022b25,// 285 PAY 248 

    0x7695094d,// 286 PAY 249 

    0xbb3f1111,// 287 PAY 250 

    0x11deb69b,// 288 PAY 251 

    0xb39f2c20,// 289 PAY 252 

    0x0f0bc34b,// 290 PAY 253 

    0x42e1db70,// 291 PAY 254 

    0x7342202f,// 292 PAY 255 

    0xe9e2e623,// 293 PAY 256 

    0x9ba84898,// 294 PAY 257 

    0x0e12dff5,// 295 PAY 258 

    0xb057ac34,// 296 PAY 259 

    0x5cedd0c5,// 297 PAY 260 

    0xd626a9ab,// 298 PAY 261 

    0xb0ec7aaf,// 299 PAY 262 

    0xfd0178ff,// 300 PAY 263 

    0x7fed9abe,// 301 PAY 264 

    0x8881f4e2,// 302 PAY 265 

    0x125dd891,// 303 PAY 266 

    0xf4ded56a,// 304 PAY 267 

    0x81740df4,// 305 PAY 268 

    0xbb4db4d6,// 306 PAY 269 

    0xa385fed4,// 307 PAY 270 

    0x3e675858,// 308 PAY 271 

    0x70964f82,// 309 PAY 272 

    0x2f107980,// 310 PAY 273 

    0x24dc05d5,// 311 PAY 274 

    0xb0aafa82,// 312 PAY 275 

    0x2306a089,// 313 PAY 276 

    0x06e28c83,// 314 PAY 277 

    0x25df08ee,// 315 PAY 278 

    0xb7567483,// 316 PAY 279 

    0xe8030736,// 317 PAY 280 

    0xacefcc21,// 318 PAY 281 

    0x35bb7d3f,// 319 PAY 282 

    0x31ffb37f,// 320 PAY 283 

    0x9211f1c8,// 321 PAY 284 

    0x8eebe800,// 322 PAY 285 

    0xf012b291,// 323 PAY 286 

    0xde346867,// 324 PAY 287 

    0x34d783b8,// 325 PAY 288 

    0xcc2598f9,// 326 PAY 289 

    0x51492d77,// 327 PAY 290 

    0x5dee3cde,// 328 PAY 291 

    0x4ba59959,// 329 PAY 292 

    0xd9fec1b7,// 330 PAY 293 

    0x11e62e02,// 331 PAY 294 

    0xd65401be,// 332 PAY 295 

    0x395debbb,// 333 PAY 296 

    0xf3c28506,// 334 PAY 297 

    0xa3f53cfd,// 335 PAY 298 

    0xd87e5108,// 336 PAY 299 

    0x91a104d2,// 337 PAY 300 

    0x962397ec,// 338 PAY 301 

    0x115fd364,// 339 PAY 302 

    0x9ae54fb7,// 340 PAY 303 

    0xa42928f4,// 341 PAY 304 

    0xd97a09a4,// 342 PAY 305 

    0x3eb5ac60,// 343 PAY 306 

    0x9d6c31e3,// 344 PAY 307 

    0x7f161f86,// 345 PAY 308 

    0x829d0cc2,// 346 PAY 309 

    0x1463e50d,// 347 PAY 310 

    0x48a52503,// 348 PAY 311 

    0xd36e313d,// 349 PAY 312 

    0x7d5b485e,// 350 PAY 313 

    0x1ae1f560,// 351 PAY 314 

    0xab64cedd,// 352 PAY 315 

    0x1ca22df9,// 353 PAY 316 

    0x702a90c8,// 354 PAY 317 

    0xf06dc312,// 355 PAY 318 

    0x828d1597,// 356 PAY 319 

    0xec152120,// 357 PAY 320 

    0x13ba4eb2,// 358 PAY 321 

    0xdea27076,// 359 PAY 322 

    0x74e0ce3b,// 360 PAY 323 

    0x5cf10940,// 361 PAY 324 

    0x0d9cf96d,// 362 PAY 325 

    0x329dbd1d,// 363 PAY 326 

    0xc68b692d,// 364 PAY 327 

    0x9f996da9,// 365 PAY 328 

    0x7b0efda4,// 366 PAY 329 

    0x8acae8a0,// 367 PAY 330 

    0x59a27f3d,// 368 PAY 331 

    0x92219201,// 369 PAY 332 

    0x6f3d20ef,// 370 PAY 333 

    0x65a9e7fa,// 371 PAY 334 

    0xf5fc617c,// 372 PAY 335 

    0xb3350b9b,// 373 PAY 336 

    0xaa6b7810,// 374 PAY 337 

    0x76192791,// 375 PAY 338 

    0x1ee851f8,// 376 PAY 339 

    0xf823a98e,// 377 PAY 340 

    0x5aee0612,// 378 PAY 341 

    0x1f9d45e0,// 379 PAY 342 

    0x1e5c3a7c,// 380 PAY 343 

    0xac9824cc,// 381 PAY 344 

    0x67c87c53,// 382 PAY 345 

    0x579db729,// 383 PAY 346 

    0xf9a7c765,// 384 PAY 347 

    0x0f2364d5,// 385 PAY 348 

    0x814a560c,// 386 PAY 349 

    0xf966d51a,// 387 PAY 350 

    0x33f406c7,// 388 PAY 351 

    0x928b76c4,// 389 PAY 352 

    0x3ceb969d,// 390 PAY 353 

    0xef02810c,// 391 PAY 354 

    0x71bdfd7e,// 392 PAY 355 

    0x6d8b6e33,// 393 PAY 356 

    0xe05ed2a5,// 394 PAY 357 

    0x827ab894,// 395 PAY 358 

    0x3cb7d623,// 396 PAY 359 

    0xc82381f7,// 397 PAY 360 

    0xaeaa006f,// 398 PAY 361 

    0xcb2aca73,// 399 PAY 362 

    0xb8d14525,// 400 PAY 363 

    0x8ad85d02,// 401 PAY 364 

    0x42c4d918,// 402 PAY 365 

    0x0b63e2ac,// 403 PAY 366 

    0x5c9f74f8,// 404 PAY 367 

    0x3b9acbd5,// 405 PAY 368 

    0x205777cb,// 406 PAY 369 

    0x2dfc0a1d,// 407 PAY 370 

    0xabde0330,// 408 PAY 371 

    0x328ab928,// 409 PAY 372 

    0x330d048f,// 410 PAY 373 

    0x83f9a90f,// 411 PAY 374 

    0xc1350113,// 412 PAY 375 

    0x9ee00463,// 413 PAY 376 

    0xbede3308,// 414 PAY 377 

    0xd0a200cb,// 415 PAY 378 

    0x7bb7c2c1,// 416 PAY 379 

    0xd32570a5,// 417 PAY 380 

    0x6cdf35a2,// 418 PAY 381 

    0x64853ed7,// 419 PAY 382 

    0x0dd2a883,// 420 PAY 383 

    0x0d1160fc,// 421 PAY 384 

    0x214ce74a,// 422 PAY 385 

    0x7ac2ba26,// 423 PAY 386 

    0xbaff9629,// 424 PAY 387 

    0xdcb9eb94,// 425 PAY 388 

    0x3f2b719f,// 426 PAY 389 

    0x3e71063d,// 427 PAY 390 

    0xf3fedc69,// 428 PAY 391 

    0x20adbd09,// 429 PAY 392 

    0x6e5d1837,// 430 PAY 393 

    0xbda24d5c,// 431 PAY 394 

    0x0771450c,// 432 PAY 395 

    0x0c15ad50,// 433 PAY 396 

    0xdb61e30b,// 434 PAY 397 

    0x17392aae,// 435 PAY 398 

    0x2ab0080c,// 436 PAY 399 

    0xd3c050cc,// 437 PAY 400 

    0xd98cf59b,// 438 PAY 401 

    0xcfc9a6a2,// 439 PAY 402 

    0x9821f72e,// 440 PAY 403 

    0x28e31241,// 441 PAY 404 

    0x1e9b67f6,// 442 PAY 405 

    0x30796ff2,// 443 PAY 406 

    0xee0c338a,// 444 PAY 407 

    0x9c542b96,// 445 PAY 408 

    0x75c2f449,// 446 PAY 409 

    0xcf150b61,// 447 PAY 410 

    0xd3744b9c,// 448 PAY 411 

    0xd0df6404,// 449 PAY 412 

    0x2c24d5be,// 450 PAY 413 

    0x6c186706,// 451 PAY 414 

    0x9072cdb8,// 452 PAY 415 

    0x902a7a9a,// 453 PAY 416 

    0x32de6dc0,// 454 PAY 417 

    0x204d2cb3,// 455 PAY 418 

    0x31a6111a,// 456 PAY 419 

    0x02cba000,// 457 PAY 420 

    0x773cea93,// 458 PAY 421 

    0x7fb6dbff,// 459 PAY 422 

    0xe4e185d4,// 460 PAY 423 

    0x9d203b7b,// 461 PAY 424 

    0xe657c800,// 462 PAY 425 

    0xa3055343,// 463 PAY 426 

    0x717fbdeb,// 464 PAY 427 

    0xf321761c,// 465 PAY 428 

    0x34640b2b,// 466 PAY 429 

    0x96263ffa,// 467 PAY 430 

    0x9ddd91ca,// 468 PAY 431 

    0x9822762e,// 469 PAY 432 

    0x0cb6965b,// 470 PAY 433 

    0xfdc34d63,// 471 PAY 434 

    0xd4a50227,// 472 PAY 435 

    0xd28d91f0,// 473 PAY 436 

    0xce9758ed,// 474 PAY 437 

    0xf9a9049b,// 475 PAY 438 

    0x54f10eb3,// 476 PAY 439 

    0x11258a24,// 477 PAY 440 

    0xf401aca2,// 478 PAY 441 

    0x7a91864d,// 479 PAY 442 

    0x1aba83ae,// 480 PAY 443 

    0xe26fc71b,// 481 PAY 444 

    0xaf42e99a,// 482 PAY 445 

    0x96472673,// 483 PAY 446 

    0x6abb2e51,// 484 PAY 447 

    0x08da13aa,// 485 PAY 448 

    0xac6fce0a,// 486 PAY 449 

    0x3e2886eb,// 487 PAY 450 

    0x6882da17,// 488 PAY 451 

    0xf748beb3,// 489 PAY 452 

    0xcd5eea60,// 490 PAY 453 

    0x33365521,// 491 PAY 454 

    0xf5015dd4,// 492 PAY 455 

    0x0a0eea7d,// 493 PAY 456 

    0xc67fa394,// 494 PAY 457 

    0x9dde551d,// 495 PAY 458 

    0x52739c5c,// 496 PAY 459 

    0xa47df26e,// 497 PAY 460 

    0xf274ffa8,// 498 PAY 461 

    0x964331d8,// 499 PAY 462 

    0x9a7dbc09,// 500 PAY 463 

    0xa0c28fa9,// 501 PAY 464 

    0x8142e8f7,// 502 PAY 465 

    0x3d43cb69,// 503 PAY 466 

    0xb4c0b742,// 504 PAY 467 

    0x1b2eb5fe,// 505 PAY 468 

    0x59565907,// 506 PAY 469 

    0x170a7ef4,// 507 PAY 470 

    0x24e01dfc,// 508 PAY 471 

    0x8d13d4e9,// 509 PAY 472 

    0xf7c73947,// 510 PAY 473 

    0x64ed7c8f,// 511 PAY 474 

    0x6a0996a4,// 512 PAY 475 

    0xcd11f3b0,// 513 PAY 476 

    0xf02a6720,// 514 PAY 477 

    0xed6f3ce0,// 515 PAY 478 

    0x26beaca9,// 516 PAY 479 

    0x72aa3bce,// 517 PAY 480 

    0x0200c54c,// 518 PAY 481 

    0x9c000000,// 519 PAY 482 

/// STA is 1 words. 

/// STA num_pkts       : 154 

/// STA pkt_idx        : 101 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x4a 

    0x01954a9a // 520 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt42_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x02 

/// ECH pdu_tag        : 0x00 

    0x00020000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0800000f,// 3 SCX   1 

    0x80404883,// 4 SCX   2 

    0x00004300,// 5 SCX   3 

    0xf719b0a0,// 6 SCX   4 

    0x31990205,// 7 SCX   5 

    0x92bdb2a9,// 8 SCX   6 

    0x3670d362,// 9 SCX   7 

    0xf5f788ed,// 10 SCX   8 

    0x045635f5,// 11 SCX   9 

    0x14726a21,// 12 SCX  10 

    0x94a07a91,// 13 SCX  11 

    0x9779a1e5,// 14 SCX  12 

    0x3e5f64cb,// 15 SCX  13 

    0xd1d61987,// 16 SCX  14 

    0x25128ef4,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 1730 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1374 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1374 

/// BFD lencrypto      : 144 

/// BFD ofstcrypto     : 708 

/// BFD (ofst+len)cry  : 852 

/// BFD ofstiv         : 348 

/// BFD ofsticv        : 1596 

    0x0000055e,// 18 BFD   1 

    0x02c40090,// 19 BFD   2 

    0x063c015c,// 20 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c00746c,// 21 MFM   1 

    0x01480e7e,// 22 MFM   2 

    0x4dbfedc2,// 23 MFM   3 

    0x7204b24c,// 24 MFM   4 

    0x5d77e21a,// 25 MFM   5 

    0x448d6514,// 26 MFM   6 

    0x0ccc434b,// 27 MFM   7 

    0xe412eff5,// 28 MFM   8 

    0x8662e688,// 29 MFM   9 

    0x0ec3d8b7,// 30 MFM  10 

    0xef5d0a4c,// 31 MFM  11 

    0x8f0a59db,// 32 MFM  12 

    0xe9bf80c4,// 33 MFM  13 

    0x1efd42e1,// 34 MFM  14 

    0xd349988f,// 35 MFM  15 

    0x0aa58787,// 36 MFM  16 

/// BDA is 434 words. 

/// BDA size     is 1730 (0x6c2) 

/// BDA id       is 0x80ec 

    0x06c280ec,// 37 BDA   1 

/// PAY Generic Data size   : 1730 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0xb39983fe,// 38 PAY   1 

    0xafb6f4b7,// 39 PAY   2 

    0x224df8b2,// 40 PAY   3 

    0xa016041a,// 41 PAY   4 

    0xbae8eb8e,// 42 PAY   5 

    0x6f4512c5,// 43 PAY   6 

    0x76693b02,// 44 PAY   7 

    0x8468a200,// 45 PAY   8 

    0x733a41e6,// 46 PAY   9 

    0x12a0b459,// 47 PAY  10 

    0x2bfa143f,// 48 PAY  11 

    0x312c6ab0,// 49 PAY  12 

    0x81942601,// 50 PAY  13 

    0x551127d8,// 51 PAY  14 

    0x8252b2a8,// 52 PAY  15 

    0x9c2afdf3,// 53 PAY  16 

    0x27ae9e7e,// 54 PAY  17 

    0x65454d4c,// 55 PAY  18 

    0x46849e18,// 56 PAY  19 

    0xa4619881,// 57 PAY  20 

    0xb771b759,// 58 PAY  21 

    0x16668b94,// 59 PAY  22 

    0x79421149,// 60 PAY  23 

    0x4af2f6dd,// 61 PAY  24 

    0xed6dc68d,// 62 PAY  25 

    0xdaad4a8e,// 63 PAY  26 

    0xa7155030,// 64 PAY  27 

    0x1331bd54,// 65 PAY  28 

    0x31392f80,// 66 PAY  29 

    0xb2e19aac,// 67 PAY  30 

    0xe18deef5,// 68 PAY  31 

    0x5d9475d1,// 69 PAY  32 

    0xe7b5c7d0,// 70 PAY  33 

    0xd7a0f0c5,// 71 PAY  34 

    0x67278727,// 72 PAY  35 

    0xaebde2f2,// 73 PAY  36 

    0x24ee943e,// 74 PAY  37 

    0xe8b04842,// 75 PAY  38 

    0x6518525e,// 76 PAY  39 

    0xdd75bb16,// 77 PAY  40 

    0x22b050fb,// 78 PAY  41 

    0x4563c637,// 79 PAY  42 

    0x0eaa38db,// 80 PAY  43 

    0x7c2fc9a5,// 81 PAY  44 

    0x479248b2,// 82 PAY  45 

    0x44ebd4fb,// 83 PAY  46 

    0x9f183e45,// 84 PAY  47 

    0xbb07d7bb,// 85 PAY  48 

    0x457979b7,// 86 PAY  49 

    0x5839fd17,// 87 PAY  50 

    0x9a732749,// 88 PAY  51 

    0x8d22a911,// 89 PAY  52 

    0xafc31664,// 90 PAY  53 

    0xf5fe3f73,// 91 PAY  54 

    0x57e44ec2,// 92 PAY  55 

    0x27d28d87,// 93 PAY  56 

    0x9d98f73d,// 94 PAY  57 

    0x029a425c,// 95 PAY  58 

    0x04eaff92,// 96 PAY  59 

    0x80271b41,// 97 PAY  60 

    0xcfa26788,// 98 PAY  61 

    0x380466c2,// 99 PAY  62 

    0x2e263846,// 100 PAY  63 

    0x16b4abec,// 101 PAY  64 

    0xdd5af7b0,// 102 PAY  65 

    0x3e9e7bf6,// 103 PAY  66 

    0xba409470,// 104 PAY  67 

    0x92eafa63,// 105 PAY  68 

    0xd79767e6,// 106 PAY  69 

    0x57bff995,// 107 PAY  70 

    0x415bad44,// 108 PAY  71 

    0x93099960,// 109 PAY  72 

    0xc8e62af1,// 110 PAY  73 

    0xfb2ed1cb,// 111 PAY  74 

    0xc33e525a,// 112 PAY  75 

    0x2109f6b6,// 113 PAY  76 

    0x290f4808,// 114 PAY  77 

    0x6218adcc,// 115 PAY  78 

    0x27e0b7a7,// 116 PAY  79 

    0xedee4215,// 117 PAY  80 

    0xb7de7378,// 118 PAY  81 

    0xba9c5c98,// 119 PAY  82 

    0x9dcb2f10,// 120 PAY  83 

    0x4c5d7fa1,// 121 PAY  84 

    0x32e5c0ba,// 122 PAY  85 

    0x0188ce33,// 123 PAY  86 

    0x98ce0783,// 124 PAY  87 

    0xc6344793,// 125 PAY  88 

    0x2cf2482f,// 126 PAY  89 

    0x550b7b47,// 127 PAY  90 

    0x780c7f51,// 128 PAY  91 

    0xe1f4729b,// 129 PAY  92 

    0x2633d187,// 130 PAY  93 

    0xb5d4f57a,// 131 PAY  94 

    0x189d745d,// 132 PAY  95 

    0x27403ded,// 133 PAY  96 

    0x46234feb,// 134 PAY  97 

    0x9fcb4ad9,// 135 PAY  98 

    0x3ae09a15,// 136 PAY  99 

    0x9b02c89c,// 137 PAY 100 

    0xf3f7b9c6,// 138 PAY 101 

    0xfef43b61,// 139 PAY 102 

    0x3f3f5b77,// 140 PAY 103 

    0x2a549129,// 141 PAY 104 

    0x78751911,// 142 PAY 105 

    0xdf8459c4,// 143 PAY 106 

    0x42d45e47,// 144 PAY 107 

    0xd6490753,// 145 PAY 108 

    0x84a81923,// 146 PAY 109 

    0x4baaf836,// 147 PAY 110 

    0x13f292f3,// 148 PAY 111 

    0x451e7f79,// 149 PAY 112 

    0xd2099929,// 150 PAY 113 

    0x350e9266,// 151 PAY 114 

    0x537e1bc3,// 152 PAY 115 

    0x32378e1d,// 153 PAY 116 

    0x01dac972,// 154 PAY 117 

    0xce7e449d,// 155 PAY 118 

    0x4d3dee7d,// 156 PAY 119 

    0x3023673e,// 157 PAY 120 

    0x5e6674b0,// 158 PAY 121 

    0x1187d712,// 159 PAY 122 

    0x8cf07e65,// 160 PAY 123 

    0x2ee64a83,// 161 PAY 124 

    0xa48ed5fa,// 162 PAY 125 

    0x584cf17c,// 163 PAY 126 

    0x3e5a436f,// 164 PAY 127 

    0x03beadd2,// 165 PAY 128 

    0x4fb74703,// 166 PAY 129 

    0xcc089168,// 167 PAY 130 

    0x4bedf1bb,// 168 PAY 131 

    0x333a7eac,// 169 PAY 132 

    0x0f63ff0e,// 170 PAY 133 

    0x0abe9eec,// 171 PAY 134 

    0x80af7b8d,// 172 PAY 135 

    0x9555257e,// 173 PAY 136 

    0x24cc89af,// 174 PAY 137 

    0xb42c102d,// 175 PAY 138 

    0xde2a4114,// 176 PAY 139 

    0xe3324b57,// 177 PAY 140 

    0x66242fb7,// 178 PAY 141 

    0xc0506af2,// 179 PAY 142 

    0x8db95b4f,// 180 PAY 143 

    0x0c3b0b81,// 181 PAY 144 

    0x718838d0,// 182 PAY 145 

    0xd8df5735,// 183 PAY 146 

    0x60b6cb42,// 184 PAY 147 

    0x2060a0e8,// 185 PAY 148 

    0xbcc28a99,// 186 PAY 149 

    0xf6ad33d9,// 187 PAY 150 

    0x97d9c481,// 188 PAY 151 

    0x042c6698,// 189 PAY 152 

    0xe8509602,// 190 PAY 153 

    0x06079396,// 191 PAY 154 

    0xa620e790,// 192 PAY 155 

    0xde9b5637,// 193 PAY 156 

    0xb6325983,// 194 PAY 157 

    0x082c1eb6,// 195 PAY 158 

    0x2e30e5f1,// 196 PAY 159 

    0xc179f7af,// 197 PAY 160 

    0x0a39ae18,// 198 PAY 161 

    0x1fb87e59,// 199 PAY 162 

    0xd28387f1,// 200 PAY 163 

    0xce621a74,// 201 PAY 164 

    0xcd16355f,// 202 PAY 165 

    0x9cf5d1be,// 203 PAY 166 

    0x7b8f3320,// 204 PAY 167 

    0xfe8ec272,// 205 PAY 168 

    0x45d9d8aa,// 206 PAY 169 

    0x0ebaa0d0,// 207 PAY 170 

    0xd195ee1f,// 208 PAY 171 

    0xa3bc7a8a,// 209 PAY 172 

    0xa1db15df,// 210 PAY 173 

    0x5880fac9,// 211 PAY 174 

    0x94dc6ea9,// 212 PAY 175 

    0x038f8cee,// 213 PAY 176 

    0xab39071a,// 214 PAY 177 

    0x423cdbd3,// 215 PAY 178 

    0x6d95d29c,// 216 PAY 179 

    0x85ecf987,// 217 PAY 180 

    0x2deabf1a,// 218 PAY 181 

    0xce9c5ab2,// 219 PAY 182 

    0xa652f6d7,// 220 PAY 183 

    0xb05c2269,// 221 PAY 184 

    0xaee55d1e,// 222 PAY 185 

    0xc93d7c20,// 223 PAY 186 

    0x51b90d74,// 224 PAY 187 

    0x0eed5701,// 225 PAY 188 

    0x879e8ee1,// 226 PAY 189 

    0xc71b9a06,// 227 PAY 190 

    0x2b2698f4,// 228 PAY 191 

    0x053bec0e,// 229 PAY 192 

    0xffee8316,// 230 PAY 193 

    0x2184fd8b,// 231 PAY 194 

    0xbe1e1e65,// 232 PAY 195 

    0x4dce6afa,// 233 PAY 196 

    0xdf52faa9,// 234 PAY 197 

    0x833483de,// 235 PAY 198 

    0x1d0d4bb3,// 236 PAY 199 

    0x1e02e03e,// 237 PAY 200 

    0x3feeb612,// 238 PAY 201 

    0xb7853fe0,// 239 PAY 202 

    0x5a5ad135,// 240 PAY 203 

    0x769ac5c7,// 241 PAY 204 

    0xf0b17d69,// 242 PAY 205 

    0xf246d131,// 243 PAY 206 

    0x3ebb8d13,// 244 PAY 207 

    0xdc6aaa5f,// 245 PAY 208 

    0x5771660b,// 246 PAY 209 

    0x39b93e4b,// 247 PAY 210 

    0xcabbbf74,// 248 PAY 211 

    0xf95b99ba,// 249 PAY 212 

    0xc45faf9c,// 250 PAY 213 

    0x1388cbef,// 251 PAY 214 

    0x1ed77fbf,// 252 PAY 215 

    0xbcdf0dae,// 253 PAY 216 

    0x2ba105d2,// 254 PAY 217 

    0xbb13183d,// 255 PAY 218 

    0x90400422,// 256 PAY 219 

    0x9b59667c,// 257 PAY 220 

    0x01789759,// 258 PAY 221 

    0x0318bd1d,// 259 PAY 222 

    0x1ce7fcec,// 260 PAY 223 

    0x4db19c9a,// 261 PAY 224 

    0xc63c42dd,// 262 PAY 225 

    0xca507922,// 263 PAY 226 

    0x2d1244a9,// 264 PAY 227 

    0xb47056be,// 265 PAY 228 

    0x7ccad4ad,// 266 PAY 229 

    0xa77f1edb,// 267 PAY 230 

    0xb7ece2ab,// 268 PAY 231 

    0x521dd754,// 269 PAY 232 

    0x61f40b6f,// 270 PAY 233 

    0x8d96cf0c,// 271 PAY 234 

    0x52d6b1b4,// 272 PAY 235 

    0x2baaacaf,// 273 PAY 236 

    0xbe952cd6,// 274 PAY 237 

    0x36578f99,// 275 PAY 238 

    0x5aa004e4,// 276 PAY 239 

    0x2d9e616e,// 277 PAY 240 

    0x8c451afe,// 278 PAY 241 

    0xba4a2b44,// 279 PAY 242 

    0xbf29008e,// 280 PAY 243 

    0x31345e39,// 281 PAY 244 

    0x63413b54,// 282 PAY 245 

    0xf0907aab,// 283 PAY 246 

    0x07bb3afc,// 284 PAY 247 

    0xed4da642,// 285 PAY 248 

    0x8b8d71c7,// 286 PAY 249 

    0x467cd067,// 287 PAY 250 

    0x0813e7fc,// 288 PAY 251 

    0xaa95d313,// 289 PAY 252 

    0xab632715,// 290 PAY 253 

    0xf1ed6ec3,// 291 PAY 254 

    0xb1d6b8f9,// 292 PAY 255 

    0xc9683171,// 293 PAY 256 

    0xb91ece3a,// 294 PAY 257 

    0xa5913669,// 295 PAY 258 

    0x41647c55,// 296 PAY 259 

    0xe7a11595,// 297 PAY 260 

    0xceb8ebd1,// 298 PAY 261 

    0xe9db8d59,// 299 PAY 262 

    0x49a5cd72,// 300 PAY 263 

    0x3b2094ef,// 301 PAY 264 

    0xf2abdf65,// 302 PAY 265 

    0xc04c8c59,// 303 PAY 266 

    0x5e6b90f9,// 304 PAY 267 

    0xedab8c0b,// 305 PAY 268 

    0xf304413c,// 306 PAY 269 

    0xb3ea35cf,// 307 PAY 270 

    0x4f59ed5a,// 308 PAY 271 

    0x9a0b754e,// 309 PAY 272 

    0x3a5fe650,// 310 PAY 273 

    0xa8309d17,// 311 PAY 274 

    0x7b23abc2,// 312 PAY 275 

    0x5c3456fe,// 313 PAY 276 

    0x445a1dec,// 314 PAY 277 

    0xf49b3946,// 315 PAY 278 

    0xf7db3bf3,// 316 PAY 279 

    0x216f6dfc,// 317 PAY 280 

    0xa6a22837,// 318 PAY 281 

    0xeb7a0c87,// 319 PAY 282 

    0xbbba57b7,// 320 PAY 283 

    0xef432e9d,// 321 PAY 284 

    0x2fbd2842,// 322 PAY 285 

    0x571dee0e,// 323 PAY 286 

    0x3fa8a6d0,// 324 PAY 287 

    0x56e47f2b,// 325 PAY 288 

    0x4d6f53f4,// 326 PAY 289 

    0xf9a6007c,// 327 PAY 290 

    0x9a71b0f0,// 328 PAY 291 

    0x5f5c9d98,// 329 PAY 292 

    0x6df09d96,// 330 PAY 293 

    0x12070a84,// 331 PAY 294 

    0x6d9e033d,// 332 PAY 295 

    0x3189d2d6,// 333 PAY 296 

    0x9113c646,// 334 PAY 297 

    0xe96321cd,// 335 PAY 298 

    0x77c506ea,// 336 PAY 299 

    0xce73bbc2,// 337 PAY 300 

    0x3db1a82d,// 338 PAY 301 

    0x19c117d2,// 339 PAY 302 

    0xfbd9cf7d,// 340 PAY 303 

    0x002c605e,// 341 PAY 304 

    0xf12e928f,// 342 PAY 305 

    0x724ecbd9,// 343 PAY 306 

    0xcc35c398,// 344 PAY 307 

    0xf028ed41,// 345 PAY 308 

    0x6b4b007b,// 346 PAY 309 

    0x657cd24e,// 347 PAY 310 

    0xb42f5542,// 348 PAY 311 

    0xfd467ff3,// 349 PAY 312 

    0x54fb0b6f,// 350 PAY 313 

    0x67871b50,// 351 PAY 314 

    0xfd03caf4,// 352 PAY 315 

    0xc545fb21,// 353 PAY 316 

    0xf5ba41b8,// 354 PAY 317 

    0x9126625c,// 355 PAY 318 

    0x43b5987d,// 356 PAY 319 

    0xb326d9bd,// 357 PAY 320 

    0x5d831dbe,// 358 PAY 321 

    0x47e47596,// 359 PAY 322 

    0x51b6a113,// 360 PAY 323 

    0xd56bcbb8,// 361 PAY 324 

    0x3c5db9c4,// 362 PAY 325 

    0xba4013bd,// 363 PAY 326 

    0xf91fc504,// 364 PAY 327 

    0xe975aea7,// 365 PAY 328 

    0x15f34258,// 366 PAY 329 

    0xfb5c59b4,// 367 PAY 330 

    0xa94ef4b5,// 368 PAY 331 

    0x7808dbb9,// 369 PAY 332 

    0xf0954f7f,// 370 PAY 333 

    0x0b1982a5,// 371 PAY 334 

    0x1e715b86,// 372 PAY 335 

    0x3b5a912a,// 373 PAY 336 

    0x36e648b8,// 374 PAY 337 

    0xf3b5aed7,// 375 PAY 338 

    0x12b21388,// 376 PAY 339 

    0x97dbada6,// 377 PAY 340 

    0x704e48c1,// 378 PAY 341 

    0x80bca4e4,// 379 PAY 342 

    0x2515e63b,// 380 PAY 343 

    0x35331d02,// 381 PAY 344 

    0xddc18d72,// 382 PAY 345 

    0x421405ae,// 383 PAY 346 

    0xeae95f10,// 384 PAY 347 

    0x6a572a1d,// 385 PAY 348 

    0xb52d4299,// 386 PAY 349 

    0x85c3e0a1,// 387 PAY 350 

    0xd7289f9f,// 388 PAY 351 

    0xf2ba5f2e,// 389 PAY 352 

    0x6b884540,// 390 PAY 353 

    0x2fa06065,// 391 PAY 354 

    0x39fdf16d,// 392 PAY 355 

    0x371090f6,// 393 PAY 356 

    0x2ca997ef,// 394 PAY 357 

    0xbb6f811a,// 395 PAY 358 

    0xc35c89cb,// 396 PAY 359 

    0xcff5c7f8,// 397 PAY 360 

    0x551b6e01,// 398 PAY 361 

    0xa54f62a4,// 399 PAY 362 

    0xdf2dc3a4,// 400 PAY 363 

    0xec7f8912,// 401 PAY 364 

    0x8321e42f,// 402 PAY 365 

    0x54cd4dfb,// 403 PAY 366 

    0xa3329e31,// 404 PAY 367 

    0xba9861d2,// 405 PAY 368 

    0xc08dd39a,// 406 PAY 369 

    0x8633ffc1,// 407 PAY 370 

    0x5ce40775,// 408 PAY 371 

    0x1763c9ce,// 409 PAY 372 

    0xefcd67c1,// 410 PAY 373 

    0xb030f967,// 411 PAY 374 

    0x1bb72190,// 412 PAY 375 

    0x461d18d4,// 413 PAY 376 

    0x8b59e0c9,// 414 PAY 377 

    0x82cf4931,// 415 PAY 378 

    0xa3af60af,// 416 PAY 379 

    0x69cf47bf,// 417 PAY 380 

    0xfd78a632,// 418 PAY 381 

    0x0646a990,// 419 PAY 382 

    0x227be8b9,// 420 PAY 383 

    0x85c8f7e8,// 421 PAY 384 

    0x83fd4b63,// 422 PAY 385 

    0x946c943e,// 423 PAY 386 

    0x375400f4,// 424 PAY 387 

    0x7218ca51,// 425 PAY 388 

    0x0daf7f68,// 426 PAY 389 

    0x42311bb8,// 427 PAY 390 

    0xe0fb23a3,// 428 PAY 391 

    0x3f8bb952,// 429 PAY 392 

    0x522ac678,// 430 PAY 393 

    0x286c9c0c,// 431 PAY 394 

    0x30da94c3,// 432 PAY 395 

    0x71708bbe,// 433 PAY 396 

    0xe2106c4b,// 434 PAY 397 

    0x54932165,// 435 PAY 398 

    0xcc800727,// 436 PAY 399 

    0x76ac2377,// 437 PAY 400 

    0x51ac10ab,// 438 PAY 401 

    0xd011a1ca,// 439 PAY 402 

    0x3b82ccba,// 440 PAY 403 

    0x01751d84,// 441 PAY 404 

    0x5f98608a,// 442 PAY 405 

    0xae209e55,// 443 PAY 406 

    0x2c50f25f,// 444 PAY 407 

    0x9fa00589,// 445 PAY 408 

    0xcb7401a9,// 446 PAY 409 

    0x259a3941,// 447 PAY 410 

    0x84ab5c28,// 448 PAY 411 

    0x0cfe8364,// 449 PAY 412 

    0x7c26fd82,// 450 PAY 413 

    0xb51a9762,// 451 PAY 414 

    0x6e9fafa2,// 452 PAY 415 

    0x05824db3,// 453 PAY 416 

    0x6377ae4d,// 454 PAY 417 

    0xc38c2684,// 455 PAY 418 

    0x1db16de1,// 456 PAY 419 

    0xf3d655e6,// 457 PAY 420 

    0x9224a0a5,// 458 PAY 421 

    0x6a69c819,// 459 PAY 422 

    0xb6616399,// 460 PAY 423 

    0xb430d010,// 461 PAY 424 

    0xeedaa74a,// 462 PAY 425 

    0x8378dbe2,// 463 PAY 426 

    0xa5077bd2,// 464 PAY 427 

    0x1d4b2ad8,// 465 PAY 428 

    0x1e38d0bc,// 466 PAY 429 

    0x12a989b9,// 467 PAY 430 

    0xa868c363,// 468 PAY 431 

    0x5bb6105b,// 469 PAY 432 

    0x7dd40000,// 470 PAY 433 

/// STA is 1 words. 

/// STA num_pkts       : 45 

/// STA pkt_idx        : 54 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x8b 

    0x00d98b2d // 471 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt43_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x08 

/// ECH pdu_tag        : 0x00 

    0x00080000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0800000f,// 3 SCX   1 

    0x8042480d,// 4 SCX   2 

    0x00003300,// 5 SCX   3 

    0xa796de35,// 6 SCX   4 

    0xa5aa244d,// 7 SCX   5 

    0x66de7938,// 8 SCX   6 

    0xc3c63333,// 9 SCX   7 

    0x4538bc8a,// 10 SCX   8 

    0x78ab1325,// 11 SCX   9 

    0xb3a23583,// 12 SCX  10 

    0xa8c1d096,// 13 SCX  11 

    0x83e40d52,// 14 SCX  12 

    0x55ee068b,// 15 SCX  13 

    0xdfc472f5,// 16 SCX  14 

    0xde98e2b7,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 736 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 601 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 601 

/// BFD lencrypto      : 32 

/// BFD ofstcrypto     : 480 

/// BFD (ofst+len)cry  : 512 

/// BFD ofstiv         : 44 

/// BFD ofsticv        : 672 

    0x00000259,// 18 BFD   1 

    0x01e00020,// 19 BFD   2 

    0x02a0002c,// 20 BFD   3 

/// MFM is 7 words. 

/// MFM vldnibs        : 32 

    0x32009c96,// 21 MFM   1 

    0xccbc67de,// 22 MFM   2 

    0xd48e7f1d,// 23 MFM   3 

    0x3c594d5c,// 24 MFM   4 

    0x5048ff53,// 25 MFM   5 

    0xcc80bade,// 26 MFM   6 

    0x2c39a900,// 27 MFM   7 

/// BDA is 185 words. 

/// BDA size     is 736 (0x2e0) 

/// BDA id       is 0x6967 

    0x02e06967,// 28 BDA   1 

/// PAY Generic Data size   : 736 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x134beba6,// 29 PAY   1 

    0xfbef10be,// 30 PAY   2 

    0x6792b7ce,// 31 PAY   3 

    0x457b9c67,// 32 PAY   4 

    0xb4eb98ea,// 33 PAY   5 

    0xd93ad498,// 34 PAY   6 

    0x0ed7aa63,// 35 PAY   7 

    0x378af3e3,// 36 PAY   8 

    0x246da7e8,// 37 PAY   9 

    0x60c3bf9c,// 38 PAY  10 

    0xed8fc041,// 39 PAY  11 

    0x1cb6eea2,// 40 PAY  12 

    0x8ff67d24,// 41 PAY  13 

    0xa749f975,// 42 PAY  14 

    0x7e1ab472,// 43 PAY  15 

    0x452f26a5,// 44 PAY  16 

    0x8580144f,// 45 PAY  17 

    0xa2f8fdd6,// 46 PAY  18 

    0xb4b9e9fa,// 47 PAY  19 

    0xe9f02e92,// 48 PAY  20 

    0x40ebe005,// 49 PAY  21 

    0x657fb197,// 50 PAY  22 

    0x88ad682e,// 51 PAY  23 

    0x1d5e2613,// 52 PAY  24 

    0x05b12924,// 53 PAY  25 

    0x9200e2b0,// 54 PAY  26 

    0xc90a63c8,// 55 PAY  27 

    0x573ea73b,// 56 PAY  28 

    0xea80b8f3,// 57 PAY  29 

    0x9e3f0770,// 58 PAY  30 

    0xb8639ebc,// 59 PAY  31 

    0xed92b507,// 60 PAY  32 

    0x586b7b98,// 61 PAY  33 

    0x4a84c136,// 62 PAY  34 

    0xdc5b0d49,// 63 PAY  35 

    0x2093998b,// 64 PAY  36 

    0x496b136c,// 65 PAY  37 

    0x6a364770,// 66 PAY  38 

    0x7414ec14,// 67 PAY  39 

    0x98f614ea,// 68 PAY  40 

    0x09dc3dae,// 69 PAY  41 

    0xbdd35e24,// 70 PAY  42 

    0x34f17e3b,// 71 PAY  43 

    0x06fc1dba,// 72 PAY  44 

    0x83ea8f80,// 73 PAY  45 

    0x72547452,// 74 PAY  46 

    0xc8eb1eec,// 75 PAY  47 

    0x44336a51,// 76 PAY  48 

    0xde0b6ad6,// 77 PAY  49 

    0x69d18f87,// 78 PAY  50 

    0x46c3fcd0,// 79 PAY  51 

    0xfb43da8f,// 80 PAY  52 

    0xe2cb8ceb,// 81 PAY  53 

    0x74c195e2,// 82 PAY  54 

    0x340d854a,// 83 PAY  55 

    0xc72f3ea1,// 84 PAY  56 

    0xa8d21eb7,// 85 PAY  57 

    0x7303ac0a,// 86 PAY  58 

    0x2393c376,// 87 PAY  59 

    0x6844046d,// 88 PAY  60 

    0x465ff82f,// 89 PAY  61 

    0x37ab40b2,// 90 PAY  62 

    0x7d6656ed,// 91 PAY  63 

    0xa8b298d9,// 92 PAY  64 

    0x408b6a12,// 93 PAY  65 

    0xc6f24628,// 94 PAY  66 

    0x2fc62e33,// 95 PAY  67 

    0xa192778b,// 96 PAY  68 

    0x13ebace5,// 97 PAY  69 

    0x0085284a,// 98 PAY  70 

    0x88ef0ac2,// 99 PAY  71 

    0x2bbbafce,// 100 PAY  72 

    0x83b8cc0e,// 101 PAY  73 

    0xb2a9c31a,// 102 PAY  74 

    0x2b1427c4,// 103 PAY  75 

    0x69824443,// 104 PAY  76 

    0xf9513449,// 105 PAY  77 

    0x95db6ee7,// 106 PAY  78 

    0x13f84ec2,// 107 PAY  79 

    0x48038094,// 108 PAY  80 

    0x8e5775f9,// 109 PAY  81 

    0xde4f3a2d,// 110 PAY  82 

    0xeabb3574,// 111 PAY  83 

    0xb253c34f,// 112 PAY  84 

    0xdd1fab13,// 113 PAY  85 

    0xe210b23e,// 114 PAY  86 

    0x3255a8a1,// 115 PAY  87 

    0xa0b58898,// 116 PAY  88 

    0x4394f052,// 117 PAY  89 

    0xeac0213a,// 118 PAY  90 

    0xfd3e2632,// 119 PAY  91 

    0xfad57328,// 120 PAY  92 

    0xccc01b76,// 121 PAY  93 

    0x04b53b4c,// 122 PAY  94 

    0x75f5b7b4,// 123 PAY  95 

    0xb5a56f5c,// 124 PAY  96 

    0x1ca95ea9,// 125 PAY  97 

    0x9544d2f9,// 126 PAY  98 

    0xd7f2d3b8,// 127 PAY  99 

    0x419a5927,// 128 PAY 100 

    0x98a1c40f,// 129 PAY 101 

    0x9c03a582,// 130 PAY 102 

    0x81928413,// 131 PAY 103 

    0x94d3c29e,// 132 PAY 104 

    0xa415a90c,// 133 PAY 105 

    0x2fbbf626,// 134 PAY 106 

    0x94ec9d4a,// 135 PAY 107 

    0x73140ef0,// 136 PAY 108 

    0x36388186,// 137 PAY 109 

    0x2f760b03,// 138 PAY 110 

    0xdbcd6d38,// 139 PAY 111 

    0x874249f2,// 140 PAY 112 

    0x9d0e9500,// 141 PAY 113 

    0x65ee4efb,// 142 PAY 114 

    0x8b359578,// 143 PAY 115 

    0x40c152a6,// 144 PAY 116 

    0x3392567f,// 145 PAY 117 

    0x4568d00e,// 146 PAY 118 

    0x25b3fd25,// 147 PAY 119 

    0x6bf599fb,// 148 PAY 120 

    0x026e819c,// 149 PAY 121 

    0x0d56cd41,// 150 PAY 122 

    0x428350d1,// 151 PAY 123 

    0x54e2cd34,// 152 PAY 124 

    0x68bc8a1a,// 153 PAY 125 

    0x3f1ecea8,// 154 PAY 126 

    0xf43f0490,// 155 PAY 127 

    0xb4a481dc,// 156 PAY 128 

    0x9dc8fcfa,// 157 PAY 129 

    0x1eceaf93,// 158 PAY 130 

    0x04b60a96,// 159 PAY 131 

    0x8abe46be,// 160 PAY 132 

    0x5c587aae,// 161 PAY 133 

    0xf73359cf,// 162 PAY 134 

    0x41b2a41b,// 163 PAY 135 

    0xa2b45ea6,// 164 PAY 136 

    0x4321a8f5,// 165 PAY 137 

    0xc15b1a06,// 166 PAY 138 

    0xf0528d15,// 167 PAY 139 

    0xb5b54bca,// 168 PAY 140 

    0xb8cb2cbf,// 169 PAY 141 

    0x9d5cacbe,// 170 PAY 142 

    0xd72e9175,// 171 PAY 143 

    0x9c1b997e,// 172 PAY 144 

    0xf5f7213d,// 173 PAY 145 

    0x8f8094de,// 174 PAY 146 

    0x13b0db4a,// 175 PAY 147 

    0x4a8a6c61,// 176 PAY 148 

    0x6fd00ed7,// 177 PAY 149 

    0xd3050f12,// 178 PAY 150 

    0xad7171f2,// 179 PAY 151 

    0x254b3c66,// 180 PAY 152 

    0x0f2e0264,// 181 PAY 153 

    0x508b5d96,// 182 PAY 154 

    0x5468db18,// 183 PAY 155 

    0xd94efff9,// 184 PAY 156 

    0xd704fe68,// 185 PAY 157 

    0xf775b442,// 186 PAY 158 

    0xb3086660,// 187 PAY 159 

    0x4f300e70,// 188 PAY 160 

    0x0b641801,// 189 PAY 161 

    0x185e4aee,// 190 PAY 162 

    0xe6d89cc8,// 191 PAY 163 

    0xa74d67cc,// 192 PAY 164 

    0x9fe2f1c9,// 193 PAY 165 

    0xe2f18e16,// 194 PAY 166 

    0x14a6c935,// 195 PAY 167 

    0xff60f44d,// 196 PAY 168 

    0x7f1b3463,// 197 PAY 169 

    0xeb3b47cf,// 198 PAY 170 

    0x936647fd,// 199 PAY 171 

    0xb887dbe5,// 200 PAY 172 

    0xac689cce,// 201 PAY 173 

    0xea63be28,// 202 PAY 174 

    0xc944481e,// 203 PAY 175 

    0x5b708629,// 204 PAY 176 

    0x0fdced9a,// 205 PAY 177 

    0xa7b24777,// 206 PAY 178 

    0xf35b72d7,// 207 PAY 179 

    0xf9fab108,// 208 PAY 180 

    0xe54ad67c,// 209 PAY 181 

    0x8eede568,// 210 PAY 182 

    0x87936013,// 211 PAY 183 

    0x636bf4cd,// 212 PAY 184 

/// STA is 1 words. 

/// STA num_pkts       : 133 

/// STA pkt_idx        : 232 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x79 

    0x03a07985 // 213 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt44_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x00 

/// ECH pdu_tag        : 0x00 

    0x00000000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv !insert_icv check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x00000011,// 3 SCX   1 

    0x804648dc,// 4 SCX   2 

    0x00001182,// 5 SCX   3 

    0xd83ec8f8,// 6 SCX   4 

    0xb0a5ff21,// 7 SCX   5 

    0x22ffb6af,// 8 SCX   6 

    0x72df1bbe,// 9 SCX   7 

    0x87cb9076,// 10 SCX   8 

    0xec40f5fc,// 11 SCX   9 

    0x76bee800,// 12 SCX  10 

    0x5f95b0cd,// 13 SCX  11 

    0x468a7d8e,// 14 SCX  12 

    0x3ee071c8,// 15 SCX  13 

    0xf51300c7,// 16 SCX  14 

    0xea2c436f,// 17 SCX  15 

    0xeef26255,// 18 SCX  16 

    0x42b151c5,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 286 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 41 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 41 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 20 

/// BFD (ofst+len)cry  : 28 

/// BFD ofstiv         : 0 

/// BFD ofsticv        : 108 

    0x00000029,// 20 BFD   1 

    0x00140008,// 21 BFD   2 

    0x006c0000,// 22 BFD   3 

/// MFM is 2 words. 

/// MFM vldnibs        : 9 

    0x0900fb7b,// 23 MFM   1 

    0x3cd81000,// 24 MFM   2 

/// BDA is 73 words. 

/// BDA size     is 286 (0x11e) 

/// BDA id       is 0x4bfd 

    0x011e4bfd,// 25 BDA   1 

/// PAY Generic Data size   : 286 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0xdf429a18,// 26 PAY   1 

    0xcd6bf083,// 27 PAY   2 

    0x7d3dcf26,// 28 PAY   3 

    0x9b53df51,// 29 PAY   4 

    0x9cbcc81d,// 30 PAY   5 

    0xa6f01b49,// 31 PAY   6 

    0x77465dce,// 32 PAY   7 

    0x10a68ac6,// 33 PAY   8 

    0xf8090b77,// 34 PAY   9 

    0xba978724,// 35 PAY  10 

    0x9662e1d0,// 36 PAY  11 

    0x56d90733,// 37 PAY  12 

    0xebcc021f,// 38 PAY  13 

    0x1250939a,// 39 PAY  14 

    0x3c255530,// 40 PAY  15 

    0x10cf8d88,// 41 PAY  16 

    0x0bee8364,// 42 PAY  17 

    0xd7fe8cda,// 43 PAY  18 

    0x57bd2903,// 44 PAY  19 

    0x399c6861,// 45 PAY  20 

    0x6a361e52,// 46 PAY  21 

    0x74d41cd8,// 47 PAY  22 

    0xc648ff97,// 48 PAY  23 

    0x0ecf1503,// 49 PAY  24 

    0xc3e08909,// 50 PAY  25 

    0x974a18e5,// 51 PAY  26 

    0x7b6738b6,// 52 PAY  27 

    0x354003e7,// 53 PAY  28 

    0xae25a857,// 54 PAY  29 

    0x920b5877,// 55 PAY  30 

    0xeca00803,// 56 PAY  31 

    0x4fd45ee0,// 57 PAY  32 

    0xdae201f0,// 58 PAY  33 

    0x9b598a20,// 59 PAY  34 

    0x8e243101,// 60 PAY  35 

    0x2f8dcc41,// 61 PAY  36 

    0x9c18be0a,// 62 PAY  37 

    0xd11b4fbc,// 63 PAY  38 

    0xf60d2b2a,// 64 PAY  39 

    0xd5d77d86,// 65 PAY  40 

    0x36600ddf,// 66 PAY  41 

    0x820c1c2a,// 67 PAY  42 

    0x4a5a2e2e,// 68 PAY  43 

    0x0c7eb45d,// 69 PAY  44 

    0x9a7ab530,// 70 PAY  45 

    0x75e168a8,// 71 PAY  46 

    0x77d24981,// 72 PAY  47 

    0x9a62c4a3,// 73 PAY  48 

    0xae726473,// 74 PAY  49 

    0xd0e487c4,// 75 PAY  50 

    0x1ce11a60,// 76 PAY  51 

    0x0b7efdf8,// 77 PAY  52 

    0x3f693d6c,// 78 PAY  53 

    0xd45fee45,// 79 PAY  54 

    0x96ed1ff2,// 80 PAY  55 

    0x550c1ef9,// 81 PAY  56 

    0x10817861,// 82 PAY  57 

    0x93b7c473,// 83 PAY  58 

    0x9a5681ea,// 84 PAY  59 

    0x406fca3b,// 85 PAY  60 

    0xda606442,// 86 PAY  61 

    0xf4bd82c5,// 87 PAY  62 

    0xc169d399,// 88 PAY  63 

    0xa42435d2,// 89 PAY  64 

    0xfe2ae658,// 90 PAY  65 

    0x4487fec2,// 91 PAY  66 

    0x8b8e8f84,// 92 PAY  67 

    0xec58c1ae,// 93 PAY  68 

    0x6aad5b75,// 94 PAY  69 

    0x701470f8,// 95 PAY  70 

    0xf8fc62ae,// 96 PAY  71 

    0xfdf80000,// 97 PAY  72 

/// STA is 1 words. 

/// STA num_pkts       : 13 

/// STA pkt_idx        : 80 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x9a 

    0x01419a0d // 98 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt45_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x01 

/// ECH pdu_tag        : 0x00 

    0x00010000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv insert_icv check_icv !sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0000000f,// 3 SCX   1 

    0x804548fc,// 4 SCX   2 

    0x00003442,// 5 SCX   3 

    0x9f78582e,// 6 SCX   4 

    0x62a432b2,// 7 SCX   5 

    0x7bc68d8e,// 8 SCX   6 

    0x580fded0,// 9 SCX   7 

    0x7d6fd60f,// 10 SCX   8 

    0x77167012,// 11 SCX   9 

    0xa16fbf75,// 12 SCX  10 

    0xbdd5bdb5,// 13 SCX  11 

    0x1a297495,// 14 SCX  12 

    0x5ab5cd7b,// 15 SCX  13 

    0x7edd4946,// 16 SCX  14 

    0xde9321c7,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 1986 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 291 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 291 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 244 

/// BFD (ofst+len)cry  : 252 

/// BFD ofstiv         : 148 

/// BFD ofsticv        : 1732 

    0x00000123,// 18 BFD   1 

    0x00f40008,// 19 BFD   2 

    0x06c40094,// 20 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : 10 

    0x1000c22c,// 21 MFM   1 

    0x40093911,// 22 MFM   2 

    0x8b9a0000,// 23 MFM   3 

/// BDA is 498 words. 

/// BDA size     is 1986 (0x7c2) 

/// BDA id       is 0xae4b 

    0x07c2ae4b,// 24 BDA   1 

/// PAY Generic Data size   : 1986 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x8932ed17,// 25 PAY   1 

    0xfbb66217,// 26 PAY   2 

    0x0f202eeb,// 27 PAY   3 

    0x63a80f7c,// 28 PAY   4 

    0xcb85e53d,// 29 PAY   5 

    0x7678bb0d,// 30 PAY   6 

    0x7fe475fb,// 31 PAY   7 

    0x2de9baa8,// 32 PAY   8 

    0x4cf98e2a,// 33 PAY   9 

    0x0e482aeb,// 34 PAY  10 

    0xd23e3d47,// 35 PAY  11 

    0x6af6ddd0,// 36 PAY  12 

    0xc8c36e56,// 37 PAY  13 

    0x891f9557,// 38 PAY  14 

    0x5c721a39,// 39 PAY  15 

    0x4e4823a4,// 40 PAY  16 

    0xdb1fd5b3,// 41 PAY  17 

    0xca050c27,// 42 PAY  18 

    0xe32e6d91,// 43 PAY  19 

    0xbebb059e,// 44 PAY  20 

    0x76379627,// 45 PAY  21 

    0xaa399a9f,// 46 PAY  22 

    0xd5eb88d3,// 47 PAY  23 

    0xeacebe47,// 48 PAY  24 

    0x5f0227b3,// 49 PAY  25 

    0xc6de821e,// 50 PAY  26 

    0x51a928e7,// 51 PAY  27 

    0xb2011a30,// 52 PAY  28 

    0x43357ebf,// 53 PAY  29 

    0x4c1fd349,// 54 PAY  30 

    0x9f86a36e,// 55 PAY  31 

    0x08c696f3,// 56 PAY  32 

    0x0dfca078,// 57 PAY  33 

    0x1fe9d97c,// 58 PAY  34 

    0xafb9b852,// 59 PAY  35 

    0xea5654b5,// 60 PAY  36 

    0x2cd75c52,// 61 PAY  37 

    0x26478098,// 62 PAY  38 

    0x9cef0be5,// 63 PAY  39 

    0xc9fb8332,// 64 PAY  40 

    0x218a6575,// 65 PAY  41 

    0x1170052e,// 66 PAY  42 

    0xc9b5d832,// 67 PAY  43 

    0x21f0cab1,// 68 PAY  44 

    0x3d4974b4,// 69 PAY  45 

    0xc2462fea,// 70 PAY  46 

    0x38adbfaa,// 71 PAY  47 

    0xb0a14852,// 72 PAY  48 

    0x517f79e9,// 73 PAY  49 

    0xc17560a5,// 74 PAY  50 

    0x276903c7,// 75 PAY  51 

    0x015fe8f9,// 76 PAY  52 

    0x72c97a76,// 77 PAY  53 

    0x9451ab85,// 78 PAY  54 

    0xc362828c,// 79 PAY  55 

    0x548149e9,// 80 PAY  56 

    0x08e25c6b,// 81 PAY  57 

    0xe75308f9,// 82 PAY  58 

    0xdb1a776d,// 83 PAY  59 

    0xf91d9b82,// 84 PAY  60 

    0xf6442a51,// 85 PAY  61 

    0xd7ee23e6,// 86 PAY  62 

    0x7c5204a0,// 87 PAY  63 

    0xb3741da0,// 88 PAY  64 

    0x2d85a7eb,// 89 PAY  65 

    0x9fc31816,// 90 PAY  66 

    0x4c29d09a,// 91 PAY  67 

    0xb380d867,// 92 PAY  68 

    0x0dc729b2,// 93 PAY  69 

    0x142cc571,// 94 PAY  70 

    0x04e452f6,// 95 PAY  71 

    0xfafdc458,// 96 PAY  72 

    0x7b883444,// 97 PAY  73 

    0xda409e8a,// 98 PAY  74 

    0x18896d17,// 99 PAY  75 

    0x2349c893,// 100 PAY  76 

    0x71c64af7,// 101 PAY  77 

    0x40d9a09d,// 102 PAY  78 

    0x7067f55b,// 103 PAY  79 

    0x827ea673,// 104 PAY  80 

    0x96d303b8,// 105 PAY  81 

    0xf68958ac,// 106 PAY  82 

    0x7447411e,// 107 PAY  83 

    0x8840c891,// 108 PAY  84 

    0xa6386835,// 109 PAY  85 

    0x2ffcb3fd,// 110 PAY  86 

    0x54120f4b,// 111 PAY  87 

    0xe509fc2d,// 112 PAY  88 

    0x704d5ff8,// 113 PAY  89 

    0x4f1d7353,// 114 PAY  90 

    0x5d3c9d92,// 115 PAY  91 

    0xca4375cf,// 116 PAY  92 

    0x9c9b6c67,// 117 PAY  93 

    0x27275e1d,// 118 PAY  94 

    0x5a061552,// 119 PAY  95 

    0x3cd9b318,// 120 PAY  96 

    0x916f1a2e,// 121 PAY  97 

    0xff32b143,// 122 PAY  98 

    0x005e3389,// 123 PAY  99 

    0x140258f8,// 124 PAY 100 

    0x561bd04a,// 125 PAY 101 

    0x5c5e5b4e,// 126 PAY 102 

    0xd4144cb3,// 127 PAY 103 

    0x81a3dadb,// 128 PAY 104 

    0x4fc1e939,// 129 PAY 105 

    0x2d33672d,// 130 PAY 106 

    0xd52ee5f7,// 131 PAY 107 

    0x48af2dd9,// 132 PAY 108 

    0x0b2ec838,// 133 PAY 109 

    0xbff69317,// 134 PAY 110 

    0xaccc2ef9,// 135 PAY 111 

    0x5bf5093b,// 136 PAY 112 

    0x247a2516,// 137 PAY 113 

    0x28f6a36d,// 138 PAY 114 

    0x3dd74b52,// 139 PAY 115 

    0x3195735e,// 140 PAY 116 

    0x52e979ff,// 141 PAY 117 

    0x89ade6b5,// 142 PAY 118 

    0xe7322f0b,// 143 PAY 119 

    0xeabe3365,// 144 PAY 120 

    0x942361be,// 145 PAY 121 

    0xd9d74a09,// 146 PAY 122 

    0x90e0770a,// 147 PAY 123 

    0xc170738f,// 148 PAY 124 

    0x34425192,// 149 PAY 125 

    0xea17db57,// 150 PAY 126 

    0x0626e7e1,// 151 PAY 127 

    0x8f134997,// 152 PAY 128 

    0xe9bdb54e,// 153 PAY 129 

    0xd83ebe98,// 154 PAY 130 

    0x77b53bc0,// 155 PAY 131 

    0x398069da,// 156 PAY 132 

    0xc4ffda70,// 157 PAY 133 

    0x052735ed,// 158 PAY 134 

    0x88514cdb,// 159 PAY 135 

    0x5f0dd220,// 160 PAY 136 

    0x030dea52,// 161 PAY 137 

    0x5b2ab3b6,// 162 PAY 138 

    0x1f258753,// 163 PAY 139 

    0x929c5648,// 164 PAY 140 

    0x2f989819,// 165 PAY 141 

    0x5ef3b2ef,// 166 PAY 142 

    0xd6b432cf,// 167 PAY 143 

    0x0272e312,// 168 PAY 144 

    0x050d337e,// 169 PAY 145 

    0xb2f17f8f,// 170 PAY 146 

    0xa5807d56,// 171 PAY 147 

    0x62fe9cd2,// 172 PAY 148 

    0x60ed242f,// 173 PAY 149 

    0xf5c54c34,// 174 PAY 150 

    0xbcb9b37f,// 175 PAY 151 

    0xbf654a86,// 176 PAY 152 

    0xc39f2b50,// 177 PAY 153 

    0xe0d09f59,// 178 PAY 154 

    0xb91cf0bb,// 179 PAY 155 

    0x98dbca10,// 180 PAY 156 

    0xc78bfb4f,// 181 PAY 157 

    0x5f5ad71a,// 182 PAY 158 

    0x630a419b,// 183 PAY 159 

    0x4365840b,// 184 PAY 160 

    0x11baf089,// 185 PAY 161 

    0xc0567bc6,// 186 PAY 162 

    0x7ff12d4d,// 187 PAY 163 

    0xeac53231,// 188 PAY 164 

    0x25f449ca,// 189 PAY 165 

    0x802ed289,// 190 PAY 166 

    0x9370ad7d,// 191 PAY 167 

    0xa62f5ad2,// 192 PAY 168 

    0xc32578ca,// 193 PAY 169 

    0x9f298d62,// 194 PAY 170 

    0x0b34820a,// 195 PAY 171 

    0xc6fffd8f,// 196 PAY 172 

    0x49ac0fe7,// 197 PAY 173 

    0x58d63510,// 198 PAY 174 

    0x143b954c,// 199 PAY 175 

    0xa9bac148,// 200 PAY 176 

    0x000f5fff,// 201 PAY 177 

    0xd5daae87,// 202 PAY 178 

    0x09c6ce6e,// 203 PAY 179 

    0xb217262e,// 204 PAY 180 

    0x1b1cd025,// 205 PAY 181 

    0x5622b3d5,// 206 PAY 182 

    0x337d63bc,// 207 PAY 183 

    0x6b50c2af,// 208 PAY 184 

    0xd419e629,// 209 PAY 185 

    0x6263d0b9,// 210 PAY 186 

    0x83a23609,// 211 PAY 187 

    0x8d6ffb11,// 212 PAY 188 

    0x7e729025,// 213 PAY 189 

    0x5aa2ee12,// 214 PAY 190 

    0xc933c617,// 215 PAY 191 

    0x369bb190,// 216 PAY 192 

    0x7c2703af,// 217 PAY 193 

    0x2c303c7a,// 218 PAY 194 

    0x05463426,// 219 PAY 195 

    0x6527ce2e,// 220 PAY 196 

    0x9df8c032,// 221 PAY 197 

    0xbe48e16a,// 222 PAY 198 

    0xb81d72e5,// 223 PAY 199 

    0x7bc43e6c,// 224 PAY 200 

    0x9dc2303d,// 225 PAY 201 

    0x5176662b,// 226 PAY 202 

    0x86f9c9d7,// 227 PAY 203 

    0x003c82ae,// 228 PAY 204 

    0xc7eb5a7d,// 229 PAY 205 

    0x10c7fcd8,// 230 PAY 206 

    0xa41b8fb0,// 231 PAY 207 

    0x2e4a1287,// 232 PAY 208 

    0x29e90ad1,// 233 PAY 209 

    0xbbcc038d,// 234 PAY 210 

    0x12cb2d44,// 235 PAY 211 

    0xc864481c,// 236 PAY 212 

    0xeb5188b4,// 237 PAY 213 

    0x6af00bda,// 238 PAY 214 

    0xc4d154fe,// 239 PAY 215 

    0x8807b156,// 240 PAY 216 

    0x52d5cb54,// 241 PAY 217 

    0x65374755,// 242 PAY 218 

    0x0286d5c3,// 243 PAY 219 

    0xf6584bdf,// 244 PAY 220 

    0xc7356b7b,// 245 PAY 221 

    0xf49db22c,// 246 PAY 222 

    0xe27eb533,// 247 PAY 223 

    0xd98ce09d,// 248 PAY 224 

    0x937e9435,// 249 PAY 225 

    0xc7e93a5e,// 250 PAY 226 

    0xe9c649a9,// 251 PAY 227 

    0xfde6c9f6,// 252 PAY 228 

    0x31a9f715,// 253 PAY 229 

    0x9bfc6e1f,// 254 PAY 230 

    0x876e22a8,// 255 PAY 231 

    0xc285cc55,// 256 PAY 232 

    0xc518850e,// 257 PAY 233 

    0x9696c5ee,// 258 PAY 234 

    0x261ee8a3,// 259 PAY 235 

    0xab7e0ea8,// 260 PAY 236 

    0x1a6f5b23,// 261 PAY 237 

    0x4c36dc07,// 262 PAY 238 

    0x8f8b8d4c,// 263 PAY 239 

    0x43f3d06a,// 264 PAY 240 

    0xa851517b,// 265 PAY 241 

    0xa95c68a1,// 266 PAY 242 

    0x11589e92,// 267 PAY 243 

    0xcf21dcf0,// 268 PAY 244 

    0x95b5e00d,// 269 PAY 245 

    0xe62d31bf,// 270 PAY 246 

    0xb95a6e3b,// 271 PAY 247 

    0xc80bc0ef,// 272 PAY 248 

    0x1de1c212,// 273 PAY 249 

    0xfef8aad9,// 274 PAY 250 

    0x846b106c,// 275 PAY 251 

    0x0ac73d3c,// 276 PAY 252 

    0x741fe1cd,// 277 PAY 253 

    0x59a56665,// 278 PAY 254 

    0xfd391d69,// 279 PAY 255 

    0x8f737cfa,// 280 PAY 256 

    0xfe0d9984,// 281 PAY 257 

    0xa7ec14bd,// 282 PAY 258 

    0xda690c89,// 283 PAY 259 

    0x7de9c5f9,// 284 PAY 260 

    0x7ef816d6,// 285 PAY 261 

    0xa05aa525,// 286 PAY 262 

    0x1d90b6f6,// 287 PAY 263 

    0x0b187bf8,// 288 PAY 264 

    0x76c50ff4,// 289 PAY 265 

    0x09f44068,// 290 PAY 266 

    0x6cf0816f,// 291 PAY 267 

    0x28fa8606,// 292 PAY 268 

    0x4804956f,// 293 PAY 269 

    0x81601974,// 294 PAY 270 

    0xa4012d10,// 295 PAY 271 

    0x729cf393,// 296 PAY 272 

    0x22beac4a,// 297 PAY 273 

    0x8e57bf3d,// 298 PAY 274 

    0x28e42e69,// 299 PAY 275 

    0x4fce94e0,// 300 PAY 276 

    0x40dcdfa0,// 301 PAY 277 

    0xd2ea775b,// 302 PAY 278 

    0x701f92ca,// 303 PAY 279 

    0xa4e84587,// 304 PAY 280 

    0x86877ca4,// 305 PAY 281 

    0xd36a2c96,// 306 PAY 282 

    0x6c6ec40b,// 307 PAY 283 

    0x66789502,// 308 PAY 284 

    0x6812dac8,// 309 PAY 285 

    0xba5d5c95,// 310 PAY 286 

    0xb48993d5,// 311 PAY 287 

    0x407aef41,// 312 PAY 288 

    0x0f120ef4,// 313 PAY 289 

    0x0cb68402,// 314 PAY 290 

    0x1fbe2750,// 315 PAY 291 

    0x46aa4770,// 316 PAY 292 

    0x8193b121,// 317 PAY 293 

    0x8d466eeb,// 318 PAY 294 

    0x429e1007,// 319 PAY 295 

    0xf54f070c,// 320 PAY 296 

    0x84063ab3,// 321 PAY 297 

    0x27b89feb,// 322 PAY 298 

    0x80e09e02,// 323 PAY 299 

    0xb7bae2c8,// 324 PAY 300 

    0x9538fe03,// 325 PAY 301 

    0x403985b3,// 326 PAY 302 

    0x9f18c9d6,// 327 PAY 303 

    0xbe776b92,// 328 PAY 304 

    0xf385b36f,// 329 PAY 305 

    0xc9d463e6,// 330 PAY 306 

    0xe51a0d6e,// 331 PAY 307 

    0xc53185b1,// 332 PAY 308 

    0xd9293a85,// 333 PAY 309 

    0x172c4934,// 334 PAY 310 

    0xa8c52631,// 335 PAY 311 

    0x795f2d44,// 336 PAY 312 

    0x9c70e353,// 337 PAY 313 

    0xe62ee3cc,// 338 PAY 314 

    0x215c084d,// 339 PAY 315 

    0xef5a529c,// 340 PAY 316 

    0x26341f69,// 341 PAY 317 

    0xa7064ac5,// 342 PAY 318 

    0x5add1c51,// 343 PAY 319 

    0x62f901b5,// 344 PAY 320 

    0xc3cf6f43,// 345 PAY 321 

    0x1c5dc191,// 346 PAY 322 

    0x00c190d7,// 347 PAY 323 

    0xbe14373e,// 348 PAY 324 

    0xf6bcdbae,// 349 PAY 325 

    0x8d61b5be,// 350 PAY 326 

    0xb0f366bf,// 351 PAY 327 

    0x9b13d069,// 352 PAY 328 

    0xffdd24f7,// 353 PAY 329 

    0xf4932785,// 354 PAY 330 

    0x19a10b7d,// 355 PAY 331 

    0xe29e3008,// 356 PAY 332 

    0xeaf02947,// 357 PAY 333 

    0xb2513659,// 358 PAY 334 

    0xade212f3,// 359 PAY 335 

    0x2cf4c418,// 360 PAY 336 

    0x8045dd9c,// 361 PAY 337 

    0x775ab106,// 362 PAY 338 

    0xea68f2be,// 363 PAY 339 

    0x1c3e7350,// 364 PAY 340 

    0xe172351b,// 365 PAY 341 

    0xd32b4452,// 366 PAY 342 

    0x39143897,// 367 PAY 343 

    0x6fe308c2,// 368 PAY 344 

    0x966f209e,// 369 PAY 345 

    0x81b877d8,// 370 PAY 346 

    0x81662162,// 371 PAY 347 

    0x39410bcb,// 372 PAY 348 

    0x92a96979,// 373 PAY 349 

    0xf10f0ac5,// 374 PAY 350 

    0x1b5ea4fc,// 375 PAY 351 

    0xabb8baf5,// 376 PAY 352 

    0xff6fa045,// 377 PAY 353 

    0x89ebb2df,// 378 PAY 354 

    0x75fb10e9,// 379 PAY 355 

    0xa13d87b1,// 380 PAY 356 

    0x74ebadcf,// 381 PAY 357 

    0x5d544525,// 382 PAY 358 

    0xfec0cfc6,// 383 PAY 359 

    0x22d8eaf1,// 384 PAY 360 

    0x35c042e2,// 385 PAY 361 

    0xd2bd4ad8,// 386 PAY 362 

    0x973053f9,// 387 PAY 363 

    0x0e8fa49d,// 388 PAY 364 

    0xaceddabe,// 389 PAY 365 

    0x62a880a8,// 390 PAY 366 

    0x5c9f276f,// 391 PAY 367 

    0x5b84878e,// 392 PAY 368 

    0x20fcf550,// 393 PAY 369 

    0xe6a4f525,// 394 PAY 370 

    0x7d67ee3c,// 395 PAY 371 

    0xb45c4555,// 396 PAY 372 

    0x6dfeeaab,// 397 PAY 373 

    0x626fe71d,// 398 PAY 374 

    0x695264cd,// 399 PAY 375 

    0x800f6f07,// 400 PAY 376 

    0x3dd926be,// 401 PAY 377 

    0xa21c1d4f,// 402 PAY 378 

    0x85f55cc9,// 403 PAY 379 

    0xc378361e,// 404 PAY 380 

    0x63037b06,// 405 PAY 381 

    0xe1b668b7,// 406 PAY 382 

    0xa622e8dd,// 407 PAY 383 

    0x98740d48,// 408 PAY 384 

    0x613f9e66,// 409 PAY 385 

    0xf60985b9,// 410 PAY 386 

    0x7fbb2480,// 411 PAY 387 

    0x578cf640,// 412 PAY 388 

    0x0d342c90,// 413 PAY 389 

    0x7c465ae5,// 414 PAY 390 

    0x90a056f9,// 415 PAY 391 

    0xd37c44ea,// 416 PAY 392 

    0xb2289614,// 417 PAY 393 

    0x6c02d2d9,// 418 PAY 394 

    0xbb7fe4b7,// 419 PAY 395 

    0xff4830a1,// 420 PAY 396 

    0xfa4368be,// 421 PAY 397 

    0x9e23f22c,// 422 PAY 398 

    0x5f31cbc2,// 423 PAY 399 

    0x3661b0e7,// 424 PAY 400 

    0x1d8b47ba,// 425 PAY 401 

    0xdd971a14,// 426 PAY 402 

    0x352b1e3f,// 427 PAY 403 

    0x706f13cc,// 428 PAY 404 

    0x83194bb1,// 429 PAY 405 

    0x24c461d8,// 430 PAY 406 

    0x6d242c4b,// 431 PAY 407 

    0x4609606c,// 432 PAY 408 

    0xef7bb755,// 433 PAY 409 

    0x5e5549d4,// 434 PAY 410 

    0x960fbc96,// 435 PAY 411 

    0xe1e80e04,// 436 PAY 412 

    0xa4afc3ad,// 437 PAY 413 

    0x571098ba,// 438 PAY 414 

    0x79f22871,// 439 PAY 415 

    0xd6ab5f61,// 440 PAY 416 

    0xe9589712,// 441 PAY 417 

    0x3220bc28,// 442 PAY 418 

    0x9ad29a7f,// 443 PAY 419 

    0x319cc133,// 444 PAY 420 

    0x4e87d9ac,// 445 PAY 421 

    0x9db1c92f,// 446 PAY 422 

    0xf2fda83c,// 447 PAY 423 

    0x68859ac3,// 448 PAY 424 

    0xbfff8e59,// 449 PAY 425 

    0x430ebf64,// 450 PAY 426 

    0x08c06d72,// 451 PAY 427 

    0xf92c0258,// 452 PAY 428 

    0xc8773c86,// 453 PAY 429 

    0xd01b08a3,// 454 PAY 430 

    0x7ea7139a,// 455 PAY 431 

    0x9a8e2cc8,// 456 PAY 432 

    0xd53fda5a,// 457 PAY 433 

    0xec2ccfa7,// 458 PAY 434 

    0x87a16c64,// 459 PAY 435 

    0xe43b2984,// 460 PAY 436 

    0x7ee0d705,// 461 PAY 437 

    0x96a30568,// 462 PAY 438 

    0x6c4b2c00,// 463 PAY 439 

    0x1687d012,// 464 PAY 440 

    0x7aedffc9,// 465 PAY 441 

    0x1b7ddcbe,// 466 PAY 442 

    0xbf86778b,// 467 PAY 443 

    0xf47477e2,// 468 PAY 444 

    0x031457a0,// 469 PAY 445 

    0x682d2c2a,// 470 PAY 446 

    0x633b0d72,// 471 PAY 447 

    0x4f8a9541,// 472 PAY 448 

    0x38f993f3,// 473 PAY 449 

    0x919e1766,// 474 PAY 450 

    0x490850ad,// 475 PAY 451 

    0xe8fcbeb5,// 476 PAY 452 

    0x85016bb2,// 477 PAY 453 

    0xdd6b95f0,// 478 PAY 454 

    0xbf9844a3,// 479 PAY 455 

    0xfb4e8474,// 480 PAY 456 

    0x3fc333ac,// 481 PAY 457 

    0x4318a412,// 482 PAY 458 

    0xd80e1eeb,// 483 PAY 459 

    0x149f23d0,// 484 PAY 460 

    0x8d65f999,// 485 PAY 461 

    0xa8da2219,// 486 PAY 462 

    0xb6f95bdf,// 487 PAY 463 

    0x5f04b142,// 488 PAY 464 

    0xfc9e2c2a,// 489 PAY 465 

    0xb981bb24,// 490 PAY 466 

    0x94049ce7,// 491 PAY 467 

    0xe52ee97d,// 492 PAY 468 

    0x0d520d28,// 493 PAY 469 

    0x98b6ecb8,// 494 PAY 470 

    0xf9cd0b66,// 495 PAY 471 

    0x3c3d9691,// 496 PAY 472 

    0x4e2dd99e,// 497 PAY 473 

    0xb8646130,// 498 PAY 474 

    0xf5b9a8ac,// 499 PAY 475 

    0xd5bae249,// 500 PAY 476 

    0x4725ebdd,// 501 PAY 477 

    0x798821e7,// 502 PAY 478 

    0xc24f9d33,// 503 PAY 479 

    0xc5b57af3,// 504 PAY 480 

    0x748733fd,// 505 PAY 481 

    0xf9b47bd7,// 506 PAY 482 

    0x1a48a175,// 507 PAY 483 

    0xe1f92f33,// 508 PAY 484 

    0x61b09380,// 509 PAY 485 

    0x5458cef1,// 510 PAY 486 

    0xaefa3fe6,// 511 PAY 487 

    0xc7a5d1bc,// 512 PAY 488 

    0x3b43b4f5,// 513 PAY 489 

    0xf17bac12,// 514 PAY 490 

    0x12154555,// 515 PAY 491 

    0x25d260e8,// 516 PAY 492 

    0x663985eb,// 517 PAY 493 

    0x36fd0d18,// 518 PAY 494 

    0xe706e5a2,// 519 PAY 495 

    0x75dfa17c,// 520 PAY 496 

    0xb3e40000,// 521 PAY 497 

/// STA is 1 words. 

/// STA num_pkts       : 173 

/// STA pkt_idx        : 179 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x3f 

    0x02cd3fad // 522 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt46_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x04 

/// ECH pdu_tag        : 0x00 

    0x00040000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv insert_icv check_icv sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x00000011,// 3 SCX   1 

    0x804648c9,// 4 SCX   2 

    0x000074c2,// 5 SCX   3 

    0x164a6cc4,// 6 SCX   4 

    0xa57e338e,// 7 SCX   5 

    0x2bea1d50,// 8 SCX   6 

    0xa0c6170f,// 9 SCX   7 

    0x50a52017,// 10 SCX   8 

    0x25280611,// 11 SCX   9 

    0x302645f8,// 12 SCX  10 

    0x91ec6519,// 13 SCX  11 

    0x113ecd18,// 14 SCX  12 

    0xce9ee378,// 15 SCX  13 

    0xc14e5ed2,// 16 SCX  14 

    0xc9712ca6,// 17 SCX  15 

    0x0ddff8fa,// 18 SCX  16 

    0x9103c6f5,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1794 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1667 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1667 

/// BFD lencrypto      : 848 

/// BFD ofstcrypto     : 12 

/// BFD (ofst+len)cry  : 860 

/// BFD ofstiv         : 0 

/// BFD ofsticv        : 1716 

    0x00000683,// 20 BFD   1 

    0x000c0350,// 21 BFD   2 

    0x06b40000,// 22 BFD   3 

/// MFM is 4 words. 

/// MFM vldnibs        : 17 

    0x17006448,// 23 MFM   1 

    0x0e2cdb8a,// 24 MFM   2 

    0x42d89e63,// 25 MFM   3 

    0xf8f00000,// 26 MFM   4 

/// BDA is 450 words. 

/// BDA size     is 1794 (0x702) 

/// BDA id       is 0x3c4b 

    0x07023c4b,// 27 BDA   1 

/// PAY Generic Data size   : 1794 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0xa5061868,// 28 PAY   1 

    0x74b35550,// 29 PAY   2 

    0xb7d0e6b4,// 30 PAY   3 

    0x36bce97d,// 31 PAY   4 

    0x6ea7cdf8,// 32 PAY   5 

    0xfaa11ec6,// 33 PAY   6 

    0x92397759,// 34 PAY   7 

    0x6e1ea3ea,// 35 PAY   8 

    0x5a56db56,// 36 PAY   9 

    0x3a0b606b,// 37 PAY  10 

    0xaf88766f,// 38 PAY  11 

    0xc9bd9180,// 39 PAY  12 

    0x52d043a6,// 40 PAY  13 

    0x3b415d99,// 41 PAY  14 

    0x1833bf2b,// 42 PAY  15 

    0xeeb7bd0c,// 43 PAY  16 

    0xd51701c8,// 44 PAY  17 

    0x415ebbd1,// 45 PAY  18 

    0x59346b40,// 46 PAY  19 

    0xb6ec88ee,// 47 PAY  20 

    0xa9ead489,// 48 PAY  21 

    0x89bb9db2,// 49 PAY  22 

    0x1e80c627,// 50 PAY  23 

    0xddb42eed,// 51 PAY  24 

    0xe339c533,// 52 PAY  25 

    0x28e35275,// 53 PAY  26 

    0xf26c3ce1,// 54 PAY  27 

    0x759a42d4,// 55 PAY  28 

    0x1604c315,// 56 PAY  29 

    0x3e5e326a,// 57 PAY  30 

    0xa57a2fa1,// 58 PAY  31 

    0x864f5b90,// 59 PAY  32 

    0xb0f91da9,// 60 PAY  33 

    0x75d2756c,// 61 PAY  34 

    0xfaaff69f,// 62 PAY  35 

    0xd77f7376,// 63 PAY  36 

    0x9ab776a8,// 64 PAY  37 

    0x105459f4,// 65 PAY  38 

    0xa47d7a58,// 66 PAY  39 

    0x184e3f0d,// 67 PAY  40 

    0xf64e6913,// 68 PAY  41 

    0x0bbe8d50,// 69 PAY  42 

    0x27528ee7,// 70 PAY  43 

    0xb76b1721,// 71 PAY  44 

    0x1440cc98,// 72 PAY  45 

    0x6ede2b4a,// 73 PAY  46 

    0x17bc5365,// 74 PAY  47 

    0x83d77c7e,// 75 PAY  48 

    0xc3f447a2,// 76 PAY  49 

    0x3eb2d4b3,// 77 PAY  50 

    0x0a7165a3,// 78 PAY  51 

    0x70b81565,// 79 PAY  52 

    0x0c04d61e,// 80 PAY  53 

    0x2e42bc4f,// 81 PAY  54 

    0x4a52b531,// 82 PAY  55 

    0x9e49f967,// 83 PAY  56 

    0xc2a7662e,// 84 PAY  57 

    0x1a4447bf,// 85 PAY  58 

    0x106a18bc,// 86 PAY  59 

    0xab531eb9,// 87 PAY  60 

    0x8e94e608,// 88 PAY  61 

    0xdbdc40bc,// 89 PAY  62 

    0x94225845,// 90 PAY  63 

    0xc6a0065e,// 91 PAY  64 

    0x56b42264,// 92 PAY  65 

    0xe3a9f96a,// 93 PAY  66 

    0xcee5e5c5,// 94 PAY  67 

    0xed54ad2c,// 95 PAY  68 

    0xb82ca332,// 96 PAY  69 

    0xe0443dda,// 97 PAY  70 

    0x7283f209,// 98 PAY  71 

    0x6998afba,// 99 PAY  72 

    0xeb6916e7,// 100 PAY  73 

    0xa6c010bf,// 101 PAY  74 

    0xffc53c44,// 102 PAY  75 

    0xdcc8f1ab,// 103 PAY  76 

    0x24d51d6c,// 104 PAY  77 

    0xa25cca62,// 105 PAY  78 

    0xb0401686,// 106 PAY  79 

    0xc0d10dfd,// 107 PAY  80 

    0xeebee084,// 108 PAY  81 

    0xc8a0d0b0,// 109 PAY  82 

    0xccc08448,// 110 PAY  83 

    0x6a47c458,// 111 PAY  84 

    0x836d777d,// 112 PAY  85 

    0x053595cc,// 113 PAY  86 

    0xd0c80fbc,// 114 PAY  87 

    0x2aa073c8,// 115 PAY  88 

    0x48cab360,// 116 PAY  89 

    0xb702b441,// 117 PAY  90 

    0x25adb79f,// 118 PAY  91 

    0x937b8acf,// 119 PAY  92 

    0xd41f0a23,// 120 PAY  93 

    0x098a5eeb,// 121 PAY  94 

    0xb5e549ed,// 122 PAY  95 

    0x6d3074bc,// 123 PAY  96 

    0x2261544a,// 124 PAY  97 

    0x47fe7a47,// 125 PAY  98 

    0x20827b5c,// 126 PAY  99 

    0x536ffffc,// 127 PAY 100 

    0xd879a42d,// 128 PAY 101 

    0xbe6669f9,// 129 PAY 102 

    0xd56259e7,// 130 PAY 103 

    0x5dda7d7d,// 131 PAY 104 

    0x308667be,// 132 PAY 105 

    0xcef5cb99,// 133 PAY 106 

    0xbb1bf7b4,// 134 PAY 107 

    0x605b78c3,// 135 PAY 108 

    0x8f2f9b3c,// 136 PAY 109 

    0x90ecbe7c,// 137 PAY 110 

    0xf94e0667,// 138 PAY 111 

    0xf863ce30,// 139 PAY 112 

    0x97409d91,// 140 PAY 113 

    0x6c986a6b,// 141 PAY 114 

    0xd67352ab,// 142 PAY 115 

    0x6318fd1d,// 143 PAY 116 

    0x835825c2,// 144 PAY 117 

    0x00c40501,// 145 PAY 118 

    0x5081ac15,// 146 PAY 119 

    0x28083fa6,// 147 PAY 120 

    0x669f660f,// 148 PAY 121 

    0xf975b240,// 149 PAY 122 

    0xa96d3477,// 150 PAY 123 

    0x0849966d,// 151 PAY 124 

    0x6c938193,// 152 PAY 125 

    0x60a32ea2,// 153 PAY 126 

    0x6e02036d,// 154 PAY 127 

    0xb8e3163d,// 155 PAY 128 

    0xc72a379d,// 156 PAY 129 

    0xaa7b68ca,// 157 PAY 130 

    0x031b67d8,// 158 PAY 131 

    0x21c6bec9,// 159 PAY 132 

    0xbe3225b1,// 160 PAY 133 

    0x7b8421d5,// 161 PAY 134 

    0x94433393,// 162 PAY 135 

    0xed7feedf,// 163 PAY 136 

    0x5a43bf4c,// 164 PAY 137 

    0xc76931fd,// 165 PAY 138 

    0xd808e851,// 166 PAY 139 

    0x1d050d2a,// 167 PAY 140 

    0xcc8e9cbf,// 168 PAY 141 

    0x03ec869d,// 169 PAY 142 

    0x86830d6d,// 170 PAY 143 

    0xbd8af693,// 171 PAY 144 

    0xbcd89810,// 172 PAY 145 

    0x99c1e8c5,// 173 PAY 146 

    0x2957ddf1,// 174 PAY 147 

    0x11f72378,// 175 PAY 148 

    0xa16691e3,// 176 PAY 149 

    0x73781496,// 177 PAY 150 

    0xa9d895df,// 178 PAY 151 

    0x5003fb5c,// 179 PAY 152 

    0x4cf948ba,// 180 PAY 153 

    0xc0e9bcd9,// 181 PAY 154 

    0xe13d162e,// 182 PAY 155 

    0x7f373933,// 183 PAY 156 

    0x0ffcee12,// 184 PAY 157 

    0xc4def65b,// 185 PAY 158 

    0x62d28a3b,// 186 PAY 159 

    0xfcf01d70,// 187 PAY 160 

    0x1cd38387,// 188 PAY 161 

    0x885d8845,// 189 PAY 162 

    0x3dd1ac12,// 190 PAY 163 

    0xf34f0f21,// 191 PAY 164 

    0x32833925,// 192 PAY 165 

    0x4e9954c3,// 193 PAY 166 

    0xac3cf050,// 194 PAY 167 

    0xadbeb78d,// 195 PAY 168 

    0x7becf985,// 196 PAY 169 

    0x0b9ff362,// 197 PAY 170 

    0x72ef92e2,// 198 PAY 171 

    0xb39be422,// 199 PAY 172 

    0xefa4f137,// 200 PAY 173 

    0xcc8c59b4,// 201 PAY 174 

    0x34b77615,// 202 PAY 175 

    0x7b9e7b86,// 203 PAY 176 

    0x773b3e9a,// 204 PAY 177 

    0x6d418842,// 205 PAY 178 

    0x847aa0a3,// 206 PAY 179 

    0xbf0e3a9a,// 207 PAY 180 

    0x193fc5fa,// 208 PAY 181 

    0xef5113dc,// 209 PAY 182 

    0xfe35ff48,// 210 PAY 183 

    0x591e74df,// 211 PAY 184 

    0x67f96b86,// 212 PAY 185 

    0x9259c4ab,// 213 PAY 186 

    0x4b91deeb,// 214 PAY 187 

    0xa04d760c,// 215 PAY 188 

    0xceae8c12,// 216 PAY 189 

    0xa7a0c346,// 217 PAY 190 

    0x029a5797,// 218 PAY 191 

    0xe4c480ac,// 219 PAY 192 

    0x99de5858,// 220 PAY 193 

    0xc0829a39,// 221 PAY 194 

    0x4e39b422,// 222 PAY 195 

    0x6cbdd194,// 223 PAY 196 

    0x10d47521,// 224 PAY 197 

    0x8bf6a8bf,// 225 PAY 198 

    0xb422626a,// 226 PAY 199 

    0xdcd7ae05,// 227 PAY 200 

    0xbbd84b2f,// 228 PAY 201 

    0x7a3f86e5,// 229 PAY 202 

    0x70bde482,// 230 PAY 203 

    0xb90f7d08,// 231 PAY 204 

    0xe41e0347,// 232 PAY 205 

    0xa706d86a,// 233 PAY 206 

    0xcc04dd51,// 234 PAY 207 

    0x457ddb42,// 235 PAY 208 

    0xc417efcf,// 236 PAY 209 

    0xbc7903cc,// 237 PAY 210 

    0xa63ce0a8,// 238 PAY 211 

    0xc1efc2f0,// 239 PAY 212 

    0x38c1da4a,// 240 PAY 213 

    0xf3d7f3ec,// 241 PAY 214 

    0x6a03a346,// 242 PAY 215 

    0x5b6e5426,// 243 PAY 216 

    0x84563bbe,// 244 PAY 217 

    0xeec4576d,// 245 PAY 218 

    0xc187bec1,// 246 PAY 219 

    0xb33bfc60,// 247 PAY 220 

    0xdeb510db,// 248 PAY 221 

    0x9ceab051,// 249 PAY 222 

    0xffb4f92a,// 250 PAY 223 

    0xd2ba0ba3,// 251 PAY 224 

    0x22bcc09c,// 252 PAY 225 

    0x8efa26df,// 253 PAY 226 

    0xdb4f511c,// 254 PAY 227 

    0xa6460268,// 255 PAY 228 

    0x2a50df38,// 256 PAY 229 

    0x4225e023,// 257 PAY 230 

    0xad83c074,// 258 PAY 231 

    0xe05ae44c,// 259 PAY 232 

    0xe629ec93,// 260 PAY 233 

    0xc8c63652,// 261 PAY 234 

    0x071dc716,// 262 PAY 235 

    0x787df23d,// 263 PAY 236 

    0xc50c689e,// 264 PAY 237 

    0x6019d72f,// 265 PAY 238 

    0x5cb2a50a,// 266 PAY 239 

    0x6d26ee06,// 267 PAY 240 

    0x1c663c8c,// 268 PAY 241 

    0xa92b4d3d,// 269 PAY 242 

    0xd43e0029,// 270 PAY 243 

    0x86f7a6b1,// 271 PAY 244 

    0xaedee5f6,// 272 PAY 245 

    0xd7c2ea4f,// 273 PAY 246 

    0x5462cf72,// 274 PAY 247 

    0x396b37f9,// 275 PAY 248 

    0x360141b2,// 276 PAY 249 

    0x403fe0c4,// 277 PAY 250 

    0x6ca7152d,// 278 PAY 251 

    0xca13923f,// 279 PAY 252 

    0x5607d078,// 280 PAY 253 

    0x8c64b7c1,// 281 PAY 254 

    0xabd5260a,// 282 PAY 255 

    0x0120456e,// 283 PAY 256 

    0xa3bc4a75,// 284 PAY 257 

    0xe76c0160,// 285 PAY 258 

    0xd1efe176,// 286 PAY 259 

    0x0fd6438f,// 287 PAY 260 

    0x2e777c4f,// 288 PAY 261 

    0x0b9e07f9,// 289 PAY 262 

    0xb000a9e9,// 290 PAY 263 

    0x00d9ff0a,// 291 PAY 264 

    0xdaa0ee24,// 292 PAY 265 

    0x62bd0167,// 293 PAY 266 

    0x0ba3d808,// 294 PAY 267 

    0xddf08cc7,// 295 PAY 268 

    0x47b1d62a,// 296 PAY 269 

    0x5ad965f4,// 297 PAY 270 

    0x8e108cda,// 298 PAY 271 

    0x0f698394,// 299 PAY 272 

    0x438d167e,// 300 PAY 273 

    0x87489e14,// 301 PAY 274 

    0x3d384432,// 302 PAY 275 

    0x0874c498,// 303 PAY 276 

    0x91018040,// 304 PAY 277 

    0x7274fa27,// 305 PAY 278 

    0x5d211d34,// 306 PAY 279 

    0xadb45e3c,// 307 PAY 280 

    0x1f5a09a7,// 308 PAY 281 

    0x8aa28b2b,// 309 PAY 282 

    0x94e6782c,// 310 PAY 283 

    0xf788e19d,// 311 PAY 284 

    0xc1ffeed6,// 312 PAY 285 

    0xae231d9e,// 313 PAY 286 

    0xe1c0b43a,// 314 PAY 287 

    0xfe3f113c,// 315 PAY 288 

    0x3716afc9,// 316 PAY 289 

    0x47a5710d,// 317 PAY 290 

    0x88386462,// 318 PAY 291 

    0x7509182b,// 319 PAY 292 

    0xc904bcf7,// 320 PAY 293 

    0x789a1fca,// 321 PAY 294 

    0xa353c7e9,// 322 PAY 295 

    0x9fa14682,// 323 PAY 296 

    0xae95bddc,// 324 PAY 297 

    0x1d8359be,// 325 PAY 298 

    0x55f8bf66,// 326 PAY 299 

    0x0c888652,// 327 PAY 300 

    0x171b5278,// 328 PAY 301 

    0x64862a95,// 329 PAY 302 

    0x60faa143,// 330 PAY 303 

    0x4cdc05bf,// 331 PAY 304 

    0xae01b321,// 332 PAY 305 

    0x49068e69,// 333 PAY 306 

    0x3628e81a,// 334 PAY 307 

    0x03a2c926,// 335 PAY 308 

    0x64b0676c,// 336 PAY 309 

    0x52d28d49,// 337 PAY 310 

    0xe11566d3,// 338 PAY 311 

    0x4b27850b,// 339 PAY 312 

    0xfc932245,// 340 PAY 313 

    0x6a6fbf08,// 341 PAY 314 

    0x056ccb5c,// 342 PAY 315 

    0xe283b558,// 343 PAY 316 

    0x911d544d,// 344 PAY 317 

    0x3bc93798,// 345 PAY 318 

    0xaebd716e,// 346 PAY 319 

    0xa3e06eb7,// 347 PAY 320 

    0x1ce636e2,// 348 PAY 321 

    0xfab29c3d,// 349 PAY 322 

    0xf7c26b0f,// 350 PAY 323 

    0x0c73db84,// 351 PAY 324 

    0x82c192f0,// 352 PAY 325 

    0xe42b612b,// 353 PAY 326 

    0x41405391,// 354 PAY 327 

    0x95124e9c,// 355 PAY 328 

    0x7af29a2f,// 356 PAY 329 

    0x0cd02526,// 357 PAY 330 

    0x884f9d81,// 358 PAY 331 

    0xa66247c2,// 359 PAY 332 

    0x7c753fc5,// 360 PAY 333 

    0xd88aa250,// 361 PAY 334 

    0xa548a787,// 362 PAY 335 

    0xed201165,// 363 PAY 336 

    0x426f4f5b,// 364 PAY 337 

    0xa9a4b3ee,// 365 PAY 338 

    0x680b2e0e,// 366 PAY 339 

    0x75ac5d25,// 367 PAY 340 

    0xaa18cac4,// 368 PAY 341 

    0x1a9bff17,// 369 PAY 342 

    0xbd83192a,// 370 PAY 343 

    0xb16c8a8a,// 371 PAY 344 

    0x2ab4e640,// 372 PAY 345 

    0x3783307e,// 373 PAY 346 

    0xd9dab764,// 374 PAY 347 

    0xbdff1ec8,// 375 PAY 348 

    0x8503c738,// 376 PAY 349 

    0xc4754844,// 377 PAY 350 

    0x556e267e,// 378 PAY 351 

    0xc033c71b,// 379 PAY 352 

    0xde430792,// 380 PAY 353 

    0xe9be8d79,// 381 PAY 354 

    0x096ca117,// 382 PAY 355 

    0x713751eb,// 383 PAY 356 

    0x80462e79,// 384 PAY 357 

    0x96018a36,// 385 PAY 358 

    0x44601a0c,// 386 PAY 359 

    0x46a7865d,// 387 PAY 360 

    0x48aeca0c,// 388 PAY 361 

    0x963f33dd,// 389 PAY 362 

    0x778a5681,// 390 PAY 363 

    0x4bb0e5d7,// 391 PAY 364 

    0xd9fb9e76,// 392 PAY 365 

    0xa00d296d,// 393 PAY 366 

    0xbe70d666,// 394 PAY 367 

    0x750b339d,// 395 PAY 368 

    0x7dda0c6d,// 396 PAY 369 

    0x03882342,// 397 PAY 370 

    0xbda584fd,// 398 PAY 371 

    0xf05e5af5,// 399 PAY 372 

    0x8c5e5276,// 400 PAY 373 

    0x23c6fa3b,// 401 PAY 374 

    0xa4b31cb3,// 402 PAY 375 

    0xee1a9427,// 403 PAY 376 

    0xd11c0369,// 404 PAY 377 

    0xf18fc11b,// 405 PAY 378 

    0x13f11146,// 406 PAY 379 

    0x33837a8c,// 407 PAY 380 

    0x1ec00184,// 408 PAY 381 

    0x5b484143,// 409 PAY 382 

    0x2a8cca8e,// 410 PAY 383 

    0xe35a2b40,// 411 PAY 384 

    0x3e3dc04c,// 412 PAY 385 

    0xbad2ddf2,// 413 PAY 386 

    0xf23ac8c6,// 414 PAY 387 

    0xb509584c,// 415 PAY 388 

    0xf5a962d5,// 416 PAY 389 

    0xff31902b,// 417 PAY 390 

    0x7107725c,// 418 PAY 391 

    0x00a82cae,// 419 PAY 392 

    0xbb34ba88,// 420 PAY 393 

    0x5d71c518,// 421 PAY 394 

    0xab1e5bfd,// 422 PAY 395 

    0xa206ac37,// 423 PAY 396 

    0xa2f39e6b,// 424 PAY 397 

    0xfdaceede,// 425 PAY 398 

    0x11e19ffb,// 426 PAY 399 

    0xe0967e34,// 427 PAY 400 

    0x1510432d,// 428 PAY 401 

    0x5683b141,// 429 PAY 402 

    0x2b20eae4,// 430 PAY 403 

    0x70778d75,// 431 PAY 404 

    0x8ae6621f,// 432 PAY 405 

    0xe2720130,// 433 PAY 406 

    0xa2c69605,// 434 PAY 407 

    0x19f00d2e,// 435 PAY 408 

    0xc61d541f,// 436 PAY 409 

    0x3c45481b,// 437 PAY 410 

    0xea883ce1,// 438 PAY 411 

    0xd5e86eb1,// 439 PAY 412 

    0xdac20fc8,// 440 PAY 413 

    0xacdd0173,// 441 PAY 414 

    0xdfb4beb2,// 442 PAY 415 

    0x626e137d,// 443 PAY 416 

    0x3321aec0,// 444 PAY 417 

    0x3736c36f,// 445 PAY 418 

    0x94d938d6,// 446 PAY 419 

    0xfa8325ed,// 447 PAY 420 

    0xc17d0c71,// 448 PAY 421 

    0x472c2c5b,// 449 PAY 422 

    0x5995d3a4,// 450 PAY 423 

    0x66a94f6f,// 451 PAY 424 

    0x4f35f407,// 452 PAY 425 

    0xe4ff7488,// 453 PAY 426 

    0x5182f0f1,// 454 PAY 427 

    0x551f7262,// 455 PAY 428 

    0x3b4ca783,// 456 PAY 429 

    0x11d22511,// 457 PAY 430 

    0xdb2ae5ec,// 458 PAY 431 

    0x3db110c0,// 459 PAY 432 

    0x9d9f1081,// 460 PAY 433 

    0xf32d5545,// 461 PAY 434 

    0xeec64133,// 462 PAY 435 

    0x56ddc34d,// 463 PAY 436 

    0xf7d23754,// 464 PAY 437 

    0x9441f2ca,// 465 PAY 438 

    0x6dd4cecf,// 466 PAY 439 

    0x9a2eb9ea,// 467 PAY 440 

    0x6a9f7baa,// 468 PAY 441 

    0x87d01f45,// 469 PAY 442 

    0x00caac82,// 470 PAY 443 

    0x5ab6e3ce,// 471 PAY 444 

    0x1d670d2d,// 472 PAY 445 

    0xe97becc0,// 473 PAY 446 

    0x3175e8f2,// 474 PAY 447 

    0x381677df,// 475 PAY 448 

    0x86e00000,// 476 PAY 449 

/// STA is 1 words. 

/// STA num_pkts       : 100 

/// STA pkt_idx        : 152 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x6f 

    0x02616f64 // 477 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt47_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x07 

/// ECH pdu_tag        : 0x00 

    0x00070000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv !insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0000000f,// 3 SCX   1 

    0x8040486b,// 4 SCX   2 

    0x00000200,// 5 SCX   3 

    0xb349069b,// 6 SCX   4 

    0xd96ff58e,// 7 SCX   5 

    0x6bae1076,// 8 SCX   6 

    0xe0cd9012,// 9 SCX   7 

    0x627069f5,// 10 SCX   8 

    0x6344b4ea,// 11 SCX   9 

    0x36e60ed3,// 12 SCX  10 

    0xd16b9a80,// 13 SCX  11 

    0x4a2ed480,// 14 SCX  12 

    0xdbb5a8e6,// 15 SCX  13 

    0xc621e1f9,// 16 SCX  14 

    0x5d79217b,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 360 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 209 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 209 

/// BFD lencrypto      : 40 

/// BFD ofstcrypto     : 164 

/// BFD (ofst+len)cry  : 204 

/// BFD ofstiv         : 144 

/// BFD ofsticv        : 320 

    0x000000d1,// 18 BFD   1 

    0x00a40028,// 19 BFD   2 

    0x01400090,// 20 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : 14 

    0x14007315,// 21 MFM   1 

    0xba0c9180,// 22 MFM   2 

    0x84a5924b,// 23 MFM   3 

/// BDA is 91 words. 

/// BDA size     is 360 (0x168) 

/// BDA id       is 0x4ac8 

    0x01684ac8,// 24 BDA   1 

/// PAY Generic Data size   : 360 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0xa07199cf,// 25 PAY   1 

    0x901a4d64,// 26 PAY   2 

    0xc9ea1734,// 27 PAY   3 

    0x63a0832c,// 28 PAY   4 

    0xc2187975,// 29 PAY   5 

    0xe392c07b,// 30 PAY   6 

    0xd3f0418d,// 31 PAY   7 

    0xae496652,// 32 PAY   8 

    0x5cfa05dd,// 33 PAY   9 

    0xe32ba245,// 34 PAY  10 

    0xddfb8243,// 35 PAY  11 

    0x887a02b7,// 36 PAY  12 

    0xc1c72406,// 37 PAY  13 

    0xc00c5ec6,// 38 PAY  14 

    0x4b1476cd,// 39 PAY  15 

    0x67882ce8,// 40 PAY  16 

    0x6154599d,// 41 PAY  17 

    0x02dfa674,// 42 PAY  18 

    0x312cd35b,// 43 PAY  19 

    0xf9beca88,// 44 PAY  20 

    0xf3eb1b5f,// 45 PAY  21 

    0x3715e1d8,// 46 PAY  22 

    0xab66c5ed,// 47 PAY  23 

    0x2a6673e9,// 48 PAY  24 

    0x675c7345,// 49 PAY  25 

    0x56907fa7,// 50 PAY  26 

    0xa3e3c5a9,// 51 PAY  27 

    0x972339c2,// 52 PAY  28 

    0x7018cf58,// 53 PAY  29 

    0x33f31020,// 54 PAY  30 

    0xb38052ab,// 55 PAY  31 

    0x6e0a0369,// 56 PAY  32 

    0x3e52bb5f,// 57 PAY  33 

    0xc633dffc,// 58 PAY  34 

    0xb9866174,// 59 PAY  35 

    0x01c29afb,// 60 PAY  36 

    0xd51c1727,// 61 PAY  37 

    0xafdda941,// 62 PAY  38 

    0x4f1e14c6,// 63 PAY  39 

    0x04ab4c20,// 64 PAY  40 

    0x27d2800d,// 65 PAY  41 

    0x1d028cd8,// 66 PAY  42 

    0x0fc9d029,// 67 PAY  43 

    0x66747c93,// 68 PAY  44 

    0xa9a47c59,// 69 PAY  45 

    0x25570580,// 70 PAY  46 

    0x0135249b,// 71 PAY  47 

    0x515e3002,// 72 PAY  48 

    0x77dbee38,// 73 PAY  49 

    0xf34c7f2b,// 74 PAY  50 

    0xe28a99e8,// 75 PAY  51 

    0x235b5b60,// 76 PAY  52 

    0x9cea6ff0,// 77 PAY  53 

    0xd5142f3c,// 78 PAY  54 

    0x4b79fb41,// 79 PAY  55 

    0x54c94f8d,// 80 PAY  56 

    0x05795462,// 81 PAY  57 

    0x0d3c162c,// 82 PAY  58 

    0xd13d3386,// 83 PAY  59 

    0xc5452200,// 84 PAY  60 

    0xd1df9d68,// 85 PAY  61 

    0xfd9ca032,// 86 PAY  62 

    0xc8461fdd,// 87 PAY  63 

    0xe4e27c42,// 88 PAY  64 

    0x303e6e4e,// 89 PAY  65 

    0x16ab7717,// 90 PAY  66 

    0xe87c65ca,// 91 PAY  67 

    0x51282b33,// 92 PAY  68 

    0x61ddd2b6,// 93 PAY  69 

    0xd9d6a15a,// 94 PAY  70 

    0xf49c0ce2,// 95 PAY  71 

    0x085d19b7,// 96 PAY  72 

    0x44a765bb,// 97 PAY  73 

    0x24320917,// 98 PAY  74 

    0xcd970788,// 99 PAY  75 

    0x1b10903d,// 100 PAY  76 

    0x3f5fbf6d,// 101 PAY  77 

    0xfe0fcde1,// 102 PAY  78 

    0x86b723d2,// 103 PAY  79 

    0x629e1d2c,// 104 PAY  80 

    0x85799a6e,// 105 PAY  81 

    0x4623ac88,// 106 PAY  82 

    0x1ad98761,// 107 PAY  83 

    0xd56fdff1,// 108 PAY  84 

    0x655abb46,// 109 PAY  85 

    0x9f91c76c,// 110 PAY  86 

    0x97f9f765,// 111 PAY  87 

    0xa06773a6,// 112 PAY  88 

    0x5bea295d,// 113 PAY  89 

    0x0db64571,// 114 PAY  90 

/// STA is 1 words. 

/// STA num_pkts       : 35 

/// STA pkt_idx        : 128 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xac 

    0x0200ac23 // 115 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt48_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x07 

/// ECH pdu_tag        : 0x00 

    0x00070000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv !insert_icv check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x00000011,// 3 SCX   1 

    0x80444814,// 4 SCX   2 

    0x00005482,// 5 SCX   3 

    0xb15743af,// 6 SCX   4 

    0x4a858ebc,// 7 SCX   5 

    0x51def40a,// 8 SCX   6 

    0x5c4b1def,// 9 SCX   7 

    0xa6d5108e,// 10 SCX   8 

    0xf4b68ac4,// 11 SCX   9 

    0x2ea60d10,// 12 SCX  10 

    0x7afed544,// 13 SCX  11 

    0xcc5f565f,// 14 SCX  12 

    0x2f26e66c,// 15 SCX  13 

    0x902ccf70,// 16 SCX  14 

    0xdb4cbed8,// 17 SCX  15 

    0xee0c3c99,// 18 SCX  16 

    0xd6b67d1b,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 144 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 122 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 122 

/// BFD lencrypto      : 16 

/// BFD ofstcrypto     : 56 

/// BFD (ofst+len)cry  : 72 

/// BFD ofstiv         : 36 

/// BFD ofsticv        : 124 

    0x0000007a,// 20 BFD   1 

    0x00380010,// 21 BFD   2 

    0x007c0024,// 22 BFD   3 

/// MFM is 2 words. 

/// MFM vldnibs        : 9 

    0x0900ca3e,// 23 MFM   1 

    0x023f8000,// 24 MFM   2 

/// BDA is 37 words. 

/// BDA size     is 144 (0x90) 

/// BDA id       is 0x267c 

    0x0090267c,// 25 BDA   1 

/// PAY Generic Data size   : 144 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x01c134e0,// 26 PAY   1 

    0xf7265413,// 27 PAY   2 

    0xc8a36373,// 28 PAY   3 

    0xedf89652,// 29 PAY   4 

    0x512bb7a1,// 30 PAY   5 

    0x3f8cd0ba,// 31 PAY   6 

    0x224f083f,// 32 PAY   7 

    0x1b04dff4,// 33 PAY   8 

    0x04bf4a9e,// 34 PAY   9 

    0x939f5f43,// 35 PAY  10 

    0x32213c75,// 36 PAY  11 

    0x908b1fac,// 37 PAY  12 

    0x658a86a9,// 38 PAY  13 

    0xeb14debe,// 39 PAY  14 

    0xacc7a3e6,// 40 PAY  15 

    0x35f6827e,// 41 PAY  16 

    0xfb3aed06,// 42 PAY  17 

    0x78da5d29,// 43 PAY  18 

    0x3d7b5879,// 44 PAY  19 

    0x6bb17867,// 45 PAY  20 

    0x703e7c9d,// 46 PAY  21 

    0xaa41049e,// 47 PAY  22 

    0x1416f965,// 48 PAY  23 

    0x19bac94e,// 49 PAY  24 

    0x14a4e576,// 50 PAY  25 

    0xa26509b2,// 51 PAY  26 

    0xf528ceeb,// 52 PAY  27 

    0x74914a3b,// 53 PAY  28 

    0x7b65b6d6,// 54 PAY  29 

    0xd46c7e1d,// 55 PAY  30 

    0xc3df2553,// 56 PAY  31 

    0x9b454562,// 57 PAY  32 

    0xc01e909d,// 58 PAY  33 

    0xae227a76,// 59 PAY  34 

    0xf3f9cfa3,// 60 PAY  35 

    0xde3e40d7,// 61 PAY  36 

/// STA is 1 words. 

/// STA num_pkts       : 144 

/// STA pkt_idx        : 108 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x1c 

    0x01b11c90 // 62 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt49_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x08 

/// ECH pdu_tag        : 0x00 

    0x00080000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv !check_icv sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x08000011,// 3 SCX   1 

    0x804448d6,// 4 SCX   2 

    0x000024c2,// 5 SCX   3 

    0x6ff5201a,// 6 SCX   4 

    0x582f24e3,// 7 SCX   5 

    0x07de19df,// 8 SCX   6 

    0xe58ddec5,// 9 SCX   7 

    0x8101776b,// 10 SCX   8 

    0x7e0c8986,// 11 SCX   9 

    0xd991c238,// 12 SCX  10 

    0xe3406364,// 13 SCX  11 

    0xe450215c,// 14 SCX  12 

    0x2de52ffe,// 15 SCX  13 

    0x08313f28,// 16 SCX  14 

    0x4c72758e,// 17 SCX  15 

    0x829ae20d,// 18 SCX  16 

    0xf53ecc5c,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 490 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 272 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 272 

/// BFD lencrypto      : 32 

/// BFD ofstcrypto     : 48 

/// BFD (ofst+len)cry  : 80 

/// BFD ofstiv         : 4 

/// BFD ofsticv        : 356 

    0x00000110,// 20 BFD   1 

    0x00300020,// 21 BFD   2 

    0x01640004,// 22 BFD   3 

/// MFM is 7 words. 

/// MFM vldnibs        : 2d 

    0x2d00bcc1,// 23 MFM   1 

    0x52de66eb,// 24 MFM   2 

    0x20228f90,// 25 MFM   3 

    0x6983b937,// 26 MFM   4 

    0x4580ca6b,// 27 MFM   5 

    0xe0fb8003,// 28 MFM   6 

    0x10000000,// 29 MFM   7 

/// BDA is 124 words. 

/// BDA size     is 490 (0x1ea) 

/// BDA id       is 0x5630 

    0x01ea5630,// 30 BDA   1 

/// PAY Generic Data size   : 490 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x25ff283d,// 31 PAY   1 

    0x53db243e,// 32 PAY   2 

    0x679f0626,// 33 PAY   3 

    0x7c4ccc3f,// 34 PAY   4 

    0xc8326ab1,// 35 PAY   5 

    0x9b209bea,// 36 PAY   6 

    0x7b7bec46,// 37 PAY   7 

    0x3d3227de,// 38 PAY   8 

    0x10ef2162,// 39 PAY   9 

    0x94d02d44,// 40 PAY  10 

    0xc85d4cc0,// 41 PAY  11 

    0xbe0e11e5,// 42 PAY  12 

    0x874fc6c4,// 43 PAY  13 

    0xeb4266c8,// 44 PAY  14 

    0xf75ab9f9,// 45 PAY  15 

    0x97ed7cb6,// 46 PAY  16 

    0xaa511b03,// 47 PAY  17 

    0xac54b6cd,// 48 PAY  18 

    0xc0cedfbe,// 49 PAY  19 

    0x7f691b71,// 50 PAY  20 

    0x669e96c6,// 51 PAY  21 

    0x2c883f79,// 52 PAY  22 

    0xfca1d23c,// 53 PAY  23 

    0x3d817cbf,// 54 PAY  24 

    0xde1c845d,// 55 PAY  25 

    0x54becce8,// 56 PAY  26 

    0xd0db5fbf,// 57 PAY  27 

    0x8e5f63e8,// 58 PAY  28 

    0x06e49eb5,// 59 PAY  29 

    0x5e2cc574,// 60 PAY  30 

    0x1310581d,// 61 PAY  31 

    0x3e3849b4,// 62 PAY  32 

    0x023af647,// 63 PAY  33 

    0xc13c0966,// 64 PAY  34 

    0x5316037a,// 65 PAY  35 

    0x93e149ad,// 66 PAY  36 

    0x74bad2f0,// 67 PAY  37 

    0x89962fe0,// 68 PAY  38 

    0xad914cf7,// 69 PAY  39 

    0x3c073bf0,// 70 PAY  40 

    0xfa9780d6,// 71 PAY  41 

    0x760bf921,// 72 PAY  42 

    0xe9fac2a4,// 73 PAY  43 

    0xe26a0447,// 74 PAY  44 

    0x1acbd9d2,// 75 PAY  45 

    0xf0cd80ae,// 76 PAY  46 

    0xa640a73a,// 77 PAY  47 

    0x80e3c7c2,// 78 PAY  48 

    0xe3c75437,// 79 PAY  49 

    0xe010eb87,// 80 PAY  50 

    0xa192e6c8,// 81 PAY  51 

    0xf8c5641d,// 82 PAY  52 

    0x2f7ec1e6,// 83 PAY  53 

    0x19cd58dd,// 84 PAY  54 

    0x436c4eca,// 85 PAY  55 

    0xc045443a,// 86 PAY  56 

    0xb87e442e,// 87 PAY  57 

    0x698b7c0d,// 88 PAY  58 

    0x295be789,// 89 PAY  59 

    0xc0b30594,// 90 PAY  60 

    0xee20af2f,// 91 PAY  61 

    0xe2de8d91,// 92 PAY  62 

    0xdfea6f91,// 93 PAY  63 

    0xd3bed7c7,// 94 PAY  64 

    0xdf438663,// 95 PAY  65 

    0x52f167b4,// 96 PAY  66 

    0x41a40bee,// 97 PAY  67 

    0xd0fa1880,// 98 PAY  68 

    0x6012a883,// 99 PAY  69 

    0x6d72b18e,// 100 PAY  70 

    0xa763a1cc,// 101 PAY  71 

    0x8c44956b,// 102 PAY  72 

    0x7b7f61cf,// 103 PAY  73 

    0xa26e55d1,// 104 PAY  74 

    0x17a670e2,// 105 PAY  75 

    0x4eb88f52,// 106 PAY  76 

    0xe7c64b51,// 107 PAY  77 

    0x578a741c,// 108 PAY  78 

    0x2743e2ab,// 109 PAY  79 

    0x2c4a1e7c,// 110 PAY  80 

    0x7bbb9756,// 111 PAY  81 

    0x36e6157e,// 112 PAY  82 

    0xf952601b,// 113 PAY  83 

    0x8b3d3d21,// 114 PAY  84 

    0x52dbb36e,// 115 PAY  85 

    0x799a15e2,// 116 PAY  86 

    0xcfa1924d,// 117 PAY  87 

    0x24bc38f4,// 118 PAY  88 

    0x21e1bda5,// 119 PAY  89 

    0x9e898fb1,// 120 PAY  90 

    0x0122534b,// 121 PAY  91 

    0xe139b253,// 122 PAY  92 

    0x3c947f6f,// 123 PAY  93 

    0x44247bd9,// 124 PAY  94 

    0xf802046f,// 125 PAY  95 

    0xb13e7f4e,// 126 PAY  96 

    0x3a04b4ff,// 127 PAY  97 

    0x1aaec2ad,// 128 PAY  98 

    0x58019a65,// 129 PAY  99 

    0x0247da2f,// 130 PAY 100 

    0x72be2f09,// 131 PAY 101 

    0x4ae88846,// 132 PAY 102 

    0x79b1add6,// 133 PAY 103 

    0x02e3d4e7,// 134 PAY 104 

    0xf2fad9c2,// 135 PAY 105 

    0x54e694fa,// 136 PAY 106 

    0x0a9718f5,// 137 PAY 107 

    0xf1fa0882,// 138 PAY 108 

    0x05e728b4,// 139 PAY 109 

    0xa5c2fa62,// 140 PAY 110 

    0x77e23a78,// 141 PAY 111 

    0x015fd9c1,// 142 PAY 112 

    0xd3fec01d,// 143 PAY 113 

    0x6561ac96,// 144 PAY 114 

    0x8bbd3b71,// 145 PAY 115 

    0x24bc3ca6,// 146 PAY 116 

    0x3b1cde94,// 147 PAY 117 

    0xa21e6cc1,// 148 PAY 118 

    0xafaa9f83,// 149 PAY 119 

    0xef848705,// 150 PAY 120 

    0x18dad722,// 151 PAY 121 

    0xeabdcb82,// 152 PAY 122 

    0xea3e0000,// 153 PAY 123 

/// STA is 1 words. 

/// STA num_pkts       : 101 

/// STA pkt_idx        : 196 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xce 

    0x0311ce65 // 154 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt50_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x0c 

/// ECH pdu_tag        : 0x00 

    0x000c0000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0800000f,// 3 SCX   1 

    0x804248d8,// 4 SCX   2 

    0x00005200,// 5 SCX   3 

    0xe49e4c23,// 6 SCX   4 

    0x80ce95d7,// 7 SCX   5 

    0x678eb8fb,// 8 SCX   6 

    0xd26ec40d,// 9 SCX   7 

    0x6fd75bb2,// 10 SCX   8 

    0x3cf4e7c7,// 11 SCX   9 

    0xd87f753d,// 12 SCX  10 

    0xd1f2cd67,// 13 SCX  11 

    0x29bd030f,// 14 SCX  12 

    0x25b1063a,// 15 SCX  13 

    0x2434930f,// 16 SCX  14 

    0x4c2a8ddf,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 652 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 169 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 169 

/// BFD lencrypto      : 128 

/// BFD ofstcrypto     : 16 

/// BFD (ofst+len)cry  : 144 

/// BFD ofstiv         : 8 

/// BFD ofsticv        : 584 

    0x000000a9,// 18 BFD   1 

    0x00100080,// 19 BFD   2 

    0x02480008,// 20 BFD   3 

/// MFM is 1 words. 

/// MFM vldnibs        : 3 

    0x03009eb0,// 21 MFM   1 

/// BDA is 164 words. 

/// BDA size     is 652 (0x28c) 

/// BDA id       is 0x3ee5 

    0x028c3ee5,// 22 BDA   1 

/// PAY Generic Data size   : 652 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x85200a74,// 23 PAY   1 

    0x5ccff99c,// 24 PAY   2 

    0x8dc2674f,// 25 PAY   3 

    0xf198d599,// 26 PAY   4 

    0x46f6105f,// 27 PAY   5 

    0xb39e4d39,// 28 PAY   6 

    0xfac650d2,// 29 PAY   7 

    0x4329e879,// 30 PAY   8 

    0xba866394,// 31 PAY   9 

    0x93d36d17,// 32 PAY  10 

    0x099b3709,// 33 PAY  11 

    0x9d6b3548,// 34 PAY  12 

    0xd7fd9388,// 35 PAY  13 

    0x2f618e14,// 36 PAY  14 

    0x1d550cba,// 37 PAY  15 

    0x0d712a5e,// 38 PAY  16 

    0x366f99bb,// 39 PAY  17 

    0x65951f2c,// 40 PAY  18 

    0xcb31f878,// 41 PAY  19 

    0x39982976,// 42 PAY  20 

    0x6404f0c9,// 43 PAY  21 

    0xd1808598,// 44 PAY  22 

    0x6d71166f,// 45 PAY  23 

    0x88167f8d,// 46 PAY  24 

    0x874d175f,// 47 PAY  25 

    0x6e970cc6,// 48 PAY  26 

    0x84be0d7f,// 49 PAY  27 

    0x1e8d5c9b,// 50 PAY  28 

    0x78a831c5,// 51 PAY  29 

    0xe891e9c2,// 52 PAY  30 

    0xd4d8e60e,// 53 PAY  31 

    0x67b30fe8,// 54 PAY  32 

    0x94888c15,// 55 PAY  33 

    0x90c662db,// 56 PAY  34 

    0xf48be8d0,// 57 PAY  35 

    0xe11e5716,// 58 PAY  36 

    0xd0382aec,// 59 PAY  37 

    0xb1b8c849,// 60 PAY  38 

    0x1a079cd2,// 61 PAY  39 

    0x41cd4c3f,// 62 PAY  40 

    0xd1b9b46b,// 63 PAY  41 

    0x119dd9cc,// 64 PAY  42 

    0x987f7da7,// 65 PAY  43 

    0x0dcb1ba2,// 66 PAY  44 

    0xec9d09a0,// 67 PAY  45 

    0x13f9542a,// 68 PAY  46 

    0xbb8a2142,// 69 PAY  47 

    0x41fd4869,// 70 PAY  48 

    0x3cd80b50,// 71 PAY  49 

    0x4da2d21b,// 72 PAY  50 

    0x4ec0d0d5,// 73 PAY  51 

    0x0ae0ac18,// 74 PAY  52 

    0x3eba54c0,// 75 PAY  53 

    0x14fc3c6b,// 76 PAY  54 

    0x374a13fd,// 77 PAY  55 

    0x6b329a38,// 78 PAY  56 

    0x635c095a,// 79 PAY  57 

    0x7532017b,// 80 PAY  58 

    0x595d3b46,// 81 PAY  59 

    0x91ea619a,// 82 PAY  60 

    0x283b2d84,// 83 PAY  61 

    0x9fd4c7e0,// 84 PAY  62 

    0x1521d102,// 85 PAY  63 

    0x39d93160,// 86 PAY  64 

    0x419a0297,// 87 PAY  65 

    0xddecb87b,// 88 PAY  66 

    0xa18340a1,// 89 PAY  67 

    0x465c27ad,// 90 PAY  68 

    0x28df2ab2,// 91 PAY  69 

    0x7ecca408,// 92 PAY  70 

    0x956f428c,// 93 PAY  71 

    0xd883479e,// 94 PAY  72 

    0x71753589,// 95 PAY  73 

    0x9e3d3776,// 96 PAY  74 

    0x8a0e7cb0,// 97 PAY  75 

    0xe53b12cc,// 98 PAY  76 

    0x6ff5e1bb,// 99 PAY  77 

    0xd635bd88,// 100 PAY  78 

    0xde364f54,// 101 PAY  79 

    0xd585270d,// 102 PAY  80 

    0x4dc70fb2,// 103 PAY  81 

    0x95dd266e,// 104 PAY  82 

    0xf1abb4ee,// 105 PAY  83 

    0xd800caad,// 106 PAY  84 

    0xb61a45be,// 107 PAY  85 

    0x522599a7,// 108 PAY  86 

    0x3398196e,// 109 PAY  87 

    0xd03afd7f,// 110 PAY  88 

    0x23b6589a,// 111 PAY  89 

    0x9b376c43,// 112 PAY  90 

    0x0a784306,// 113 PAY  91 

    0x1ea97b73,// 114 PAY  92 

    0x9cb29699,// 115 PAY  93 

    0x2abb6500,// 116 PAY  94 

    0x2627ef20,// 117 PAY  95 

    0x39f97703,// 118 PAY  96 

    0xfbee7fcf,// 119 PAY  97 

    0xa321978d,// 120 PAY  98 

    0x82224399,// 121 PAY  99 

    0xd6776453,// 122 PAY 100 

    0x9cf96546,// 123 PAY 101 

    0x34cb3f38,// 124 PAY 102 

    0xce2595c8,// 125 PAY 103 

    0x77a55970,// 126 PAY 104 

    0x3ce9f722,// 127 PAY 105 

    0x668fbab2,// 128 PAY 106 

    0x3149e77a,// 129 PAY 107 

    0x46d4c4c1,// 130 PAY 108 

    0x34415e85,// 131 PAY 109 

    0x064805df,// 132 PAY 110 

    0x9b12b109,// 133 PAY 111 

    0x823c33de,// 134 PAY 112 

    0xf5864af8,// 135 PAY 113 

    0xf8e4a4fa,// 136 PAY 114 

    0xbcc1a968,// 137 PAY 115 

    0x949c8b8f,// 138 PAY 116 

    0x84438a6b,// 139 PAY 117 

    0x4933a95d,// 140 PAY 118 

    0x84f735ab,// 141 PAY 119 

    0xfb52e4ed,// 142 PAY 120 

    0x1f03ecb9,// 143 PAY 121 

    0xdad4ce1d,// 144 PAY 122 

    0xb557f6ff,// 145 PAY 123 

    0xf7d3dbf8,// 146 PAY 124 

    0xdc80c6c7,// 147 PAY 125 

    0x883fe9e5,// 148 PAY 126 

    0xea181420,// 149 PAY 127 

    0x5f280d6e,// 150 PAY 128 

    0x806c29f4,// 151 PAY 129 

    0xd6716c97,// 152 PAY 130 

    0xd8b9c904,// 153 PAY 131 

    0x3cfdb2c6,// 154 PAY 132 

    0x3235d882,// 155 PAY 133 

    0xf1fb4399,// 156 PAY 134 

    0x54377589,// 157 PAY 135 

    0xfb0a0c29,// 158 PAY 136 

    0x9c47a9a9,// 159 PAY 137 

    0x88015daa,// 160 PAY 138 

    0xa5653269,// 161 PAY 139 

    0x121fc04b,// 162 PAY 140 

    0x6afc289e,// 163 PAY 141 

    0x327390fd,// 164 PAY 142 

    0x715ecb16,// 165 PAY 143 

    0x247d789c,// 166 PAY 144 

    0xb76915d8,// 167 PAY 145 

    0x3b0939d9,// 168 PAY 146 

    0x57701d72,// 169 PAY 147 

    0x739f6cde,// 170 PAY 148 

    0xc49fef2d,// 171 PAY 149 

    0x6b358a94,// 172 PAY 150 

    0xf163f3c4,// 173 PAY 151 

    0xf1b71cfa,// 174 PAY 152 

    0x812f1c7c,// 175 PAY 153 

    0xaafbd9c6,// 176 PAY 154 

    0x0e22c53d,// 177 PAY 155 

    0x552635a1,// 178 PAY 156 

    0x2ebd98d6,// 179 PAY 157 

    0xa0dc7c26,// 180 PAY 158 

    0xad3af7a3,// 181 PAY 159 

    0x1d398ab0,// 182 PAY 160 

    0x7f0aa8d3,// 183 PAY 161 

    0x8cb2d444,// 184 PAY 162 

    0x56e61478,// 185 PAY 163 

/// STA is 1 words. 

/// STA num_pkts       : 196 

/// STA pkt_idx        : 51 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x52 

    0x00cc52c4 // 186 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt51_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x0d 

/// ECH pdu_tag        : 0x00 

    0x000d0000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0000000f,// 3 SCX   1 

    0x804148a8,// 4 SCX   2 

    0x00006100,// 5 SCX   3 

    0x38799bfb,// 6 SCX   4 

    0x3653cf33,// 7 SCX   5 

    0x09d0dcac,// 8 SCX   6 

    0x2efc2db1,// 9 SCX   7 

    0xef0adf8e,// 10 SCX   8 

    0x5a00ed55,// 11 SCX   9 

    0x6acd71d5,// 12 SCX  10 

    0xf2969c7f,// 13 SCX  11 

    0xafadf116,// 14 SCX  12 

    0xdfd37314,// 15 SCX  13 

    0x289574ee,// 16 SCX  14 

    0xf36a8a61,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 1634 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1486 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1486 

/// BFD lencrypto      : 304 

/// BFD ofstcrypto     : 1132 

/// BFD (ofst+len)cry  : 1436 

/// BFD ofstiv         : 928 

/// BFD ofsticv        : 1536 

    0x000005ce,// 18 BFD   1 

    0x046c0130,// 19 BFD   2 

    0x060003a0,// 20 BFD   3 

/// MFM is 5 words. 

/// MFM vldnibs        : 21 

    0x21008a5c,// 21 MFM   1 

    0x206c13f2,// 22 MFM   2 

    0xcc7b04d4,// 23 MFM   3 

    0x850abb65,// 24 MFM   4 

    0x68d60000,// 25 MFM   5 

/// BDA is 410 words. 

/// BDA size     is 1634 (0x662) 

/// BDA id       is 0x30ad 

    0x066230ad,// 26 BDA   1 

/// PAY Generic Data size   : 1634 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x9ff1b4e4,// 27 PAY   1 

    0x91a170a4,// 28 PAY   2 

    0x84d6a1bf,// 29 PAY   3 

    0xb8e9f1ef,// 30 PAY   4 

    0xe45ed7e9,// 31 PAY   5 

    0x6606e51c,// 32 PAY   6 

    0x2bcb8077,// 33 PAY   7 

    0x299da68b,// 34 PAY   8 

    0x955f2865,// 35 PAY   9 

    0x9bca2174,// 36 PAY  10 

    0x0af9fc62,// 37 PAY  11 

    0x4df3cbb9,// 38 PAY  12 

    0xf4e3cdbb,// 39 PAY  13 

    0xdbb2c801,// 40 PAY  14 

    0x66c7a905,// 41 PAY  15 

    0xfc38196e,// 42 PAY  16 

    0xe26c606c,// 43 PAY  17 

    0x0fe29136,// 44 PAY  18 

    0xd618ced3,// 45 PAY  19 

    0x0cb319be,// 46 PAY  20 

    0xabe9b485,// 47 PAY  21 

    0x9725638b,// 48 PAY  22 

    0x8176ba21,// 49 PAY  23 

    0xbb0df0ea,// 50 PAY  24 

    0x14152942,// 51 PAY  25 

    0xf7284a3e,// 52 PAY  26 

    0xbcf7fde0,// 53 PAY  27 

    0x0bcbe230,// 54 PAY  28 

    0x2aea4b46,// 55 PAY  29 

    0x68000bc1,// 56 PAY  30 

    0xbbdad3a0,// 57 PAY  31 

    0x1763a417,// 58 PAY  32 

    0xcb745f45,// 59 PAY  33 

    0x99fefeca,// 60 PAY  34 

    0x472bc00d,// 61 PAY  35 

    0xf09fd49a,// 62 PAY  36 

    0x20e16cba,// 63 PAY  37 

    0x5b95e138,// 64 PAY  38 

    0xbb873353,// 65 PAY  39 

    0x11f61307,// 66 PAY  40 

    0x23b45e18,// 67 PAY  41 

    0x14788db2,// 68 PAY  42 

    0xec8525b0,// 69 PAY  43 

    0x759549c2,// 70 PAY  44 

    0xf6a0d84e,// 71 PAY  45 

    0x083d3e26,// 72 PAY  46 

    0x91916075,// 73 PAY  47 

    0x0811d253,// 74 PAY  48 

    0xb9c83f74,// 75 PAY  49 

    0x2b1718e3,// 76 PAY  50 

    0x8bef8332,// 77 PAY  51 

    0x87fe1f68,// 78 PAY  52 

    0x1270bf99,// 79 PAY  53 

    0x4d5a1afc,// 80 PAY  54 

    0x258e2548,// 81 PAY  55 

    0xba298a63,// 82 PAY  56 

    0x374049a5,// 83 PAY  57 

    0x29e83c38,// 84 PAY  58 

    0x1b1d055f,// 85 PAY  59 

    0xe36c0d8f,// 86 PAY  60 

    0x8691fb0b,// 87 PAY  61 

    0x392e2a13,// 88 PAY  62 

    0x6b45a1ec,// 89 PAY  63 

    0x65e1a6f5,// 90 PAY  64 

    0x87bce457,// 91 PAY  65 

    0x215e5690,// 92 PAY  66 

    0xe577a67d,// 93 PAY  67 

    0x53e58b9e,// 94 PAY  68 

    0x44ea3841,// 95 PAY  69 

    0x63ab41d3,// 96 PAY  70 

    0x9507feb1,// 97 PAY  71 

    0x67b5451e,// 98 PAY  72 

    0xb7822f08,// 99 PAY  73 

    0x61328662,// 100 PAY  74 

    0xdbb3e298,// 101 PAY  75 

    0x95f31b5b,// 102 PAY  76 

    0xff0f6a32,// 103 PAY  77 

    0x37822ef6,// 104 PAY  78 

    0xad8234f9,// 105 PAY  79 

    0x390c0e2e,// 106 PAY  80 

    0x5929c70b,// 107 PAY  81 

    0x132c2615,// 108 PAY  82 

    0xfa597657,// 109 PAY  83 

    0x52610ad2,// 110 PAY  84 

    0xcd57feb7,// 111 PAY  85 

    0x38e330e3,// 112 PAY  86 

    0xf1c510b0,// 113 PAY  87 

    0x9b8c5369,// 114 PAY  88 

    0x89f0c242,// 115 PAY  89 

    0xed284195,// 116 PAY  90 

    0x13d7258f,// 117 PAY  91 

    0x079ebb70,// 118 PAY  92 

    0xc18484e3,// 119 PAY  93 

    0xa4f221cc,// 120 PAY  94 

    0x7b35fddf,// 121 PAY  95 

    0xa4be44f2,// 122 PAY  96 

    0xe2ef8bd0,// 123 PAY  97 

    0x1a7da59f,// 124 PAY  98 

    0x86305527,// 125 PAY  99 

    0x974d79e3,// 126 PAY 100 

    0x9d03baad,// 127 PAY 101 

    0xd084243e,// 128 PAY 102 

    0xb7423594,// 129 PAY 103 

    0x931db9eb,// 130 PAY 104 

    0xe1fb9c51,// 131 PAY 105 

    0x564a334f,// 132 PAY 106 

    0x1e8f109a,// 133 PAY 107 

    0xdb67292c,// 134 PAY 108 

    0x1855a04d,// 135 PAY 109 

    0xd16a2fc0,// 136 PAY 110 

    0xcf4c0164,// 137 PAY 111 

    0x02f9522d,// 138 PAY 112 

    0x3406262b,// 139 PAY 113 

    0xe55ce91d,// 140 PAY 114 

    0x5fc87167,// 141 PAY 115 

    0x26291a35,// 142 PAY 116 

    0xd575dbf2,// 143 PAY 117 

    0x1c329e9e,// 144 PAY 118 

    0xef0a6497,// 145 PAY 119 

    0xad4b69a1,// 146 PAY 120 

    0xb98fadf5,// 147 PAY 121 

    0xdf7cbf5d,// 148 PAY 122 

    0xb329b88a,// 149 PAY 123 

    0x747a86b8,// 150 PAY 124 

    0x9bec9c8a,// 151 PAY 125 

    0x8bb98cc1,// 152 PAY 126 

    0x25cfff29,// 153 PAY 127 

    0x4a81367a,// 154 PAY 128 

    0xcdc0888b,// 155 PAY 129 

    0x9661e915,// 156 PAY 130 

    0x6417a240,// 157 PAY 131 

    0xd0cd7c81,// 158 PAY 132 

    0x89e0fbb1,// 159 PAY 133 

    0x899ef9a5,// 160 PAY 134 

    0x932e72e7,// 161 PAY 135 

    0x752aff25,// 162 PAY 136 

    0xc40b05a6,// 163 PAY 137 

    0x3ea3911b,// 164 PAY 138 

    0x3c79a093,// 165 PAY 139 

    0x2e372586,// 166 PAY 140 

    0x85bf7037,// 167 PAY 141 

    0x31ebad29,// 168 PAY 142 

    0x36c00d84,// 169 PAY 143 

    0xb0093cc8,// 170 PAY 144 

    0xb1bc3711,// 171 PAY 145 

    0x0f6eab4d,// 172 PAY 146 

    0x41288859,// 173 PAY 147 

    0x75b42f1c,// 174 PAY 148 

    0xdee0171a,// 175 PAY 149 

    0x5dcb442b,// 176 PAY 150 

    0xd76c9c49,// 177 PAY 151 

    0x5bdf760b,// 178 PAY 152 

    0x149227ae,// 179 PAY 153 

    0x77aa3688,// 180 PAY 154 

    0x2c013112,// 181 PAY 155 

    0x6a121ca7,// 182 PAY 156 

    0x0b694e63,// 183 PAY 157 

    0x01bca2f6,// 184 PAY 158 

    0xf9a14f2e,// 185 PAY 159 

    0x0ab08b1b,// 186 PAY 160 

    0x641bb801,// 187 PAY 161 

    0xfbc37ab3,// 188 PAY 162 

    0x3d3c7176,// 189 PAY 163 

    0x6d7078ce,// 190 PAY 164 

    0x209f7214,// 191 PAY 165 

    0x7a4422d1,// 192 PAY 166 

    0xb39622c2,// 193 PAY 167 

    0x9977427d,// 194 PAY 168 

    0xeaeaea4f,// 195 PAY 169 

    0xbdcad0f2,// 196 PAY 170 

    0x4f8dd25f,// 197 PAY 171 

    0x573eda24,// 198 PAY 172 

    0xc41e4533,// 199 PAY 173 

    0x43fdd143,// 200 PAY 174 

    0x21607274,// 201 PAY 175 

    0x73ffa202,// 202 PAY 176 

    0xf778f539,// 203 PAY 177 

    0x668b0812,// 204 PAY 178 

    0x9c82de42,// 205 PAY 179 

    0x9d2373d9,// 206 PAY 180 

    0xb2a84d30,// 207 PAY 181 

    0xd3147d3b,// 208 PAY 182 

    0x4fbba408,// 209 PAY 183 

    0xdf8703d4,// 210 PAY 184 

    0x1f69ffe8,// 211 PAY 185 

    0x51f8f963,// 212 PAY 186 

    0x24a3a610,// 213 PAY 187 

    0xf4a04bd3,// 214 PAY 188 

    0x62e9323e,// 215 PAY 189 

    0x701a4c2e,// 216 PAY 190 

    0x054279bd,// 217 PAY 191 

    0xe66965fe,// 218 PAY 192 

    0x189f9210,// 219 PAY 193 

    0x374f3ed3,// 220 PAY 194 

    0x7c0295e8,// 221 PAY 195 

    0xcde467b2,// 222 PAY 196 

    0xf16f0b5c,// 223 PAY 197 

    0x472bbd75,// 224 PAY 198 

    0xdab4191f,// 225 PAY 199 

    0x6be4db4c,// 226 PAY 200 

    0x4d435ece,// 227 PAY 201 

    0x797b2acf,// 228 PAY 202 

    0x0835b640,// 229 PAY 203 

    0x8b4db065,// 230 PAY 204 

    0x476bc0ca,// 231 PAY 205 

    0x9617d4b2,// 232 PAY 206 

    0xfdf48997,// 233 PAY 207 

    0x4b4e709f,// 234 PAY 208 

    0x9871f6e5,// 235 PAY 209 

    0x30fcf22b,// 236 PAY 210 

    0x6d3af871,// 237 PAY 211 

    0x615d533e,// 238 PAY 212 

    0xbddce53d,// 239 PAY 213 

    0xb1272f98,// 240 PAY 214 

    0x0e882ace,// 241 PAY 215 

    0x3e0a55bb,// 242 PAY 216 

    0xb8c9abe7,// 243 PAY 217 

    0x53984a44,// 244 PAY 218 

    0xcaae511c,// 245 PAY 219 

    0xe02ffd27,// 246 PAY 220 

    0x6402d35c,// 247 PAY 221 

    0x7602f64c,// 248 PAY 222 

    0xac57a976,// 249 PAY 223 

    0xe956d8ce,// 250 PAY 224 

    0xbe5135e6,// 251 PAY 225 

    0xbc8ad9dd,// 252 PAY 226 

    0xecfb904e,// 253 PAY 227 

    0x2771794e,// 254 PAY 228 

    0xeb03e6be,// 255 PAY 229 

    0xbc5caa2d,// 256 PAY 230 

    0xe4b81cc0,// 257 PAY 231 

    0x4315c505,// 258 PAY 232 

    0x354e844a,// 259 PAY 233 

    0xaca03bdd,// 260 PAY 234 

    0xa241af51,// 261 PAY 235 

    0xa8705c2f,// 262 PAY 236 

    0xfecc7bf6,// 263 PAY 237 

    0xfdcda17f,// 264 PAY 238 

    0xe3436005,// 265 PAY 239 

    0x6dda1b71,// 266 PAY 240 

    0x6e3c4a9b,// 267 PAY 241 

    0xf03720ea,// 268 PAY 242 

    0x01712303,// 269 PAY 243 

    0xf2040e37,// 270 PAY 244 

    0x83f20e93,// 271 PAY 245 

    0x66163d04,// 272 PAY 246 

    0xf01d41fe,// 273 PAY 247 

    0x8e08f0c4,// 274 PAY 248 

    0x119f239e,// 275 PAY 249 

    0x2323e75e,// 276 PAY 250 

    0x58fb557d,// 277 PAY 251 

    0x4b75e9a1,// 278 PAY 252 

    0x251a3c9d,// 279 PAY 253 

    0xfee95342,// 280 PAY 254 

    0xa4920104,// 281 PAY 255 

    0xb23a44ac,// 282 PAY 256 

    0x4a07e0aa,// 283 PAY 257 

    0x4f21aff1,// 284 PAY 258 

    0xf5097ef1,// 285 PAY 259 

    0xf19628c8,// 286 PAY 260 

    0x2972a625,// 287 PAY 261 

    0x4e3d8a4a,// 288 PAY 262 

    0xe460280f,// 289 PAY 263 

    0x207f4ca8,// 290 PAY 264 

    0x3b89cc29,// 291 PAY 265 

    0xb95e5d30,// 292 PAY 266 

    0x1794cb84,// 293 PAY 267 

    0xd5499857,// 294 PAY 268 

    0xc52853d1,// 295 PAY 269 

    0x31dd7d83,// 296 PAY 270 

    0xec2fb238,// 297 PAY 271 

    0x5766f302,// 298 PAY 272 

    0xe666da49,// 299 PAY 273 

    0x731dc72e,// 300 PAY 274 

    0x97864f92,// 301 PAY 275 

    0x0ad66e65,// 302 PAY 276 

    0x642591a8,// 303 PAY 277 

    0x527b1a47,// 304 PAY 278 

    0xa25d7607,// 305 PAY 279 

    0x90765585,// 306 PAY 280 

    0x5a23b650,// 307 PAY 281 

    0x730fb71e,// 308 PAY 282 

    0x8d1e96f0,// 309 PAY 283 

    0x70c2570d,// 310 PAY 284 

    0xcdb271b6,// 311 PAY 285 

    0x96a4809c,// 312 PAY 286 

    0xdfbabac0,// 313 PAY 287 

    0x4068dca7,// 314 PAY 288 

    0xaf12003c,// 315 PAY 289 

    0xe4764110,// 316 PAY 290 

    0x4d149954,// 317 PAY 291 

    0x53f5b8d9,// 318 PAY 292 

    0xbb2a32bc,// 319 PAY 293 

    0x6dd93a2b,// 320 PAY 294 

    0x9783e69a,// 321 PAY 295 

    0x351d3f71,// 322 PAY 296 

    0x3c6e6b0a,// 323 PAY 297 

    0x176e5c03,// 324 PAY 298 

    0x132e536d,// 325 PAY 299 

    0x33953de8,// 326 PAY 300 

    0x5dfcfce1,// 327 PAY 301 

    0xc8f8d153,// 328 PAY 302 

    0xa1775782,// 329 PAY 303 

    0xdb333682,// 330 PAY 304 

    0xa9f3057f,// 331 PAY 305 

    0x9ddd9151,// 332 PAY 306 

    0x2d15e18e,// 333 PAY 307 

    0x0575aa18,// 334 PAY 308 

    0x537d15ca,// 335 PAY 309 

    0xa2b39062,// 336 PAY 310 

    0x66ad9f40,// 337 PAY 311 

    0xe1da067b,// 338 PAY 312 

    0xe76eef48,// 339 PAY 313 

    0x81b7f5a8,// 340 PAY 314 

    0xd058e023,// 341 PAY 315 

    0xfdf519a4,// 342 PAY 316 

    0xd416b7a9,// 343 PAY 317 

    0x139ddb4e,// 344 PAY 318 

    0x087d68da,// 345 PAY 319 

    0x514cc4d2,// 346 PAY 320 

    0x1e4efeb0,// 347 PAY 321 

    0x99b2ceda,// 348 PAY 322 

    0x9952b9c3,// 349 PAY 323 

    0x2f6cf53d,// 350 PAY 324 

    0x013b9eae,// 351 PAY 325 

    0x70de1c09,// 352 PAY 326 

    0x3ba65ace,// 353 PAY 327 

    0xd93fa9f5,// 354 PAY 328 

    0xd5336ce1,// 355 PAY 329 

    0x6a84aef3,// 356 PAY 330 

    0x334a7ea2,// 357 PAY 331 

    0x6d864eb5,// 358 PAY 332 

    0x2417ad0c,// 359 PAY 333 

    0x3d543d00,// 360 PAY 334 

    0xb02b545d,// 361 PAY 335 

    0x906b0fc1,// 362 PAY 336 

    0x05efeeb2,// 363 PAY 337 

    0x15bdd954,// 364 PAY 338 

    0x98bf4db6,// 365 PAY 339 

    0x78e8646e,// 366 PAY 340 

    0xfa57664e,// 367 PAY 341 

    0x033e607f,// 368 PAY 342 

    0xa11ef121,// 369 PAY 343 

    0x3b8f1e72,// 370 PAY 344 

    0x3f9ec64d,// 371 PAY 345 

    0x5d5ef444,// 372 PAY 346 

    0xd6b6f62f,// 373 PAY 347 

    0x26fba3a3,// 374 PAY 348 

    0xa1e884cc,// 375 PAY 349 

    0x4ee00c91,// 376 PAY 350 

    0xcd7d85df,// 377 PAY 351 

    0x05c53abc,// 378 PAY 352 

    0x8742a925,// 379 PAY 353 

    0x36ef5b32,// 380 PAY 354 

    0x34cc4fcf,// 381 PAY 355 

    0x3d0caeef,// 382 PAY 356 

    0xb13ea05b,// 383 PAY 357 

    0x473ca9b3,// 384 PAY 358 

    0xc5f557df,// 385 PAY 359 

    0x25b9c039,// 386 PAY 360 

    0x86845ad0,// 387 PAY 361 

    0x1f43f88a,// 388 PAY 362 

    0x5ac83278,// 389 PAY 363 

    0x952ead86,// 390 PAY 364 

    0x2b075d4f,// 391 PAY 365 

    0xb6941df5,// 392 PAY 366 

    0x05487274,// 393 PAY 367 

    0x2e8f9fd3,// 394 PAY 368 

    0x0d52a73d,// 395 PAY 369 

    0xfa95a65b,// 396 PAY 370 

    0x1918d263,// 397 PAY 371 

    0x2d6b7f18,// 398 PAY 372 

    0x67ae3462,// 399 PAY 373 

    0xe0eb6054,// 400 PAY 374 

    0x83277472,// 401 PAY 375 

    0x3f007a4a,// 402 PAY 376 

    0x291b7db1,// 403 PAY 377 

    0x8e3a0d0e,// 404 PAY 378 

    0x18628c15,// 405 PAY 379 

    0xefb77cb6,// 406 PAY 380 

    0xf850f11a,// 407 PAY 381 

    0x494bb110,// 408 PAY 382 

    0x285c1b3b,// 409 PAY 383 

    0x55d23f77,// 410 PAY 384 

    0x8bcfa743,// 411 PAY 385 

    0x4a418a05,// 412 PAY 386 

    0x1087d879,// 413 PAY 387 

    0x1fd616cc,// 414 PAY 388 

    0x051808fe,// 415 PAY 389 

    0x2cf1699a,// 416 PAY 390 

    0x955c311b,// 417 PAY 391 

    0x67283ff1,// 418 PAY 392 

    0x5c78fe92,// 419 PAY 393 

    0xebeb7074,// 420 PAY 394 

    0x80f49d80,// 421 PAY 395 

    0x370a37ae,// 422 PAY 396 

    0x2b998401,// 423 PAY 397 

    0x0c896628,// 424 PAY 398 

    0x8f7b31de,// 425 PAY 399 

    0xc5b5ab70,// 426 PAY 400 

    0x542d2029,// 427 PAY 401 

    0xd0688117,// 428 PAY 402 

    0x34f7c1fa,// 429 PAY 403 

    0xa08535ca,// 430 PAY 404 

    0x9345e1ff,// 431 PAY 405 

    0xf691a2e4,// 432 PAY 406 

    0xc78df81f,// 433 PAY 407 

    0x4477095e,// 434 PAY 408 

    0x938c0000,// 435 PAY 409 

/// STA is 1 words. 

/// STA num_pkts       : 59 

/// STA pkt_idx        : 20 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xb6 

    0x0050b63b // 436 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt52_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x0d 

/// ECH pdu_tag        : 0x00 

    0x000d0000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv insert_icv check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x08000011,// 3 SCX   1 

    0x804448db,// 4 SCX   2 

    0x00007382,// 5 SCX   3 

    0xe4be789c,// 6 SCX   4 

    0x275687e3,// 7 SCX   5 

    0x7984b9ac,// 8 SCX   6 

    0x3904a025,// 9 SCX   7 

    0xdea4e1bc,// 10 SCX   8 

    0x033cc09b,// 11 SCX   9 

    0x360d16d8,// 12 SCX  10 

    0x31a6ef26,// 13 SCX  11 

    0x6256c358,// 14 SCX  12 

    0x15aa4d4d,// 15 SCX  13 

    0x77e88453,// 16 SCX  14 

    0x2813036b,// 17 SCX  15 

    0x06ede13e,// 18 SCX  16 

    0xaadc61ff,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1262 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 666 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 666 

/// BFD lencrypto      : 288 

/// BFD ofstcrypto     : 80 

/// BFD (ofst+len)cry  : 368 

/// BFD ofstiv         : 64 

/// BFD ofsticv        : 888 

    0x0000029a,// 20 BFD   1 

    0x00500120,// 21 BFD   2 

    0x03780040,// 22 BFD   3 

/// MFM is 15 words. 

/// MFM vldnibs        : 6e 

    0x6e009fea,// 23 MFM   1 

    0xe7a6d278,// 24 MFM   2 

    0x73dc074a,// 25 MFM   3 

    0x4adc9cbe,// 26 MFM   4 

    0x58f65501,// 27 MFM   5 

    0x31464a17,// 28 MFM   6 

    0x3da3b056,// 29 MFM   7 

    0x2fdf1f8c,// 30 MFM   8 

    0xf4443169,// 31 MFM   9 

    0x6018fc23,// 32 MFM  10 

    0x913735f4,// 33 MFM  11 

    0x962347cb,// 34 MFM  12 

    0x89464570,// 35 MFM  13 

    0xd56d15c3,// 36 MFM  14 

    0x63000000,// 37 MFM  15 

/// BDA is 317 words. 

/// BDA size     is 1262 (0x4ee) 

/// BDA id       is 0xa607 

    0x04eea607,// 38 BDA   1 

/// PAY Generic Data size   : 1262 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0xf8107fef,// 39 PAY   1 

    0x9a6a0ac2,// 40 PAY   2 

    0x9fe0c207,// 41 PAY   3 

    0xd7b35a65,// 42 PAY   4 

    0xfd6301df,// 43 PAY   5 

    0xc0b32da3,// 44 PAY   6 

    0x60964545,// 45 PAY   7 

    0x1948dbda,// 46 PAY   8 

    0x7b716c47,// 47 PAY   9 

    0x32a3eb97,// 48 PAY  10 

    0x7f0f46f6,// 49 PAY  11 

    0xfb6e53e7,// 50 PAY  12 

    0xeb426bc1,// 51 PAY  13 

    0xde8ae597,// 52 PAY  14 

    0x05531453,// 53 PAY  15 

    0x41f609b8,// 54 PAY  16 

    0x04cea21c,// 55 PAY  17 

    0x19068d00,// 56 PAY  18 

    0xc917ccc7,// 57 PAY  19 

    0x3d291894,// 58 PAY  20 

    0x04d8f1a0,// 59 PAY  21 

    0x9e12305d,// 60 PAY  22 

    0x199eb9c8,// 61 PAY  23 

    0xccd36394,// 62 PAY  24 

    0xfed2a4a4,// 63 PAY  25 

    0x6241fa46,// 64 PAY  26 

    0xba30fde9,// 65 PAY  27 

    0x90af1eb3,// 66 PAY  28 

    0xcc924e18,// 67 PAY  29 

    0x2d73d095,// 68 PAY  30 

    0x36d352e7,// 69 PAY  31 

    0xa327c6b4,// 70 PAY  32 

    0x74420f7d,// 71 PAY  33 

    0xada3c499,// 72 PAY  34 

    0x8bf54f1b,// 73 PAY  35 

    0x05fd8e48,// 74 PAY  36 

    0xd15c9af5,// 75 PAY  37 

    0x53f86bf7,// 76 PAY  38 

    0x886d44bf,// 77 PAY  39 

    0x24e21d47,// 78 PAY  40 

    0x8adf9e17,// 79 PAY  41 

    0x528d92fa,// 80 PAY  42 

    0x7c271294,// 81 PAY  43 

    0xaff24597,// 82 PAY  44 

    0xd9534705,// 83 PAY  45 

    0x216a1607,// 84 PAY  46 

    0xafee8481,// 85 PAY  47 

    0xd63439fa,// 86 PAY  48 

    0x902da959,// 87 PAY  49 

    0xb5e23212,// 88 PAY  50 

    0xe3a3c1bc,// 89 PAY  51 

    0x423bc62a,// 90 PAY  52 

    0xc0833b2a,// 91 PAY  53 

    0x6a4b48e6,// 92 PAY  54 

    0xbd8bcd4e,// 93 PAY  55 

    0x05f7dd0b,// 94 PAY  56 

    0x4a9ffdf2,// 95 PAY  57 

    0x579b8daa,// 96 PAY  58 

    0xfd41e0b5,// 97 PAY  59 

    0x07e23612,// 98 PAY  60 

    0xb284445b,// 99 PAY  61 

    0x26c1218e,// 100 PAY  62 

    0x51976cc2,// 101 PAY  63 

    0xf4da8485,// 102 PAY  64 

    0x212cb725,// 103 PAY  65 

    0xe05f29b3,// 104 PAY  66 

    0xdfb0b95f,// 105 PAY  67 

    0xa10b4db7,// 106 PAY  68 

    0xda8bf0a2,// 107 PAY  69 

    0x0f6b0c5f,// 108 PAY  70 

    0x74a18d69,// 109 PAY  71 

    0xe7cbf370,// 110 PAY  72 

    0xc0926fe7,// 111 PAY  73 

    0xbc2e3051,// 112 PAY  74 

    0x58501f70,// 113 PAY  75 

    0x6f726555,// 114 PAY  76 

    0xa60778a3,// 115 PAY  77 

    0xc9fb4342,// 116 PAY  78 

    0xdf5093b8,// 117 PAY  79 

    0x456bb95b,// 118 PAY  80 

    0x23e3fcbf,// 119 PAY  81 

    0x12c882d5,// 120 PAY  82 

    0x86b6f415,// 121 PAY  83 

    0x2f980f34,// 122 PAY  84 

    0xec9f0d6d,// 123 PAY  85 

    0x8ff52f55,// 124 PAY  86 

    0x63eafed3,// 125 PAY  87 

    0x67ce92c5,// 126 PAY  88 

    0x51dae881,// 127 PAY  89 

    0x13a5ab5e,// 128 PAY  90 

    0x172beed9,// 129 PAY  91 

    0xb6741799,// 130 PAY  92 

    0x53781d9e,// 131 PAY  93 

    0xf59f7fe0,// 132 PAY  94 

    0x9042a27b,// 133 PAY  95 

    0xf0e0737f,// 134 PAY  96 

    0x62d6d57f,// 135 PAY  97 

    0x24c6930f,// 136 PAY  98 

    0x726c6bf4,// 137 PAY  99 

    0xc8586970,// 138 PAY 100 

    0xe1992a2c,// 139 PAY 101 

    0x6f31a3cf,// 140 PAY 102 

    0xa9f2831b,// 141 PAY 103 

    0x1c1b8a89,// 142 PAY 104 

    0xd059bf35,// 143 PAY 105 

    0x8b269a02,// 144 PAY 106 

    0xd987e778,// 145 PAY 107 

    0xaf4ae694,// 146 PAY 108 

    0x1db17da6,// 147 PAY 109 

    0xf1c4dc01,// 148 PAY 110 

    0xe581f391,// 149 PAY 111 

    0x7d5a4e26,// 150 PAY 112 

    0x5af036f5,// 151 PAY 113 

    0xede7022b,// 152 PAY 114 

    0x0297c64c,// 153 PAY 115 

    0x1c7d3e76,// 154 PAY 116 

    0x7520d912,// 155 PAY 117 

    0xdd094c07,// 156 PAY 118 

    0xfd01914e,// 157 PAY 119 

    0x6c0e65c2,// 158 PAY 120 

    0x6de7e500,// 159 PAY 121 

    0x16afdfac,// 160 PAY 122 

    0xe428d327,// 161 PAY 123 

    0x76514834,// 162 PAY 124 

    0x15dc13b1,// 163 PAY 125 

    0xba0a1b1f,// 164 PAY 126 

    0xa2b5b1e8,// 165 PAY 127 

    0x452e3a3a,// 166 PAY 128 

    0x20fa34b5,// 167 PAY 129 

    0x67be082e,// 168 PAY 130 

    0x87c530e4,// 169 PAY 131 

    0x7302ec7c,// 170 PAY 132 

    0xbc79ad67,// 171 PAY 133 

    0x7c097852,// 172 PAY 134 

    0xa608a0ca,// 173 PAY 135 

    0xf2543939,// 174 PAY 136 

    0x71e42b03,// 175 PAY 137 

    0xf6b82f2a,// 176 PAY 138 

    0x75651669,// 177 PAY 139 

    0x6dff3192,// 178 PAY 140 

    0xba146e65,// 179 PAY 141 

    0xa7bc81fa,// 180 PAY 142 

    0x999169fe,// 181 PAY 143 

    0xf86d28c9,// 182 PAY 144 

    0xb4de706a,// 183 PAY 145 

    0xbc6fe474,// 184 PAY 146 

    0xf2186d3f,// 185 PAY 147 

    0x184751af,// 186 PAY 148 

    0x87a50325,// 187 PAY 149 

    0x9396527d,// 188 PAY 150 

    0x20384bb7,// 189 PAY 151 

    0x758a955f,// 190 PAY 152 

    0x6f3a0678,// 191 PAY 153 

    0x843c0543,// 192 PAY 154 

    0xb4b4976f,// 193 PAY 155 

    0x1300db5f,// 194 PAY 156 

    0x8adea50e,// 195 PAY 157 

    0x35330ec4,// 196 PAY 158 

    0x252c05f0,// 197 PAY 159 

    0x5e7a3ae7,// 198 PAY 160 

    0x8ed78b73,// 199 PAY 161 

    0x35783b62,// 200 PAY 162 

    0x1532d9a1,// 201 PAY 163 

    0xd621620b,// 202 PAY 164 

    0x3512e33c,// 203 PAY 165 

    0xc31ec95f,// 204 PAY 166 

    0xc58e79a5,// 205 PAY 167 

    0x07d314cc,// 206 PAY 168 

    0xf0a4b6e9,// 207 PAY 169 

    0xd348ef19,// 208 PAY 170 

    0x154c4f45,// 209 PAY 171 

    0x241a08da,// 210 PAY 172 

    0x657c4707,// 211 PAY 173 

    0x7ff48c28,// 212 PAY 174 

    0xb8c1d978,// 213 PAY 175 

    0x1e313802,// 214 PAY 176 

    0x19792c7a,// 215 PAY 177 

    0xc4bf66e0,// 216 PAY 178 

    0x9a63390f,// 217 PAY 179 

    0xfc83d88d,// 218 PAY 180 

    0x7c8a6b21,// 219 PAY 181 

    0x8d0b929e,// 220 PAY 182 

    0xebcaa76c,// 221 PAY 183 

    0x1b9002f4,// 222 PAY 184 

    0xc0c2716b,// 223 PAY 185 

    0x93ed1e7d,// 224 PAY 186 

    0xfb5cece0,// 225 PAY 187 

    0xb855c227,// 226 PAY 188 

    0x1bfade2f,// 227 PAY 189 

    0x588dd5c7,// 228 PAY 190 

    0x14f43e88,// 229 PAY 191 

    0x26a87efc,// 230 PAY 192 

    0x47a768a8,// 231 PAY 193 

    0xb16b2e0b,// 232 PAY 194 

    0x85fd3bf2,// 233 PAY 195 

    0xad86df72,// 234 PAY 196 

    0xb9754d6b,// 235 PAY 197 

    0x2d39465e,// 236 PAY 198 

    0x69031601,// 237 PAY 199 

    0xe780a6fa,// 238 PAY 200 

    0xffb14adb,// 239 PAY 201 

    0x37b73ed4,// 240 PAY 202 

    0x88cdb3a5,// 241 PAY 203 

    0x1105974c,// 242 PAY 204 

    0x71b80376,// 243 PAY 205 

    0x3c2a7f0d,// 244 PAY 206 

    0x0741ff82,// 245 PAY 207 

    0x57bf746e,// 246 PAY 208 

    0x1ae91abf,// 247 PAY 209 

    0xf6d9962b,// 248 PAY 210 

    0xf4530633,// 249 PAY 211 

    0x250aae6b,// 250 PAY 212 

    0x30a43816,// 251 PAY 213 

    0x1e08d9ff,// 252 PAY 214 

    0xb4389376,// 253 PAY 215 

    0xa900c725,// 254 PAY 216 

    0xe902a5d6,// 255 PAY 217 

    0xba044446,// 256 PAY 218 

    0xad8c0ff7,// 257 PAY 219 

    0x2db40df7,// 258 PAY 220 

    0x2171e431,// 259 PAY 221 

    0x7b5fb96a,// 260 PAY 222 

    0xf6239b94,// 261 PAY 223 

    0x3b38573e,// 262 PAY 224 

    0x996c724c,// 263 PAY 225 

    0x8415e425,// 264 PAY 226 

    0x7347b2c8,// 265 PAY 227 

    0x6440c2f5,// 266 PAY 228 

    0x7ce57946,// 267 PAY 229 

    0xfbe70850,// 268 PAY 230 

    0x9ffb2cee,// 269 PAY 231 

    0xdb660e07,// 270 PAY 232 

    0x7245bd37,// 271 PAY 233 

    0x7da5a31d,// 272 PAY 234 

    0x31d9421d,// 273 PAY 235 

    0xd2adf2fd,// 274 PAY 236 

    0x2ca583e9,// 275 PAY 237 

    0xf21f34fe,// 276 PAY 238 

    0xed6db358,// 277 PAY 239 

    0xc266cfc1,// 278 PAY 240 

    0xa8c9a3ce,// 279 PAY 241 

    0xc9338271,// 280 PAY 242 

    0xf5ac9fec,// 281 PAY 243 

    0x050809b2,// 282 PAY 244 

    0x4ec47e52,// 283 PAY 245 

    0x7a1dcc48,// 284 PAY 246 

    0x23c028e6,// 285 PAY 247 

    0x04fc51d2,// 286 PAY 248 

    0xfaa03c58,// 287 PAY 249 

    0x4b068983,// 288 PAY 250 

    0xfe3b136e,// 289 PAY 251 

    0xd12556fc,// 290 PAY 252 

    0xd3e03137,// 291 PAY 253 

    0x3b658115,// 292 PAY 254 

    0x8e9d16b8,// 293 PAY 255 

    0x04e81e69,// 294 PAY 256 

    0xb0820219,// 295 PAY 257 

    0x396b4fbd,// 296 PAY 258 

    0x6baa3e73,// 297 PAY 259 

    0xafcbfac5,// 298 PAY 260 

    0x232c77f7,// 299 PAY 261 

    0x475cbc19,// 300 PAY 262 

    0xe89df8ee,// 301 PAY 263 

    0x272a6820,// 302 PAY 264 

    0x55c7e681,// 303 PAY 265 

    0x76a2f4d0,// 304 PAY 266 

    0x1bc14e5b,// 305 PAY 267 

    0xfabee65d,// 306 PAY 268 

    0x1d4fd39e,// 307 PAY 269 

    0x1228331a,// 308 PAY 270 

    0xb2cdc026,// 309 PAY 271 

    0xe07e5142,// 310 PAY 272 

    0x1361519c,// 311 PAY 273 

    0x3f572156,// 312 PAY 274 

    0x279afc36,// 313 PAY 275 

    0xc453117a,// 314 PAY 276 

    0x9f7bbdba,// 315 PAY 277 

    0xdc8ad25c,// 316 PAY 278 

    0x7d688183,// 317 PAY 279 

    0xe7660349,// 318 PAY 280 

    0x85434596,// 319 PAY 281 

    0x25c42d3c,// 320 PAY 282 

    0xa0f75c1c,// 321 PAY 283 

    0xb74e8619,// 322 PAY 284 

    0xd470183f,// 323 PAY 285 

    0x44b12bb7,// 324 PAY 286 

    0x1447508d,// 325 PAY 287 

    0x796b05eb,// 326 PAY 288 

    0x898cda80,// 327 PAY 289 

    0x18bc4030,// 328 PAY 290 

    0x69e51d20,// 329 PAY 291 

    0x4d597aea,// 330 PAY 292 

    0x32dfdff0,// 331 PAY 293 

    0x4c9c357f,// 332 PAY 294 

    0x175b8c5f,// 333 PAY 295 

    0x49c4bdec,// 334 PAY 296 

    0x73c12c22,// 335 PAY 297 

    0x87d8afd2,// 336 PAY 298 

    0x0cc37825,// 337 PAY 299 

    0xbcba6d08,// 338 PAY 300 

    0xed4815f2,// 339 PAY 301 

    0xffafc7ba,// 340 PAY 302 

    0x385d04d9,// 341 PAY 303 

    0x6c0bf8a1,// 342 PAY 304 

    0x326c1397,// 343 PAY 305 

    0xdd3ef823,// 344 PAY 306 

    0x964be5e7,// 345 PAY 307 

    0xf1ecda4e,// 346 PAY 308 

    0xf7a59f68,// 347 PAY 309 

    0x2120cd38,// 348 PAY 310 

    0xa8be8b0f,// 349 PAY 311 

    0xd7fe6476,// 350 PAY 312 

    0xc0dd664d,// 351 PAY 313 

    0x8ebcf7ab,// 352 PAY 314 

    0xeafec9d7,// 353 PAY 315 

    0xebd10000,// 354 PAY 316 

/// STA is 1 words. 

/// STA num_pkts       : 163 

/// STA pkt_idx        : 246 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x58 

    0x03d958a3 // 355 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt53_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x04 

/// ECH pdu_tag        : 0x00 

    0x00040000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv !insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0800000f,// 3 SCX   1 

    0x8042483a,// 4 SCX   2 

    0x00000400,// 5 SCX   3 

    0xcfc283b0,// 6 SCX   4 

    0xbbd261a5,// 7 SCX   5 

    0x994a1eb3,// 8 SCX   6 

    0xecb95f2f,// 9 SCX   7 

    0x0f9248f0,// 10 SCX   8 

    0xcfc3a4be,// 11 SCX   9 

    0xdec3bf1a,// 12 SCX  10 

    0x2ed529f4,// 13 SCX  11 

    0xe8981b41,// 14 SCX  12 

    0x83500473,// 15 SCX  13 

    0x56719ae1,// 16 SCX  14 

    0x79197cdf,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 617 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 327 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 327 

/// BFD lencrypto      : 208 

/// BFD ofstcrypto     : 88 

/// BFD (ofst+len)cry  : 296 

/// BFD ofstiv         : 76 

/// BFD ofsticv        : 484 

    0x00000147,// 18 BFD   1 

    0x005800d0,// 19 BFD   2 

    0x01e4004c,// 20 BFD   3 

/// MFM is 10 words. 

/// MFM vldnibs        : 47 

    0x4700efbe,// 21 MFM   1 

    0x5fb8350f,// 22 MFM   2 

    0xac2602e5,// 23 MFM   3 

    0xc47c28f2,// 24 MFM   4 

    0xb98c0923,// 25 MFM   5 

    0xabcc6a6c,// 26 MFM   6 

    0x0844eeb1,// 27 MFM   7 

    0x1c48dc4e,// 28 MFM   8 

    0xdf3887a0,// 29 MFM   9 

    0x6a400000,// 30 MFM  10 

/// BDA is 156 words. 

/// BDA size     is 617 (0x269) 

/// BDA id       is 0x7e9d 

    0x02697e9d,// 31 BDA   1 

/// PAY Generic Data size   : 617 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0xf6aa34a8,// 32 PAY   1 

    0xef3686ed,// 33 PAY   2 

    0x33d6a2b8,// 34 PAY   3 

    0x9089857f,// 35 PAY   4 

    0xa08648ca,// 36 PAY   5 

    0xf0ef0ff8,// 37 PAY   6 

    0xb2e961a3,// 38 PAY   7 

    0xd34888e8,// 39 PAY   8 

    0x93f42729,// 40 PAY   9 

    0x65f7250e,// 41 PAY  10 

    0x08ade4aa,// 42 PAY  11 

    0xa4b3e0f0,// 43 PAY  12 

    0xcacb90f9,// 44 PAY  13 

    0x08edeaa2,// 45 PAY  14 

    0x9bd78fa9,// 46 PAY  15 

    0x927758d0,// 47 PAY  16 

    0xd116024a,// 48 PAY  17 

    0x96bb5194,// 49 PAY  18 

    0x995db6ab,// 50 PAY  19 

    0x4828aad9,// 51 PAY  20 

    0x1a2ed6df,// 52 PAY  21 

    0x1fb2e651,// 53 PAY  22 

    0xb1b57230,// 54 PAY  23 

    0x1454696b,// 55 PAY  24 

    0xdb2bee83,// 56 PAY  25 

    0x2594c970,// 57 PAY  26 

    0xde3b4390,// 58 PAY  27 

    0x70247ccb,// 59 PAY  28 

    0xa15fe4f5,// 60 PAY  29 

    0x632ea34c,// 61 PAY  30 

    0xdd87c0d3,// 62 PAY  31 

    0xdd6068a4,// 63 PAY  32 

    0xbaafd991,// 64 PAY  33 

    0x787a3581,// 65 PAY  34 

    0xf2e0a8a9,// 66 PAY  35 

    0x8b58c31b,// 67 PAY  36 

    0xad047bb3,// 68 PAY  37 

    0x6965aa4b,// 69 PAY  38 

    0x56934805,// 70 PAY  39 

    0x93e3e7d7,// 71 PAY  40 

    0xe1059e60,// 72 PAY  41 

    0x95de297d,// 73 PAY  42 

    0x829d0cee,// 74 PAY  43 

    0xf562e5a2,// 75 PAY  44 

    0x570abfa5,// 76 PAY  45 

    0xfe3618c0,// 77 PAY  46 

    0xb373045f,// 78 PAY  47 

    0x712ce46e,// 79 PAY  48 

    0x15cb30de,// 80 PAY  49 

    0x748bef6d,// 81 PAY  50 

    0xba256850,// 82 PAY  51 

    0x6c76679b,// 83 PAY  52 

    0x579bfa75,// 84 PAY  53 

    0x85fa5cbb,// 85 PAY  54 

    0xc05d5b92,// 86 PAY  55 

    0x4b86ac64,// 87 PAY  56 

    0x01b70026,// 88 PAY  57 

    0x3a4e195a,// 89 PAY  58 

    0x47d5e0eb,// 90 PAY  59 

    0xcef5bdc6,// 91 PAY  60 

    0x1aa235a1,// 92 PAY  61 

    0xa83b2e97,// 93 PAY  62 

    0x98b9b3eb,// 94 PAY  63 

    0xb3aa8029,// 95 PAY  64 

    0x1be4e603,// 96 PAY  65 

    0xa842ebd8,// 97 PAY  66 

    0x29230d1f,// 98 PAY  67 

    0xaf19f386,// 99 PAY  68 

    0x29b420c3,// 100 PAY  69 

    0xf1656317,// 101 PAY  70 

    0x7d9e910d,// 102 PAY  71 

    0x836334b4,// 103 PAY  72 

    0x8eff1b19,// 104 PAY  73 

    0x755b878f,// 105 PAY  74 

    0x5a66c906,// 106 PAY  75 

    0xab7029a6,// 107 PAY  76 

    0xcdf6fb6c,// 108 PAY  77 

    0xf839d287,// 109 PAY  78 

    0x43c1f3b3,// 110 PAY  79 

    0x9c88fe14,// 111 PAY  80 

    0x8addc7fd,// 112 PAY  81 

    0x8a6d05b7,// 113 PAY  82 

    0xf7937f90,// 114 PAY  83 

    0x44353cbd,// 115 PAY  84 

    0x0063ee9b,// 116 PAY  85 

    0x77f7c902,// 117 PAY  86 

    0x691ac262,// 118 PAY  87 

    0x2059946c,// 119 PAY  88 

    0x9615c410,// 120 PAY  89 

    0x632f23eb,// 121 PAY  90 

    0xa6508cdd,// 122 PAY  91 

    0x0f2b7721,// 123 PAY  92 

    0x36d884cf,// 124 PAY  93 

    0x5474259c,// 125 PAY  94 

    0x51664c76,// 126 PAY  95 

    0x52fb6b06,// 127 PAY  96 

    0x463ea431,// 128 PAY  97 

    0x774c40e3,// 129 PAY  98 

    0xbd320673,// 130 PAY  99 

    0x1f357a9e,// 131 PAY 100 

    0x26b5d3ef,// 132 PAY 101 

    0xbdfec7a8,// 133 PAY 102 

    0x9d4c5a97,// 134 PAY 103 

    0x7a205d43,// 135 PAY 104 

    0xf4288d7e,// 136 PAY 105 

    0x3283aa2e,// 137 PAY 106 

    0x9dbf839b,// 138 PAY 107 

    0x254f1b38,// 139 PAY 108 

    0x3866425f,// 140 PAY 109 

    0x08fe9ebf,// 141 PAY 110 

    0xc1f3a6d1,// 142 PAY 111 

    0x1850248b,// 143 PAY 112 

    0xfaa05b3d,// 144 PAY 113 

    0xa33c954e,// 145 PAY 114 

    0xdebd12a5,// 146 PAY 115 

    0x30da2489,// 147 PAY 116 

    0x862e6bf6,// 148 PAY 117 

    0x13f69b24,// 149 PAY 118 

    0xdeab0636,// 150 PAY 119 

    0x1ed05ebd,// 151 PAY 120 

    0x59102003,// 152 PAY 121 

    0x8612fcad,// 153 PAY 122 

    0x17de5751,// 154 PAY 123 

    0x16bbdf08,// 155 PAY 124 

    0x9785cc1a,// 156 PAY 125 

    0x9d1a423a,// 157 PAY 126 

    0x7d83496c,// 158 PAY 127 

    0x6412f2f3,// 159 PAY 128 

    0x8c5ec5b0,// 160 PAY 129 

    0x88fdef2b,// 161 PAY 130 

    0x8d67e242,// 162 PAY 131 

    0x0e98b4d5,// 163 PAY 132 

    0x60d1834e,// 164 PAY 133 

    0x7739e47e,// 165 PAY 134 

    0x0a989367,// 166 PAY 135 

    0xba2a950c,// 167 PAY 136 

    0xf989d254,// 168 PAY 137 

    0x2f8ed635,// 169 PAY 138 

    0xc5e8b28d,// 170 PAY 139 

    0xb2bbf205,// 171 PAY 140 

    0x7f245f69,// 172 PAY 141 

    0x19252561,// 173 PAY 142 

    0x044a6799,// 174 PAY 143 

    0x90a72c5e,// 175 PAY 144 

    0x3d6bade3,// 176 PAY 145 

    0x34ebb6e6,// 177 PAY 146 

    0xe8db5e68,// 178 PAY 147 

    0x75240e86,// 179 PAY 148 

    0x55b28510,// 180 PAY 149 

    0x3909da18,// 181 PAY 150 

    0xa66106bf,// 182 PAY 151 

    0xa9f389a2,// 183 PAY 152 

    0x2aa0b900,// 184 PAY 153 

    0x7fdeb78d,// 185 PAY 154 

    0xe7000000,// 186 PAY 155 

/// STA is 1 words. 

/// STA num_pkts       : 6 

/// STA pkt_idx        : 44 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xf8 

    0x00b1f806 // 187 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt54_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x0e 

/// ECH pdu_tag        : 0x00 

    0x000e0000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv insert_icv !check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x08000011,// 3 SCX   1 

    0x8045484b,// 4 SCX   2 

    0x00006382,// 5 SCX   3 

    0xba4cb14b,// 6 SCX   4 

    0x5a4a3f9e,// 7 SCX   5 

    0xa4138bef,// 8 SCX   6 

    0xcd76ac8e,// 9 SCX   7 

    0x21cd907a,// 10 SCX   8 

    0x5f716047,// 11 SCX   9 

    0x3ae8d06b,// 12 SCX  10 

    0x1320f093,// 13 SCX  11 

    0x3ac659b9,// 14 SCX  12 

    0x5d579d71,// 15 SCX  13 

    0xc966ccf5,// 16 SCX  14 

    0xa721ceab,// 17 SCX  15 

    0xba6f4283,// 18 SCX  16 

    0x31d12fe2,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 408 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 53 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 53 

/// BFD lencrypto      : 24 

/// BFD ofstcrypto     : 28 

/// BFD (ofst+len)cry  : 52 

/// BFD ofstiv         : 0 

/// BFD ofsticv        : 240 

    0x00000035,// 20 BFD   1 

    0x001c0018,// 21 BFD   2 

    0x00f00000,// 22 BFD   3 

/// MFM is 2 words. 

/// MFM vldnibs        : c 

    0x0c004a89,// 23 MFM   1 

    0xd21c729c,// 24 MFM   2 

/// BDA is 103 words. 

/// BDA size     is 408 (0x198) 

/// BDA id       is 0x5aee 

    0x01985aee,// 25 BDA   1 

/// PAY Generic Data size   : 408 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x785c4c46,// 26 PAY   1 

    0x19fbe3e0,// 27 PAY   2 

    0xfa0126c2,// 28 PAY   3 

    0xb8b3e39b,// 29 PAY   4 

    0x74090499,// 30 PAY   5 

    0x2b44c54f,// 31 PAY   6 

    0x580e0870,// 32 PAY   7 

    0x2db84531,// 33 PAY   8 

    0x370ff8d5,// 34 PAY   9 

    0x64c42947,// 35 PAY  10 

    0x2c0f4b5d,// 36 PAY  11 

    0x6e36ceb2,// 37 PAY  12 

    0x3b99d920,// 38 PAY  13 

    0x58eac9da,// 39 PAY  14 

    0x33f37558,// 40 PAY  15 

    0xd72ca5f6,// 41 PAY  16 

    0xe51376a8,// 42 PAY  17 

    0xf8cdf913,// 43 PAY  18 

    0x3e134360,// 44 PAY  19 

    0xc566105a,// 45 PAY  20 

    0x3406d6fa,// 46 PAY  21 

    0xfa4207d9,// 47 PAY  22 

    0xed92db5f,// 48 PAY  23 

    0x1dc87d3b,// 49 PAY  24 

    0x483e2650,// 50 PAY  25 

    0x1db5be4a,// 51 PAY  26 

    0x1ebbd980,// 52 PAY  27 

    0x4ff92b46,// 53 PAY  28 

    0x1d909ba3,// 54 PAY  29 

    0x253c3c17,// 55 PAY  30 

    0x59f825f4,// 56 PAY  31 

    0x828d4619,// 57 PAY  32 

    0x36c9959e,// 58 PAY  33 

    0xfe8d1594,// 59 PAY  34 

    0x9aef6a90,// 60 PAY  35 

    0xa4ab0822,// 61 PAY  36 

    0xf8c9696f,// 62 PAY  37 

    0xdef40e1d,// 63 PAY  38 

    0x40aa7293,// 64 PAY  39 

    0x5012140b,// 65 PAY  40 

    0x88664051,// 66 PAY  41 

    0xf4248802,// 67 PAY  42 

    0x81d9023e,// 68 PAY  43 

    0x990c3013,// 69 PAY  44 

    0x9d7eb2d9,// 70 PAY  45 

    0xc1257b7c,// 71 PAY  46 

    0x05928f63,// 72 PAY  47 

    0xce5c9d05,// 73 PAY  48 

    0x33b4830a,// 74 PAY  49 

    0x206650b9,// 75 PAY  50 

    0x93fc6bb8,// 76 PAY  51 

    0x93f302b9,// 77 PAY  52 

    0x658dc0a0,// 78 PAY  53 

    0xdddcba2c,// 79 PAY  54 

    0x3b40e697,// 80 PAY  55 

    0xf0b1b2c0,// 81 PAY  56 

    0x28098939,// 82 PAY  57 

    0xcb4d5685,// 83 PAY  58 

    0xf3e4f3cf,// 84 PAY  59 

    0xb174071f,// 85 PAY  60 

    0xa5beb2c6,// 86 PAY  61 

    0x16fb6105,// 87 PAY  62 

    0xc918bad5,// 88 PAY  63 

    0x46868b99,// 89 PAY  64 

    0xb4cc07bc,// 90 PAY  65 

    0xd8d76d2a,// 91 PAY  66 

    0xbd59a045,// 92 PAY  67 

    0x412c1380,// 93 PAY  68 

    0x5e11c0a8,// 94 PAY  69 

    0xd771f3cd,// 95 PAY  70 

    0x3ab56fd7,// 96 PAY  71 

    0x2cb29269,// 97 PAY  72 

    0x90cd4c5a,// 98 PAY  73 

    0xcbcbf620,// 99 PAY  74 

    0xfb3b4cbd,// 100 PAY  75 

    0x7f48d728,// 101 PAY  76 

    0xc5c76a5c,// 102 PAY  77 

    0xd9ad4f15,// 103 PAY  78 

    0x226fb674,// 104 PAY  79 

    0x22d0b719,// 105 PAY  80 

    0xb89a15fb,// 106 PAY  81 

    0xa93d6ca2,// 107 PAY  82 

    0x74218fc1,// 108 PAY  83 

    0x1230a7d8,// 109 PAY  84 

    0x3a7e1db1,// 110 PAY  85 

    0x7aa453d9,// 111 PAY  86 

    0x2236dace,// 112 PAY  87 

    0x76df1345,// 113 PAY  88 

    0xb20dbf5b,// 114 PAY  89 

    0x3dee02ba,// 115 PAY  90 

    0xb89e65a2,// 116 PAY  91 

    0xf7093071,// 117 PAY  92 

    0x73fb15e4,// 118 PAY  93 

    0xe068062d,// 119 PAY  94 

    0x5f19aa97,// 120 PAY  95 

    0x2d0dcf41,// 121 PAY  96 

    0xdcadfc9f,// 122 PAY  97 

    0xc33d6857,// 123 PAY  98 

    0xcfb6680e,// 124 PAY  99 

    0x9f0d29a7,// 125 PAY 100 

    0xfeb6b0af,// 126 PAY 101 

    0xfdbaf1e3,// 127 PAY 102 

/// STA is 1 words. 

/// STA num_pkts       : 33 

/// STA pkt_idx        : 109 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x19 

    0x01b41921 // 128 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt55_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x03 

/// ECH pdu_tag        : 0x00 

    0x00030000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x5 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x08000011,// 3 SCX   1 

    0x804448b2,// 4 SCX   2 

    0x00003582,// 5 SCX   3 

    0x46b5dd68,// 6 SCX   4 

    0x3966cc0b,// 7 SCX   5 

    0x5b2535c0,// 8 SCX   6 

    0xa106ee22,// 9 SCX   7 

    0x7593644e,// 10 SCX   8 

    0xfeb0a335,// 11 SCX   9 

    0xa13e06f4,// 12 SCX  10 

    0xb276728c,// 13 SCX  11 

    0xf0915f1a,// 14 SCX  12 

    0x122e7aa6,// 15 SCX  13 

    0x8e575375,// 16 SCX  14 

    0xab82f979,// 17 SCX  15 

    0x4ebcd29e,// 18 SCX  16 

    0x72b65ebd,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 611 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 521 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 521 

/// BFD lencrypto      : 400 

/// BFD ofstcrypto     : 92 

/// BFD (ofst+len)cry  : 492 

/// BFD ofstiv         : 44 

/// BFD ofsticv        : 552 

    0x00000209,// 20 BFD   1 

    0x005c0190,// 21 BFD   2 

    0x0228002c,// 22 BFD   3 

/// MFM is 9 words. 

/// MFM vldnibs        : 42 

    0x42003b6d,// 23 MFM   1 

    0xd6d0e13d,// 24 MFM   2 

    0xeebe3a16,// 25 MFM   3 

    0x7ec2085b,// 26 MFM   4 

    0xdd37703a,// 27 MFM   5 

    0xab52fe7c,// 28 MFM   6 

    0x1dee382d,// 29 MFM   7 

    0xc79b0aea,// 30 MFM   8 

    0xdd289300,// 31 MFM   9 

/// BDA is 154 words. 

/// BDA size     is 611 (0x263) 

/// BDA id       is 0x49d1 

    0x026349d1,// 32 BDA   1 

/// PAY Generic Data size   : 611 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x4e5c5313,// 33 PAY   1 

    0xb99f0b67,// 34 PAY   2 

    0x4eb6b62b,// 35 PAY   3 

    0x22ebbb32,// 36 PAY   4 

    0xf975a1b6,// 37 PAY   5 

    0x11079e3c,// 38 PAY   6 

    0x9ccee6cf,// 39 PAY   7 

    0xb1a9896e,// 40 PAY   8 

    0x89eecaa6,// 41 PAY   9 

    0x6de85ae1,// 42 PAY  10 

    0xff852da7,// 43 PAY  11 

    0x0649b26d,// 44 PAY  12 

    0x8462f12c,// 45 PAY  13 

    0x0b3bd1de,// 46 PAY  14 

    0xac023ef3,// 47 PAY  15 

    0x99a2591d,// 48 PAY  16 

    0xb88aea28,// 49 PAY  17 

    0x9adeabb0,// 50 PAY  18 

    0x1c138f8d,// 51 PAY  19 

    0xb3d718af,// 52 PAY  20 

    0x4d5331e8,// 53 PAY  21 

    0x28c5fa65,// 54 PAY  22 

    0xa372c325,// 55 PAY  23 

    0xb9a1ea1b,// 56 PAY  24 

    0x170abedd,// 57 PAY  25 

    0xdb17185a,// 58 PAY  26 

    0x817217b4,// 59 PAY  27 

    0xb7f06246,// 60 PAY  28 

    0xb0ce8fbf,// 61 PAY  29 

    0xc43d2ea9,// 62 PAY  30 

    0x1307f08b,// 63 PAY  31 

    0x8c27bdaf,// 64 PAY  32 

    0xeac39925,// 65 PAY  33 

    0x144e619d,// 66 PAY  34 

    0x4e492586,// 67 PAY  35 

    0x7a83dc10,// 68 PAY  36 

    0xbc83f3d4,// 69 PAY  37 

    0x32504468,// 70 PAY  38 

    0xb26bbdec,// 71 PAY  39 

    0xb9db135b,// 72 PAY  40 

    0x58a4ddfa,// 73 PAY  41 

    0xc5f483d9,// 74 PAY  42 

    0x367158bb,// 75 PAY  43 

    0xc3f6f1af,// 76 PAY  44 

    0x35959aac,// 77 PAY  45 

    0x7a263778,// 78 PAY  46 

    0xd4e942bf,// 79 PAY  47 

    0xbf911d04,// 80 PAY  48 

    0x4bc661b4,// 81 PAY  49 

    0xd2ae5c65,// 82 PAY  50 

    0xb3c2193c,// 83 PAY  51 

    0xa051359b,// 84 PAY  52 

    0x8328d271,// 85 PAY  53 

    0x3b4f7c99,// 86 PAY  54 

    0xbf3d26b9,// 87 PAY  55 

    0xf8c0c2fa,// 88 PAY  56 

    0xb1108796,// 89 PAY  57 

    0x828a3be6,// 90 PAY  58 

    0xb0a0c00c,// 91 PAY  59 

    0x327b2bd4,// 92 PAY  60 

    0xbec5a38e,// 93 PAY  61 

    0x3f5b91ac,// 94 PAY  62 

    0xd269aa69,// 95 PAY  63 

    0x2abce13d,// 96 PAY  64 

    0x943d858b,// 97 PAY  65 

    0xe366a0d2,// 98 PAY  66 

    0x506c792b,// 99 PAY  67 

    0x403426b5,// 100 PAY  68 

    0x27137a69,// 101 PAY  69 

    0x4e7d4ef5,// 102 PAY  70 

    0xe1a05d3c,// 103 PAY  71 

    0xf9b74d76,// 104 PAY  72 

    0x71fd38b4,// 105 PAY  73 

    0x9aa134c2,// 106 PAY  74 

    0x75258269,// 107 PAY  75 

    0x12e33b2f,// 108 PAY  76 

    0x4d5e49fe,// 109 PAY  77 

    0x7ff6dd7f,// 110 PAY  78 

    0xab361f89,// 111 PAY  79 

    0x356ec9e9,// 112 PAY  80 

    0xb39c23b8,// 113 PAY  81 

    0xece4cdbc,// 114 PAY  82 

    0x1d79dc3a,// 115 PAY  83 

    0xd9b486d3,// 116 PAY  84 

    0xd55ac35d,// 117 PAY  85 

    0x532e728a,// 118 PAY  86 

    0x611f3365,// 119 PAY  87 

    0x3d613bfc,// 120 PAY  88 

    0x73b0dcdf,// 121 PAY  89 

    0x91900686,// 122 PAY  90 

    0x9d0a0f9d,// 123 PAY  91 

    0xd24c3d6e,// 124 PAY  92 

    0x029da194,// 125 PAY  93 

    0x58fd3056,// 126 PAY  94 

    0xddc5ed73,// 127 PAY  95 

    0x38f09a43,// 128 PAY  96 

    0xd70a4f63,// 129 PAY  97 

    0x4e5e595e,// 130 PAY  98 

    0xfa5ec991,// 131 PAY  99 

    0xf75e6fd3,// 132 PAY 100 

    0x4890a2d8,// 133 PAY 101 

    0xed9d9c59,// 134 PAY 102 

    0xf8f86d34,// 135 PAY 103 

    0xa8cfc1eb,// 136 PAY 104 

    0x7d9b3af3,// 137 PAY 105 

    0x781a9777,// 138 PAY 106 

    0xba19eef6,// 139 PAY 107 

    0x3c39cf72,// 140 PAY 108 

    0x972b2d83,// 141 PAY 109 

    0xf51ad361,// 142 PAY 110 

    0xf04f346f,// 143 PAY 111 

    0x80f3700d,// 144 PAY 112 

    0x39822bde,// 145 PAY 113 

    0x3e4faba5,// 146 PAY 114 

    0x5d9c6f04,// 147 PAY 115 

    0x4bfeabb6,// 148 PAY 116 

    0x946e41ec,// 149 PAY 117 

    0xa46db9a4,// 150 PAY 118 

    0x29b70bad,// 151 PAY 119 

    0x9a12a0c7,// 152 PAY 120 

    0x14bc9ff5,// 153 PAY 121 

    0x683e9fda,// 154 PAY 122 

    0x26d6cf68,// 155 PAY 123 

    0x2d29d60b,// 156 PAY 124 

    0xf4d5387a,// 157 PAY 125 

    0x9925b0d3,// 158 PAY 126 

    0xb1b48d5d,// 159 PAY 127 

    0x9b27fa1c,// 160 PAY 128 

    0xb0a5aa2f,// 161 PAY 129 

    0xcec35821,// 162 PAY 130 

    0x1c9c9fe9,// 163 PAY 131 

    0xc2542d7b,// 164 PAY 132 

    0xbff41a63,// 165 PAY 133 

    0xdbb464e1,// 166 PAY 134 

    0xc2e2f861,// 167 PAY 135 

    0x59c0e5d9,// 168 PAY 136 

    0xb9c1af51,// 169 PAY 137 

    0x992ea003,// 170 PAY 138 

    0x9444fd97,// 171 PAY 139 

    0x6a11745b,// 172 PAY 140 

    0x65274d0a,// 173 PAY 141 

    0x336719f7,// 174 PAY 142 

    0x425d6b4d,// 175 PAY 143 

    0x26a0e74e,// 176 PAY 144 

    0x424a2cfa,// 177 PAY 145 

    0xd088901c,// 178 PAY 146 

    0x71269859,// 179 PAY 147 

    0xff737a8d,// 180 PAY 148 

    0x397d04f8,// 181 PAY 149 

    0xa52ae0aa,// 182 PAY 150 

    0xb883ace4,// 183 PAY 151 

    0x1f25e67e,// 184 PAY 152 

    0x11b29500,// 185 PAY 153 

/// STA is 1 words. 

/// STA num_pkts       : 215 

/// STA pkt_idx        : 91 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xc4 

    0x016cc4d7 // 186 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt56_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x0b 

/// ECH pdu_tag        : 0x00 

    0x000b0000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x5 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0800000f,// 3 SCX   1 

    0x80414840,// 4 SCX   2 

    0x00005500,// 5 SCX   3 

    0x5a85be8e,// 6 SCX   4 

    0x45292c97,// 7 SCX   5 

    0x1e8d56a0,// 8 SCX   6 

    0xc58b6cab,// 9 SCX   7 

    0x56ed1601,// 10 SCX   8 

    0x96021348,// 11 SCX   9 

    0xf5e2e378,// 12 SCX  10 

    0x104a5deb,// 13 SCX  11 

    0x82896ffe,// 14 SCX  12 

    0x895283e3,// 15 SCX  13 

    0x350a8236,// 16 SCX  14 

    0x2887b963,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 349 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 291 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 291 

/// BFD lencrypto      : 144 

/// BFD ofstcrypto     : 120 

/// BFD (ofst+len)cry  : 264 

/// BFD ofstiv         : 112 

/// BFD ofsticv        : 300 

    0x00000123,// 18 BFD   1 

    0x00780090,// 19 BFD   2 

    0x012c0070,// 20 BFD   3 

/// MFM is 8 words. 

/// MFM vldnibs        : 39 

    0x3900858d,// 21 MFM   1 

    0xb99e7eb7,// 22 MFM   2 

    0x2611b532,// 23 MFM   3 

    0xb51600c0,// 24 MFM   4 

    0xe68b184e,// 25 MFM   5 

    0x90d1a28d,// 26 MFM   6 

    0xa1118db2,// 27 MFM   7 

    0x24dba000,// 28 MFM   8 

/// BDA is 89 words. 

/// BDA size     is 349 (0x15d) 

/// BDA id       is 0x1b7b 

    0x015d1b7b,// 29 BDA   1 

/// PAY Generic Data size   : 349 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0xf0a27648,// 30 PAY   1 

    0x1bdae625,// 31 PAY   2 

    0x4cc5e173,// 32 PAY   3 

    0x1fc0279f,// 33 PAY   4 

    0xbb09934b,// 34 PAY   5 

    0xbe50f83c,// 35 PAY   6 

    0x2163faa5,// 36 PAY   7 

    0x5cb87f18,// 37 PAY   8 

    0xeab902dd,// 38 PAY   9 

    0xe9f51191,// 39 PAY  10 

    0x10d2e7ae,// 40 PAY  11 

    0x1502fd18,// 41 PAY  12 

    0x9d969f8e,// 42 PAY  13 

    0x412c06b4,// 43 PAY  14 

    0xc04d9788,// 44 PAY  15 

    0x14af3a4a,// 45 PAY  16 

    0xd400542f,// 46 PAY  17 

    0x91f919d1,// 47 PAY  18 

    0x0358fd8c,// 48 PAY  19 

    0x70f07c4d,// 49 PAY  20 

    0xebc6bf7a,// 50 PAY  21 

    0x82287cfa,// 51 PAY  22 

    0x1091f923,// 52 PAY  23 

    0xd0d34b95,// 53 PAY  24 

    0xd472c184,// 54 PAY  25 

    0xd4be5368,// 55 PAY  26 

    0xd6ca9570,// 56 PAY  27 

    0xf545f4fa,// 57 PAY  28 

    0xd9b6ef45,// 58 PAY  29 

    0x2d0301d2,// 59 PAY  30 

    0x78887bc2,// 60 PAY  31 

    0x93684919,// 61 PAY  32 

    0xe5a526f5,// 62 PAY  33 

    0x606dfd5b,// 63 PAY  34 

    0x678d8b88,// 64 PAY  35 

    0x98eac242,// 65 PAY  36 

    0xfe166642,// 66 PAY  37 

    0xa550edd3,// 67 PAY  38 

    0xaa58e84c,// 68 PAY  39 

    0xa88ec52d,// 69 PAY  40 

    0xefb0072a,// 70 PAY  41 

    0x8b9c4521,// 71 PAY  42 

    0xe424cfb0,// 72 PAY  43 

    0x56b9869d,// 73 PAY  44 

    0xdf48ab20,// 74 PAY  45 

    0xac795082,// 75 PAY  46 

    0x5b6ecf4e,// 76 PAY  47 

    0xe13d6d48,// 77 PAY  48 

    0xb77b5377,// 78 PAY  49 

    0xaefa5f32,// 79 PAY  50 

    0x102413f6,// 80 PAY  51 

    0x1b7ff8e6,// 81 PAY  52 

    0x13df2a3a,// 82 PAY  53 

    0xf398bbcf,// 83 PAY  54 

    0x7aed51f9,// 84 PAY  55 

    0xa3e2ff77,// 85 PAY  56 

    0x98130e06,// 86 PAY  57 

    0x8991899a,// 87 PAY  58 

    0xd44334da,// 88 PAY  59 

    0x764485f1,// 89 PAY  60 

    0x2304c2e0,// 90 PAY  61 

    0x329a8ab2,// 91 PAY  62 

    0x5ac7e8be,// 92 PAY  63 

    0x5b54c080,// 93 PAY  64 

    0xaadd18ba,// 94 PAY  65 

    0x228d5f28,// 95 PAY  66 

    0x69bf8c5a,// 96 PAY  67 

    0xd68b1470,// 97 PAY  68 

    0x0a2e61e8,// 98 PAY  69 

    0x0d31e21a,// 99 PAY  70 

    0xa0f2f439,// 100 PAY  71 

    0xef925fb0,// 101 PAY  72 

    0xd43c541f,// 102 PAY  73 

    0xeb8f5124,// 103 PAY  74 

    0xc42a2d34,// 104 PAY  75 

    0x79948a7a,// 105 PAY  76 

    0x3c37ffd3,// 106 PAY  77 

    0xcea64b87,// 107 PAY  78 

    0x776f25d9,// 108 PAY  79 

    0xd5636a68,// 109 PAY  80 

    0xf626603a,// 110 PAY  81 

    0x69fdb253,// 111 PAY  82 

    0xc889ec7e,// 112 PAY  83 

    0xc1fa2b60,// 113 PAY  84 

    0x8290c69d,// 114 PAY  85 

    0x2d34f2ac,// 115 PAY  86 

    0xb57b9ea6,// 116 PAY  87 

    0xfa000000,// 117 PAY  88 

/// STA is 1 words. 

/// STA num_pkts       : 160 

/// STA pkt_idx        : 180 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xf7 

    0x02d1f7a0 // 118 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt57_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x08 

/// ECH pdu_tag        : 0x00 

    0x00080000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0800000f,// 3 SCX   1 

    0x80404821,// 4 SCX   2 

    0x00002400,// 5 SCX   3 

    0x12ac968c,// 6 SCX   4 

    0x39d405fd,// 7 SCX   5 

    0x79cd73d9,// 8 SCX   6 

    0xf557a38f,// 9 SCX   7 

    0xea6f08a9,// 10 SCX   8 

    0x68c189b3,// 11 SCX   9 

    0x44ee080c,// 12 SCX  10 

    0x1be25322,// 13 SCX  11 

    0x0fb0a62a,// 14 SCX  12 

    0x14e5b5fb,// 15 SCX  13 

    0x5f5c4a2a,// 16 SCX  14 

    0xa6bc1d97,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 1035 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 501 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 501 

/// BFD lencrypto      : 256 

/// BFD ofstcrypto     : 52 

/// BFD (ofst+len)cry  : 308 

/// BFD ofstiv         : 8 

/// BFD ofsticv        : 636 

    0x000001f5,// 18 BFD   1 

    0x00340100,// 19 BFD   2 

    0x027c0008,// 20 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7b 

    0x7b0043f3,// 21 MFM   1 

    0x546827c2,// 22 MFM   2 

    0x91646232,// 23 MFM   3 

    0x535cef9f,// 24 MFM   4 

    0xe1d05016,// 25 MFM   5 

    0xba3b8681,// 26 MFM   6 

    0xa1e23c79,// 27 MFM   7 

    0xec3e4a2e,// 28 MFM   8 

    0xb79bfc28,// 29 MFM   9 

    0x6cdc9302,// 30 MFM  10 

    0xfc995c92,// 31 MFM  11 

    0xc07cd8ac,// 32 MFM  12 

    0x9ea070e8,// 33 MFM  13 

    0xa362a820,// 34 MFM  14 

    0x07bdfccf,// 35 MFM  15 

    0xb4e83120,// 36 MFM  16 

/// BDA is 260 words. 

/// BDA size     is 1035 (0x40b) 

/// BDA id       is 0xf427 

    0x040bf427,// 37 BDA   1 

/// PAY Generic Data size   : 1035 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x4688e65c,// 38 PAY   1 

    0xc3450fce,// 39 PAY   2 

    0xf43554cf,// 40 PAY   3 

    0x58fee916,// 41 PAY   4 

    0x4c5d7008,// 42 PAY   5 

    0xbf824a22,// 43 PAY   6 

    0x1cb9c2ed,// 44 PAY   7 

    0x0dd58a81,// 45 PAY   8 

    0x692ff012,// 46 PAY   9 

    0x513baaeb,// 47 PAY  10 

    0xf778b767,// 48 PAY  11 

    0x66a487fb,// 49 PAY  12 

    0xfb3c5564,// 50 PAY  13 

    0x73cea229,// 51 PAY  14 

    0x89b427da,// 52 PAY  15 

    0xb0952196,// 53 PAY  16 

    0x14eab2ca,// 54 PAY  17 

    0x7055c130,// 55 PAY  18 

    0x19d17008,// 56 PAY  19 

    0x8b3f86ef,// 57 PAY  20 

    0xb7be68cc,// 58 PAY  21 

    0xe43ebb67,// 59 PAY  22 

    0x70636249,// 60 PAY  23 

    0xc39b4557,// 61 PAY  24 

    0x3c87c27c,// 62 PAY  25 

    0x4047e77e,// 63 PAY  26 

    0x8b61d381,// 64 PAY  27 

    0x6c1e828b,// 65 PAY  28 

    0xcc89ba3a,// 66 PAY  29 

    0x9988ae92,// 67 PAY  30 

    0x1e2f779e,// 68 PAY  31 

    0x387f6895,// 69 PAY  32 

    0x198feb4e,// 70 PAY  33 

    0x9c8ed625,// 71 PAY  34 

    0x5792a03b,// 72 PAY  35 

    0x98bbc4e1,// 73 PAY  36 

    0xccd9db5d,// 74 PAY  37 

    0x1fe47541,// 75 PAY  38 

    0xcec8c2f9,// 76 PAY  39 

    0xd1e13fae,// 77 PAY  40 

    0x00a6312c,// 78 PAY  41 

    0x3a9af3b7,// 79 PAY  42 

    0x1b071c12,// 80 PAY  43 

    0x139761d2,// 81 PAY  44 

    0x48749f89,// 82 PAY  45 

    0xa9d12cf4,// 83 PAY  46 

    0x16f59c3a,// 84 PAY  47 

    0x2a329b8b,// 85 PAY  48 

    0x09efb019,// 86 PAY  49 

    0xe488c37e,// 87 PAY  50 

    0x2855a219,// 88 PAY  51 

    0x4953ad75,// 89 PAY  52 

    0x0263ef8f,// 90 PAY  53 

    0xfc0f990e,// 91 PAY  54 

    0xc75060e0,// 92 PAY  55 

    0x85f683bb,// 93 PAY  56 

    0x415e7d1f,// 94 PAY  57 

    0x51124eb1,// 95 PAY  58 

    0xe202904e,// 96 PAY  59 

    0x615d8f13,// 97 PAY  60 

    0x7b13544d,// 98 PAY  61 

    0x8fd203c7,// 99 PAY  62 

    0x7e1f8a6e,// 100 PAY  63 

    0xaf3f8348,// 101 PAY  64 

    0x90269701,// 102 PAY  65 

    0x56538a9e,// 103 PAY  66 

    0x20fc593f,// 104 PAY  67 

    0x43a6e30b,// 105 PAY  68 

    0x0dd5a4cc,// 106 PAY  69 

    0x2be2b40f,// 107 PAY  70 

    0x13c58a3b,// 108 PAY  71 

    0x2e5cef63,// 109 PAY  72 

    0xa3edefa3,// 110 PAY  73 

    0x57771838,// 111 PAY  74 

    0xe96cc2d2,// 112 PAY  75 

    0x2cb238dd,// 113 PAY  76 

    0x8ca6fe24,// 114 PAY  77 

    0x0ce39f1d,// 115 PAY  78 

    0xef686a2b,// 116 PAY  79 

    0xa5ee6b88,// 117 PAY  80 

    0xf7fb816c,// 118 PAY  81 

    0x36a2a7e9,// 119 PAY  82 

    0x01e15406,// 120 PAY  83 

    0xd18329a8,// 121 PAY  84 

    0x78baa1f1,// 122 PAY  85 

    0xd0fec72d,// 123 PAY  86 

    0xfcae0978,// 124 PAY  87 

    0x7d76516d,// 125 PAY  88 

    0x8d95422d,// 126 PAY  89 

    0x17f71de5,// 127 PAY  90 

    0x75224a54,// 128 PAY  91 

    0xd39bfb6a,// 129 PAY  92 

    0xee31a0b8,// 130 PAY  93 

    0x39746012,// 131 PAY  94 

    0x5f3ec2c6,// 132 PAY  95 

    0x8a7624be,// 133 PAY  96 

    0x10950b22,// 134 PAY  97 

    0xf3683204,// 135 PAY  98 

    0x9acc281c,// 136 PAY  99 

    0x4cffa542,// 137 PAY 100 

    0x10d5185a,// 138 PAY 101 

    0x63a15a44,// 139 PAY 102 

    0x6acfa303,// 140 PAY 103 

    0x447aaf36,// 141 PAY 104 

    0x77e00163,// 142 PAY 105 

    0xc21fae96,// 143 PAY 106 

    0x48064ca1,// 144 PAY 107 

    0x3552b5f7,// 145 PAY 108 

    0x0cf50f6d,// 146 PAY 109 

    0x49bdbe1b,// 147 PAY 110 

    0xeca2dd89,// 148 PAY 111 

    0x792083c6,// 149 PAY 112 

    0x10f9d7bd,// 150 PAY 113 

    0x2f085e21,// 151 PAY 114 

    0x97c8dfa9,// 152 PAY 115 

    0xc04dc484,// 153 PAY 116 

    0x598ba57f,// 154 PAY 117 

    0x7cfd587f,// 155 PAY 118 

    0x72e63ada,// 156 PAY 119 

    0xdad53187,// 157 PAY 120 

    0x86dc2f84,// 158 PAY 121 

    0x3933ff68,// 159 PAY 122 

    0xed615647,// 160 PAY 123 

    0x32b1ccf2,// 161 PAY 124 

    0x5fd65fbd,// 162 PAY 125 

    0x802124af,// 163 PAY 126 

    0x0c533cdd,// 164 PAY 127 

    0x28e89ad1,// 165 PAY 128 

    0x442adf51,// 166 PAY 129 

    0x25bb0485,// 167 PAY 130 

    0x63a06e20,// 168 PAY 131 

    0x65c63ff9,// 169 PAY 132 

    0x6cf52b34,// 170 PAY 133 

    0x34cf64d4,// 171 PAY 134 

    0x6f28985c,// 172 PAY 135 

    0x0501e96b,// 173 PAY 136 

    0xe8edfded,// 174 PAY 137 

    0x9546e2f0,// 175 PAY 138 

    0x6790097b,// 176 PAY 139 

    0xf0eb10c6,// 177 PAY 140 

    0xbd6bd919,// 178 PAY 141 

    0x2ebd1ab2,// 179 PAY 142 

    0x9a7f3aef,// 180 PAY 143 

    0xc13222f3,// 181 PAY 144 

    0xdc6969d0,// 182 PAY 145 

    0x42a963dd,// 183 PAY 146 

    0x46e1b130,// 184 PAY 147 

    0x021120f6,// 185 PAY 148 

    0x159bd2c7,// 186 PAY 149 

    0x39590e15,// 187 PAY 150 

    0x169c3c01,// 188 PAY 151 

    0x3816ec22,// 189 PAY 152 

    0xada43646,// 190 PAY 153 

    0xb0a2a1ac,// 191 PAY 154 

    0x5f19ee25,// 192 PAY 155 

    0xd734526c,// 193 PAY 156 

    0x82281f88,// 194 PAY 157 

    0xbb542a79,// 195 PAY 158 

    0x626efaa9,// 196 PAY 159 

    0x50d62ae9,// 197 PAY 160 

    0x54b40335,// 198 PAY 161 

    0x654a2096,// 199 PAY 162 

    0x0b3448b9,// 200 PAY 163 

    0x641c5ffb,// 201 PAY 164 

    0x6457cb6d,// 202 PAY 165 

    0xac559ec4,// 203 PAY 166 

    0x898bc5da,// 204 PAY 167 

    0x157dcc21,// 205 PAY 168 

    0x66fc0f19,// 206 PAY 169 

    0x9e68534e,// 207 PAY 170 

    0x1b18980a,// 208 PAY 171 

    0xadf119c1,// 209 PAY 172 

    0xaae2caa5,// 210 PAY 173 

    0xe3662e0e,// 211 PAY 174 

    0xfffb242e,// 212 PAY 175 

    0xdac8647e,// 213 PAY 176 

    0xe171afa7,// 214 PAY 177 

    0x5e36e304,// 215 PAY 178 

    0xab7bfe25,// 216 PAY 179 

    0xb9545de5,// 217 PAY 180 

    0x17065a9e,// 218 PAY 181 

    0x2d09c42e,// 219 PAY 182 

    0x3b8017c5,// 220 PAY 183 

    0x3859d2ad,// 221 PAY 184 

    0x16d7837b,// 222 PAY 185 

    0x6ff46e2d,// 223 PAY 186 

    0x8012b1c3,// 224 PAY 187 

    0x59096c9d,// 225 PAY 188 

    0x4c246aec,// 226 PAY 189 

    0x00d4dcd2,// 227 PAY 190 

    0xb55b4d52,// 228 PAY 191 

    0x562793b3,// 229 PAY 192 

    0x026eaaee,// 230 PAY 193 

    0x6deb43a7,// 231 PAY 194 

    0x1c32d04d,// 232 PAY 195 

    0x3b943567,// 233 PAY 196 

    0xb004ccaf,// 234 PAY 197 

    0x81abe610,// 235 PAY 198 

    0x85a78a49,// 236 PAY 199 

    0x097f6de5,// 237 PAY 200 

    0x574a653e,// 238 PAY 201 

    0xfe2cb8b3,// 239 PAY 202 

    0x1869fc77,// 240 PAY 203 

    0x48bab9fd,// 241 PAY 204 

    0xd1f192e2,// 242 PAY 205 

    0x655b3516,// 243 PAY 206 

    0x50668e0c,// 244 PAY 207 

    0x84a23bff,// 245 PAY 208 

    0x525c4fe8,// 246 PAY 209 

    0x453b78c3,// 247 PAY 210 

    0x167e4fe2,// 248 PAY 211 

    0x79a11386,// 249 PAY 212 

    0x5be1108f,// 250 PAY 213 

    0xae0670f6,// 251 PAY 214 

    0x68c551ea,// 252 PAY 215 

    0xd9c55738,// 253 PAY 216 

    0x9b80c2e3,// 254 PAY 217 

    0x862e41d5,// 255 PAY 218 

    0x5169cdb0,// 256 PAY 219 

    0x6b107fc4,// 257 PAY 220 

    0x1f925220,// 258 PAY 221 

    0xd11cd97c,// 259 PAY 222 

    0xe8ca495f,// 260 PAY 223 

    0x303df882,// 261 PAY 224 

    0x2b610de5,// 262 PAY 225 

    0x7df17b7a,// 263 PAY 226 

    0xb041a573,// 264 PAY 227 

    0x779eb9dc,// 265 PAY 228 

    0x42a22fbb,// 266 PAY 229 

    0x96039a79,// 267 PAY 230 

    0x91a5faa8,// 268 PAY 231 

    0xcb32a219,// 269 PAY 232 

    0x01263dc4,// 270 PAY 233 

    0xa6d65128,// 271 PAY 234 

    0xf8cbb6e5,// 272 PAY 235 

    0xad28ad41,// 273 PAY 236 

    0x8f52eace,// 274 PAY 237 

    0x4e5237e6,// 275 PAY 238 

    0xfdc1c40a,// 276 PAY 239 

    0x461655a5,// 277 PAY 240 

    0xe48fecfa,// 278 PAY 241 

    0x8187bbc5,// 279 PAY 242 

    0x02f93a08,// 280 PAY 243 

    0x82a61ee7,// 281 PAY 244 

    0x35523b3e,// 282 PAY 245 

    0x2dace7b8,// 283 PAY 246 

    0x4ad0c18e,// 284 PAY 247 

    0x1a66be71,// 285 PAY 248 

    0x88d72be6,// 286 PAY 249 

    0xe34ce137,// 287 PAY 250 

    0xb628f549,// 288 PAY 251 

    0x80440f01,// 289 PAY 252 

    0xc7b92ae6,// 290 PAY 253 

    0x64f3a7ae,// 291 PAY 254 

    0xcb6eb0ae,// 292 PAY 255 

    0x2a9dffc2,// 293 PAY 256 

    0x6cc93002,// 294 PAY 257 

    0xa9a0b015,// 295 PAY 258 

    0x8d5fb900,// 296 PAY 259 

/// STA is 1 words. 

/// STA num_pkts       : 231 

/// STA pkt_idx        : 247 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x9 

    0x03dc09e7 // 297 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt58_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x0e 

/// ECH pdu_tag        : 0x00 

    0x000e0000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0800000f,// 3 SCX   1 

    0x8042482e,// 4 SCX   2 

    0x00003200,// 5 SCX   3 

    0x07276564,// 6 SCX   4 

    0x1cca43b9,// 7 SCX   5 

    0x9d771548,// 8 SCX   6 

    0x624915df,// 9 SCX   7 

    0x92daf3cb,// 10 SCX   8 

    0xf247849c,// 11 SCX   9 

    0x2a10472d,// 12 SCX  10 

    0x61c73f49,// 13 SCX  11 

    0xf3bb1358,// 14 SCX  12 

    0x3ac0bf69,// 15 SCX  13 

    0xb9c96f89,// 16 SCX  14 

    0xc641d8f0,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 1537 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1307 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1307 

/// BFD lencrypto      : 400 

/// BFD ofstcrypto     : 788 

/// BFD (ofst+len)cry  : 1188 

/// BFD ofstiv         : 472 

/// BFD ofsticv        : 1428 

    0x0000051b,// 18 BFD   1 

    0x03140190,// 19 BFD   2 

    0x059401d8,// 20 BFD   3 

/// MFM is 13 words. 

/// MFM vldnibs        : 5e 

    0x5e00503e,// 21 MFM   1 

    0x37902129,// 22 MFM   2 

    0x109e8153,// 23 MFM   3 

    0x318e2a08,// 24 MFM   4 

    0x634ee3d3,// 25 MFM   5 

    0xdfeac5a7,// 26 MFM   6 

    0x58d333bc,// 27 MFM   7 

    0x3ec41006,// 28 MFM   8 

    0x3717ab31,// 29 MFM   9 

    0xaeef1f9c,// 30 MFM  10 

    0x0dd9d33f,// 31 MFM  11 

    0x81b049f2,// 32 MFM  12 

    0xc0000000,// 33 MFM  13 

/// BDA is 386 words. 

/// BDA size     is 1537 (0x601) 

/// BDA id       is 0x5042 

    0x06015042,// 34 BDA   1 

/// PAY Generic Data size   : 1537 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x1411e8a7,// 35 PAY   1 

    0xb9d3a7ac,// 36 PAY   2 

    0x7f5a8b4a,// 37 PAY   3 

    0x610f490f,// 38 PAY   4 

    0xde88697b,// 39 PAY   5 

    0xe01434d9,// 40 PAY   6 

    0x426f708d,// 41 PAY   7 

    0x730ed8dd,// 42 PAY   8 

    0x7d9c71e9,// 43 PAY   9 

    0x8634e829,// 44 PAY  10 

    0x533676a9,// 45 PAY  11 

    0x0e75bd81,// 46 PAY  12 

    0xa7f98f0f,// 47 PAY  13 

    0x295f0909,// 48 PAY  14 

    0x47494c49,// 49 PAY  15 

    0x900d4cab,// 50 PAY  16 

    0x4de5d80a,// 51 PAY  17 

    0x98ddde5f,// 52 PAY  18 

    0xc984896d,// 53 PAY  19 

    0x15f65ba0,// 54 PAY  20 

    0x40ffcf57,// 55 PAY  21 

    0x23b1053b,// 56 PAY  22 

    0x1722ad3f,// 57 PAY  23 

    0x1c32ac62,// 58 PAY  24 

    0x7e63dacc,// 59 PAY  25 

    0x808fbb06,// 60 PAY  26 

    0x0679c151,// 61 PAY  27 

    0x1e28daca,// 62 PAY  28 

    0x2b2cf46c,// 63 PAY  29 

    0xd8237d7b,// 64 PAY  30 

    0x1a6e89b1,// 65 PAY  31 

    0xeacd7b94,// 66 PAY  32 

    0x07ed36a4,// 67 PAY  33 

    0xa001c041,// 68 PAY  34 

    0xb05bf173,// 69 PAY  35 

    0x081d6cd1,// 70 PAY  36 

    0xaec8dafb,// 71 PAY  37 

    0x25a58eac,// 72 PAY  38 

    0x9e9c3f6d,// 73 PAY  39 

    0x6875f8c4,// 74 PAY  40 

    0x761dc557,// 75 PAY  41 

    0x3e0a3e24,// 76 PAY  42 

    0xf40a4a3b,// 77 PAY  43 

    0x1da45178,// 78 PAY  44 

    0xb30c7dc9,// 79 PAY  45 

    0x74cfb848,// 80 PAY  46 

    0x850a226b,// 81 PAY  47 

    0x613a6cb1,// 82 PAY  48 

    0x496cb550,// 83 PAY  49 

    0xce8b9bb2,// 84 PAY  50 

    0x04f2b2fe,// 85 PAY  51 

    0x1b95bce9,// 86 PAY  52 

    0x21d00526,// 87 PAY  53 

    0xe159e064,// 88 PAY  54 

    0x94d338d1,// 89 PAY  55 

    0x487f80d7,// 90 PAY  56 

    0x5f6ab3c1,// 91 PAY  57 

    0xbce71629,// 92 PAY  58 

    0xbeb91018,// 93 PAY  59 

    0x29893e11,// 94 PAY  60 

    0xd6499a03,// 95 PAY  61 

    0xbd939568,// 96 PAY  62 

    0x68d878e2,// 97 PAY  63 

    0x3e0697b1,// 98 PAY  64 

    0x4ad48c95,// 99 PAY  65 

    0x61ed2166,// 100 PAY  66 

    0x88c3a732,// 101 PAY  67 

    0x2057be90,// 102 PAY  68 

    0x8ab2c2c9,// 103 PAY  69 

    0x84d9c269,// 104 PAY  70 

    0xe0769b9e,// 105 PAY  71 

    0x61fce538,// 106 PAY  72 

    0x41d80120,// 107 PAY  73 

    0x24046ac8,// 108 PAY  74 

    0x1979e7d2,// 109 PAY  75 

    0x9f14795e,// 110 PAY  76 

    0x67d05eb7,// 111 PAY  77 

    0xa000cec5,// 112 PAY  78 

    0x4cec2db5,// 113 PAY  79 

    0x983353ad,// 114 PAY  80 

    0xb8f21211,// 115 PAY  81 

    0x05bd4f01,// 116 PAY  82 

    0xb8c11307,// 117 PAY  83 

    0xbf3812dd,// 118 PAY  84 

    0x6858e07b,// 119 PAY  85 

    0x9ae298d6,// 120 PAY  86 

    0x69dd5d50,// 121 PAY  87 

    0x4ba28e2a,// 122 PAY  88 

    0x60150607,// 123 PAY  89 

    0x969e3769,// 124 PAY  90 

    0x237dccae,// 125 PAY  91 

    0x19601f5d,// 126 PAY  92 

    0xce270785,// 127 PAY  93 

    0xe1386fb8,// 128 PAY  94 

    0xf83db524,// 129 PAY  95 

    0xc4eeddc2,// 130 PAY  96 

    0x4e043b89,// 131 PAY  97 

    0x0b80c2c2,// 132 PAY  98 

    0x4c5a7fd3,// 133 PAY  99 

    0x38ffb19b,// 134 PAY 100 

    0x708be665,// 135 PAY 101 

    0x7d631158,// 136 PAY 102 

    0xa008bacf,// 137 PAY 103 

    0xc931ad6f,// 138 PAY 104 

    0x2283e803,// 139 PAY 105 

    0xf9861538,// 140 PAY 106 

    0x3164f625,// 141 PAY 107 

    0x68bd3f34,// 142 PAY 108 

    0x516f6ef9,// 143 PAY 109 

    0x1f05a1b7,// 144 PAY 110 

    0x5ebbd93d,// 145 PAY 111 

    0xb0eccdd0,// 146 PAY 112 

    0xcf9581cb,// 147 PAY 113 

    0x96bb3f6a,// 148 PAY 114 

    0xc71469bd,// 149 PAY 115 

    0x1f1950ac,// 150 PAY 116 

    0x9a0bf046,// 151 PAY 117 

    0x5b773d81,// 152 PAY 118 

    0xce01c1e3,// 153 PAY 119 

    0x317a689a,// 154 PAY 120 

    0xce55d7b3,// 155 PAY 121 

    0x1fdb304e,// 156 PAY 122 

    0xa833e68f,// 157 PAY 123 

    0x2ca75080,// 158 PAY 124 

    0xf08ff185,// 159 PAY 125 

    0x64059044,// 160 PAY 126 

    0xe685a3eb,// 161 PAY 127 

    0x78e8c918,// 162 PAY 128 

    0x12a0638a,// 163 PAY 129 

    0xd762467a,// 164 PAY 130 

    0x3218e553,// 165 PAY 131 

    0x51c88913,// 166 PAY 132 

    0xd81ca7f5,// 167 PAY 133 

    0x9af25167,// 168 PAY 134 

    0x9b6030ba,// 169 PAY 135 

    0xe111ad6e,// 170 PAY 136 

    0x2adadee9,// 171 PAY 137 

    0xeaa4ec22,// 172 PAY 138 

    0x0c532d62,// 173 PAY 139 

    0xd2014e5d,// 174 PAY 140 

    0xfc0b57a5,// 175 PAY 141 

    0x061759d0,// 176 PAY 142 

    0xdf953b18,// 177 PAY 143 

    0xe8237242,// 178 PAY 144 

    0x4e025058,// 179 PAY 145 

    0x69ace428,// 180 PAY 146 

    0xede6749a,// 181 PAY 147 

    0xf7803ad0,// 182 PAY 148 

    0x23307823,// 183 PAY 149 

    0x48c18739,// 184 PAY 150 

    0x6b093367,// 185 PAY 151 

    0x3979742f,// 186 PAY 152 

    0xe24452bd,// 187 PAY 153 

    0x9e875625,// 188 PAY 154 

    0x53169fa3,// 189 PAY 155 

    0x3173a6ee,// 190 PAY 156 

    0x3b540622,// 191 PAY 157 

    0xa4b22514,// 192 PAY 158 

    0x01ca2e3f,// 193 PAY 159 

    0x1d032f24,// 194 PAY 160 

    0xc6393708,// 195 PAY 161 

    0xcc1de6d1,// 196 PAY 162 

    0xf82d18b8,// 197 PAY 163 

    0xf69cc327,// 198 PAY 164 

    0xb403bf30,// 199 PAY 165 

    0x48863c68,// 200 PAY 166 

    0x379107d5,// 201 PAY 167 

    0x2ddbe12a,// 202 PAY 168 

    0x0ccc25a7,// 203 PAY 169 

    0xa0beb03e,// 204 PAY 170 

    0x3236d002,// 205 PAY 171 

    0x071265dc,// 206 PAY 172 

    0x1009f2b5,// 207 PAY 173 

    0xde87c467,// 208 PAY 174 

    0x506a3691,// 209 PAY 175 

    0x0bf827d4,// 210 PAY 176 

    0x3052a5d7,// 211 PAY 177 

    0x40c1b5af,// 212 PAY 178 

    0x7896b2dd,// 213 PAY 179 

    0x3808cf8b,// 214 PAY 180 

    0x572f145b,// 215 PAY 181 

    0xe0747449,// 216 PAY 182 

    0x5fff8984,// 217 PAY 183 

    0x6accb74e,// 218 PAY 184 

    0x8f91bd36,// 219 PAY 185 

    0xe9723df8,// 220 PAY 186 

    0xd16821e2,// 221 PAY 187 

    0x9edefd66,// 222 PAY 188 

    0xaa6c38e3,// 223 PAY 189 

    0x3216285b,// 224 PAY 190 

    0x2ec91ac6,// 225 PAY 191 

    0x476a68f2,// 226 PAY 192 

    0x3c084220,// 227 PAY 193 

    0x0f8ebd3b,// 228 PAY 194 

    0xca15bfa6,// 229 PAY 195 

    0xc8326a7c,// 230 PAY 196 

    0x7d67ccc2,// 231 PAY 197 

    0x70045b14,// 232 PAY 198 

    0x1aeb2341,// 233 PAY 199 

    0xcbfc5d7c,// 234 PAY 200 

    0x468080fd,// 235 PAY 201 

    0xd7ab4422,// 236 PAY 202 

    0xe1da063f,// 237 PAY 203 

    0xdd1c63d4,// 238 PAY 204 

    0x2c8806bc,// 239 PAY 205 

    0x2cb33a49,// 240 PAY 206 

    0xa98ae89a,// 241 PAY 207 

    0xc1f88a05,// 242 PAY 208 

    0x4cebfa24,// 243 PAY 209 

    0xc36cb965,// 244 PAY 210 

    0x00b15f61,// 245 PAY 211 

    0x3fb72304,// 246 PAY 212 

    0x0d419f44,// 247 PAY 213 

    0x3c9c3b29,// 248 PAY 214 

    0xf6e7f1a1,// 249 PAY 215 

    0x3059fc1f,// 250 PAY 216 

    0x5d942c08,// 251 PAY 217 

    0x9a54ea2f,// 252 PAY 218 

    0xac7fcc86,// 253 PAY 219 

    0x9fb4ed42,// 254 PAY 220 

    0x806e6232,// 255 PAY 221 

    0x70729ff9,// 256 PAY 222 

    0xb997e240,// 257 PAY 223 

    0xff1cb6c9,// 258 PAY 224 

    0xcba86f63,// 259 PAY 225 

    0x839bec65,// 260 PAY 226 

    0x4b94ead5,// 261 PAY 227 

    0xc9b223f6,// 262 PAY 228 

    0xff17a197,// 263 PAY 229 

    0x5a80ed22,// 264 PAY 230 

    0xe9cf5afc,// 265 PAY 231 

    0xb95be07a,// 266 PAY 232 

    0x3397c601,// 267 PAY 233 

    0xb7d0e262,// 268 PAY 234 

    0xa120cf28,// 269 PAY 235 

    0x2710ba29,// 270 PAY 236 

    0x5a616322,// 271 PAY 237 

    0x25d2a7a9,// 272 PAY 238 

    0x23f0cd46,// 273 PAY 239 

    0xf30726ad,// 274 PAY 240 

    0x4f607f93,// 275 PAY 241 

    0x467ef9fe,// 276 PAY 242 

    0xa3922025,// 277 PAY 243 

    0xac317fbf,// 278 PAY 244 

    0xce3812ac,// 279 PAY 245 

    0xe70c2a5f,// 280 PAY 246 

    0xe8dcc2b3,// 281 PAY 247 

    0x7b764a3c,// 282 PAY 248 

    0xa4cea875,// 283 PAY 249 

    0x07f9f67f,// 284 PAY 250 

    0x0f85c507,// 285 PAY 251 

    0x6f93bf63,// 286 PAY 252 

    0xf31661f5,// 287 PAY 253 

    0x2a3b4a54,// 288 PAY 254 

    0xc5fdbf1e,// 289 PAY 255 

    0x72caceff,// 290 PAY 256 

    0xac836d4d,// 291 PAY 257 

    0xd1537288,// 292 PAY 258 

    0x16b17f09,// 293 PAY 259 

    0xde03ada9,// 294 PAY 260 

    0x078f768f,// 295 PAY 261 

    0xaa54046a,// 296 PAY 262 

    0xe0244013,// 297 PAY 263 

    0xf3b96742,// 298 PAY 264 

    0x4f00aab0,// 299 PAY 265 

    0x7d6087f3,// 300 PAY 266 

    0x5ad75b7f,// 301 PAY 267 

    0x1cda2e80,// 302 PAY 268 

    0x66ac8a9f,// 303 PAY 269 

    0x1267b3bc,// 304 PAY 270 

    0xa659e44b,// 305 PAY 271 

    0x13c9cb6f,// 306 PAY 272 

    0xd8d83f49,// 307 PAY 273 

    0x9b0cc817,// 308 PAY 274 

    0x0a54f299,// 309 PAY 275 

    0x9cf7ec58,// 310 PAY 276 

    0xa3b8bb3c,// 311 PAY 277 

    0x4c09f555,// 312 PAY 278 

    0x7047d90f,// 313 PAY 279 

    0x296cb4ec,// 314 PAY 280 

    0x33b19277,// 315 PAY 281 

    0x62df7868,// 316 PAY 282 

    0x5e01aedb,// 317 PAY 283 

    0x277c0bb3,// 318 PAY 284 

    0x31eb692a,// 319 PAY 285 

    0x32fae7a1,// 320 PAY 286 

    0x71387131,// 321 PAY 287 

    0xb3b606da,// 322 PAY 288 

    0xe491b57d,// 323 PAY 289 

    0xcd2a1e17,// 324 PAY 290 

    0xf47d034c,// 325 PAY 291 

    0x7da8f93d,// 326 PAY 292 

    0xf1a4bc7d,// 327 PAY 293 

    0x55cdf3ac,// 328 PAY 294 

    0x8a4f866d,// 329 PAY 295 

    0xf22a4e58,// 330 PAY 296 

    0xcd2562c1,// 331 PAY 297 

    0xdfc92ec6,// 332 PAY 298 

    0x552fa2bb,// 333 PAY 299 

    0x29a826a1,// 334 PAY 300 

    0x218fce20,// 335 PAY 301 

    0x43d5aa50,// 336 PAY 302 

    0x035c8a6f,// 337 PAY 303 

    0x4d6fd332,// 338 PAY 304 

    0x3e2cdb84,// 339 PAY 305 

    0x1cc7cbcc,// 340 PAY 306 

    0x90d070db,// 341 PAY 307 

    0xab11b495,// 342 PAY 308 

    0x8a726844,// 343 PAY 309 

    0xd1e36e84,// 344 PAY 310 

    0x1066c867,// 345 PAY 311 

    0x42ce24c0,// 346 PAY 312 

    0xe8a5a3ee,// 347 PAY 313 

    0x151feb9c,// 348 PAY 314 

    0x98c639b8,// 349 PAY 315 

    0xc6c77aae,// 350 PAY 316 

    0xe01503df,// 351 PAY 317 

    0xe00597fb,// 352 PAY 318 

    0x36fc855a,// 353 PAY 319 

    0x09845ae9,// 354 PAY 320 

    0x81528a47,// 355 PAY 321 

    0x7a848921,// 356 PAY 322 

    0x6ca9a76d,// 357 PAY 323 

    0x789eacdf,// 358 PAY 324 

    0x22741b2a,// 359 PAY 325 

    0xbaf1ac56,// 360 PAY 326 

    0xd4ee3554,// 361 PAY 327 

    0x31ceaf39,// 362 PAY 328 

    0xfac5f32d,// 363 PAY 329 

    0xb204a1bc,// 364 PAY 330 

    0x5312d6d3,// 365 PAY 331 

    0x06461ab5,// 366 PAY 332 

    0xc7ea5bd9,// 367 PAY 333 

    0xde1a995d,// 368 PAY 334 

    0x55c52802,// 369 PAY 335 

    0x42136e05,// 370 PAY 336 

    0x74955eb0,// 371 PAY 337 

    0x00b61469,// 372 PAY 338 

    0xb6e810ba,// 373 PAY 339 

    0x4d56e1eb,// 374 PAY 340 

    0x4ade8602,// 375 PAY 341 

    0x9695cc7d,// 376 PAY 342 

    0x47f5266b,// 377 PAY 343 

    0xf05d4354,// 378 PAY 344 

    0xadcf17ba,// 379 PAY 345 

    0xb39651b9,// 380 PAY 346 

    0x96a1e0d2,// 381 PAY 347 

    0xae14828f,// 382 PAY 348 

    0xd18df01e,// 383 PAY 349 

    0x34106858,// 384 PAY 350 

    0x6be25418,// 385 PAY 351 

    0xcd70a870,// 386 PAY 352 

    0xfe324e89,// 387 PAY 353 

    0x5eed4746,// 388 PAY 354 

    0x3a2bb202,// 389 PAY 355 

    0x9c246873,// 390 PAY 356 

    0xb0c49d6e,// 391 PAY 357 

    0x78726b0b,// 392 PAY 358 

    0xa3947e99,// 393 PAY 359 

    0xb7fd8d79,// 394 PAY 360 

    0xb18e3773,// 395 PAY 361 

    0x92831117,// 396 PAY 362 

    0x388abe82,// 397 PAY 363 

    0x1562c09d,// 398 PAY 364 

    0xf7abc442,// 399 PAY 365 

    0xd9a93577,// 400 PAY 366 

    0x8a8d6caf,// 401 PAY 367 

    0xa8925dd0,// 402 PAY 368 

    0x738f1fce,// 403 PAY 369 

    0xa99eac87,// 404 PAY 370 

    0x1c32617f,// 405 PAY 371 

    0x092595fd,// 406 PAY 372 

    0xfd658d83,// 407 PAY 373 

    0xd42b4102,// 408 PAY 374 

    0x3cc2368f,// 409 PAY 375 

    0x88f7f10e,// 410 PAY 376 

    0x148636ad,// 411 PAY 377 

    0x4e133cac,// 412 PAY 378 

    0x6449e8be,// 413 PAY 379 

    0x776df8b1,// 414 PAY 380 

    0xb990f0ee,// 415 PAY 381 

    0x8a2e3dc6,// 416 PAY 382 

    0x4627b294,// 417 PAY 383 

    0x846e3a33,// 418 PAY 384 

    0x58000000,// 419 PAY 385 

/// STA is 1 words. 

/// STA num_pkts       : 207 

/// STA pkt_idx        : 160 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x1e 

    0x02811ecf // 420 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt59_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x00 

/// ECH pdu_tag        : 0x00 

    0x00000000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv !check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x08000011,// 3 SCX   1 

    0x80464815,// 4 SCX   2 

    0x00004482,// 5 SCX   3 

    0xa5f38c8a,// 6 SCX   4 

    0xc7f305ee,// 7 SCX   5 

    0x85b63aa9,// 8 SCX   6 

    0x9b71446d,// 9 SCX   7 

    0x3b500dd5,// 10 SCX   8 

    0x26e17181,// 11 SCX   9 

    0xc7d3f4d9,// 12 SCX  10 

    0xc06785b4,// 13 SCX  11 

    0x018431e6,// 14 SCX  12 

    0x21acc6dc,// 15 SCX  13 

    0xa4f0c56d,// 16 SCX  14 

    0xf460d0dd,// 17 SCX  15 

    0xdde56303,// 18 SCX  16 

    0xc66a6284,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1995 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 349 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 349 

/// BFD lencrypto      : 144 

/// BFD ofstcrypto     : 176 

/// BFD (ofst+len)cry  : 320 

/// BFD ofstiv         : 76 

/// BFD ofsticv        : 1076 

    0x0000015d,// 20 BFD   1 

    0x00b00090,// 21 BFD   2 

    0x0434004c,// 22 BFD   3 

/// MFM is 6 words. 

/// MFM vldnibs        : 25 

    0x250019f0,// 23 MFM   1 

    0x1a28107b,// 24 MFM   2 

    0x227181c1,// 25 MFM   3 

    0xa0028818,// 26 MFM   4 

    0xa7dd537d,// 27 MFM   5 

    0x70000000,// 28 MFM   6 

/// BDA is 500 words. 

/// BDA size     is 1995 (0x7cb) 

/// BDA id       is 0x1f49 

    0x07cb1f49,// 29 BDA   1 

/// PAY Generic Data size   : 1995 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x84f42182,// 30 PAY   1 

    0x984e311b,// 31 PAY   2 

    0x307a2b40,// 32 PAY   3 

    0xef04463a,// 33 PAY   4 

    0xaec9e8c2,// 34 PAY   5 

    0x69a46a31,// 35 PAY   6 

    0x2146944f,// 36 PAY   7 

    0x5e19fe81,// 37 PAY   8 

    0x9aecd090,// 38 PAY   9 

    0xda5bec25,// 39 PAY  10 

    0xa455f950,// 40 PAY  11 

    0x028ad785,// 41 PAY  12 

    0x4dc4a0d3,// 42 PAY  13 

    0x479c0166,// 43 PAY  14 

    0xb1e61040,// 44 PAY  15 

    0xb6ab88c6,// 45 PAY  16 

    0xdad6a0d2,// 46 PAY  17 

    0x9a23142a,// 47 PAY  18 

    0xa939976b,// 48 PAY  19 

    0x94931f7f,// 49 PAY  20 

    0xbd0a33e3,// 50 PAY  21 

    0x29447c54,// 51 PAY  22 

    0x082532bb,// 52 PAY  23 

    0x54a01846,// 53 PAY  24 

    0xe7e6ab66,// 54 PAY  25 

    0xef16c332,// 55 PAY  26 

    0xdca5c873,// 56 PAY  27 

    0x61848fce,// 57 PAY  28 

    0x97b8aa35,// 58 PAY  29 

    0xa01cfd7f,// 59 PAY  30 

    0xebf6524c,// 60 PAY  31 

    0x769beb58,// 61 PAY  32 

    0x543f613d,// 62 PAY  33 

    0x59f7b811,// 63 PAY  34 

    0xf53599d3,// 64 PAY  35 

    0x2fa93f2e,// 65 PAY  36 

    0x8bc2ce43,// 66 PAY  37 

    0xb0b596b1,// 67 PAY  38 

    0xe4784018,// 68 PAY  39 

    0x041dc586,// 69 PAY  40 

    0xd5d846dd,// 70 PAY  41 

    0x7ce13be8,// 71 PAY  42 

    0x8ba5fcab,// 72 PAY  43 

    0xeb345232,// 73 PAY  44 

    0x9ec17985,// 74 PAY  45 

    0x0287beaf,// 75 PAY  46 

    0xb786e4b5,// 76 PAY  47 

    0x5c12d117,// 77 PAY  48 

    0x152b1391,// 78 PAY  49 

    0xf7006307,// 79 PAY  50 

    0x00d4c3dc,// 80 PAY  51 

    0xe043206a,// 81 PAY  52 

    0x278234ac,// 82 PAY  53 

    0x03652d6e,// 83 PAY  54 

    0x583fc7cc,// 84 PAY  55 

    0x994672e8,// 85 PAY  56 

    0xadbdcd4c,// 86 PAY  57 

    0xc6fdaa35,// 87 PAY  58 

    0x9cbd0474,// 88 PAY  59 

    0xfe416329,// 89 PAY  60 

    0xd78d7188,// 90 PAY  61 

    0x2ccd8020,// 91 PAY  62 

    0x8c3f989b,// 92 PAY  63 

    0x7d3d61eb,// 93 PAY  64 

    0xd609d517,// 94 PAY  65 

    0x08a42316,// 95 PAY  66 

    0xc701994c,// 96 PAY  67 

    0x3cc76d0b,// 97 PAY  68 

    0x915c54b2,// 98 PAY  69 

    0x25be3e79,// 99 PAY  70 

    0x498d4048,// 100 PAY  71 

    0x29c0f089,// 101 PAY  72 

    0x7f2fe696,// 102 PAY  73 

    0x9bceb231,// 103 PAY  74 

    0xc2349f25,// 104 PAY  75 

    0xeffcecc0,// 105 PAY  76 

    0x2a25bf9b,// 106 PAY  77 

    0xe5505f5d,// 107 PAY  78 

    0x56e50f57,// 108 PAY  79 

    0xa1ce057f,// 109 PAY  80 

    0x5c13e821,// 110 PAY  81 

    0x0d7d3662,// 111 PAY  82 

    0xfa6c2331,// 112 PAY  83 

    0xcf20d58f,// 113 PAY  84 

    0x1e911418,// 114 PAY  85 

    0xd288b999,// 115 PAY  86 

    0x1659562e,// 116 PAY  87 

    0x49261d00,// 117 PAY  88 

    0xaa99fc4b,// 118 PAY  89 

    0x579cfb26,// 119 PAY  90 

    0x3012b63d,// 120 PAY  91 

    0x5c1aa200,// 121 PAY  92 

    0xecbb4ba4,// 122 PAY  93 

    0x8b16af66,// 123 PAY  94 

    0x9c768208,// 124 PAY  95 

    0x69385a05,// 125 PAY  96 

    0xf6f9b425,// 126 PAY  97 

    0x9c9bad31,// 127 PAY  98 

    0x094dcf79,// 128 PAY  99 

    0x95399beb,// 129 PAY 100 

    0xd5e52d04,// 130 PAY 101 

    0xd41b5136,// 131 PAY 102 

    0x3a0ff924,// 132 PAY 103 

    0x93ed93c6,// 133 PAY 104 

    0x2baef2c1,// 134 PAY 105 

    0xc5896098,// 135 PAY 106 

    0x35ade004,// 136 PAY 107 

    0xeca6d67b,// 137 PAY 108 

    0xed45d0ca,// 138 PAY 109 

    0xa9cecfc2,// 139 PAY 110 

    0x242854c4,// 140 PAY 111 

    0x13d80767,// 141 PAY 112 

    0x802036b3,// 142 PAY 113 

    0x72793541,// 143 PAY 114 

    0xc84e2328,// 144 PAY 115 

    0x3abb81e9,// 145 PAY 116 

    0x50bbb154,// 146 PAY 117 

    0x5b81a5b2,// 147 PAY 118 

    0x4a35edfb,// 148 PAY 119 

    0xaa33fe1a,// 149 PAY 120 

    0x7f41888c,// 150 PAY 121 

    0x1ef479fa,// 151 PAY 122 

    0xfc928479,// 152 PAY 123 

    0x17324f3b,// 153 PAY 124 

    0x604cca32,// 154 PAY 125 

    0xf0aab3b9,// 155 PAY 126 

    0xcf25f75d,// 156 PAY 127 

    0x23d7e3f0,// 157 PAY 128 

    0x9c0b1375,// 158 PAY 129 

    0x2c224a12,// 159 PAY 130 

    0x0f9d4eb3,// 160 PAY 131 

    0x252bf17d,// 161 PAY 132 

    0x190c6759,// 162 PAY 133 

    0x478bd83f,// 163 PAY 134 

    0x6554a8c2,// 164 PAY 135 

    0xc6ba4acb,// 165 PAY 136 

    0x9143b021,// 166 PAY 137 

    0x590fa7ac,// 167 PAY 138 

    0x0c61a36a,// 168 PAY 139 

    0xfd5130fc,// 169 PAY 140 

    0xe586f87b,// 170 PAY 141 

    0x61ca7f67,// 171 PAY 142 

    0xdbb84825,// 172 PAY 143 

    0xf0d6f9c1,// 173 PAY 144 

    0x5b924b95,// 174 PAY 145 

    0x5d8d83ed,// 175 PAY 146 

    0x81f292a5,// 176 PAY 147 

    0x3a85cb53,// 177 PAY 148 

    0x2586507b,// 178 PAY 149 

    0x7041fe11,// 179 PAY 150 

    0x1aef7d40,// 180 PAY 151 

    0x28b97160,// 181 PAY 152 

    0xde240dc9,// 182 PAY 153 

    0xd3f58fdd,// 183 PAY 154 

    0x8f8a138f,// 184 PAY 155 

    0xae1b0557,// 185 PAY 156 

    0x9e81b031,// 186 PAY 157 

    0xed10ae05,// 187 PAY 158 

    0x4342d808,// 188 PAY 159 

    0x7c263dd0,// 189 PAY 160 

    0x99516eb1,// 190 PAY 161 

    0xd89deb23,// 191 PAY 162 

    0x76665243,// 192 PAY 163 

    0xa90b24b8,// 193 PAY 164 

    0x2e85aac5,// 194 PAY 165 

    0xc0a7617c,// 195 PAY 166 

    0x4f2d299f,// 196 PAY 167 

    0xa37f7745,// 197 PAY 168 

    0x3255f7b3,// 198 PAY 169 

    0xf8287f72,// 199 PAY 170 

    0x9f94086a,// 200 PAY 171 

    0xdaf2e412,// 201 PAY 172 

    0x7c722e7b,// 202 PAY 173 

    0x8ad5900b,// 203 PAY 174 

    0xcfb19524,// 204 PAY 175 

    0x17d795da,// 205 PAY 176 

    0x305c6a82,// 206 PAY 177 

    0xe2ac2688,// 207 PAY 178 

    0x84c7a4f6,// 208 PAY 179 

    0x69df3ba2,// 209 PAY 180 

    0xf80868c5,// 210 PAY 181 

    0xe41a516d,// 211 PAY 182 

    0x0a7fa5bb,// 212 PAY 183 

    0x87202ed8,// 213 PAY 184 

    0xe7ab6855,// 214 PAY 185 

    0xb92b98f0,// 215 PAY 186 

    0xeea849ec,// 216 PAY 187 

    0x9df68544,// 217 PAY 188 

    0x2b732727,// 218 PAY 189 

    0xd963d294,// 219 PAY 190 

    0x083a88a0,// 220 PAY 191 

    0x24f08ef5,// 221 PAY 192 

    0x144dd8f1,// 222 PAY 193 

    0x03e26442,// 223 PAY 194 

    0xf7b65a38,// 224 PAY 195 

    0x4eb0e80e,// 225 PAY 196 

    0xc9b706da,// 226 PAY 197 

    0x3be2d5f5,// 227 PAY 198 

    0x3da5dccd,// 228 PAY 199 

    0x35195241,// 229 PAY 200 

    0x62da1d1f,// 230 PAY 201 

    0x3724dd48,// 231 PAY 202 

    0x1c0fd3a4,// 232 PAY 203 

    0x5c46cab5,// 233 PAY 204 

    0x46697159,// 234 PAY 205 

    0xf0359912,// 235 PAY 206 

    0x6524c60b,// 236 PAY 207 

    0x3eb60711,// 237 PAY 208 

    0x9e516826,// 238 PAY 209 

    0xdac58f94,// 239 PAY 210 

    0xbe1e38b2,// 240 PAY 211 

    0x18b76de8,// 241 PAY 212 

    0x8dbb9c94,// 242 PAY 213 

    0x547a089d,// 243 PAY 214 

    0x1988a21c,// 244 PAY 215 

    0x8b0a46b5,// 245 PAY 216 

    0x1503831b,// 246 PAY 217 

    0xd5da4dcd,// 247 PAY 218 

    0x7299e833,// 248 PAY 219 

    0x5c1f155f,// 249 PAY 220 

    0x47f1d81b,// 250 PAY 221 

    0x16c3e049,// 251 PAY 222 

    0xea6f0fc1,// 252 PAY 223 

    0xf4d210ad,// 253 PAY 224 

    0x12093e0c,// 254 PAY 225 

    0x1ea68033,// 255 PAY 226 

    0x9bcabe63,// 256 PAY 227 

    0xd2372910,// 257 PAY 228 

    0x36a00260,// 258 PAY 229 

    0x7235c834,// 259 PAY 230 

    0xb84427e9,// 260 PAY 231 

    0x4cc0a966,// 261 PAY 232 

    0xb28d99cc,// 262 PAY 233 

    0x57f3ce67,// 263 PAY 234 

    0xaa5fb4a9,// 264 PAY 235 

    0x7d6e10e0,// 265 PAY 236 

    0x756b7b76,// 266 PAY 237 

    0x2e47b70c,// 267 PAY 238 

    0x132e938d,// 268 PAY 239 

    0x56c45470,// 269 PAY 240 

    0x7b4b3b8e,// 270 PAY 241 

    0x71ed6372,// 271 PAY 242 

    0x1776dc5b,// 272 PAY 243 

    0xc249a57d,// 273 PAY 244 

    0x50e09cdc,// 274 PAY 245 

    0xe3e026d1,// 275 PAY 246 

    0x0e723a81,// 276 PAY 247 

    0x973e14f6,// 277 PAY 248 

    0x9174b9fc,// 278 PAY 249 

    0x0c4aa28a,// 279 PAY 250 

    0x7e99b2ec,// 280 PAY 251 

    0xfda218e7,// 281 PAY 252 

    0x656a94ae,// 282 PAY 253 

    0xb1c5f724,// 283 PAY 254 

    0xdd629250,// 284 PAY 255 

    0xb7cbfd0a,// 285 PAY 256 

    0x9d4e76b4,// 286 PAY 257 

    0xffe681f8,// 287 PAY 258 

    0x7e5931b0,// 288 PAY 259 

    0xdd90c62a,// 289 PAY 260 

    0xe5c94bbe,// 290 PAY 261 

    0xb28a88b5,// 291 PAY 262 

    0x34bfec76,// 292 PAY 263 

    0x5fec18c9,// 293 PAY 264 

    0xa205d8e7,// 294 PAY 265 

    0x07b963cb,// 295 PAY 266 

    0x4476d5ce,// 296 PAY 267 

    0xa86a0b90,// 297 PAY 268 

    0x64694549,// 298 PAY 269 

    0xd2224ebc,// 299 PAY 270 

    0x50bb063b,// 300 PAY 271 

    0xe5418174,// 301 PAY 272 

    0x2b48a957,// 302 PAY 273 

    0x4c4c9dc0,// 303 PAY 274 

    0x4ab0789c,// 304 PAY 275 

    0xb33ee669,// 305 PAY 276 

    0x4bc33486,// 306 PAY 277 

    0xca4bd54a,// 307 PAY 278 

    0x43b19d95,// 308 PAY 279 

    0xf4ccf62c,// 309 PAY 280 

    0x2e1a0b76,// 310 PAY 281 

    0x1e964558,// 311 PAY 282 

    0xc71249f9,// 312 PAY 283 

    0xd23ec784,// 313 PAY 284 

    0x82a930ed,// 314 PAY 285 

    0xe6ba09a0,// 315 PAY 286 

    0x1f4b475b,// 316 PAY 287 

    0x0f71042e,// 317 PAY 288 

    0xbbaa06ca,// 318 PAY 289 

    0xedc48898,// 319 PAY 290 

    0x438cbc30,// 320 PAY 291 

    0x9fe81316,// 321 PAY 292 

    0x05850868,// 322 PAY 293 

    0x9656b8f0,// 323 PAY 294 

    0x45cd27ed,// 324 PAY 295 

    0x319829d8,// 325 PAY 296 

    0x5e52f244,// 326 PAY 297 

    0x6ade11e3,// 327 PAY 298 

    0xeda5eeab,// 328 PAY 299 

    0xd19163d6,// 329 PAY 300 

    0xdad582ec,// 330 PAY 301 

    0x196071e5,// 331 PAY 302 

    0x381c2509,// 332 PAY 303 

    0xfed7adc7,// 333 PAY 304 

    0x25d3f39e,// 334 PAY 305 

    0xd7538d4e,// 335 PAY 306 

    0x4004856c,// 336 PAY 307 

    0x8e9dc914,// 337 PAY 308 

    0xa76f7013,// 338 PAY 309 

    0x35780ff6,// 339 PAY 310 

    0x5093929a,// 340 PAY 311 

    0x03b3eb14,// 341 PAY 312 

    0x063e31fc,// 342 PAY 313 

    0xd4615185,// 343 PAY 314 

    0x1d12dd49,// 344 PAY 315 

    0xd5e4e8d5,// 345 PAY 316 

    0x2e5f2aa9,// 346 PAY 317 

    0xd45a46f9,// 347 PAY 318 

    0x24ecb69b,// 348 PAY 319 

    0xb809be75,// 349 PAY 320 

    0x6ad416f3,// 350 PAY 321 

    0x3fa5fc64,// 351 PAY 322 

    0x7f437d6d,// 352 PAY 323 

    0xb0e3eb0f,// 353 PAY 324 

    0x01304da1,// 354 PAY 325 

    0x852cbfc9,// 355 PAY 326 

    0xd6cf607f,// 356 PAY 327 

    0x496a85b4,// 357 PAY 328 

    0x395ce093,// 358 PAY 329 

    0x6c5057f3,// 359 PAY 330 

    0x473fe019,// 360 PAY 331 

    0xceb2fd89,// 361 PAY 332 

    0xc23600ff,// 362 PAY 333 

    0x0f105cbc,// 363 PAY 334 

    0x995889f6,// 364 PAY 335 

    0x7140433c,// 365 PAY 336 

    0x61c8c957,// 366 PAY 337 

    0x1530e6a9,// 367 PAY 338 

    0x2fd0a33a,// 368 PAY 339 

    0x3290fcf9,// 369 PAY 340 

    0x7e9fc35b,// 370 PAY 341 

    0xec096d11,// 371 PAY 342 

    0x997ea2aa,// 372 PAY 343 

    0xf1a65fc7,// 373 PAY 344 

    0xe90057a3,// 374 PAY 345 

    0x9e1fe629,// 375 PAY 346 

    0x870d63f3,// 376 PAY 347 

    0x35593eff,// 377 PAY 348 

    0x6dc31984,// 378 PAY 349 

    0xb4a7a1ae,// 379 PAY 350 

    0x0ac7f9c7,// 380 PAY 351 

    0x7b9eaf1e,// 381 PAY 352 

    0x7819e6f5,// 382 PAY 353 

    0xb17f2a01,// 383 PAY 354 

    0xa165bffc,// 384 PAY 355 

    0x4823e423,// 385 PAY 356 

    0xc42f6379,// 386 PAY 357 

    0x51d964ed,// 387 PAY 358 

    0xfa52d534,// 388 PAY 359 

    0x2673c795,// 389 PAY 360 

    0xf10c051a,// 390 PAY 361 

    0x4197dfea,// 391 PAY 362 

    0x2f3512c3,// 392 PAY 363 

    0xa629886a,// 393 PAY 364 

    0x29ac4124,// 394 PAY 365 

    0x472cb575,// 395 PAY 366 

    0x82ab8f6c,// 396 PAY 367 

    0x67008d77,// 397 PAY 368 

    0x351ed91d,// 398 PAY 369 

    0x24018caa,// 399 PAY 370 

    0x96ada729,// 400 PAY 371 

    0xda221212,// 401 PAY 372 

    0x23a3f21f,// 402 PAY 373 

    0x1a290894,// 403 PAY 374 

    0x3e93ffef,// 404 PAY 375 

    0x832354d5,// 405 PAY 376 

    0xc59aab98,// 406 PAY 377 

    0x63e8f534,// 407 PAY 378 

    0x6aaac5d7,// 408 PAY 379 

    0xf2f91458,// 409 PAY 380 

    0x8d96e7cd,// 410 PAY 381 

    0x651c62ab,// 411 PAY 382 

    0x6d512444,// 412 PAY 383 

    0xcce5979c,// 413 PAY 384 

    0x849da775,// 414 PAY 385 

    0xb95d55eb,// 415 PAY 386 

    0xec0179c9,// 416 PAY 387 

    0x64b7c874,// 417 PAY 388 

    0x858970a0,// 418 PAY 389 

    0x1c25bee2,// 419 PAY 390 

    0x341d3781,// 420 PAY 391 

    0x9548c4d8,// 421 PAY 392 

    0xc738c4f0,// 422 PAY 393 

    0x270a4077,// 423 PAY 394 

    0xa65c81c4,// 424 PAY 395 

    0x96666b17,// 425 PAY 396 

    0x7c6e0b36,// 426 PAY 397 

    0x39f837a4,// 427 PAY 398 

    0xb1439c5a,// 428 PAY 399 

    0xd97757c4,// 429 PAY 400 

    0x318b920b,// 430 PAY 401 

    0x5abad888,// 431 PAY 402 

    0x6258dd9d,// 432 PAY 403 

    0x7753a323,// 433 PAY 404 

    0xa8100013,// 434 PAY 405 

    0x14943b07,// 435 PAY 406 

    0xfcf94c16,// 436 PAY 407 

    0xa3ba9af9,// 437 PAY 408 

    0x414b01e8,// 438 PAY 409 

    0xb89c3380,// 439 PAY 410 

    0x915927c0,// 440 PAY 411 

    0x765cbb92,// 441 PAY 412 

    0x35bb8027,// 442 PAY 413 

    0x230ced20,// 443 PAY 414 

    0x2f829af4,// 444 PAY 415 

    0x97450a54,// 445 PAY 416 

    0x7460ef16,// 446 PAY 417 

    0x07b408b3,// 447 PAY 418 

    0xc2812255,// 448 PAY 419 

    0x244e192c,// 449 PAY 420 

    0x327d3910,// 450 PAY 421 

    0xf8a146d7,// 451 PAY 422 

    0xfcc0e5c4,// 452 PAY 423 

    0xfb88670b,// 453 PAY 424 

    0x36005265,// 454 PAY 425 

    0xdf9f9e91,// 455 PAY 426 

    0x5a4ab589,// 456 PAY 427 

    0xa55d340d,// 457 PAY 428 

    0x15a47640,// 458 PAY 429 

    0xe7ca6b1e,// 459 PAY 430 

    0x282eeb22,// 460 PAY 431 

    0x63984a88,// 461 PAY 432 

    0xea3dee0b,// 462 PAY 433 

    0x78f30a10,// 463 PAY 434 

    0x2052fe35,// 464 PAY 435 

    0xd828fa14,// 465 PAY 436 

    0x2d8c7629,// 466 PAY 437 

    0x39480446,// 467 PAY 438 

    0xe56b3cfb,// 468 PAY 439 

    0xca72f7d1,// 469 PAY 440 

    0xd7096e10,// 470 PAY 441 

    0x13c1055a,// 471 PAY 442 

    0xec7a285a,// 472 PAY 443 

    0x836dea3a,// 473 PAY 444 

    0x772d65eb,// 474 PAY 445 

    0x5deb013f,// 475 PAY 446 

    0x08b859b1,// 476 PAY 447 

    0xa2f484ee,// 477 PAY 448 

    0x08eba95b,// 478 PAY 449 

    0xf4cd8fd2,// 479 PAY 450 

    0xa5382fa4,// 480 PAY 451 

    0x9aef4aa7,// 481 PAY 452 

    0xbb778058,// 482 PAY 453 

    0x4b41c88c,// 483 PAY 454 

    0x4446f180,// 484 PAY 455 

    0x8ac14022,// 485 PAY 456 

    0x73486841,// 486 PAY 457 

    0x81293da1,// 487 PAY 458 

    0x8e54e2fd,// 488 PAY 459 

    0xcbfdfd77,// 489 PAY 460 

    0xfb0c97f1,// 490 PAY 461 

    0x6fce7047,// 491 PAY 462 

    0x92fef02a,// 492 PAY 463 

    0x9f527108,// 493 PAY 464 

    0xcdf6ca38,// 494 PAY 465 

    0xbd16e3bd,// 495 PAY 466 

    0x9b07e073,// 496 PAY 467 

    0x8a5d7a06,// 497 PAY 468 

    0x08f486e3,// 498 PAY 469 

    0xcae69a19,// 499 PAY 470 

    0x8333749a,// 500 PAY 471 

    0xd119567d,// 501 PAY 472 

    0xdabed7b6,// 502 PAY 473 

    0xb8e6132c,// 503 PAY 474 

    0x3b49ca34,// 504 PAY 475 

    0xb149f408,// 505 PAY 476 

    0x93b453de,// 506 PAY 477 

    0x108f3bc7,// 507 PAY 478 

    0x7048aecd,// 508 PAY 479 

    0xa5d84215,// 509 PAY 480 

    0x625d343c,// 510 PAY 481 

    0x7991fb8b,// 511 PAY 482 

    0xc66ef06c,// 512 PAY 483 

    0xc44c504c,// 513 PAY 484 

    0xaddf4a3b,// 514 PAY 485 

    0xb9c41734,// 515 PAY 486 

    0x103ec807,// 516 PAY 487 

    0x18b64eb5,// 517 PAY 488 

    0x21271b37,// 518 PAY 489 

    0x785e812d,// 519 PAY 490 

    0xd2e6b654,// 520 PAY 491 

    0xedfa2960,// 521 PAY 492 

    0x1a49a250,// 522 PAY 493 

    0x3b972f4b,// 523 PAY 494 

    0xf2f32d83,// 524 PAY 495 

    0xe8b926f5,// 525 PAY 496 

    0x18f4927c,// 526 PAY 497 

    0x259850ba,// 527 PAY 498 

    0x1a0c6600,// 528 PAY 499 

/// STA is 1 words. 

/// STA num_pkts       : 244 

/// STA pkt_idx        : 68 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x7a 

    0x01107af4 // 529 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt60_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x0d 

/// ECH pdu_tag        : 0x00 

    0x000d0000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0000000f,// 3 SCX   1 

    0x80404869,// 4 SCX   2 

    0x00006300,// 5 SCX   3 

    0x2691ce61,// 6 SCX   4 

    0x55618799,// 7 SCX   5 

    0xf72ba21d,// 8 SCX   6 

    0x9825865e,// 9 SCX   7 

    0xdc1e2f68,// 10 SCX   8 

    0x4aa6b4b5,// 11 SCX   9 

    0x97d8b147,// 12 SCX  10 

    0xaf6c14b4,// 13 SCX  11 

    0x90241325,// 14 SCX  12 

    0x785e483b,// 15 SCX  13 

    0x6c1ba9d5,// 16 SCX  14 

    0xd265a4a3,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 1315 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1267 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1267 

/// BFD lencrypto      : 104 

/// BFD ofstcrypto     : 588 

/// BFD (ofst+len)cry  : 692 

/// BFD ofstiv         : 412 

/// BFD ofsticv        : 1272 

    0x000004f3,// 18 BFD   1 

    0x024c0068,// 19 BFD   2 

    0x04f8019c,// 20 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c004f67,// 21 MFM   1 

    0xb549c81a,// 22 MFM   2 

    0x32ac037c,// 23 MFM   3 

    0xe8a020a4,// 24 MFM   4 

    0x776d0d53,// 25 MFM   5 

    0x77a3f06b,// 26 MFM   6 

    0x8d68afc5,// 27 MFM   7 

    0x399e7d84,// 28 MFM   8 

    0xfcd002f5,// 29 MFM   9 

    0xdfb99be1,// 30 MFM  10 

    0x602c3d09,// 31 MFM  11 

    0xc13b8fae,// 32 MFM  12 

    0x9d283d05,// 33 MFM  13 

    0x308db37a,// 34 MFM  14 

    0xf6fc3941,// 35 MFM  15 

    0xd9828be7,// 36 MFM  16 

/// BDA is 330 words. 

/// BDA size     is 1315 (0x523) 

/// BDA id       is 0x6d6b 

    0x05236d6b,// 37 BDA   1 

/// PAY Generic Data size   : 1315 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x936ee552,// 38 PAY   1 

    0xe357a67a,// 39 PAY   2 

    0x1a9bc172,// 40 PAY   3 

    0x434800e9,// 41 PAY   4 

    0x771cebf0,// 42 PAY   5 

    0x4681b236,// 43 PAY   6 

    0xc1b3f976,// 44 PAY   7 

    0xd7d013f2,// 45 PAY   8 

    0x251f7a10,// 46 PAY   9 

    0xdf8a5dac,// 47 PAY  10 

    0x7f5792df,// 48 PAY  11 

    0x39500ed9,// 49 PAY  12 

    0x5ce01e96,// 50 PAY  13 

    0x1db0f92b,// 51 PAY  14 

    0x7c13cfe9,// 52 PAY  15 

    0x51e51bad,// 53 PAY  16 

    0x15c4bb36,// 54 PAY  17 

    0x2fab6058,// 55 PAY  18 

    0xb178ed6f,// 56 PAY  19 

    0x2b381cf1,// 57 PAY  20 

    0x20600656,// 58 PAY  21 

    0x5f19299c,// 59 PAY  22 

    0x211359bb,// 60 PAY  23 

    0x85c0a32d,// 61 PAY  24 

    0x8899c6d1,// 62 PAY  25 

    0x620b92cb,// 63 PAY  26 

    0x1cbd340a,// 64 PAY  27 

    0x546adc7f,// 65 PAY  28 

    0x329a4865,// 66 PAY  29 

    0xf5c345bb,// 67 PAY  30 

    0xb475ecdb,// 68 PAY  31 

    0xb7c66ea0,// 69 PAY  32 

    0x0951ed51,// 70 PAY  33 

    0xabebe92b,// 71 PAY  34 

    0xa2bff095,// 72 PAY  35 

    0xd9222a84,// 73 PAY  36 

    0xa54c20b4,// 74 PAY  37 

    0xbbfd8cfb,// 75 PAY  38 

    0xb495a9c8,// 76 PAY  39 

    0x59983d14,// 77 PAY  40 

    0xabac7957,// 78 PAY  41 

    0x0164eeba,// 79 PAY  42 

    0xe1f14c1f,// 80 PAY  43 

    0x56759c4f,// 81 PAY  44 

    0x2f3073fc,// 82 PAY  45 

    0xdbea45b9,// 83 PAY  46 

    0x521a3456,// 84 PAY  47 

    0x8bc97307,// 85 PAY  48 

    0x170d012b,// 86 PAY  49 

    0x4187799d,// 87 PAY  50 

    0xf8c4f374,// 88 PAY  51 

    0x638660e2,// 89 PAY  52 

    0x390ca033,// 90 PAY  53 

    0x1e4676e5,// 91 PAY  54 

    0xc012491c,// 92 PAY  55 

    0x9ae51102,// 93 PAY  56 

    0x43124e37,// 94 PAY  57 

    0x2fab2951,// 95 PAY  58 

    0x636147a6,// 96 PAY  59 

    0x9a0bb2d8,// 97 PAY  60 

    0x028d9d3d,// 98 PAY  61 

    0xe03004e4,// 99 PAY  62 

    0x4eff9152,// 100 PAY  63 

    0xdea5f6a0,// 101 PAY  64 

    0x58c052db,// 102 PAY  65 

    0x85f73730,// 103 PAY  66 

    0x91e70aee,// 104 PAY  67 

    0x35e9b679,// 105 PAY  68 

    0x9ba375b2,// 106 PAY  69 

    0x4e31f6ea,// 107 PAY  70 

    0x66df9b6b,// 108 PAY  71 

    0x2caf273a,// 109 PAY  72 

    0x3dccdec5,// 110 PAY  73 

    0x0356f329,// 111 PAY  74 

    0x02115be5,// 112 PAY  75 

    0x559f0e14,// 113 PAY  76 

    0x093c5cb7,// 114 PAY  77 

    0x8e919e70,// 115 PAY  78 

    0x4065a5e1,// 116 PAY  79 

    0x664ec02a,// 117 PAY  80 

    0x18f67fed,// 118 PAY  81 

    0x4f460d7c,// 119 PAY  82 

    0x5cfbbdd0,// 120 PAY  83 

    0x7cbe76bc,// 121 PAY  84 

    0x01499c4c,// 122 PAY  85 

    0x8f69f184,// 123 PAY  86 

    0x6b01a865,// 124 PAY  87 

    0x64d33972,// 125 PAY  88 

    0xa3a541ca,// 126 PAY  89 

    0x9f8316ed,// 127 PAY  90 

    0x78115a31,// 128 PAY  91 

    0xbc7eb81b,// 129 PAY  92 

    0x3e1472f5,// 130 PAY  93 

    0x21e1548d,// 131 PAY  94 

    0x183a2f60,// 132 PAY  95 

    0x916a2558,// 133 PAY  96 

    0xf773c6a3,// 134 PAY  97 

    0x54c18225,// 135 PAY  98 

    0xb9df2a92,// 136 PAY  99 

    0x7ac74b09,// 137 PAY 100 

    0x3c8a9530,// 138 PAY 101 

    0xe1a09a2c,// 139 PAY 102 

    0x5b487b41,// 140 PAY 103 

    0xf86f4044,// 141 PAY 104 

    0x0d9f5b1d,// 142 PAY 105 

    0x6baa4494,// 143 PAY 106 

    0x43395dd5,// 144 PAY 107 

    0xa6a0068b,// 145 PAY 108 

    0x1dd47d66,// 146 PAY 109 

    0xbe5e5c26,// 147 PAY 110 

    0xfcd8828b,// 148 PAY 111 

    0x317986bf,// 149 PAY 112 

    0x9a0c5b24,// 150 PAY 113 

    0x226e197e,// 151 PAY 114 

    0xa66bbeb7,// 152 PAY 115 

    0x8f01ece4,// 153 PAY 116 

    0xc597c7e0,// 154 PAY 117 

    0xc67425ae,// 155 PAY 118 

    0xcb40d1c7,// 156 PAY 119 

    0x01a0aaad,// 157 PAY 120 

    0x8aa9cf53,// 158 PAY 121 

    0x765bb3ea,// 159 PAY 122 

    0xd7f775c8,// 160 PAY 123 

    0x62064aaa,// 161 PAY 124 

    0xcb161f29,// 162 PAY 125 

    0xb7bd9643,// 163 PAY 126 

    0x6e1ec725,// 164 PAY 127 

    0xcade8f37,// 165 PAY 128 

    0x2a07d33d,// 166 PAY 129 

    0x1bd8430e,// 167 PAY 130 

    0x36ca37d2,// 168 PAY 131 

    0x7b651876,// 169 PAY 132 

    0x2f6b2ba5,// 170 PAY 133 

    0xd226782a,// 171 PAY 134 

    0x269adfe8,// 172 PAY 135 

    0xfe853adf,// 173 PAY 136 

    0xaf1f9acc,// 174 PAY 137 

    0x47ddd394,// 175 PAY 138 

    0xc562e4b2,// 176 PAY 139 

    0x58dad4c6,// 177 PAY 140 

    0xbc47ef0b,// 178 PAY 141 

    0xf2133040,// 179 PAY 142 

    0xefcb526a,// 180 PAY 143 

    0x0c1c9e40,// 181 PAY 144 

    0x28a955a2,// 182 PAY 145 

    0x11b2342b,// 183 PAY 146 

    0x4cfbbd90,// 184 PAY 147 

    0x24f4c060,// 185 PAY 148 

    0xf8a6f590,// 186 PAY 149 

    0x13a77ed5,// 187 PAY 150 

    0xbd272bef,// 188 PAY 151 

    0x07d5e071,// 189 PAY 152 

    0xdca46398,// 190 PAY 153 

    0x87b7f846,// 191 PAY 154 

    0xe57cf211,// 192 PAY 155 

    0x34295839,// 193 PAY 156 

    0xb929e6e1,// 194 PAY 157 

    0xccc8343b,// 195 PAY 158 

    0xdc60ddbe,// 196 PAY 159 

    0x33824c8b,// 197 PAY 160 

    0x624e85da,// 198 PAY 161 

    0x8123f697,// 199 PAY 162 

    0x88e1a56c,// 200 PAY 163 

    0xf1c30126,// 201 PAY 164 

    0xaab325e4,// 202 PAY 165 

    0x0bdd85f9,// 203 PAY 166 

    0xfe53b8ed,// 204 PAY 167 

    0xaf6bea0f,// 205 PAY 168 

    0x6923a30c,// 206 PAY 169 

    0xd2f48121,// 207 PAY 170 

    0x98cf705b,// 208 PAY 171 

    0xaf60b00e,// 209 PAY 172 

    0xe7e9e979,// 210 PAY 173 

    0xf55e7805,// 211 PAY 174 

    0x9dc7a6ef,// 212 PAY 175 

    0x432c35b1,// 213 PAY 176 

    0x75c67209,// 214 PAY 177 

    0xe4360a5f,// 215 PAY 178 

    0x47cc1b61,// 216 PAY 179 

    0x1666fac6,// 217 PAY 180 

    0x05569415,// 218 PAY 181 

    0xba1d21ed,// 219 PAY 182 

    0xeefcc37d,// 220 PAY 183 

    0x389f7d39,// 221 PAY 184 

    0x19e234f4,// 222 PAY 185 

    0xa962f36a,// 223 PAY 186 

    0x445ee7a0,// 224 PAY 187 

    0x39a10da9,// 225 PAY 188 

    0x8e23f4e7,// 226 PAY 189 

    0xcfe7e824,// 227 PAY 190 

    0x55c6e2f2,// 228 PAY 191 

    0x423e8ec1,// 229 PAY 192 

    0x7bbf6e74,// 230 PAY 193 

    0xb7ed6b8c,// 231 PAY 194 

    0xe1cbe51d,// 232 PAY 195 

    0x276b9583,// 233 PAY 196 

    0x0597543b,// 234 PAY 197 

    0xea12b5fd,// 235 PAY 198 

    0xd8c92453,// 236 PAY 199 

    0x7e2a26c3,// 237 PAY 200 

    0x43612f0d,// 238 PAY 201 

    0x632e7c42,// 239 PAY 202 

    0x4e9a2aad,// 240 PAY 203 

    0x6c552f48,// 241 PAY 204 

    0x797e5193,// 242 PAY 205 

    0xcf7f2ba0,// 243 PAY 206 

    0x5977e86f,// 244 PAY 207 

    0x376e8876,// 245 PAY 208 

    0xe09e46af,// 246 PAY 209 

    0x98c4fb5e,// 247 PAY 210 

    0x0354d110,// 248 PAY 211 

    0xe1c65b26,// 249 PAY 212 

    0xe713a1c8,// 250 PAY 213 

    0x1203f52e,// 251 PAY 214 

    0xe4b1ae2c,// 252 PAY 215 

    0x4e711008,// 253 PAY 216 

    0xc50c828f,// 254 PAY 217 

    0xb30aa4cd,// 255 PAY 218 

    0xdb965325,// 256 PAY 219 

    0xcaa15d82,// 257 PAY 220 

    0xab293cf3,// 258 PAY 221 

    0x6f3ea023,// 259 PAY 222 

    0x211fa230,// 260 PAY 223 

    0x42d4017b,// 261 PAY 224 

    0x7914947a,// 262 PAY 225 

    0xccd9a853,// 263 PAY 226 

    0xea24bd2c,// 264 PAY 227 

    0x63bac64c,// 265 PAY 228 

    0x5b0e62a0,// 266 PAY 229 

    0xdf6f4015,// 267 PAY 230 

    0xc7e5fc65,// 268 PAY 231 

    0x9c5c6b2b,// 269 PAY 232 

    0xafa06f06,// 270 PAY 233 

    0xd8442a8a,// 271 PAY 234 

    0xc77a331c,// 272 PAY 235 

    0xaf788f29,// 273 PAY 236 

    0xbfd3b02e,// 274 PAY 237 

    0xf0a190ec,// 275 PAY 238 

    0xcd1a8a1c,// 276 PAY 239 

    0x8af9c1dd,// 277 PAY 240 

    0x7bcd5728,// 278 PAY 241 

    0x917edd2a,// 279 PAY 242 

    0xd38c90d6,// 280 PAY 243 

    0x07c04399,// 281 PAY 244 

    0x326c50dd,// 282 PAY 245 

    0xc7efe64a,// 283 PAY 246 

    0xf2322d67,// 284 PAY 247 

    0x7a82ba58,// 285 PAY 248 

    0x9eedefb7,// 286 PAY 249 

    0x3abb3b7b,// 287 PAY 250 

    0xb95ffa8a,// 288 PAY 251 

    0xb1bd4b5b,// 289 PAY 252 

    0xd25eefaf,// 290 PAY 253 

    0x384d149d,// 291 PAY 254 

    0x9443dfb6,// 292 PAY 255 

    0xa7b11124,// 293 PAY 256 

    0xdcf8c999,// 294 PAY 257 

    0x4ad3fe4f,// 295 PAY 258 

    0xdcef7e39,// 296 PAY 259 

    0xe7b392f9,// 297 PAY 260 

    0xa509cfd6,// 298 PAY 261 

    0x47f1ff67,// 299 PAY 262 

    0x96bd2c08,// 300 PAY 263 

    0x53cdd406,// 301 PAY 264 

    0xacf5e339,// 302 PAY 265 

    0x65050bc0,// 303 PAY 266 

    0xccb065fc,// 304 PAY 267 

    0x5a6715dc,// 305 PAY 268 

    0xb9bd853a,// 306 PAY 269 

    0x3a355a6b,// 307 PAY 270 

    0x73aac9d4,// 308 PAY 271 

    0xa20c86e3,// 309 PAY 272 

    0x51c63c76,// 310 PAY 273 

    0x89acffcc,// 311 PAY 274 

    0x2ab1c201,// 312 PAY 275 

    0x46bf3dc3,// 313 PAY 276 

    0xb3438797,// 314 PAY 277 

    0xa4254ede,// 315 PAY 278 

    0xed97f4c2,// 316 PAY 279 

    0x0c9f43a1,// 317 PAY 280 

    0x7154d291,// 318 PAY 281 

    0x2fe102ac,// 319 PAY 282 

    0x97d1a227,// 320 PAY 283 

    0x0511cb6f,// 321 PAY 284 

    0x63a0d0eb,// 322 PAY 285 

    0xc8ac04dd,// 323 PAY 286 

    0x2ee351c0,// 324 PAY 287 

    0x69ed2da9,// 325 PAY 288 

    0xb9803e06,// 326 PAY 289 

    0x8fb93d7f,// 327 PAY 290 

    0xf58a9f4d,// 328 PAY 291 

    0x5ca9110c,// 329 PAY 292 

    0xa208cb63,// 330 PAY 293 

    0x4bea88cf,// 331 PAY 294 

    0x0dfdc6d7,// 332 PAY 295 

    0x12c82576,// 333 PAY 296 

    0xd0ddaa9a,// 334 PAY 297 

    0xb55f02df,// 335 PAY 298 

    0xfebf99c2,// 336 PAY 299 

    0x8d730ee4,// 337 PAY 300 

    0x36979c65,// 338 PAY 301 

    0xe1c11265,// 339 PAY 302 

    0x77278512,// 340 PAY 303 

    0x2c6d8c5d,// 341 PAY 304 

    0x79352373,// 342 PAY 305 

    0x3a1b4dd6,// 343 PAY 306 

    0x176b84e8,// 344 PAY 307 

    0x6b0335fa,// 345 PAY 308 

    0xd14dde36,// 346 PAY 309 

    0x777a3f62,// 347 PAY 310 

    0x7749762f,// 348 PAY 311 

    0x6d3b34ac,// 349 PAY 312 

    0xbd237d01,// 350 PAY 313 

    0xd6b76675,// 351 PAY 314 

    0xe1ba9e00,// 352 PAY 315 

    0x23925064,// 353 PAY 316 

    0xb2db7132,// 354 PAY 317 

    0xab41647a,// 355 PAY 318 

    0x76c7cb96,// 356 PAY 319 

    0x77274f00,// 357 PAY 320 

    0x91aa00aa,// 358 PAY 321 

    0x2e8dbdf8,// 359 PAY 322 

    0x2f215715,// 360 PAY 323 

    0xbda06aa3,// 361 PAY 324 

    0xb535c375,// 362 PAY 325 

    0x2a4ce145,// 363 PAY 326 

    0x38a5d8dd,// 364 PAY 327 

    0x4e1f7385,// 365 PAY 328 

    0xc82fd000,// 366 PAY 329 

/// STA is 1 words. 

/// STA num_pkts       : 18 

/// STA pkt_idx        : 20 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xda 

    0x0051da12 // 367 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt61_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x00 

/// ECH pdu_tag        : 0x00 

    0x00000000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x08000011,// 3 SCX   1 

    0x804648b0,// 4 SCX   2 

    0x00005382,// 5 SCX   3 

    0x93662551,// 6 SCX   4 

    0x525c06f4,// 7 SCX   5 

    0xabe14617,// 8 SCX   6 

    0x6e0403ed,// 9 SCX   7 

    0x87a02cd9,// 10 SCX   8 

    0xe503bfee,// 11 SCX   9 

    0x22594197,// 12 SCX  10 

    0x1cf18f4b,// 13 SCX  11 

    0xe814dc87,// 14 SCX  12 

    0x946fcc75,// 15 SCX  13 

    0xd3dd7d71,// 16 SCX  14 

    0xa9f5fc12,// 17 SCX  15 

    0xbf1fb002,// 18 SCX  16 

    0x4782174a,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 2009 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1825 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1825 

/// BFD lencrypto      : 160 

/// BFD ofstcrypto     : 1180 

/// BFD (ofst+len)cry  : 1340 

/// BFD ofstiv         : 896 

/// BFD ofsticv        : 1856 

    0x00000721,// 20 BFD   1 

    0x049c00a0,// 21 BFD   2 

    0x07400380,// 22 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c00a73e,// 23 MFM   1 

    0x7f2f5286,// 24 MFM   2 

    0x57b96055,// 25 MFM   3 

    0x3199d7d0,// 26 MFM   4 

    0xa3af2f77,// 27 MFM   5 

    0xa1debbd2,// 28 MFM   6 

    0x896a382d,// 29 MFM   7 

    0x5ae89638,// 30 MFM   8 

    0x5bc12951,// 31 MFM   9 

    0x26f257b0,// 32 MFM  10 

    0xb5775d9d,// 33 MFM  11 

    0xa9826d36,// 34 MFM  12 

    0x6a2ccec3,// 35 MFM  13 

    0x5ed23acf,// 36 MFM  14 

    0xec49e793,// 37 MFM  15 

    0x4ab146bd,// 38 MFM  16 

/// BDA is 504 words. 

/// BDA size     is 2009 (0x7d9) 

/// BDA id       is 0xb58b 

    0x07d9b58b,// 39 BDA   1 

/// PAY Generic Data size   : 2009 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0xa865d045,// 40 PAY   1 

    0xddf5a65f,// 41 PAY   2 

    0x3cbe262d,// 42 PAY   3 

    0x47d674e6,// 43 PAY   4 

    0xb16b3d8b,// 44 PAY   5 

    0xe3306678,// 45 PAY   6 

    0x8f4636a8,// 46 PAY   7 

    0x0851b840,// 47 PAY   8 

    0xc7d263dc,// 48 PAY   9 

    0x2db72976,// 49 PAY  10 

    0x5269f198,// 50 PAY  11 

    0xb6e39aec,// 51 PAY  12 

    0xcdd1de51,// 52 PAY  13 

    0x760d3622,// 53 PAY  14 

    0x210e8adf,// 54 PAY  15 

    0x8c24a92f,// 55 PAY  16 

    0x28d4fa1b,// 56 PAY  17 

    0x6cb558c8,// 57 PAY  18 

    0x48f11cb0,// 58 PAY  19 

    0xfbef1971,// 59 PAY  20 

    0x5ad0df19,// 60 PAY  21 

    0xba9e9943,// 61 PAY  22 

    0x5ba109c4,// 62 PAY  23 

    0x06e7bf8d,// 63 PAY  24 

    0x606ceafb,// 64 PAY  25 

    0x3074dac0,// 65 PAY  26 

    0xe1aaf266,// 66 PAY  27 

    0x8a9cd25f,// 67 PAY  28 

    0x4298124d,// 68 PAY  29 

    0x7a6f1e1c,// 69 PAY  30 

    0x98f45a2c,// 70 PAY  31 

    0xce5fd3b3,// 71 PAY  32 

    0x19f5b8c5,// 72 PAY  33 

    0xa1aeff50,// 73 PAY  34 

    0x9690b9de,// 74 PAY  35 

    0x17998339,// 75 PAY  36 

    0x20680ba8,// 76 PAY  37 

    0x945cce47,// 77 PAY  38 

    0xaa8fb936,// 78 PAY  39 

    0x691774fc,// 79 PAY  40 

    0x93d479a4,// 80 PAY  41 

    0xdbc0774e,// 81 PAY  42 

    0x395a017d,// 82 PAY  43 

    0x8734bed7,// 83 PAY  44 

    0x56441aaa,// 84 PAY  45 

    0x54ac1e24,// 85 PAY  46 

    0xcb5e4df1,// 86 PAY  47 

    0xc68c10a1,// 87 PAY  48 

    0x198d72f0,// 88 PAY  49 

    0x06a015aa,// 89 PAY  50 

    0x3dd3d0bd,// 90 PAY  51 

    0x5979f46d,// 91 PAY  52 

    0x30416269,// 92 PAY  53 

    0xe283e094,// 93 PAY  54 

    0xf57c4827,// 94 PAY  55 

    0x7a8a19ee,// 95 PAY  56 

    0x5581538f,// 96 PAY  57 

    0xcbb7d288,// 97 PAY  58 

    0x099a366d,// 98 PAY  59 

    0x47157acb,// 99 PAY  60 

    0x15cd715a,// 100 PAY  61 

    0xe93a45ea,// 101 PAY  62 

    0x012dfdbf,// 102 PAY  63 

    0x16031d0e,// 103 PAY  64 

    0x3b1bbfeb,// 104 PAY  65 

    0x38b04f39,// 105 PAY  66 

    0xecbddb33,// 106 PAY  67 

    0xb1efc7c7,// 107 PAY  68 

    0x8dff1b5a,// 108 PAY  69 

    0xb9b5ec7d,// 109 PAY  70 

    0xcc89ba74,// 110 PAY  71 

    0x56c9102d,// 111 PAY  72 

    0x5b279b41,// 112 PAY  73 

    0xaff1202e,// 113 PAY  74 

    0x5e524943,// 114 PAY  75 

    0x68fde98c,// 115 PAY  76 

    0x3d65c3c6,// 116 PAY  77 

    0x711a14dd,// 117 PAY  78 

    0x4f88dd8d,// 118 PAY  79 

    0xd3927e92,// 119 PAY  80 

    0x421c3f03,// 120 PAY  81 

    0x8c566b5d,// 121 PAY  82 

    0x1a1fb76d,// 122 PAY  83 

    0xdc404538,// 123 PAY  84 

    0x4612627a,// 124 PAY  85 

    0xb9f94fb4,// 125 PAY  86 

    0x003ab51e,// 126 PAY  87 

    0x35803e2b,// 127 PAY  88 

    0xd124e050,// 128 PAY  89 

    0x3eb66740,// 129 PAY  90 

    0xc454d369,// 130 PAY  91 

    0x8fc5fbf6,// 131 PAY  92 

    0xef5726b4,// 132 PAY  93 

    0xb31e5b90,// 133 PAY  94 

    0x5596ef98,// 134 PAY  95 

    0x319123fa,// 135 PAY  96 

    0xd8ab2e10,// 136 PAY  97 

    0x5898b7ed,// 137 PAY  98 

    0xa103f881,// 138 PAY  99 

    0x84953b5b,// 139 PAY 100 

    0x30594551,// 140 PAY 101 

    0x7e6c46af,// 141 PAY 102 

    0xe29b3be1,// 142 PAY 103 

    0x2720f78d,// 143 PAY 104 

    0x0c7a15a3,// 144 PAY 105 

    0x96c7af92,// 145 PAY 106 

    0x8a02e309,// 146 PAY 107 

    0xf215a8c7,// 147 PAY 108 

    0xbcf2164f,// 148 PAY 109 

    0x7811aa17,// 149 PAY 110 

    0x8344677b,// 150 PAY 111 

    0x20763692,// 151 PAY 112 

    0x2ad5ab97,// 152 PAY 113 

    0x4d7ab61a,// 153 PAY 114 

    0xe0739ecf,// 154 PAY 115 

    0x186b5d35,// 155 PAY 116 

    0x39a9daa4,// 156 PAY 117 

    0x668b9ee0,// 157 PAY 118 

    0x41614265,// 158 PAY 119 

    0x173df684,// 159 PAY 120 

    0xaf780208,// 160 PAY 121 

    0xe54d8cfc,// 161 PAY 122 

    0x68097720,// 162 PAY 123 

    0x31b82bc7,// 163 PAY 124 

    0x50d0c21f,// 164 PAY 125 

    0x603cab24,// 165 PAY 126 

    0x29aa19a7,// 166 PAY 127 

    0xfa2134d2,// 167 PAY 128 

    0xa9a8120c,// 168 PAY 129 

    0xbd0cdd1c,// 169 PAY 130 

    0x5070387b,// 170 PAY 131 

    0x03628bf0,// 171 PAY 132 

    0xc22c99bd,// 172 PAY 133 

    0xa6093f66,// 173 PAY 134 

    0x5eb2d9c5,// 174 PAY 135 

    0x8f0d33a0,// 175 PAY 136 

    0x45ca1a99,// 176 PAY 137 

    0xd6e620d1,// 177 PAY 138 

    0x8847cef0,// 178 PAY 139 

    0xd38c14f6,// 179 PAY 140 

    0xe1a30dd4,// 180 PAY 141 

    0x185e2a18,// 181 PAY 142 

    0xf428e121,// 182 PAY 143 

    0x07043011,// 183 PAY 144 

    0xf85afd5e,// 184 PAY 145 

    0xbac0fcc7,// 185 PAY 146 

    0xba878d02,// 186 PAY 147 

    0xce032821,// 187 PAY 148 

    0x3f434612,// 188 PAY 149 

    0x2b5570e6,// 189 PAY 150 

    0x010a577b,// 190 PAY 151 

    0x346e2537,// 191 PAY 152 

    0xe1521947,// 192 PAY 153 

    0x4045d012,// 193 PAY 154 

    0xa79319c6,// 194 PAY 155 

    0xc6e811cc,// 195 PAY 156 

    0x06935292,// 196 PAY 157 

    0x78162765,// 197 PAY 158 

    0x8c7fd10c,// 198 PAY 159 

    0x54f60cb8,// 199 PAY 160 

    0xd66247f5,// 200 PAY 161 

    0xd10f9f42,// 201 PAY 162 

    0xbbf40f1c,// 202 PAY 163 

    0x70b5bd47,// 203 PAY 164 

    0xcd96aaae,// 204 PAY 165 

    0xcfb0e235,// 205 PAY 166 

    0xb1b6f8f7,// 206 PAY 167 

    0x2729334d,// 207 PAY 168 

    0x447ff4ba,// 208 PAY 169 

    0x47629c22,// 209 PAY 170 

    0x3490c0f6,// 210 PAY 171 

    0xb057684e,// 211 PAY 172 

    0x9fa973df,// 212 PAY 173 

    0x095662c4,// 213 PAY 174 

    0x0a03320d,// 214 PAY 175 

    0x453e0f5c,// 215 PAY 176 

    0xe6659cf5,// 216 PAY 177 

    0x30700ab6,// 217 PAY 178 

    0xa0d26e86,// 218 PAY 179 

    0xd0eb6439,// 219 PAY 180 

    0x9bc998f8,// 220 PAY 181 

    0x215d5713,// 221 PAY 182 

    0x4e80992b,// 222 PAY 183 

    0xbe33c467,// 223 PAY 184 

    0x122f173a,// 224 PAY 185 

    0x2382d77a,// 225 PAY 186 

    0x0c233c19,// 226 PAY 187 

    0xf5a87d0f,// 227 PAY 188 

    0xe6fcc54a,// 228 PAY 189 

    0xced94d6e,// 229 PAY 190 

    0xc3c41e1d,// 230 PAY 191 

    0x1fbdf136,// 231 PAY 192 

    0xf7b12969,// 232 PAY 193 

    0x499e3dfc,// 233 PAY 194 

    0xea2ba04f,// 234 PAY 195 

    0x94f478da,// 235 PAY 196 

    0x3853e661,// 236 PAY 197 

    0x0c2c074e,// 237 PAY 198 

    0x98c9ca6a,// 238 PAY 199 

    0x384242dc,// 239 PAY 200 

    0x99fa057b,// 240 PAY 201 

    0x86cdae9c,// 241 PAY 202 

    0x84ef761e,// 242 PAY 203 

    0xd5f5ec6c,// 243 PAY 204 

    0xbd361d05,// 244 PAY 205 

    0x7f0308ac,// 245 PAY 206 

    0x5aee4be0,// 246 PAY 207 

    0x8c2528d5,// 247 PAY 208 

    0xf877d332,// 248 PAY 209 

    0x7d47768b,// 249 PAY 210 

    0xddaa1507,// 250 PAY 211 

    0xea368309,// 251 PAY 212 

    0xcef9d38c,// 252 PAY 213 

    0xc3ff7efb,// 253 PAY 214 

    0x12f09ab1,// 254 PAY 215 

    0x8b3746cc,// 255 PAY 216 

    0xd74698fb,// 256 PAY 217 

    0xbec90362,// 257 PAY 218 

    0x1eceb30c,// 258 PAY 219 

    0x4b8803c6,// 259 PAY 220 

    0xd6b38df4,// 260 PAY 221 

    0xcc490511,// 261 PAY 222 

    0x38fc8813,// 262 PAY 223 

    0x1e7e046e,// 263 PAY 224 

    0xe948b6dc,// 264 PAY 225 

    0x9413e89f,// 265 PAY 226 

    0x73ca904f,// 266 PAY 227 

    0x353f6319,// 267 PAY 228 

    0x567da961,// 268 PAY 229 

    0xc856b2a1,// 269 PAY 230 

    0x979a1b58,// 270 PAY 231 

    0x304d47f7,// 271 PAY 232 

    0xc17ff4d4,// 272 PAY 233 

    0xe62b4043,// 273 PAY 234 

    0x90024511,// 274 PAY 235 

    0xea62332a,// 275 PAY 236 

    0x55fb6b02,// 276 PAY 237 

    0x10de2909,// 277 PAY 238 

    0x0de7ab74,// 278 PAY 239 

    0x7626a6e1,// 279 PAY 240 

    0xf1e82a0e,// 280 PAY 241 

    0xa840e22c,// 281 PAY 242 

    0x4c1351ed,// 282 PAY 243 

    0x1f1a0400,// 283 PAY 244 

    0x9b3635d1,// 284 PAY 245 

    0xf277509a,// 285 PAY 246 

    0x00d5d902,// 286 PAY 247 

    0xe2422e3f,// 287 PAY 248 

    0xe150d163,// 288 PAY 249 

    0xf2edd7fe,// 289 PAY 250 

    0x54afe86b,// 290 PAY 251 

    0x901027fe,// 291 PAY 252 

    0x637c228a,// 292 PAY 253 

    0x2847d78a,// 293 PAY 254 

    0x19a759c9,// 294 PAY 255 

    0x980b03b7,// 295 PAY 256 

    0x964de64d,// 296 PAY 257 

    0x766fb150,// 297 PAY 258 

    0xb99e6145,// 298 PAY 259 

    0x3874a607,// 299 PAY 260 

    0x656fb132,// 300 PAY 261 

    0x898b42e8,// 301 PAY 262 

    0x48060dbb,// 302 PAY 263 

    0xfaecc7f1,// 303 PAY 264 

    0xfa5d8639,// 304 PAY 265 

    0x9c99e3d8,// 305 PAY 266 

    0x6aaa81cf,// 306 PAY 267 

    0x7229c99d,// 307 PAY 268 

    0xec40b14e,// 308 PAY 269 

    0xc8267c12,// 309 PAY 270 

    0x5e4b9064,// 310 PAY 271 

    0x5a8869d1,// 311 PAY 272 

    0x4eb79d30,// 312 PAY 273 

    0x6a99b91f,// 313 PAY 274 

    0x7aee2055,// 314 PAY 275 

    0xbb6bd127,// 315 PAY 276 

    0x21bdacc2,// 316 PAY 277 

    0x11027a54,// 317 PAY 278 

    0x09a660b5,// 318 PAY 279 

    0x403db17f,// 319 PAY 280 

    0xd639032d,// 320 PAY 281 

    0xa145100c,// 321 PAY 282 

    0x5f5e859a,// 322 PAY 283 

    0x84413f2b,// 323 PAY 284 

    0xe19c8432,// 324 PAY 285 

    0xcbc8d8c2,// 325 PAY 286 

    0xcac57688,// 326 PAY 287 

    0xce2836fa,// 327 PAY 288 

    0xcf8d9641,// 328 PAY 289 

    0xdb8d3576,// 329 PAY 290 

    0xdbceeeae,// 330 PAY 291 

    0x3c4f4cf8,// 331 PAY 292 

    0xbca1b644,// 332 PAY 293 

    0x0400d30f,// 333 PAY 294 

    0x13948041,// 334 PAY 295 

    0x4cd8999d,// 335 PAY 296 

    0x0df01bfb,// 336 PAY 297 

    0xe34e7d60,// 337 PAY 298 

    0x39178c5d,// 338 PAY 299 

    0x79435274,// 339 PAY 300 

    0xb379f916,// 340 PAY 301 

    0x0e1b0273,// 341 PAY 302 

    0x1a903cd5,// 342 PAY 303 

    0xf3e36921,// 343 PAY 304 

    0x6bcbce02,// 344 PAY 305 

    0xe823eac2,// 345 PAY 306 

    0x439deb49,// 346 PAY 307 

    0x29e0efa4,// 347 PAY 308 

    0x002b5a14,// 348 PAY 309 

    0x88bfe63e,// 349 PAY 310 

    0xc6c14692,// 350 PAY 311 

    0x126f2cc1,// 351 PAY 312 

    0x4d737450,// 352 PAY 313 

    0xfab3e791,// 353 PAY 314 

    0x20b76dfe,// 354 PAY 315 

    0x66db7b8e,// 355 PAY 316 

    0x3198e2cc,// 356 PAY 317 

    0x2e9794ae,// 357 PAY 318 

    0x16c403d7,// 358 PAY 319 

    0x70616190,// 359 PAY 320 

    0x4f6a39e3,// 360 PAY 321 

    0xed91b169,// 361 PAY 322 

    0x9f865024,// 362 PAY 323 

    0xa3ac9cd9,// 363 PAY 324 

    0x5359cf41,// 364 PAY 325 

    0xfcb57098,// 365 PAY 326 

    0x6855d0bb,// 366 PAY 327 

    0xf199ad29,// 367 PAY 328 

    0x432c8c51,// 368 PAY 329 

    0x2a570a44,// 369 PAY 330 

    0x3a0d6988,// 370 PAY 331 

    0x3625bc5b,// 371 PAY 332 

    0x6dae177f,// 372 PAY 333 

    0xfbe8c427,// 373 PAY 334 

    0xc7875eeb,// 374 PAY 335 

    0xac0f8808,// 375 PAY 336 

    0xb07060ba,// 376 PAY 337 

    0x8921edba,// 377 PAY 338 

    0xa98d4045,// 378 PAY 339 

    0x852b3cb4,// 379 PAY 340 

    0x58339e74,// 380 PAY 341 

    0x02a89b0f,// 381 PAY 342 

    0xc8b7b995,// 382 PAY 343 

    0x63cf226f,// 383 PAY 344 

    0x9515aa63,// 384 PAY 345 

    0x47ab2248,// 385 PAY 346 

    0x597a811a,// 386 PAY 347 

    0xfe32fac9,// 387 PAY 348 

    0x36d896ef,// 388 PAY 349 

    0xf0e7eb72,// 389 PAY 350 

    0xf0112998,// 390 PAY 351 

    0x71c12e2b,// 391 PAY 352 

    0xa509b180,// 392 PAY 353 

    0x2a2e8cf5,// 393 PAY 354 

    0x242930e9,// 394 PAY 355 

    0x0fe0fb18,// 395 PAY 356 

    0x59c032d4,// 396 PAY 357 

    0x3689a8df,// 397 PAY 358 

    0xa8e53b80,// 398 PAY 359 

    0x0c125be5,// 399 PAY 360 

    0x667342b7,// 400 PAY 361 

    0x99418ab9,// 401 PAY 362 

    0x957a6b9a,// 402 PAY 363 

    0x72b6246f,// 403 PAY 364 

    0x666beaba,// 404 PAY 365 

    0x65e8e2c1,// 405 PAY 366 

    0x8acdbaf7,// 406 PAY 367 

    0x82a9ec37,// 407 PAY 368 

    0x5954c884,// 408 PAY 369 

    0xbfd531f1,// 409 PAY 370 

    0x8ef6e9da,// 410 PAY 371 

    0x4094917a,// 411 PAY 372 

    0xe3772966,// 412 PAY 373 

    0xbc938c5b,// 413 PAY 374 

    0x6093edc3,// 414 PAY 375 

    0x3e7bf896,// 415 PAY 376 

    0xade1baa0,// 416 PAY 377 

    0xf80b5443,// 417 PAY 378 

    0x2d722f85,// 418 PAY 379 

    0x6150af69,// 419 PAY 380 

    0x1bae3d5c,// 420 PAY 381 

    0x8a30271a,// 421 PAY 382 

    0x2160c779,// 422 PAY 383 

    0x629c4a26,// 423 PAY 384 

    0x30b4ee59,// 424 PAY 385 

    0xea580227,// 425 PAY 386 

    0x77741f6d,// 426 PAY 387 

    0x40c1ebe7,// 427 PAY 388 

    0x4e2e8da2,// 428 PAY 389 

    0x6d3c5213,// 429 PAY 390 

    0x4ffca153,// 430 PAY 391 

    0xf28cfe2d,// 431 PAY 392 

    0xa4883f3b,// 432 PAY 393 

    0x04f30de9,// 433 PAY 394 

    0x795da3e7,// 434 PAY 395 

    0x4ece40f2,// 435 PAY 396 

    0xf84320b0,// 436 PAY 397 

    0x94f228ea,// 437 PAY 398 

    0x0d2f177a,// 438 PAY 399 

    0x0220121b,// 439 PAY 400 

    0xbb5a5e6d,// 440 PAY 401 

    0x4220ab77,// 441 PAY 402 

    0xdef4f11c,// 442 PAY 403 

    0xb07d47c6,// 443 PAY 404 

    0x96b580fc,// 444 PAY 405 

    0x430b0862,// 445 PAY 406 

    0xe3ca6fa2,// 446 PAY 407 

    0x097045fe,// 447 PAY 408 

    0xb2a760fb,// 448 PAY 409 

    0xb756befa,// 449 PAY 410 

    0xe338970f,// 450 PAY 411 

    0xaab7c957,// 451 PAY 412 

    0x1621370d,// 452 PAY 413 

    0x153e8090,// 453 PAY 414 

    0x800f3839,// 454 PAY 415 

    0x0d96b335,// 455 PAY 416 

    0x04a72116,// 456 PAY 417 

    0xa314db72,// 457 PAY 418 

    0xee30c11e,// 458 PAY 419 

    0xfa258e83,// 459 PAY 420 

    0xf2866dfa,// 460 PAY 421 

    0x87565cc4,// 461 PAY 422 

    0x87c1c486,// 462 PAY 423 

    0x60ad5a4e,// 463 PAY 424 

    0x7142bc8c,// 464 PAY 425 

    0xce65535f,// 465 PAY 426 

    0xe5c2d5b9,// 466 PAY 427 

    0xfcf36221,// 467 PAY 428 

    0x6b21acb3,// 468 PAY 429 

    0x7b5dcaf4,// 469 PAY 430 

    0xe5899ee5,// 470 PAY 431 

    0xdf0611a5,// 471 PAY 432 

    0x72a5b034,// 472 PAY 433 

    0xdae4bff8,// 473 PAY 434 

    0x58201fb6,// 474 PAY 435 

    0x8a6c6c71,// 475 PAY 436 

    0x969a27a7,// 476 PAY 437 

    0x88b18156,// 477 PAY 438 

    0x113af07c,// 478 PAY 439 

    0xf10abd43,// 479 PAY 440 

    0xe7a02269,// 480 PAY 441 

    0xf17c4b6d,// 481 PAY 442 

    0xb384b382,// 482 PAY 443 

    0xd10f89fd,// 483 PAY 444 

    0x8be6f62d,// 484 PAY 445 

    0xe789d64f,// 485 PAY 446 

    0x36b83df0,// 486 PAY 447 

    0x89fa2e65,// 487 PAY 448 

    0xd8de8dbc,// 488 PAY 449 

    0x9b7456ff,// 489 PAY 450 

    0x30a335e4,// 490 PAY 451 

    0x298cbe2b,// 491 PAY 452 

    0x20e12df7,// 492 PAY 453 

    0x7c5f87f3,// 493 PAY 454 

    0x71078450,// 494 PAY 455 

    0x0ff1e79c,// 495 PAY 456 

    0xb00780e8,// 496 PAY 457 

    0xd9034938,// 497 PAY 458 

    0x233271a6,// 498 PAY 459 

    0x9b83b727,// 499 PAY 460 

    0x39cf11c9,// 500 PAY 461 

    0xa761a2b8,// 501 PAY 462 

    0x0a4b439d,// 502 PAY 463 

    0x4e32f9e4,// 503 PAY 464 

    0x4bfe6c40,// 504 PAY 465 

    0xa1b7168b,// 505 PAY 466 

    0xe7196593,// 506 PAY 467 

    0x97913ee7,// 507 PAY 468 

    0x31d9ccd4,// 508 PAY 469 

    0x018388c9,// 509 PAY 470 

    0xf2bfd74f,// 510 PAY 471 

    0x57b51efb,// 511 PAY 472 

    0x1b9118f8,// 512 PAY 473 

    0x22ec6622,// 513 PAY 474 

    0x0db7689a,// 514 PAY 475 

    0x5bb51a21,// 515 PAY 476 

    0xf38cdfcf,// 516 PAY 477 

    0xb792921f,// 517 PAY 478 

    0x0f59ab18,// 518 PAY 479 

    0xf4af23a8,// 519 PAY 480 

    0xdc4db33a,// 520 PAY 481 

    0x1fdd22b0,// 521 PAY 482 

    0x24c81b75,// 522 PAY 483 

    0x0a171e10,// 523 PAY 484 

    0xfe5789ad,// 524 PAY 485 

    0x824b9161,// 525 PAY 486 

    0x191ecc45,// 526 PAY 487 

    0x37f07a36,// 527 PAY 488 

    0xd2698dfe,// 528 PAY 489 

    0x55d96792,// 529 PAY 490 

    0x41ec9577,// 530 PAY 491 

    0x1c2557f6,// 531 PAY 492 

    0x29d1643b,// 532 PAY 493 

    0x47526527,// 533 PAY 494 

    0x69f0dff5,// 534 PAY 495 

    0xc9855173,// 535 PAY 496 

    0xc9f55343,// 536 PAY 497 

    0xdee9e4f0,// 537 PAY 498 

    0x42e1e7e9,// 538 PAY 499 

    0x5fc30d7d,// 539 PAY 500 

    0xdc6470d3,// 540 PAY 501 

    0x255d7534,// 541 PAY 502 

    0x8f000000,// 542 PAY 503 

/// STA is 1 words. 

/// STA num_pkts       : 178 

/// STA pkt_idx        : 214 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x6e 

    0x03586eb2 // 543 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt62_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x02 

/// ECH pdu_tag        : 0x00 

    0x00020000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x5 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0000000f,// 3 SCX   1 

    0x80414870,// 4 SCX   2 

    0x00001500,// 5 SCX   3 

    0x41a9c246,// 6 SCX   4 

    0x0f4f23a7,// 7 SCX   5 

    0xeccdda71,// 8 SCX   6 

    0x6bab3886,// 9 SCX   7 

    0x432081a7,// 10 SCX   8 

    0x243f7d43,// 11 SCX   9 

    0x1aac986c,// 12 SCX  10 

    0xd91f4982,// 13 SCX  11 

    0xe3d9434f,// 14 SCX  12 

    0xfe607322,// 15 SCX  13 

    0x091ccb36,// 16 SCX  14 

    0x7be05547,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 844 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 311 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 311 

/// BFD lencrypto      : 80 

/// BFD ofstcrypto     : 16 

/// BFD (ofst+len)cry  : 96 

/// BFD ofstiv         : 4 

/// BFD ofsticv        : 660 

    0x00000137,// 18 BFD   1 

    0x00100050,// 19 BFD   2 

    0x02940004,// 20 BFD   3 

/// MFM is 10 words. 

/// MFM vldnibs        : 46 

    0x4600e73b,// 21 MFM   1 

    0xc9399c7d,// 22 MFM   2 

    0x53bbb830,// 23 MFM   3 

    0x72076fe8,// 24 MFM   4 

    0x8af300f5,// 25 MFM   5 

    0xd4054441,// 26 MFM   6 

    0x3b83e5ed,// 27 MFM   7 

    0x8c0c41a3,// 28 MFM   8 

    0x68b421f3,// 29 MFM   9 

    0x2f000000,// 30 MFM  10 

/// BDA is 212 words. 

/// BDA size     is 844 (0x34c) 

/// BDA id       is 0x8eca 

    0x034c8eca,// 31 BDA   1 

/// PAY Generic Data size   : 844 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x9c96ac78,// 32 PAY   1 

    0x49e45026,// 33 PAY   2 

    0xa5f65bd7,// 34 PAY   3 

    0x2f2e67a4,// 35 PAY   4 

    0xecd134ee,// 36 PAY   5 

    0xf7791b70,// 37 PAY   6 

    0x28e05f29,// 38 PAY   7 

    0x252a309d,// 39 PAY   8 

    0xe841e30c,// 40 PAY   9 

    0x62b79770,// 41 PAY  10 

    0x005f8dc5,// 42 PAY  11 

    0x26ad1306,// 43 PAY  12 

    0xc5851778,// 44 PAY  13 

    0xabc047af,// 45 PAY  14 

    0x082a942f,// 46 PAY  15 

    0x3ffe6f73,// 47 PAY  16 

    0x3525c192,// 48 PAY  17 

    0xe83901f6,// 49 PAY  18 

    0x18767579,// 50 PAY  19 

    0x784fd049,// 51 PAY  20 

    0x1b9c812a,// 52 PAY  21 

    0xbdcad6cd,// 53 PAY  22 

    0xb3475fbd,// 54 PAY  23 

    0x40394375,// 55 PAY  24 

    0xecf37519,// 56 PAY  25 

    0xbede35db,// 57 PAY  26 

    0x1f2db32b,// 58 PAY  27 

    0xea1ce155,// 59 PAY  28 

    0x336d50f1,// 60 PAY  29 

    0x88feeb50,// 61 PAY  30 

    0x89d1c1f6,// 62 PAY  31 

    0x3d6c351a,// 63 PAY  32 

    0x98a999d3,// 64 PAY  33 

    0x1461c6bb,// 65 PAY  34 

    0x7582ceda,// 66 PAY  35 

    0xea63cdb7,// 67 PAY  36 

    0xad95f363,// 68 PAY  37 

    0x41aaf41e,// 69 PAY  38 

    0xc9bfd8df,// 70 PAY  39 

    0xc88bc6e8,// 71 PAY  40 

    0xcee7dfba,// 72 PAY  41 

    0x769d6cbd,// 73 PAY  42 

    0xea5c5b5b,// 74 PAY  43 

    0x72fec43f,// 75 PAY  44 

    0x518a8858,// 76 PAY  45 

    0xda4331ca,// 77 PAY  46 

    0xfc03ae64,// 78 PAY  47 

    0xdaa7a5e9,// 79 PAY  48 

    0xd1d9ba69,// 80 PAY  49 

    0x9f4f305d,// 81 PAY  50 

    0xf8f6927f,// 82 PAY  51 

    0x1e99f2a3,// 83 PAY  52 

    0x8eca576b,// 84 PAY  53 

    0xfaaa1d81,// 85 PAY  54 

    0xca550323,// 86 PAY  55 

    0xfdfb31f0,// 87 PAY  56 

    0xeb5441f7,// 88 PAY  57 

    0x60ae6fa7,// 89 PAY  58 

    0x31b28529,// 90 PAY  59 

    0xbb1e4716,// 91 PAY  60 

    0x0023828f,// 92 PAY  61 

    0x48de3058,// 93 PAY  62 

    0xd39c0a19,// 94 PAY  63 

    0xc99e1545,// 95 PAY  64 

    0xbfccc9cb,// 96 PAY  65 

    0xb73df53e,// 97 PAY  66 

    0xeaae28dd,// 98 PAY  67 

    0xe8ccf430,// 99 PAY  68 

    0xe1f2c6db,// 100 PAY  69 

    0x1d860244,// 101 PAY  70 

    0x26b9050f,// 102 PAY  71 

    0xb2975559,// 103 PAY  72 

    0x42df5e38,// 104 PAY  73 

    0x40ec9183,// 105 PAY  74 

    0x336e14ef,// 106 PAY  75 

    0x95b08b1b,// 107 PAY  76 

    0x50da2ca7,// 108 PAY  77 

    0xf9205e13,// 109 PAY  78 

    0xfbab703d,// 110 PAY  79 

    0xdc6e861f,// 111 PAY  80 

    0xb14e4bd0,// 112 PAY  81 

    0x626c7b9e,// 113 PAY  82 

    0x2ddae152,// 114 PAY  83 

    0xbbcec0d2,// 115 PAY  84 

    0x6413c887,// 116 PAY  85 

    0x7f4711a1,// 117 PAY  86 

    0xc30835f6,// 118 PAY  87 

    0xb4bc3c1d,// 119 PAY  88 

    0xd95e00a2,// 120 PAY  89 

    0x81ebf86d,// 121 PAY  90 

    0x069e15c0,// 122 PAY  91 

    0x217c42f3,// 123 PAY  92 

    0x4c5bfe48,// 124 PAY  93 

    0x0befba4b,// 125 PAY  94 

    0x3af3e473,// 126 PAY  95 

    0x594308e2,// 127 PAY  96 

    0x900473b3,// 128 PAY  97 

    0xe91b5bea,// 129 PAY  98 

    0x42347c52,// 130 PAY  99 

    0xb4c45835,// 131 PAY 100 

    0x966abc2c,// 132 PAY 101 

    0x5c08f105,// 133 PAY 102 

    0x4306f154,// 134 PAY 103 

    0xe9df75c3,// 135 PAY 104 

    0x6da1d4d9,// 136 PAY 105 

    0x8458b25f,// 137 PAY 106 

    0x32f9cd30,// 138 PAY 107 

    0x0a82e582,// 139 PAY 108 

    0x22e7c8f8,// 140 PAY 109 

    0xfd388eef,// 141 PAY 110 

    0x51f39408,// 142 PAY 111 

    0xdec8021c,// 143 PAY 112 

    0x9a299e96,// 144 PAY 113 

    0x115b430e,// 145 PAY 114 

    0x1fe20ad1,// 146 PAY 115 

    0xdfbdb0bd,// 147 PAY 116 

    0x6eb44224,// 148 PAY 117 

    0xdc8ccfbd,// 149 PAY 118 

    0x9185ca27,// 150 PAY 119 

    0x7e7c5ba8,// 151 PAY 120 

    0xc125f71b,// 152 PAY 121 

    0xe716d0c6,// 153 PAY 122 

    0xdf6388e2,// 154 PAY 123 

    0x55342274,// 155 PAY 124 

    0xd5b92cd5,// 156 PAY 125 

    0x300ec9b1,// 157 PAY 126 

    0xa2561171,// 158 PAY 127 

    0x50bc0f60,// 159 PAY 128 

    0x43b61af6,// 160 PAY 129 

    0xe51b312e,// 161 PAY 130 

    0x7798c0fa,// 162 PAY 131 

    0xe3c472f0,// 163 PAY 132 

    0x7f657277,// 164 PAY 133 

    0xc8747411,// 165 PAY 134 

    0xd034a01d,// 166 PAY 135 

    0x056cfa7b,// 167 PAY 136 

    0x03f1976b,// 168 PAY 137 

    0x4f7974c3,// 169 PAY 138 

    0xbef1476f,// 170 PAY 139 

    0x65b82267,// 171 PAY 140 

    0x2bba30d4,// 172 PAY 141 

    0x1b6c0f5e,// 173 PAY 142 

    0x67df59a8,// 174 PAY 143 

    0x5e4c3bcf,// 175 PAY 144 

    0x1e8c8cd5,// 176 PAY 145 

    0x963f22c8,// 177 PAY 146 

    0x4250665d,// 178 PAY 147 

    0xef0a1f32,// 179 PAY 148 

    0x55c48ca4,// 180 PAY 149 

    0x6ce3178f,// 181 PAY 150 

    0x7830bd9d,// 182 PAY 151 

    0x28f1e6eb,// 183 PAY 152 

    0x7f7f6c1d,// 184 PAY 153 

    0x30dfcd76,// 185 PAY 154 

    0x6f75bdb6,// 186 PAY 155 

    0xaed156f4,// 187 PAY 156 

    0xe86871e8,// 188 PAY 157 

    0x37eea4d7,// 189 PAY 158 

    0xa01bb9ae,// 190 PAY 159 

    0xa5200f7c,// 191 PAY 160 

    0xbf1df823,// 192 PAY 161 

    0xed02fb31,// 193 PAY 162 

    0x6ec9e657,// 194 PAY 163 

    0xdbe114ef,// 195 PAY 164 

    0x46b0726e,// 196 PAY 165 

    0xbf899fc5,// 197 PAY 166 

    0x34657ab2,// 198 PAY 167 

    0x182f1ee5,// 199 PAY 168 

    0x958635aa,// 200 PAY 169 

    0x0a06eff0,// 201 PAY 170 

    0x8a09355a,// 202 PAY 171 

    0x1659203c,// 203 PAY 172 

    0xe37a1583,// 204 PAY 173 

    0x6020dbc8,// 205 PAY 174 

    0x1fd370c6,// 206 PAY 175 

    0xb5fca16e,// 207 PAY 176 

    0x15a853e3,// 208 PAY 177 

    0x9f71001e,// 209 PAY 178 

    0x4a4155fa,// 210 PAY 179 

    0x11d53c6e,// 211 PAY 180 

    0x401cae5a,// 212 PAY 181 

    0x1121c16a,// 213 PAY 182 

    0x3dbb8386,// 214 PAY 183 

    0xfc9a91f4,// 215 PAY 184 

    0xb7360a7f,// 216 PAY 185 

    0xd7d95013,// 217 PAY 186 

    0xda5d5261,// 218 PAY 187 

    0xfc7816d9,// 219 PAY 188 

    0xbb0fe947,// 220 PAY 189 

    0x4ee31ec9,// 221 PAY 190 

    0xdea47af6,// 222 PAY 191 

    0x357b0685,// 223 PAY 192 

    0x15ce4088,// 224 PAY 193 

    0xd7594ac4,// 225 PAY 194 

    0x0012a78f,// 226 PAY 195 

    0x4858ca83,// 227 PAY 196 

    0x84ed7998,// 228 PAY 197 

    0x4fb46d54,// 229 PAY 198 

    0xf989c0fe,// 230 PAY 199 

    0x368329f5,// 231 PAY 200 

    0xe04f6cf4,// 232 PAY 201 

    0x47fb6975,// 233 PAY 202 

    0xd7861c29,// 234 PAY 203 

    0x0b94297d,// 235 PAY 204 

    0xd8dafac5,// 236 PAY 205 

    0x990a3f75,// 237 PAY 206 

    0x6ff8c387,// 238 PAY 207 

    0x3c79c0fb,// 239 PAY 208 

    0xd5f0b184,// 240 PAY 209 

    0x4ebec914,// 241 PAY 210 

    0x19462c91,// 242 PAY 211 

/// STA is 1 words. 

/// STA num_pkts       : 128 

/// STA pkt_idx        : 187 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xdd 

    0x02ecdd80 // 243 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt63_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x0c 

/// ECH pdu_tag        : 0x00 

    0x000c0000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0800000f,// 3 SCX   1 

    0x804248d8,// 4 SCX   2 

    0x00002300,// 5 SCX   3 

    0xa1d66f6a,// 6 SCX   4 

    0x997072f9,// 7 SCX   5 

    0xe2db2c84,// 8 SCX   6 

    0xa88ce90e,// 9 SCX   7 

    0xdea63dfb,// 10 SCX   8 

    0x892e6578,// 11 SCX   9 

    0xa92fba19,// 12 SCX  10 

    0x99ff7411,// 13 SCX  11 

    0xb2e9a30b,// 14 SCX  12 

    0x28df1edb,// 15 SCX  13 

    0x771631ca,// 16 SCX  14 

    0xad2abec0,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 56 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 26 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 26 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 16 

/// BFD (ofst+len)cry  : 24 

/// BFD ofstiv         : 0 

/// BFD ofsticv        : 36 

    0x0000001a,// 18 BFD   1 

    0x00100008,// 19 BFD   2 

    0x00240000,// 20 BFD   3 

/// MFM is 1 words. 

/// MFM vldnibs        : 2 

    0x02005f00,// 21 MFM   1 

/// BDA is 15 words. 

/// BDA size     is 56 (0x38) 

/// BDA id       is 0xad27 

    0x0038ad27,// 22 BDA   1 

/// PAY Generic Data size   : 56 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0xbe58f4c3,// 23 PAY   1 

    0x2f94a1e0,// 24 PAY   2 

    0x25fe45ab,// 25 PAY   3 

    0x017b49d3,// 26 PAY   4 

    0x56f63bb6,// 27 PAY   5 

    0x0be6a9cb,// 28 PAY   6 

    0xd1161887,// 29 PAY   7 

    0xa1f36760,// 30 PAY   8 

    0x6d1effb8,// 31 PAY   9 

    0x6388a906,// 32 PAY  10 

    0x1724b2dc,// 33 PAY  11 

    0xb58fa53c,// 34 PAY  12 

    0x75e7e03c,// 35 PAY  13 

    0x9a9b8e70,// 36 PAY  14 

/// STA is 1 words. 

/// STA num_pkts       : 83 

/// STA pkt_idx        : 218 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x25 

    0x03682553 // 37 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt64_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x08 

/// ECH pdu_tag        : 0x00 

    0x00080000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv !insert_icv check_icv sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x00000011,// 3 SCX   1 

    0x8045488e,// 4 SCX   2 

    0x000014c2,// 5 SCX   3 

    0xb6496f6e,// 6 SCX   4 

    0xcb0e07d3,// 7 SCX   5 

    0xf047cdaf,// 8 SCX   6 

    0x769546c1,// 9 SCX   7 

    0xdca4c844,// 10 SCX   8 

    0x12561828,// 11 SCX   9 

    0xe783c154,// 12 SCX  10 

    0x08c6be86,// 13 SCX  11 

    0xb9adf4eb,// 14 SCX  12 

    0xc4478bf9,// 15 SCX  13 

    0xbf094d4e,// 16 SCX  14 

    0x674f05b4,// 17 SCX  15 

    0xf5455951,// 18 SCX  16 

    0xf79d8ba2,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 826 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 582 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 582 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 452 

/// BFD (ofst+len)cry  : 460 

/// BFD ofstiv         : 184 

/// BFD ofsticv        : 744 

    0x00000246,// 20 BFD   1 

    0x01c40008,// 21 BFD   2 

    0x02e800b8,// 22 BFD   3 

/// MFM is 10 words. 

/// MFM vldnibs        : 47 

    0x47006ddb,// 23 MFM   1 

    0x7c116ae2,// 24 MFM   2 

    0x0e026148,// 25 MFM   3 

    0x15a238cf,// 26 MFM   4 

    0x176dac6f,// 27 MFM   5 

    0x2f16dfbd,// 28 MFM   6 

    0xca27f01e,// 29 MFM   7 

    0x54c3f64f,// 30 MFM   8 

    0x1e99c7bd,// 31 MFM   9 

    0xdca00000,// 32 MFM  10 

/// BDA is 208 words. 

/// BDA size     is 826 (0x33a) 

/// BDA id       is 0x770a 

    0x033a770a,// 33 BDA   1 

/// PAY Generic Data size   : 826 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0xfe6819e8,// 34 PAY   1 

    0xd1075e50,// 35 PAY   2 

    0xb92495bf,// 36 PAY   3 

    0x52944350,// 37 PAY   4 

    0x866e2028,// 38 PAY   5 

    0x4c0f43af,// 39 PAY   6 

    0x885403b6,// 40 PAY   7 

    0x5ff466ec,// 41 PAY   8 

    0x5019c958,// 42 PAY   9 

    0x7398c009,// 43 PAY  10 

    0x360b1941,// 44 PAY  11 

    0xf74fc073,// 45 PAY  12 

    0x7d0c854e,// 46 PAY  13 

    0x9b3fc06b,// 47 PAY  14 

    0x69eaaa9a,// 48 PAY  15 

    0x00b68050,// 49 PAY  16 

    0x3ea56df4,// 50 PAY  17 

    0x674635b9,// 51 PAY  18 

    0x6e5b30ff,// 52 PAY  19 

    0x34c60f3b,// 53 PAY  20 

    0x50456d6b,// 54 PAY  21 

    0x50bd23dc,// 55 PAY  22 

    0x3783ce5e,// 56 PAY  23 

    0x451b9cc8,// 57 PAY  24 

    0xb8bfa651,// 58 PAY  25 

    0xbad82c3c,// 59 PAY  26 

    0xa206fbed,// 60 PAY  27 

    0x7fac0d71,// 61 PAY  28 

    0x03de7e99,// 62 PAY  29 

    0x38934621,// 63 PAY  30 

    0x942612a0,// 64 PAY  31 

    0x90eac12f,// 65 PAY  32 

    0xc51bc559,// 66 PAY  33 

    0xb0831df3,// 67 PAY  34 

    0xd40c029d,// 68 PAY  35 

    0xbc5dbb85,// 69 PAY  36 

    0x6fe37eb0,// 70 PAY  37 

    0x170ed068,// 71 PAY  38 

    0xa1201802,// 72 PAY  39 

    0x1e624565,// 73 PAY  40 

    0xfd801f4a,// 74 PAY  41 

    0x07d31050,// 75 PAY  42 

    0xca8dcf06,// 76 PAY  43 

    0x7e63eca9,// 77 PAY  44 

    0x2c0c8ec5,// 78 PAY  45 

    0xc6955c9d,// 79 PAY  46 

    0x1d50df45,// 80 PAY  47 

    0x10311865,// 81 PAY  48 

    0x5e54fc53,// 82 PAY  49 

    0x628a60a7,// 83 PAY  50 

    0x568f5cfe,// 84 PAY  51 

    0x7b21a085,// 85 PAY  52 

    0x6c6c4316,// 86 PAY  53 

    0x76f3c992,// 87 PAY  54 

    0x38a94882,// 88 PAY  55 

    0xd58acc20,// 89 PAY  56 

    0x9e0c73f6,// 90 PAY  57 

    0xffb87781,// 91 PAY  58 

    0xc62643fe,// 92 PAY  59 

    0xb6b51d1e,// 93 PAY  60 

    0xccfa2bec,// 94 PAY  61 

    0x9ea60714,// 95 PAY  62 

    0x1d44c0c1,// 96 PAY  63 

    0x885bf5a1,// 97 PAY  64 

    0xc75e81d5,// 98 PAY  65 

    0x1b252716,// 99 PAY  66 

    0x85e758c5,// 100 PAY  67 

    0x5e90a664,// 101 PAY  68 

    0x27e0fd65,// 102 PAY  69 

    0x7feeb9c2,// 103 PAY  70 

    0x7f938336,// 104 PAY  71 

    0xe7f76ace,// 105 PAY  72 

    0xd08d82ce,// 106 PAY  73 

    0xa5a134b0,// 107 PAY  74 

    0x05068e6b,// 108 PAY  75 

    0x39adcb7c,// 109 PAY  76 

    0x32262340,// 110 PAY  77 

    0x100571b4,// 111 PAY  78 

    0x1abacd79,// 112 PAY  79 

    0xd5ff1ccc,// 113 PAY  80 

    0x4c93ee72,// 114 PAY  81 

    0x88b061ee,// 115 PAY  82 

    0x7c382da9,// 116 PAY  83 

    0x4756b4ec,// 117 PAY  84 

    0xdc381908,// 118 PAY  85 

    0xf7fa1229,// 119 PAY  86 

    0x5489b6c5,// 120 PAY  87 

    0x78b48b48,// 121 PAY  88 

    0x96b585fe,// 122 PAY  89 

    0xc6c8c6c7,// 123 PAY  90 

    0x11f8f455,// 124 PAY  91 

    0x7de1fa17,// 125 PAY  92 

    0x544e2fc8,// 126 PAY  93 

    0x37193d94,// 127 PAY  94 

    0x80de6d7f,// 128 PAY  95 

    0xfec8586a,// 129 PAY  96 

    0x57bbcc20,// 130 PAY  97 

    0x8ca887bc,// 131 PAY  98 

    0xdcda88c9,// 132 PAY  99 

    0x4c2fefbc,// 133 PAY 100 

    0x7302814a,// 134 PAY 101 

    0x4e8b0b40,// 135 PAY 102 

    0x7c8398b4,// 136 PAY 103 

    0xefb02862,// 137 PAY 104 

    0xf755eff8,// 138 PAY 105 

    0x3a4f6bf8,// 139 PAY 106 

    0xf164c0c8,// 140 PAY 107 

    0xd1a1b097,// 141 PAY 108 

    0x9e19820a,// 142 PAY 109 

    0x61058c53,// 143 PAY 110 

    0x88e41bdb,// 144 PAY 111 

    0xdb47b4cc,// 145 PAY 112 

    0x7483f316,// 146 PAY 113 

    0x84a02e8c,// 147 PAY 114 

    0xb9781de1,// 148 PAY 115 

    0x441a09af,// 149 PAY 116 

    0x368242e2,// 150 PAY 117 

    0x423b4013,// 151 PAY 118 

    0x4e83323c,// 152 PAY 119 

    0x8b40b603,// 153 PAY 120 

    0x36a32f03,// 154 PAY 121 

    0x9b76a8d3,// 155 PAY 122 

    0x84aa6390,// 156 PAY 123 

    0x277e445a,// 157 PAY 124 

    0x3f73d15b,// 158 PAY 125 

    0xf9338181,// 159 PAY 126 

    0x3597c3b8,// 160 PAY 127 

    0x7869be53,// 161 PAY 128 

    0x34e6d4cd,// 162 PAY 129 

    0xb0657544,// 163 PAY 130 

    0x7d9643d7,// 164 PAY 131 

    0x370bea3d,// 165 PAY 132 

    0x28f08cc8,// 166 PAY 133 

    0x94ae5008,// 167 PAY 134 

    0xdf6d3562,// 168 PAY 135 

    0x8e2db270,// 169 PAY 136 

    0x23777097,// 170 PAY 137 

    0x1b2e68f9,// 171 PAY 138 

    0xc4adb49a,// 172 PAY 139 

    0xacafa10a,// 173 PAY 140 

    0x093d28c0,// 174 PAY 141 

    0xa02dfe4b,// 175 PAY 142 

    0xe788c94d,// 176 PAY 143 

    0xd163b390,// 177 PAY 144 

    0xd28614f6,// 178 PAY 145 

    0xd3830c55,// 179 PAY 146 

    0xda472386,// 180 PAY 147 

    0x04059e6a,// 181 PAY 148 

    0xbf243fcf,// 182 PAY 149 

    0x07756414,// 183 PAY 150 

    0x0ba6e45b,// 184 PAY 151 

    0xc3930834,// 185 PAY 152 

    0xb8f36edf,// 186 PAY 153 

    0xf6c32dbe,// 187 PAY 154 

    0x56923e94,// 188 PAY 155 

    0x94d8d752,// 189 PAY 156 

    0x2070d46e,// 190 PAY 157 

    0xb5973427,// 191 PAY 158 

    0x2e0b770f,// 192 PAY 159 

    0xb12ff02f,// 193 PAY 160 

    0x93f14274,// 194 PAY 161 

    0x84f758a5,// 195 PAY 162 

    0xcefecb00,// 196 PAY 163 

    0x87b4e82d,// 197 PAY 164 

    0x1b005428,// 198 PAY 165 

    0x1ce73297,// 199 PAY 166 

    0x8efa7380,// 200 PAY 167 

    0x49748b50,// 201 PAY 168 

    0xfe78c01a,// 202 PAY 169 

    0xde222d0d,// 203 PAY 170 

    0x4dc44357,// 204 PAY 171 

    0xd7b80684,// 205 PAY 172 

    0x0cb1820f,// 206 PAY 173 

    0xd654cfdc,// 207 PAY 174 

    0x3d6fe4e1,// 208 PAY 175 

    0x3e313311,// 209 PAY 176 

    0xba56a4f8,// 210 PAY 177 

    0x972cd991,// 211 PAY 178 

    0x032d46dc,// 212 PAY 179 

    0x2611ac83,// 213 PAY 180 

    0x6d6d8dbf,// 214 PAY 181 

    0x3a9bfbc6,// 215 PAY 182 

    0x4862dc81,// 216 PAY 183 

    0x8f0bc642,// 217 PAY 184 

    0x998c94e5,// 218 PAY 185 

    0xe0c9e9b5,// 219 PAY 186 

    0xf0322a2e,// 220 PAY 187 

    0x99269919,// 221 PAY 188 

    0xc0cd76d3,// 222 PAY 189 

    0x7743e5ac,// 223 PAY 190 

    0xf1e19aa5,// 224 PAY 191 

    0x8aacf431,// 225 PAY 192 

    0xc3f236f9,// 226 PAY 193 

    0xa1cee21e,// 227 PAY 194 

    0x9aeb0b4a,// 228 PAY 195 

    0x77e8109a,// 229 PAY 196 

    0x21e8bd52,// 230 PAY 197 

    0x6d4269cb,// 231 PAY 198 

    0xc5b4d05c,// 232 PAY 199 

    0x11989aa3,// 233 PAY 200 

    0x231aa71a,// 234 PAY 201 

    0xaa991ddc,// 235 PAY 202 

    0x5d858126,// 236 PAY 203 

    0x0f5e3184,// 237 PAY 204 

    0x0794e9aa,// 238 PAY 205 

    0xb2b13309,// 239 PAY 206 

    0xa3630000,// 240 PAY 207 

/// STA is 1 words. 

/// STA num_pkts       : 51 

/// STA pkt_idx        : 131 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xbb 

    0x020cbb33 // 241 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt65_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x08 

/// ECH pdu_tag        : 0x00 

    0x00080000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x5 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0000000f,// 3 SCX   1 

    0x80404849,// 4 SCX   2 

    0x00006500,// 5 SCX   3 

    0xcec20a19,// 6 SCX   4 

    0x137a53f9,// 7 SCX   5 

    0xb81adaa1,// 8 SCX   6 

    0x2dee0860,// 9 SCX   7 

    0x25964cc2,// 10 SCX   8 

    0x3c3ff92f,// 11 SCX   9 

    0xe78f277c,// 12 SCX  10 

    0x0a12a933,// 13 SCX  11 

    0xea2d365d,// 14 SCX  12 

    0x71461512,// 15 SCX  13 

    0xce31aecf,// 16 SCX  14 

    0x29ce5aff,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 51 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 27 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 27 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 16 

/// BFD (ofst+len)cry  : 24 

/// BFD ofstiv         : 8 

/// BFD ofsticv        : 28 

    0x0000001b,// 18 BFD   1 

    0x00100008,// 19 BFD   2 

    0x001c0008,// 20 BFD   3 

/// MFM is 2 words. 

/// MFM vldnibs        : 6 

    0x0600e7de,// 21 MFM   1 

    0xcd000000,// 22 MFM   2 

/// BDA is 14 words. 

/// BDA size     is 51 (0x33) 

/// BDA id       is 0x5fa4 

    0x00335fa4,// 23 BDA   1 

/// PAY Generic Data size   : 51 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x7d130ccf,// 24 PAY   1 

    0x41632e0a,// 25 PAY   2 

    0x70bcbc45,// 26 PAY   3 

    0xf2b58fd1,// 27 PAY   4 

    0x729cd940,// 28 PAY   5 

    0x97f9ee3e,// 29 PAY   6 

    0xdededd9f,// 30 PAY   7 

    0xe71fd6d4,// 31 PAY   8 

    0x05695e8c,// 32 PAY   9 

    0x1aa034c5,// 33 PAY  10 

    0x843facd2,// 34 PAY  11 

    0xf9bf2a4e,// 35 PAY  12 

    0x7bd8d200,// 36 PAY  13 

/// STA is 1 words. 

/// STA num_pkts       : 51 

/// STA pkt_idx        : 53 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x45 

    0x00d44533 // 37 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt66_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x0a 

/// ECH pdu_tag        : 0x00 

    0x000a0000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv !insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0000000f,// 3 SCX   1 

    0x8040481d,// 4 SCX   2 

    0x00004300,// 5 SCX   3 

    0xfd097baa,// 6 SCX   4 

    0x1401f307,// 7 SCX   5 

    0x0e35b84d,// 8 SCX   6 

    0x232fe176,// 9 SCX   7 

    0xf579977e,// 10 SCX   8 

    0xa9f1e2ae,// 11 SCX   9 

    0x03b9050b,// 12 SCX  10 

    0x61a888e3,// 13 SCX  11 

    0xb032fd3c,// 14 SCX  12 

    0xf7c85129,// 15 SCX  13 

    0xf7b5d5f4,// 16 SCX  14 

    0x86512881,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 111 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 38 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 38 

/// BFD lencrypto      : 16 

/// BFD ofstcrypto     : 12 

/// BFD (ofst+len)cry  : 28 

/// BFD ofstiv         : 0 

/// BFD ofsticv        : 80 

    0x00000026,// 18 BFD   1 

    0x000c0010,// 19 BFD   2 

    0x00500000,// 20 BFD   3 

/// MFM is 1 words. 

/// MFM vldnibs        : 1 

    0x01004000,// 21 MFM   1 

/// BDA is 29 words. 

/// BDA size     is 111 (0x6f) 

/// BDA id       is 0xb717 

    0x006fb717,// 22 BDA   1 

/// PAY Generic Data size   : 111 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0xf6b4b46a,// 23 PAY   1 

    0x2dd9276a,// 24 PAY   2 

    0xbeb25a81,// 25 PAY   3 

    0x4cc73913,// 26 PAY   4 

    0x1462b43b,// 27 PAY   5 

    0x2ae91a5d,// 28 PAY   6 

    0xa89f4076,// 29 PAY   7 

    0x4dc4f234,// 30 PAY   8 

    0x57199cdc,// 31 PAY   9 

    0x6bfebbab,// 32 PAY  10 

    0x39186042,// 33 PAY  11 

    0xbe2166dc,// 34 PAY  12 

    0x88cec337,// 35 PAY  13 

    0x23a952dc,// 36 PAY  14 

    0x429070ac,// 37 PAY  15 

    0xf36abc3d,// 38 PAY  16 

    0x27aa1ed7,// 39 PAY  17 

    0xdf429d28,// 40 PAY  18 

    0x69ff6479,// 41 PAY  19 

    0x2bfe2dd2,// 42 PAY  20 

    0xf4a04f3c,// 43 PAY  21 

    0x0453c292,// 44 PAY  22 

    0x7cf8e31e,// 45 PAY  23 

    0x04261904,// 46 PAY  24 

    0xed9ab102,// 47 PAY  25 

    0xb9db1955,// 48 PAY  26 

    0xc2da281c,// 49 PAY  27 

    0xcfa48500,// 50 PAY  28 

/// STA is 1 words. 

/// STA num_pkts       : 91 

/// STA pkt_idx        : 122 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x83 

    0x01e8835b // 51 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt67_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x09 

/// ECH pdu_tag        : 0x00 

    0x00090000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0800000f,// 3 SCX   1 

    0x8041480a,// 4 SCX   2 

    0x00004200,// 5 SCX   3 

    0xc939c3fd,// 6 SCX   4 

    0x1e093ebb,// 7 SCX   5 

    0x4a7c784d,// 8 SCX   6 

    0x68e38a76,// 9 SCX   7 

    0xacece110,// 10 SCX   8 

    0x10bc101e,// 11 SCX   9 

    0xf9d7e510,// 12 SCX  10 

    0x8ccdbe1d,// 13 SCX  11 

    0x5f747f5c,// 14 SCX  12 

    0x5f3b1b3d,// 15 SCX  13 

    0xb0d28cb6,// 16 SCX  14 

    0xe6c07138,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 313 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 279 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 279 

/// BFD lencrypto      : 232 

/// BFD ofstcrypto     : 44 

/// BFD (ofst+len)cry  : 276 

/// BFD ofstiv         : 20 

/// BFD ofsticv        : 284 

    0x00000117,// 18 BFD   1 

    0x002c00e8,// 19 BFD   2 

    0x011c0014,// 20 BFD   3 

/// MFM is 6 words. 

/// MFM vldnibs        : 26 

    0x2600b0f1,// 21 MFM   1 

    0x37f9af29,// 22 MFM   2 

    0xcc6d840a,// 23 MFM   3 

    0xc3b55f66,// 24 MFM   4 

    0x6a752f11,// 25 MFM   5 

    0x1b000000,// 26 MFM   6 

/// BDA is 80 words. 

/// BDA size     is 313 (0x139) 

/// BDA id       is 0xa522 

    0x0139a522,// 27 BDA   1 

/// PAY Generic Data size   : 313 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x4ca3ea2c,// 28 PAY   1 

    0x8dddba33,// 29 PAY   2 

    0x7c40cc3b,// 30 PAY   3 

    0x25e59d83,// 31 PAY   4 

    0x67710dfe,// 32 PAY   5 

    0x748e3a46,// 33 PAY   6 

    0xf1c798ed,// 34 PAY   7 

    0x6579e48f,// 35 PAY   8 

    0xe0e8010e,// 36 PAY   9 

    0xef1c2b3f,// 37 PAY  10 

    0xc12a3945,// 38 PAY  11 

    0x645ab17d,// 39 PAY  12 

    0x3ac8a9d6,// 40 PAY  13 

    0x1270af7c,// 41 PAY  14 

    0x56dcf38a,// 42 PAY  15 

    0x12d405dc,// 43 PAY  16 

    0xe74e0cad,// 44 PAY  17 

    0x7cabd2d9,// 45 PAY  18 

    0xfcdb23e7,// 46 PAY  19 

    0x7dfab2eb,// 47 PAY  20 

    0x2ee342d2,// 48 PAY  21 

    0x1cc272a0,// 49 PAY  22 

    0xbaab4d56,// 50 PAY  23 

    0x714a300d,// 51 PAY  24 

    0xaf62b0de,// 52 PAY  25 

    0x938a9225,// 53 PAY  26 

    0x684c78a0,// 54 PAY  27 

    0xe54e10f1,// 55 PAY  28 

    0xdc3868d3,// 56 PAY  29 

    0xa28646f1,// 57 PAY  30 

    0xa2edae6e,// 58 PAY  31 

    0x4f567166,// 59 PAY  32 

    0x7aed25a2,// 60 PAY  33 

    0xc5d783b9,// 61 PAY  34 

    0xac4b8d7e,// 62 PAY  35 

    0x52fc4ca7,// 63 PAY  36 

    0x5c6e7737,// 64 PAY  37 

    0x5ff6aa51,// 65 PAY  38 

    0x6a35a637,// 66 PAY  39 

    0x02e1a525,// 67 PAY  40 

    0xd56e4d1e,// 68 PAY  41 

    0x637b9178,// 69 PAY  42 

    0x4c41cb07,// 70 PAY  43 

    0x821020e0,// 71 PAY  44 

    0xb32fcb50,// 72 PAY  45 

    0x13f0f005,// 73 PAY  46 

    0x57b5a1a5,// 74 PAY  47 

    0x54188a48,// 75 PAY  48 

    0xa4604888,// 76 PAY  49 

    0x0df62dd8,// 77 PAY  50 

    0xa563e230,// 78 PAY  51 

    0xe2d4eb2d,// 79 PAY  52 

    0x2170cdd4,// 80 PAY  53 

    0xdd6c482d,// 81 PAY  54 

    0xe9ecc4ad,// 82 PAY  55 

    0x053dcf2c,// 83 PAY  56 

    0x103e27f4,// 84 PAY  57 

    0x3ab69525,// 85 PAY  58 

    0x83231c5f,// 86 PAY  59 

    0xda28901c,// 87 PAY  60 

    0x6e5e5997,// 88 PAY  61 

    0xd2395fb6,// 89 PAY  62 

    0x3fdc541d,// 90 PAY  63 

    0x2c24bb33,// 91 PAY  64 

    0x278f92ed,// 92 PAY  65 

    0xaa86cb98,// 93 PAY  66 

    0xece207f4,// 94 PAY  67 

    0x5a55c0a6,// 95 PAY  68 

    0x4b87113a,// 96 PAY  69 

    0x8e4493a8,// 97 PAY  70 

    0x194c60fc,// 98 PAY  71 

    0x229deeb8,// 99 PAY  72 

    0x76f323f9,// 100 PAY  73 

    0x1d3cae1e,// 101 PAY  74 

    0xf16463c7,// 102 PAY  75 

    0xd7d13edd,// 103 PAY  76 

    0x9313e379,// 104 PAY  77 

    0x355ce742,// 105 PAY  78 

    0xd5000000,// 106 PAY  79 

/// STA is 1 words. 

/// STA num_pkts       : 221 

/// STA pkt_idx        : 35 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xd4 

    0x008cd4dd // 107 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt68_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x00 

/// ECH pdu_tag        : 0x00 

    0x00000000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv !insert_icv !check_icv !sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x5 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0000000f,// 3 SCX   1 

    0x80464898,// 4 SCX   2 

    0x00004542,// 5 SCX   3 

    0x53f286fa,// 6 SCX   4 

    0xc972c1f7,// 7 SCX   5 

    0xfefe4c44,// 8 SCX   6 

    0x05e70119,// 9 SCX   7 

    0x723322cb,// 10 SCX   8 

    0x8bcd8063,// 11 SCX   9 

    0xd978be64,// 12 SCX  10 

    0x7ef4e82f,// 13 SCX  11 

    0xd5202638,// 14 SCX  12 

    0x26226b5a,// 15 SCX  13 

    0x385137f9,// 16 SCX  14 

    0x38bfb7e2,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 1327 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1062 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1062 

/// BFD lencrypto      : 600 

/// BFD ofstcrypto     : 76 

/// BFD (ofst+len)cry  : 676 

/// BFD ofstiv         : 20 

/// BFD ofsticv        : 1280 

    0x00000426,// 18 BFD   1 

    0x004c0258,// 19 BFD   2 

    0x05000014,// 20 BFD   3 

/// MFM is 13 words. 

/// MFM vldnibs        : 60 

    0x6000ef9d,// 21 MFM   1 

    0x82fc984c,// 22 MFM   2 

    0x1e9b6b3e,// 23 MFM   3 

    0xfe5e77f6,// 24 MFM   4 

    0xa716f8a9,// 25 MFM   5 

    0xd922cd64,// 26 MFM   6 

    0x458b9cc0,// 27 MFM   7 

    0x68ef4bd6,// 28 MFM   8 

    0xb40d1ce0,// 29 MFM   9 

    0xf4fbfc37,// 30 MFM  10 

    0x6eac2f85,// 31 MFM  11 

    0xacf5c1bc,// 32 MFM  12 

    0x32b30000,// 33 MFM  13 

/// BDA is 333 words. 

/// BDA size     is 1327 (0x52f) 

/// BDA id       is 0x7985 

    0x052f7985,// 34 BDA   1 

/// PAY Generic Data size   : 1327 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x645a792f,// 35 PAY   1 

    0xedc972df,// 36 PAY   2 

    0xcbe27842,// 37 PAY   3 

    0x2193a206,// 38 PAY   4 

    0xb1a270f7,// 39 PAY   5 

    0xc5413a7d,// 40 PAY   6 

    0x0784fd6c,// 41 PAY   7 

    0x39d336fb,// 42 PAY   8 

    0xc74a0f41,// 43 PAY   9 

    0x8b6594fe,// 44 PAY  10 

    0x66dcd55b,// 45 PAY  11 

    0xb989f1fc,// 46 PAY  12 

    0xe988e86c,// 47 PAY  13 

    0xe2ae6108,// 48 PAY  14 

    0xba85c8b1,// 49 PAY  15 

    0x3518d7db,// 50 PAY  16 

    0xe979a42e,// 51 PAY  17 

    0xc3ff24b5,// 52 PAY  18 

    0x35fdd523,// 53 PAY  19 

    0x26655f08,// 54 PAY  20 

    0x75ddbfa9,// 55 PAY  21 

    0x5ceb8584,// 56 PAY  22 

    0x2523277f,// 57 PAY  23 

    0x6e244076,// 58 PAY  24 

    0xfd35d269,// 59 PAY  25 

    0x42e571a0,// 60 PAY  26 

    0x22cc10ed,// 61 PAY  27 

    0x742e8e35,// 62 PAY  28 

    0x44b60efb,// 63 PAY  29 

    0x5ab23313,// 64 PAY  30 

    0xb5ce446f,// 65 PAY  31 

    0x165058a4,// 66 PAY  32 

    0x1a4db9ce,// 67 PAY  33 

    0xc7eaade9,// 68 PAY  34 

    0xe7b410dd,// 69 PAY  35 

    0x6d41d21f,// 70 PAY  36 

    0x1d6f47c9,// 71 PAY  37 

    0x07d05252,// 72 PAY  38 

    0x1462b89e,// 73 PAY  39 

    0x60aae2ee,// 74 PAY  40 

    0xda26139b,// 75 PAY  41 

    0x2f1788f0,// 76 PAY  42 

    0x548d6298,// 77 PAY  43 

    0xcb520694,// 78 PAY  44 

    0x18b98efc,// 79 PAY  45 

    0x98507389,// 80 PAY  46 

    0xbb505d13,// 81 PAY  47 

    0x98cbdda9,// 82 PAY  48 

    0x3c889c2a,// 83 PAY  49 

    0xe8a2d41c,// 84 PAY  50 

    0x059e6fc9,// 85 PAY  51 

    0x932ab275,// 86 PAY  52 

    0x8067cf50,// 87 PAY  53 

    0xb94bd09d,// 88 PAY  54 

    0xd96a4bfd,// 89 PAY  55 

    0x93eb2c48,// 90 PAY  56 

    0x2cd0462b,// 91 PAY  57 

    0x273116cf,// 92 PAY  58 

    0x66d381e1,// 93 PAY  59 

    0x67444df9,// 94 PAY  60 

    0x73a882d0,// 95 PAY  61 

    0x7584b292,// 96 PAY  62 

    0x2734fa01,// 97 PAY  63 

    0xf2a89048,// 98 PAY  64 

    0xabe98949,// 99 PAY  65 

    0xfeecf41e,// 100 PAY  66 

    0x7da43223,// 101 PAY  67 

    0x4f228181,// 102 PAY  68 

    0x40846a80,// 103 PAY  69 

    0x2fbbfd9b,// 104 PAY  70 

    0x4b647590,// 105 PAY  71 

    0x7f937a67,// 106 PAY  72 

    0xbf7d1bca,// 107 PAY  73 

    0x94a59c40,// 108 PAY  74 

    0x45171673,// 109 PAY  75 

    0x205a484e,// 110 PAY  76 

    0x12654c4e,// 111 PAY  77 

    0xd60935a1,// 112 PAY  78 

    0x1f3df61f,// 113 PAY  79 

    0xf2b925d2,// 114 PAY  80 

    0xbe9616d9,// 115 PAY  81 

    0x13a47b79,// 116 PAY  82 

    0x99c20756,// 117 PAY  83 

    0x7e7f1027,// 118 PAY  84 

    0x929a5155,// 119 PAY  85 

    0xb7c406a4,// 120 PAY  86 

    0x5ee47ca8,// 121 PAY  87 

    0xb797df7a,// 122 PAY  88 

    0xf72c0e3d,// 123 PAY  89 

    0x25906f10,// 124 PAY  90 

    0x9977306a,// 125 PAY  91 

    0x158f6cc2,// 126 PAY  92 

    0x90ab9cd7,// 127 PAY  93 

    0x0852fa85,// 128 PAY  94 

    0x472bc455,// 129 PAY  95 

    0xeaab6e28,// 130 PAY  96 

    0x04355e6f,// 131 PAY  97 

    0x63bf609b,// 132 PAY  98 

    0xcd1cd4c0,// 133 PAY  99 

    0xaca359c4,// 134 PAY 100 

    0x941020cf,// 135 PAY 101 

    0xad691748,// 136 PAY 102 

    0x7fc1f301,// 137 PAY 103 

    0x53c84b93,// 138 PAY 104 

    0x4ea8ba12,// 139 PAY 105 

    0xaf90bb89,// 140 PAY 106 

    0xa3ec54fa,// 141 PAY 107 

    0x48181e7f,// 142 PAY 108 

    0x96c45eb6,// 143 PAY 109 

    0x5833549f,// 144 PAY 110 

    0xb9188574,// 145 PAY 111 

    0x31644ab5,// 146 PAY 112 

    0x0a545e4c,// 147 PAY 113 

    0x66b4994c,// 148 PAY 114 

    0x881d7554,// 149 PAY 115 

    0x4bce2dac,// 150 PAY 116 

    0x30d7656e,// 151 PAY 117 

    0x7567755c,// 152 PAY 118 

    0xe0c4b82d,// 153 PAY 119 

    0xc9976eae,// 154 PAY 120 

    0xb32bf5d6,// 155 PAY 121 

    0xc01a7e0f,// 156 PAY 122 

    0xe519ee33,// 157 PAY 123 

    0x0889c538,// 158 PAY 124 

    0xa3d4f7c2,// 159 PAY 125 

    0x02059d53,// 160 PAY 126 

    0x0e8d1eca,// 161 PAY 127 

    0x63d0296b,// 162 PAY 128 

    0xb373217e,// 163 PAY 129 

    0xd1719a7f,// 164 PAY 130 

    0xeab9fbbf,// 165 PAY 131 

    0xc1b71944,// 166 PAY 132 

    0x9f05e239,// 167 PAY 133 

    0x4141136c,// 168 PAY 134 

    0x189866ee,// 169 PAY 135 

    0x2e0b64f4,// 170 PAY 136 

    0x39ed2f86,// 171 PAY 137 

    0x067dba57,// 172 PAY 138 

    0x37bc82d3,// 173 PAY 139 

    0xb84b0234,// 174 PAY 140 

    0xd286d03d,// 175 PAY 141 

    0xbe4bd8be,// 176 PAY 142 

    0x5e957cd5,// 177 PAY 143 

    0xedddee5b,// 178 PAY 144 

    0x2a19b513,// 179 PAY 145 

    0x64fcc2e3,// 180 PAY 146 

    0xe7298ef7,// 181 PAY 147 

    0x1ceae174,// 182 PAY 148 

    0xcce6f7e1,// 183 PAY 149 

    0x0370888f,// 184 PAY 150 

    0x7d8f2d33,// 185 PAY 151 

    0x83cae339,// 186 PAY 152 

    0xe80edc3a,// 187 PAY 153 

    0x19277763,// 188 PAY 154 

    0x7be9c925,// 189 PAY 155 

    0x3fa11061,// 190 PAY 156 

    0x4b0c62bd,// 191 PAY 157 

    0xe138de61,// 192 PAY 158 

    0xed35358c,// 193 PAY 159 

    0x981f1b38,// 194 PAY 160 

    0xe6216351,// 195 PAY 161 

    0xb2914dee,// 196 PAY 162 

    0xf3ec7a5b,// 197 PAY 163 

    0x5e590f0e,// 198 PAY 164 

    0x0cfced1f,// 199 PAY 165 

    0xd2360488,// 200 PAY 166 

    0xdab8fcbd,// 201 PAY 167 

    0x491dfca2,// 202 PAY 168 

    0x423c637f,// 203 PAY 169 

    0xae464700,// 204 PAY 170 

    0xce169f7f,// 205 PAY 171 

    0xca15fa4e,// 206 PAY 172 

    0x08094514,// 207 PAY 173 

    0xbefdfcb9,// 208 PAY 174 

    0xd3a0a132,// 209 PAY 175 

    0x0f5ff80d,// 210 PAY 176 

    0x7eba0a9f,// 211 PAY 177 

    0x4debb848,// 212 PAY 178 

    0x38c180dd,// 213 PAY 179 

    0xcbe5f48a,// 214 PAY 180 

    0x788b70c3,// 215 PAY 181 

    0x518b2b4b,// 216 PAY 182 

    0xb345232f,// 217 PAY 183 

    0x74fb1a17,// 218 PAY 184 

    0xd7078667,// 219 PAY 185 

    0x8cb4a22b,// 220 PAY 186 

    0xac5b0937,// 221 PAY 187 

    0xdb8e9d08,// 222 PAY 188 

    0x854545fa,// 223 PAY 189 

    0x0e3c100f,// 224 PAY 190 

    0x4c0a2689,// 225 PAY 191 

    0xf9e750e9,// 226 PAY 192 

    0x123edbad,// 227 PAY 193 

    0x68f6888b,// 228 PAY 194 

    0xb3eb7256,// 229 PAY 195 

    0xd5f9302f,// 230 PAY 196 

    0x100f8732,// 231 PAY 197 

    0x70caa38c,// 232 PAY 198 

    0x9a908355,// 233 PAY 199 

    0x9bbb1817,// 234 PAY 200 

    0x3e1c3377,// 235 PAY 201 

    0x8e49d671,// 236 PAY 202 

    0xe35a1fec,// 237 PAY 203 

    0x233f4c8e,// 238 PAY 204 

    0x63bee6fd,// 239 PAY 205 

    0x99ead7aa,// 240 PAY 206 

    0xb987615b,// 241 PAY 207 

    0x83e06833,// 242 PAY 208 

    0x25b4aefa,// 243 PAY 209 

    0x852d22ae,// 244 PAY 210 

    0x8a6eaf80,// 245 PAY 211 

    0xac7e6528,// 246 PAY 212 

    0x5db51095,// 247 PAY 213 

    0x82794e23,// 248 PAY 214 

    0x7344f0a7,// 249 PAY 215 

    0x0c88db72,// 250 PAY 216 

    0x73c2b790,// 251 PAY 217 

    0x64ffd0c8,// 252 PAY 218 

    0x620d591d,// 253 PAY 219 

    0x3e8c7cdf,// 254 PAY 220 

    0x12369bac,// 255 PAY 221 

    0xb4762d4e,// 256 PAY 222 

    0x47010767,// 257 PAY 223 

    0xfe6d5f1c,// 258 PAY 224 

    0xc21c05c7,// 259 PAY 225 

    0x3501223b,// 260 PAY 226 

    0xa027f453,// 261 PAY 227 

    0x8a79e95b,// 262 PAY 228 

    0xa09bbb46,// 263 PAY 229 

    0x732d382e,// 264 PAY 230 

    0x7b952202,// 265 PAY 231 

    0x976230c3,// 266 PAY 232 

    0xdb189bb6,// 267 PAY 233 

    0xdd211d83,// 268 PAY 234 

    0x8132b286,// 269 PAY 235 

    0x08c25a85,// 270 PAY 236 

    0x1cfa6397,// 271 PAY 237 

    0x83c76731,// 272 PAY 238 

    0x0742c10e,// 273 PAY 239 

    0xad892a86,// 274 PAY 240 

    0x46711935,// 275 PAY 241 

    0x1466c62e,// 276 PAY 242 

    0x9a775c02,// 277 PAY 243 

    0x7effe4e5,// 278 PAY 244 

    0xc698a934,// 279 PAY 245 

    0xcbe3e455,// 280 PAY 246 

    0x85d2b436,// 281 PAY 247 

    0x8962c1c9,// 282 PAY 248 

    0x84e19b02,// 283 PAY 249 

    0x5b88ddca,// 284 PAY 250 

    0xe5ce1e61,// 285 PAY 251 

    0x98e51ebe,// 286 PAY 252 

    0xa06b6235,// 287 PAY 253 

    0x879f7bc2,// 288 PAY 254 

    0xae66e25a,// 289 PAY 255 

    0x8bcc665b,// 290 PAY 256 

    0xdf655ad1,// 291 PAY 257 

    0x515d9ee8,// 292 PAY 258 

    0x4f011218,// 293 PAY 259 

    0x352da860,// 294 PAY 260 

    0xc5ff4d67,// 295 PAY 261 

    0xa7356eea,// 296 PAY 262 

    0xc0a83739,// 297 PAY 263 

    0x7fd30891,// 298 PAY 264 

    0xd040d325,// 299 PAY 265 

    0x0171ea95,// 300 PAY 266 

    0xf721cfcd,// 301 PAY 267 

    0x1a7e78bc,// 302 PAY 268 

    0x0955d93c,// 303 PAY 269 

    0xd2c9dfe6,// 304 PAY 270 

    0x1384c9dc,// 305 PAY 271 

    0x4b0428e2,// 306 PAY 272 

    0xc529a9dd,// 307 PAY 273 

    0x7c1aadc7,// 308 PAY 274 

    0xda01ac75,// 309 PAY 275 

    0xec621064,// 310 PAY 276 

    0x8a7a4d9b,// 311 PAY 277 

    0xb02a79d2,// 312 PAY 278 

    0xc0d65a8f,// 313 PAY 279 

    0x1c097008,// 314 PAY 280 

    0x5b0255a8,// 315 PAY 281 

    0x0520980b,// 316 PAY 282 

    0xb231b77c,// 317 PAY 283 

    0x753385f1,// 318 PAY 284 

    0x2666629a,// 319 PAY 285 

    0x3619109e,// 320 PAY 286 

    0x600a5bbc,// 321 PAY 287 

    0x352804d8,// 322 PAY 288 

    0xa3fe9455,// 323 PAY 289 

    0xbd704350,// 324 PAY 290 

    0x762bef74,// 325 PAY 291 

    0x17c57615,// 326 PAY 292 

    0xc41310cf,// 327 PAY 293 

    0x823351d8,// 328 PAY 294 

    0x6d99fdcc,// 329 PAY 295 

    0x41936330,// 330 PAY 296 

    0x3486dd17,// 331 PAY 297 

    0xf28c563a,// 332 PAY 298 

    0x8f0858bb,// 333 PAY 299 

    0x03a7ef78,// 334 PAY 300 

    0x795bc02c,// 335 PAY 301 

    0x9ac87d81,// 336 PAY 302 

    0x0f3b729a,// 337 PAY 303 

    0xbc4067c1,// 338 PAY 304 

    0x47d5c5fd,// 339 PAY 305 

    0x6a805656,// 340 PAY 306 

    0xa7da2cad,// 341 PAY 307 

    0x10557b6d,// 342 PAY 308 

    0x7d1f6837,// 343 PAY 309 

    0x80324980,// 344 PAY 310 

    0x17faa5b8,// 345 PAY 311 

    0x6aa12720,// 346 PAY 312 

    0x458b0e78,// 347 PAY 313 

    0xbda0409f,// 348 PAY 314 

    0x5af3cd12,// 349 PAY 315 

    0x25397088,// 350 PAY 316 

    0x5cca54e0,// 351 PAY 317 

    0x1892c8f4,// 352 PAY 318 

    0xbfd0b2fe,// 353 PAY 319 

    0xd29a4b38,// 354 PAY 320 

    0x4cbbc246,// 355 PAY 321 

    0x312241b8,// 356 PAY 322 

    0x4bd19aa2,// 357 PAY 323 

    0x56b05278,// 358 PAY 324 

    0x6d68d755,// 359 PAY 325 

    0x6fabe8aa,// 360 PAY 326 

    0x4a1bbecb,// 361 PAY 327 

    0x6c9c1c28,// 362 PAY 328 

    0x5e2bb4da,// 363 PAY 329 

    0xeaa0b09b,// 364 PAY 330 

    0x798fc14a,// 365 PAY 331 

    0x6d14ec00,// 366 PAY 332 

/// STA is 1 words. 

/// STA num_pkts       : 198 

/// STA pkt_idx        : 217 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x9d 

    0x03659dc6 // 367 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt69_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x04 

/// ECH pdu_tag        : 0x00 

    0x00040000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x5 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0800000f,// 3 SCX   1 

    0x804148ec,// 4 SCX   2 

    0x00001500,// 5 SCX   3 

    0x71aec469,// 6 SCX   4 

    0xb41e5663,// 7 SCX   5 

    0xfbc25b15,// 8 SCX   6 

    0x391e2e24,// 9 SCX   7 

    0x29024265,// 10 SCX   8 

    0x0fa9a5c8,// 11 SCX   9 

    0x4fda150d,// 12 SCX  10 

    0xb8b7374b,// 13 SCX  11 

    0x9ba67fb5,// 14 SCX  12 

    0x1a42cc87,// 15 SCX  13 

    0x22134e6b,// 16 SCX  14 

    0xc2f97996,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 1982 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1385 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1385 

/// BFD lencrypto      : 864 

/// BFD ofstcrypto     : 516 

/// BFD (ofst+len)cry  : 1380 

/// BFD ofstiv         : 220 

/// BFD ofsticv        : 1452 

    0x00000569,// 18 BFD   1 

    0x02040360,// 19 BFD   2 

    0x05ac00dc,// 20 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c00499a,// 21 MFM   1 

    0x0dfd7cfb,// 22 MFM   2 

    0xd51ff8f0,// 23 MFM   3 

    0x198b9add,// 24 MFM   4 

    0xf3e2f990,// 25 MFM   5 

    0x8433d90b,// 26 MFM   6 

    0x61f30677,// 27 MFM   7 

    0xc6b3fc1d,// 28 MFM   8 

    0x08bf1222,// 29 MFM   9 

    0x2a34b4ce,// 30 MFM  10 

    0xc70dba38,// 31 MFM  11 

    0x95f3df6f,// 32 MFM  12 

    0x8094eb99,// 33 MFM  13 

    0x562a6d83,// 34 MFM  14 

    0x53e91e2e,// 35 MFM  15 

    0x26183f45,// 36 MFM  16 

/// BDA is 497 words. 

/// BDA size     is 1982 (0x7be) 

/// BDA id       is 0xe834 

    0x07bee834,// 37 BDA   1 

/// PAY Generic Data size   : 1982 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0xe3d5cfc8,// 38 PAY   1 

    0x868022d5,// 39 PAY   2 

    0x4ef5832f,// 40 PAY   3 

    0xe632d969,// 41 PAY   4 

    0x89da5e94,// 42 PAY   5 

    0xae4a68fc,// 43 PAY   6 

    0xc894e55f,// 44 PAY   7 

    0xc605c8a0,// 45 PAY   8 

    0x20e88a44,// 46 PAY   9 

    0x8140cc41,// 47 PAY  10 

    0xa20ff1ce,// 48 PAY  11 

    0x5f35a165,// 49 PAY  12 

    0x24cb9fde,// 50 PAY  13 

    0x2605e6b6,// 51 PAY  14 

    0x6622a2a2,// 52 PAY  15 

    0xa1884d71,// 53 PAY  16 

    0x78fd88c3,// 54 PAY  17 

    0x6aa1fd1c,// 55 PAY  18 

    0xb6f99946,// 56 PAY  19 

    0x07a07f92,// 57 PAY  20 

    0x00b3d27d,// 58 PAY  21 

    0x8cc41be3,// 59 PAY  22 

    0x0f34e924,// 60 PAY  23 

    0xf5388c93,// 61 PAY  24 

    0xf8ec9370,// 62 PAY  25 

    0x8576012a,// 63 PAY  26 

    0x568216d6,// 64 PAY  27 

    0x3f3c6432,// 65 PAY  28 

    0x706171b5,// 66 PAY  29 

    0x2a9ffa3e,// 67 PAY  30 

    0xd8592cd2,// 68 PAY  31 

    0x7168dbfa,// 69 PAY  32 

    0x5b6a9470,// 70 PAY  33 

    0x2666dbcb,// 71 PAY  34 

    0x6b851531,// 72 PAY  35 

    0xd38beeba,// 73 PAY  36 

    0x2f5f1582,// 74 PAY  37 

    0xe4cf79ff,// 75 PAY  38 

    0x966fb515,// 76 PAY  39 

    0xd863dec9,// 77 PAY  40 

    0xfe7ffd8f,// 78 PAY  41 

    0xf91c89a3,// 79 PAY  42 

    0x90a41af4,// 80 PAY  43 

    0x95150e94,// 81 PAY  44 

    0xdc042bc0,// 82 PAY  45 

    0x51a7148c,// 83 PAY  46 

    0xff64fcd5,// 84 PAY  47 

    0x68f99d48,// 85 PAY  48 

    0xceffb823,// 86 PAY  49 

    0x4081abb6,// 87 PAY  50 

    0xac379345,// 88 PAY  51 

    0x23e83215,// 89 PAY  52 

    0x014e5897,// 90 PAY  53 

    0x2a2cf6d8,// 91 PAY  54 

    0xedc52e96,// 92 PAY  55 

    0x2b82485c,// 93 PAY  56 

    0x99d8d8ae,// 94 PAY  57 

    0x936d18ae,// 95 PAY  58 

    0x98ad13a2,// 96 PAY  59 

    0xfd26a123,// 97 PAY  60 

    0x84cc4da3,// 98 PAY  61 

    0x9508ebc2,// 99 PAY  62 

    0xfb5f3edd,// 100 PAY  63 

    0xf7c1180e,// 101 PAY  64 

    0x4002ba26,// 102 PAY  65 

    0xb276b007,// 103 PAY  66 

    0xaf1cd894,// 104 PAY  67 

    0x9def65ab,// 105 PAY  68 

    0x970b08f9,// 106 PAY  69 

    0x21a47e8b,// 107 PAY  70 

    0x6c13590a,// 108 PAY  71 

    0x999fa93a,// 109 PAY  72 

    0x409e70f1,// 110 PAY  73 

    0x11f0dd46,// 111 PAY  74 

    0xc6620811,// 112 PAY  75 

    0x55ae3bb1,// 113 PAY  76 

    0xcf676e12,// 114 PAY  77 

    0x60e40d5c,// 115 PAY  78 

    0x75a906ab,// 116 PAY  79 

    0x90e79371,// 117 PAY  80 

    0x1c5a38bd,// 118 PAY  81 

    0xa3f0fb7b,// 119 PAY  82 

    0x0a3b72b2,// 120 PAY  83 

    0xe5cb0e4a,// 121 PAY  84 

    0x0d7a5dd4,// 122 PAY  85 

    0x43d08178,// 123 PAY  86 

    0x2db8d64e,// 124 PAY  87 

    0xc731dca0,// 125 PAY  88 

    0xf562c1bb,// 126 PAY  89 

    0x70df8093,// 127 PAY  90 

    0xf14e5421,// 128 PAY  91 

    0xa8219a3a,// 129 PAY  92 

    0xd9fbe4c3,// 130 PAY  93 

    0x8e2daa19,// 131 PAY  94 

    0x51b51599,// 132 PAY  95 

    0x3a0265ff,// 133 PAY  96 

    0xc0c0f71f,// 134 PAY  97 

    0xccc25de3,// 135 PAY  98 

    0x3066b7de,// 136 PAY  99 

    0x89af4e51,// 137 PAY 100 

    0x4fba5be1,// 138 PAY 101 

    0xa258663a,// 139 PAY 102 

    0xdd1f4b11,// 140 PAY 103 

    0x34715530,// 141 PAY 104 

    0xdc2c8254,// 142 PAY 105 

    0x7ac06024,// 143 PAY 106 

    0xd3ca04ae,// 144 PAY 107 

    0x6de5c975,// 145 PAY 108 

    0x062151e9,// 146 PAY 109 

    0xffadc9af,// 147 PAY 110 

    0x76f4b27a,// 148 PAY 111 

    0xdb116972,// 149 PAY 112 

    0xf1295964,// 150 PAY 113 

    0xab03c2a2,// 151 PAY 114 

    0x70b89272,// 152 PAY 115 

    0x3007113c,// 153 PAY 116 

    0x7a5bd2b0,// 154 PAY 117 

    0xfd61430c,// 155 PAY 118 

    0x0facc966,// 156 PAY 119 

    0x60e39412,// 157 PAY 120 

    0x4a186fa4,// 158 PAY 121 

    0xca6b5283,// 159 PAY 122 

    0x4ea6cf57,// 160 PAY 123 

    0xd3f897c9,// 161 PAY 124 

    0x81c15644,// 162 PAY 125 

    0xf15e9890,// 163 PAY 126 

    0x1130e66a,// 164 PAY 127 

    0xb1738cca,// 165 PAY 128 

    0xd0622896,// 166 PAY 129 

    0x1a59d2da,// 167 PAY 130 

    0x6e55ddd2,// 168 PAY 131 

    0xc2c35730,// 169 PAY 132 

    0x9acfaab2,// 170 PAY 133 

    0xc75e9ec8,// 171 PAY 134 

    0x7ffb7823,// 172 PAY 135 

    0x3d0c45d2,// 173 PAY 136 

    0xe29f4893,// 174 PAY 137 

    0x235941d8,// 175 PAY 138 

    0x02f181f4,// 176 PAY 139 

    0x6b822747,// 177 PAY 140 

    0x635d0c57,// 178 PAY 141 

    0x243eb3d6,// 179 PAY 142 

    0x493894a1,// 180 PAY 143 

    0x82da1e1f,// 181 PAY 144 

    0x0eb7197f,// 182 PAY 145 

    0x1ea3b41f,// 183 PAY 146 

    0xc8109e53,// 184 PAY 147 

    0xd34453bf,// 185 PAY 148 

    0x59ce62ed,// 186 PAY 149 

    0x8a5a5e78,// 187 PAY 150 

    0xfa32f80d,// 188 PAY 151 

    0x8f87bba2,// 189 PAY 152 

    0x704fcec8,// 190 PAY 153 

    0x1aaf68ee,// 191 PAY 154 

    0xf5f10132,// 192 PAY 155 

    0x242eb806,// 193 PAY 156 

    0xb378bf25,// 194 PAY 157 

    0x83ab8c11,// 195 PAY 158 

    0x3f0ff00e,// 196 PAY 159 

    0xa875eb8d,// 197 PAY 160 

    0x6e97e3a6,// 198 PAY 161 

    0x8e383efe,// 199 PAY 162 

    0x20965be2,// 200 PAY 163 

    0x778968f8,// 201 PAY 164 

    0x7a7864f4,// 202 PAY 165 

    0xb6ecaea6,// 203 PAY 166 

    0xe4fce294,// 204 PAY 167 

    0x1312db70,// 205 PAY 168 

    0x10b44f41,// 206 PAY 169 

    0xecab91b9,// 207 PAY 170 

    0x838f717e,// 208 PAY 171 

    0xef81fefe,// 209 PAY 172 

    0xc5c55537,// 210 PAY 173 

    0x0b70d079,// 211 PAY 174 

    0x6d284c69,// 212 PAY 175 

    0x53563fa7,// 213 PAY 176 

    0xdf7ce976,// 214 PAY 177 

    0x7f38cac4,// 215 PAY 178 

    0xb84e42cb,// 216 PAY 179 

    0x9de4cbc3,// 217 PAY 180 

    0xed47d751,// 218 PAY 181 

    0xdb2ce93d,// 219 PAY 182 

    0xd8658776,// 220 PAY 183 

    0x15e66696,// 221 PAY 184 

    0x23de6a8a,// 222 PAY 185 

    0xbbe234ff,// 223 PAY 186 

    0xdd4c7e74,// 224 PAY 187 

    0x6087bcf6,// 225 PAY 188 

    0x780dfd70,// 226 PAY 189 

    0x50a91d4e,// 227 PAY 190 

    0x1441d287,// 228 PAY 191 

    0xa8952121,// 229 PAY 192 

    0xbfd47514,// 230 PAY 193 

    0xcfe7b605,// 231 PAY 194 

    0xa2e33222,// 232 PAY 195 

    0x0122eb2b,// 233 PAY 196 

    0x012504f7,// 234 PAY 197 

    0xd530280d,// 235 PAY 198 

    0xb5a39064,// 236 PAY 199 

    0xc709141c,// 237 PAY 200 

    0xde7007de,// 238 PAY 201 

    0xbb032bc7,// 239 PAY 202 

    0xfd1f0a4c,// 240 PAY 203 

    0xfb88117a,// 241 PAY 204 

    0x69e9643b,// 242 PAY 205 

    0x26b345a1,// 243 PAY 206 

    0x1e0b005b,// 244 PAY 207 

    0xc4875309,// 245 PAY 208 

    0x31a13d64,// 246 PAY 209 

    0xf0c86ce3,// 247 PAY 210 

    0x1226d62d,// 248 PAY 211 

    0x03c04428,// 249 PAY 212 

    0x1ef7e0ee,// 250 PAY 213 

    0x8afacd7f,// 251 PAY 214 

    0x50ed7d95,// 252 PAY 215 

    0x079b5f68,// 253 PAY 216 

    0xb95b1edf,// 254 PAY 217 

    0xe0aa7196,// 255 PAY 218 

    0x519f9dd0,// 256 PAY 219 

    0x1d6f4743,// 257 PAY 220 

    0x03e387d5,// 258 PAY 221 

    0xea46c8d8,// 259 PAY 222 

    0x0ce732c3,// 260 PAY 223 

    0x0f331e3f,// 261 PAY 224 

    0xb5a7bc25,// 262 PAY 225 

    0x21b36cb5,// 263 PAY 226 

    0xde1f16bc,// 264 PAY 227 

    0xe7013f7e,// 265 PAY 228 

    0x332631ac,// 266 PAY 229 

    0x91c8b8ea,// 267 PAY 230 

    0xdec40954,// 268 PAY 231 

    0x16878738,// 269 PAY 232 

    0xdf547bc2,// 270 PAY 233 

    0x22a72e29,// 271 PAY 234 

    0xd169a2ca,// 272 PAY 235 

    0x7bfde991,// 273 PAY 236 

    0x552085ca,// 274 PAY 237 

    0x2541ec6b,// 275 PAY 238 

    0x156c5b96,// 276 PAY 239 

    0x713dae0d,// 277 PAY 240 

    0x845810be,// 278 PAY 241 

    0xb087cc81,// 279 PAY 242 

    0x9bffc580,// 280 PAY 243 

    0xf5e63002,// 281 PAY 244 

    0x834efcb1,// 282 PAY 245 

    0xcd46ba58,// 283 PAY 246 

    0xb472d55f,// 284 PAY 247 

    0xe39a7fc8,// 285 PAY 248 

    0xfd9fb49d,// 286 PAY 249 

    0x2538eb79,// 287 PAY 250 

    0xcd775021,// 288 PAY 251 

    0x96d4e10b,// 289 PAY 252 

    0xb0719938,// 290 PAY 253 

    0x41449053,// 291 PAY 254 

    0x9ef179ba,// 292 PAY 255 

    0x25106c8d,// 293 PAY 256 

    0xac07d1c3,// 294 PAY 257 

    0x5fa60c7d,// 295 PAY 258 

    0xa08e9793,// 296 PAY 259 

    0xc99f9e91,// 297 PAY 260 

    0xab5ab15c,// 298 PAY 261 

    0xa533af9d,// 299 PAY 262 

    0x65006521,// 300 PAY 263 

    0xf861314e,// 301 PAY 264 

    0xad98465f,// 302 PAY 265 

    0xa0014e4b,// 303 PAY 266 

    0x2b99251c,// 304 PAY 267 

    0x4d03fab7,// 305 PAY 268 

    0x4d0740a1,// 306 PAY 269 

    0xf6683388,// 307 PAY 270 

    0x645068b0,// 308 PAY 271 

    0x3537953b,// 309 PAY 272 

    0x2c67149f,// 310 PAY 273 

    0x0d8595dc,// 311 PAY 274 

    0x3fa8ab96,// 312 PAY 275 

    0xa64db8db,// 313 PAY 276 

    0x5e54d6a9,// 314 PAY 277 

    0xe89bff7b,// 315 PAY 278 

    0xb705236b,// 316 PAY 279 

    0x4a2b6fd3,// 317 PAY 280 

    0xc626efb6,// 318 PAY 281 

    0xfa75b68d,// 319 PAY 282 

    0xbfb32e2f,// 320 PAY 283 

    0xc3c7fd1b,// 321 PAY 284 

    0x5daf02c8,// 322 PAY 285 

    0x6c851be2,// 323 PAY 286 

    0x5ad5b9ac,// 324 PAY 287 

    0x0293bf16,// 325 PAY 288 

    0x19652246,// 326 PAY 289 

    0x9e6c71ac,// 327 PAY 290 

    0xc4d0f0b9,// 328 PAY 291 

    0xaf6aeef6,// 329 PAY 292 

    0x25c228f7,// 330 PAY 293 

    0x8ec3b72c,// 331 PAY 294 

    0xdd68c8d6,// 332 PAY 295 

    0x3878f5fd,// 333 PAY 296 

    0x0e8c5f60,// 334 PAY 297 

    0xac5053be,// 335 PAY 298 

    0x11ee15fb,// 336 PAY 299 

    0x10e273cd,// 337 PAY 300 

    0x7c76b754,// 338 PAY 301 

    0xba7e9add,// 339 PAY 302 

    0x2f525c6e,// 340 PAY 303 

    0xc2757790,// 341 PAY 304 

    0xdd0d993f,// 342 PAY 305 

    0x4ba5c58f,// 343 PAY 306 

    0x2b1c4a4f,// 344 PAY 307 

    0xfbb3c3b5,// 345 PAY 308 

    0x876705f8,// 346 PAY 309 

    0xc16461d6,// 347 PAY 310 

    0x5a3796b4,// 348 PAY 311 

    0x5d8a8ae8,// 349 PAY 312 

    0xcd9613d6,// 350 PAY 313 

    0x6a0a9ca8,// 351 PAY 314 

    0x976e0bcd,// 352 PAY 315 

    0x24de1f24,// 353 PAY 316 

    0xb305e909,// 354 PAY 317 

    0xda793b73,// 355 PAY 318 

    0xb92da11d,// 356 PAY 319 

    0x47ad2fb4,// 357 PAY 320 

    0x265e3217,// 358 PAY 321 

    0x5cc6a1b3,// 359 PAY 322 

    0x449f9db0,// 360 PAY 323 

    0x32d3d85b,// 361 PAY 324 

    0xcada15fe,// 362 PAY 325 

    0xd7197c4d,// 363 PAY 326 

    0x60eeffef,// 364 PAY 327 

    0x0828b094,// 365 PAY 328 

    0xac71443c,// 366 PAY 329 

    0xf141002b,// 367 PAY 330 

    0x8c867559,// 368 PAY 331 

    0x3c08d139,// 369 PAY 332 

    0xce36cc7b,// 370 PAY 333 

    0x90ffe8e4,// 371 PAY 334 

    0x26772031,// 372 PAY 335 

    0x98c9b8cf,// 373 PAY 336 

    0x90ceb463,// 374 PAY 337 

    0x8f8e3a84,// 375 PAY 338 

    0xf991cffd,// 376 PAY 339 

    0x2020ba44,// 377 PAY 340 

    0xdb3ca2e8,// 378 PAY 341 

    0xcd09c383,// 379 PAY 342 

    0xb67b5d03,// 380 PAY 343 

    0xd17724a2,// 381 PAY 344 

    0x1da93fa7,// 382 PAY 345 

    0xa655198f,// 383 PAY 346 

    0x685c8c58,// 384 PAY 347 

    0xeb490189,// 385 PAY 348 

    0xa82ac5fe,// 386 PAY 349 

    0x74d87287,// 387 PAY 350 

    0x6546db81,// 388 PAY 351 

    0xfe036fec,// 389 PAY 352 

    0xf0a24d3b,// 390 PAY 353 

    0xb90850e4,// 391 PAY 354 

    0x4fe81d9e,// 392 PAY 355 

    0x7a5b536b,// 393 PAY 356 

    0x363a8381,// 394 PAY 357 

    0xd65839a8,// 395 PAY 358 

    0x026694d4,// 396 PAY 359 

    0xe58a1b14,// 397 PAY 360 

    0xa752181a,// 398 PAY 361 

    0x4eab428b,// 399 PAY 362 

    0x63e9c48c,// 400 PAY 363 

    0xbfcfddff,// 401 PAY 364 

    0xd6315cef,// 402 PAY 365 

    0xd75b8acb,// 403 PAY 366 

    0x5412ed7c,// 404 PAY 367 

    0x63432c4b,// 405 PAY 368 

    0x56ff49f4,// 406 PAY 369 

    0xdcbe7f8a,// 407 PAY 370 

    0x5bcb4091,// 408 PAY 371 

    0xe1b7b957,// 409 PAY 372 

    0xa57a7780,// 410 PAY 373 

    0x9306eb7d,// 411 PAY 374 

    0x7eb05bf0,// 412 PAY 375 

    0x2d3e9e1b,// 413 PAY 376 

    0x644cfd6c,// 414 PAY 377 

    0x3fbdd083,// 415 PAY 378 

    0x8df0449f,// 416 PAY 379 

    0xffd2b5d0,// 417 PAY 380 

    0xef822892,// 418 PAY 381 

    0x635d5dde,// 419 PAY 382 

    0xb903fba7,// 420 PAY 383 

    0xaa4c1afd,// 421 PAY 384 

    0x2336e9eb,// 422 PAY 385 

    0x2bb83bae,// 423 PAY 386 

    0xad477af4,// 424 PAY 387 

    0xcec5410c,// 425 PAY 388 

    0x561435a3,// 426 PAY 389 

    0x46e9d742,// 427 PAY 390 

    0xf3730c81,// 428 PAY 391 

    0x156901bd,// 429 PAY 392 

    0x9e0c5bbc,// 430 PAY 393 

    0x0b7c9d19,// 431 PAY 394 

    0xe878753c,// 432 PAY 395 

    0x8b9dcd94,// 433 PAY 396 

    0x6ad01ec8,// 434 PAY 397 

    0x174c248d,// 435 PAY 398 

    0x52ca88d7,// 436 PAY 399 

    0xbf79f1eb,// 437 PAY 400 

    0xaeb6ebfc,// 438 PAY 401 

    0x69193d50,// 439 PAY 402 

    0xd4255ef8,// 440 PAY 403 

    0xc11df00c,// 441 PAY 404 

    0xddb64f15,// 442 PAY 405 

    0x12b3a6ef,// 443 PAY 406 

    0x5a54966c,// 444 PAY 407 

    0x46cb4275,// 445 PAY 408 

    0xabdc3761,// 446 PAY 409 

    0x5fbf01b4,// 447 PAY 410 

    0x53ce466e,// 448 PAY 411 

    0xf5c9c574,// 449 PAY 412 

    0x69bae7b3,// 450 PAY 413 

    0x039008ef,// 451 PAY 414 

    0x35ba432d,// 452 PAY 415 

    0xfd819bb0,// 453 PAY 416 

    0x14ff2da7,// 454 PAY 417 

    0xa6895b12,// 455 PAY 418 

    0x40ca2dc2,// 456 PAY 419 

    0x438c030d,// 457 PAY 420 

    0x0f308b2e,// 458 PAY 421 

    0x8490bbea,// 459 PAY 422 

    0xf0dc3363,// 460 PAY 423 

    0x47f7bccd,// 461 PAY 424 

    0x924fce11,// 462 PAY 425 

    0x34238755,// 463 PAY 426 

    0xe15928b8,// 464 PAY 427 

    0x6ef8308d,// 465 PAY 428 

    0x0bf526bd,// 466 PAY 429 

    0xc3e285a7,// 467 PAY 430 

    0xac41188a,// 468 PAY 431 

    0x62e01b2e,// 469 PAY 432 

    0x729289c2,// 470 PAY 433 

    0xe5dbc081,// 471 PAY 434 

    0x117162cd,// 472 PAY 435 

    0xbede803a,// 473 PAY 436 

    0x4070d5a2,// 474 PAY 437 

    0x52153264,// 475 PAY 438 

    0x7491777d,// 476 PAY 439 

    0x57ad4ebf,// 477 PAY 440 

    0xfefa8612,// 478 PAY 441 

    0x7a7db524,// 479 PAY 442 

    0xdc8d947f,// 480 PAY 443 

    0x684b3418,// 481 PAY 444 

    0x2c34d20c,// 482 PAY 445 

    0xfea711bb,// 483 PAY 446 

    0xe9e334a0,// 484 PAY 447 

    0x173da67d,// 485 PAY 448 

    0x402f5921,// 486 PAY 449 

    0x31437496,// 487 PAY 450 

    0xfb7c7133,// 488 PAY 451 

    0x3c57f3db,// 489 PAY 452 

    0x6ef87994,// 490 PAY 453 

    0x6e3d46b1,// 491 PAY 454 

    0x486c4d0e,// 492 PAY 455 

    0xc1567d2a,// 493 PAY 456 

    0x5e37409e,// 494 PAY 457 

    0x7bc7b458,// 495 PAY 458 

    0x27303adf,// 496 PAY 459 

    0x5f7b6bea,// 497 PAY 460 

    0x60e4b11b,// 498 PAY 461 

    0xdd61a2f8,// 499 PAY 462 

    0xd7b82cd9,// 500 PAY 463 

    0x268b1616,// 501 PAY 464 

    0x1d628ae8,// 502 PAY 465 

    0x9c910c19,// 503 PAY 466 

    0x30f47cd0,// 504 PAY 467 

    0x0b646e7d,// 505 PAY 468 

    0x4269608c,// 506 PAY 469 

    0x225bcb24,// 507 PAY 470 

    0x9f5f56bc,// 508 PAY 471 

    0x050cef16,// 509 PAY 472 

    0x21cb9c5f,// 510 PAY 473 

    0x6974cf75,// 511 PAY 474 

    0x103e060e,// 512 PAY 475 

    0xecbf7baf,// 513 PAY 476 

    0xecce9630,// 514 PAY 477 

    0x351dc898,// 515 PAY 478 

    0x15a223db,// 516 PAY 479 

    0x69fdb14f,// 517 PAY 480 

    0xa3d17d03,// 518 PAY 481 

    0xbf9ad186,// 519 PAY 482 

    0x8cd9d7f6,// 520 PAY 483 

    0xe83e7f4f,// 521 PAY 484 

    0x53080ab9,// 522 PAY 485 

    0xc49c1ec6,// 523 PAY 486 

    0x5f1df81d,// 524 PAY 487 

    0xd021488b,// 525 PAY 488 

    0x257aa401,// 526 PAY 489 

    0xf34199ed,// 527 PAY 490 

    0xf7c76eda,// 528 PAY 491 

    0x83caac20,// 529 PAY 492 

    0x2118491e,// 530 PAY 493 

    0xc6f82e88,// 531 PAY 494 

    0x605c61e3,// 532 PAY 495 

    0x61ec0000,// 533 PAY 496 

/// STA is 1 words. 

/// STA num_pkts       : 24 

/// STA pkt_idx        : 247 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xed 

    0x03dded18 // 534 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt70_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x04 

/// ECH pdu_tag        : 0x00 

    0x00040000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv insert_icv !check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x08000011,// 3 SCX   1 

    0x804648c3,// 4 SCX   2 

    0x00006382,// 5 SCX   3 

    0x4a8aaee1,// 6 SCX   4 

    0xbe65b87c,// 7 SCX   5 

    0x456705fe,// 8 SCX   6 

    0x3390247f,// 9 SCX   7 

    0xf80e910a,// 10 SCX   8 

    0xb7e3a781,// 11 SCX   9 

    0xb1592764,// 12 SCX  10 

    0x691c59f0,// 13 SCX  11 

    0xef92cbdc,// 14 SCX  12 

    0x858caf69,// 15 SCX  13 

    0x9ecad292,// 16 SCX  14 

    0x107c0429,// 17 SCX  15 

    0x5b521895,// 18 SCX  16 

    0x287e1d36,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1866 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 703 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 703 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 368 

/// BFD (ofst+len)cry  : 376 

/// BFD ofstiv         : 272 

/// BFD ofsticv        : 804 

    0x000002bf,// 20 BFD   1 

    0x01700008,// 21 BFD   2 

    0x03240110,// 22 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c00704c,// 23 MFM   1 

    0xf47372d2,// 24 MFM   2 

    0x70c8301c,// 25 MFM   3 

    0x00678dbd,// 26 MFM   4 

    0xa34a228a,// 27 MFM   5 

    0x232c5a01,// 28 MFM   6 

    0xdbdcce3e,// 29 MFM   7 

    0x359f550f,// 30 MFM   8 

    0x2bf8b4b5,// 31 MFM   9 

    0x2e6a5c8e,// 32 MFM  10 

    0x534efcce,// 33 MFM  11 

    0xf14327b9,// 34 MFM  12 

    0xcbad4f95,// 35 MFM  13 

    0xa28b6055,// 36 MFM  14 

    0x65cfe4e9,// 37 MFM  15 

    0xae3bfb72,// 38 MFM  16 

/// BDA is 468 words. 

/// BDA size     is 1866 (0x74a) 

/// BDA id       is 0x8e57 

    0x074a8e57,// 39 BDA   1 

/// PAY Generic Data size   : 1866 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x0a3e80f8,// 40 PAY   1 

    0x675794e5,// 41 PAY   2 

    0xe3ae603a,// 42 PAY   3 

    0x18deeba8,// 43 PAY   4 

    0xfa862d7b,// 44 PAY   5 

    0x7f9472ec,// 45 PAY   6 

    0x5a51afe5,// 46 PAY   7 

    0x180a1b5b,// 47 PAY   8 

    0x201f85f5,// 48 PAY   9 

    0xeeb5484f,// 49 PAY  10 

    0xe397b86a,// 50 PAY  11 

    0xce7dbce2,// 51 PAY  12 

    0xefd1c76b,// 52 PAY  13 

    0x74004e85,// 53 PAY  14 

    0x5a93397d,// 54 PAY  15 

    0x4a8d184b,// 55 PAY  16 

    0xbaf0859c,// 56 PAY  17 

    0xea3f3e51,// 57 PAY  18 

    0x150ef2d3,// 58 PAY  19 

    0x73a00d7b,// 59 PAY  20 

    0xff49544a,// 60 PAY  21 

    0xe36086ca,// 61 PAY  22 

    0x0300176c,// 62 PAY  23 

    0x62167ebf,// 63 PAY  24 

    0x5f97be52,// 64 PAY  25 

    0xea7c10bd,// 65 PAY  26 

    0x77a4bfc1,// 66 PAY  27 

    0xd8c6c480,// 67 PAY  28 

    0x7c3bdf7b,// 68 PAY  29 

    0x1a1cac43,// 69 PAY  30 

    0xfe605f76,// 70 PAY  31 

    0x70b1a8a8,// 71 PAY  32 

    0x6bf6b68d,// 72 PAY  33 

    0x1a386d6e,// 73 PAY  34 

    0x49d2bcb1,// 74 PAY  35 

    0x354a7f9b,// 75 PAY  36 

    0x6594a061,// 76 PAY  37 

    0x177e37b4,// 77 PAY  38 

    0x0f24df63,// 78 PAY  39 

    0xd955d051,// 79 PAY  40 

    0xc9883dad,// 80 PAY  41 

    0x6adc18c5,// 81 PAY  42 

    0x20b9fef3,// 82 PAY  43 

    0x14e386f8,// 83 PAY  44 

    0x900691e7,// 84 PAY  45 

    0x5157d6ca,// 85 PAY  46 

    0xa422db62,// 86 PAY  47 

    0x3041ba11,// 87 PAY  48 

    0x0d2a2259,// 88 PAY  49 

    0x7185159a,// 89 PAY  50 

    0x172f5028,// 90 PAY  51 

    0x22d049f0,// 91 PAY  52 

    0xe042d4c1,// 92 PAY  53 

    0xdca1ec3e,// 93 PAY  54 

    0x47ddb0f5,// 94 PAY  55 

    0x0e98b5f5,// 95 PAY  56 

    0x7ba019f2,// 96 PAY  57 

    0x3c270035,// 97 PAY  58 

    0x396c696b,// 98 PAY  59 

    0x6f4dc860,// 99 PAY  60 

    0x18e57c6b,// 100 PAY  61 

    0xfb2c7163,// 101 PAY  62 

    0xd5b94708,// 102 PAY  63 

    0x0bb83ade,// 103 PAY  64 

    0x1b6cd5de,// 104 PAY  65 

    0xe176877a,// 105 PAY  66 

    0x49b54f04,// 106 PAY  67 

    0x1eaf6a0f,// 107 PAY  68 

    0x73a72007,// 108 PAY  69 

    0xf95b74b5,// 109 PAY  70 

    0x3fe5808b,// 110 PAY  71 

    0x4f14694f,// 111 PAY  72 

    0x4a616166,// 112 PAY  73 

    0x3c302cbd,// 113 PAY  74 

    0xc2350110,// 114 PAY  75 

    0x5233893b,// 115 PAY  76 

    0xb1ee28a3,// 116 PAY  77 

    0x388be92d,// 117 PAY  78 

    0x86df4643,// 118 PAY  79 

    0xe97765f5,// 119 PAY  80 

    0x1b929276,// 120 PAY  81 

    0x71b076be,// 121 PAY  82 

    0xea44479e,// 122 PAY  83 

    0x9ad99973,// 123 PAY  84 

    0x7a33159b,// 124 PAY  85 

    0xf9efaf52,// 125 PAY  86 

    0x9134de94,// 126 PAY  87 

    0xb1b3383e,// 127 PAY  88 

    0xfad291f2,// 128 PAY  89 

    0x28f256a1,// 129 PAY  90 

    0x435be923,// 130 PAY  91 

    0x2e50deac,// 131 PAY  92 

    0xe6cac7e9,// 132 PAY  93 

    0x80baaef4,// 133 PAY  94 

    0xbb8dcd98,// 134 PAY  95 

    0x3e6afef4,// 135 PAY  96 

    0xac1741b9,// 136 PAY  97 

    0xd8d64cef,// 137 PAY  98 

    0x6e76cd06,// 138 PAY  99 

    0xadff46ba,// 139 PAY 100 

    0xb0371407,// 140 PAY 101 

    0x4f20b434,// 141 PAY 102 

    0x76263706,// 142 PAY 103 

    0xaad04c69,// 143 PAY 104 

    0x85bc5806,// 144 PAY 105 

    0xc0bdda8c,// 145 PAY 106 

    0xa5d25216,// 146 PAY 107 

    0x1835cd74,// 147 PAY 108 

    0xff1755ea,// 148 PAY 109 

    0x5168c6f3,// 149 PAY 110 

    0x59695415,// 150 PAY 111 

    0x61f610b0,// 151 PAY 112 

    0x6d749f10,// 152 PAY 113 

    0x825ec621,// 153 PAY 114 

    0xdaf2f2b4,// 154 PAY 115 

    0x63d3ddd3,// 155 PAY 116 

    0xcf758e13,// 156 PAY 117 

    0xae7ef4a8,// 157 PAY 118 

    0xf2c7ce3b,// 158 PAY 119 

    0xbeb267ea,// 159 PAY 120 

    0x9f7d3fa3,// 160 PAY 121 

    0x3ea13910,// 161 PAY 122 

    0x7259aaeb,// 162 PAY 123 

    0xfe4b2fd9,// 163 PAY 124 

    0x1ee6732c,// 164 PAY 125 

    0x44de99e0,// 165 PAY 126 

    0x0bf3fa32,// 166 PAY 127 

    0x329fa948,// 167 PAY 128 

    0xf66bc465,// 168 PAY 129 

    0xe80bad9e,// 169 PAY 130 

    0x3eb366cc,// 170 PAY 131 

    0x25b4af18,// 171 PAY 132 

    0x5a2496ea,// 172 PAY 133 

    0xe6da103a,// 173 PAY 134 

    0x0b987f8d,// 174 PAY 135 

    0xc2ac1ad4,// 175 PAY 136 

    0x3c179081,// 176 PAY 137 

    0x7c0aa866,// 177 PAY 138 

    0x81747d01,// 178 PAY 139 

    0x08a8d8a3,// 179 PAY 140 

    0xd2b37d47,// 180 PAY 141 

    0x89283747,// 181 PAY 142 

    0x3be2a085,// 182 PAY 143 

    0x2a01a738,// 183 PAY 144 

    0x896ba867,// 184 PAY 145 

    0xafbecacf,// 185 PAY 146 

    0xae2c30a9,// 186 PAY 147 

    0xc2d74d32,// 187 PAY 148 

    0x5b98cbe0,// 188 PAY 149 

    0xf8d70943,// 189 PAY 150 

    0xa88a55fb,// 190 PAY 151 

    0x9a1f59fa,// 191 PAY 152 

    0xa7c3c53f,// 192 PAY 153 

    0xd219a679,// 193 PAY 154 

    0x1e2aef06,// 194 PAY 155 

    0x7189c4d2,// 195 PAY 156 

    0x9d1f08fe,// 196 PAY 157 

    0xeff20426,// 197 PAY 158 

    0xdb809944,// 198 PAY 159 

    0xaa384c6c,// 199 PAY 160 

    0x41854823,// 200 PAY 161 

    0x617ea640,// 201 PAY 162 

    0x398f4214,// 202 PAY 163 

    0xbfa32f71,// 203 PAY 164 

    0xb2b16a74,// 204 PAY 165 

    0xb71ac2d9,// 205 PAY 166 

    0x55e4c41b,// 206 PAY 167 

    0x15bf2063,// 207 PAY 168 

    0x1567b75a,// 208 PAY 169 

    0x3037114d,// 209 PAY 170 

    0x0b09e608,// 210 PAY 171 

    0x616f4d2a,// 211 PAY 172 

    0xda9cfb36,// 212 PAY 173 

    0x0bde2276,// 213 PAY 174 

    0xd732f25e,// 214 PAY 175 

    0xc72a8fab,// 215 PAY 176 

    0x0a19e79e,// 216 PAY 177 

    0x5031cb0b,// 217 PAY 178 

    0x16b69711,// 218 PAY 179 

    0xe04af3a0,// 219 PAY 180 

    0x57b6b17c,// 220 PAY 181 

    0xf3d21c04,// 221 PAY 182 

    0xe71e516f,// 222 PAY 183 

    0xaf2219ea,// 223 PAY 184 

    0xb06001ce,// 224 PAY 185 

    0xc16d1050,// 225 PAY 186 

    0xfeb8a2a6,// 226 PAY 187 

    0x9d5fe557,// 227 PAY 188 

    0x13003d56,// 228 PAY 189 

    0xa7da9661,// 229 PAY 190 

    0x67ff0e49,// 230 PAY 191 

    0x89c0407b,// 231 PAY 192 

    0xaf164825,// 232 PAY 193 

    0x915840bc,// 233 PAY 194 

    0x30f032b0,// 234 PAY 195 

    0x1d15dabe,// 235 PAY 196 

    0x655c616e,// 236 PAY 197 

    0xa150c3e4,// 237 PAY 198 

    0xb390252e,// 238 PAY 199 

    0x80794160,// 239 PAY 200 

    0xd96bf2c9,// 240 PAY 201 

    0x09088235,// 241 PAY 202 

    0x5832f40e,// 242 PAY 203 

    0xeef94a4b,// 243 PAY 204 

    0x9a43dbc3,// 244 PAY 205 

    0xea619be6,// 245 PAY 206 

    0x8d7bc6ef,// 246 PAY 207 

    0x945b972f,// 247 PAY 208 

    0x4d8c6523,// 248 PAY 209 

    0xeaa281fa,// 249 PAY 210 

    0x72321f6d,// 250 PAY 211 

    0xae2b28cc,// 251 PAY 212 

    0xb3c0c592,// 252 PAY 213 

    0xfb3c1ad0,// 253 PAY 214 

    0xf552d133,// 254 PAY 215 

    0x43498309,// 255 PAY 216 

    0x210cabc9,// 256 PAY 217 

    0xfa4c7656,// 257 PAY 218 

    0xb042350f,// 258 PAY 219 

    0x10132caf,// 259 PAY 220 

    0x906089ab,// 260 PAY 221 

    0x1cdb67b5,// 261 PAY 222 

    0xdfbd2d1b,// 262 PAY 223 

    0x166a11ed,// 263 PAY 224 

    0xbfa3f52d,// 264 PAY 225 

    0x40a38b81,// 265 PAY 226 

    0xbbcf2b0e,// 266 PAY 227 

    0x1b039620,// 267 PAY 228 

    0x11416c7e,// 268 PAY 229 

    0x81d4c306,// 269 PAY 230 

    0x6940c259,// 270 PAY 231 

    0x65ff1a25,// 271 PAY 232 

    0x278b7040,// 272 PAY 233 

    0x208c336c,// 273 PAY 234 

    0xf3c61f25,// 274 PAY 235 

    0xb05c15c6,// 275 PAY 236 

    0x8a099682,// 276 PAY 237 

    0x2a57ea29,// 277 PAY 238 

    0x482860a2,// 278 PAY 239 

    0x32b6e0f3,// 279 PAY 240 

    0xf549e2ba,// 280 PAY 241 

    0xea951c23,// 281 PAY 242 

    0xa6e1c0e4,// 282 PAY 243 

    0x92a5cf89,// 283 PAY 244 

    0xa224c498,// 284 PAY 245 

    0xf04fe31d,// 285 PAY 246 

    0x1a5069ba,// 286 PAY 247 

    0x5297a829,// 287 PAY 248 

    0x2dcdd0da,// 288 PAY 249 

    0xf192ba8a,// 289 PAY 250 

    0x362e8bc4,// 290 PAY 251 

    0x0f0b6ca3,// 291 PAY 252 

    0x006216ec,// 292 PAY 253 

    0x6a01b669,// 293 PAY 254 

    0x05e27b48,// 294 PAY 255 

    0x9d4415f4,// 295 PAY 256 

    0x0ef0f7f5,// 296 PAY 257 

    0xdc2aabab,// 297 PAY 258 

    0xdfc28db4,// 298 PAY 259 

    0x4aaa78f4,// 299 PAY 260 

    0xcfc9903f,// 300 PAY 261 

    0x5363de60,// 301 PAY 262 

    0xded86830,// 302 PAY 263 

    0xb8673ac1,// 303 PAY 264 

    0xf065fe14,// 304 PAY 265 

    0x66ef507c,// 305 PAY 266 

    0xde037e83,// 306 PAY 267 

    0xdff4acb6,// 307 PAY 268 

    0xd2830599,// 308 PAY 269 

    0xd75018e1,// 309 PAY 270 

    0xa997a1dd,// 310 PAY 271 

    0x5384c4db,// 311 PAY 272 

    0x0a5dd3df,// 312 PAY 273 

    0x98275b0e,// 313 PAY 274 

    0xd1cfac36,// 314 PAY 275 

    0xb815a395,// 315 PAY 276 

    0xac8aa5b0,// 316 PAY 277 

    0xfc60c30b,// 317 PAY 278 

    0x0cc68f2f,// 318 PAY 279 

    0xd843e03d,// 319 PAY 280 

    0xc4788323,// 320 PAY 281 

    0x0139a4d7,// 321 PAY 282 

    0x19d812d9,// 322 PAY 283 

    0x5a9d2074,// 323 PAY 284 

    0xbfba43ae,// 324 PAY 285 

    0x9ee6750e,// 325 PAY 286 

    0xf066af2a,// 326 PAY 287 

    0xe39fa706,// 327 PAY 288 

    0xd85db270,// 328 PAY 289 

    0x227f7448,// 329 PAY 290 

    0xeb4a0ebf,// 330 PAY 291 

    0x2ff54b7c,// 331 PAY 292 

    0x809465a2,// 332 PAY 293 

    0x1a6b15d3,// 333 PAY 294 

    0x654e9902,// 334 PAY 295 

    0x11802ee4,// 335 PAY 296 

    0xf095df2f,// 336 PAY 297 

    0xef4e9fcf,// 337 PAY 298 

    0x0407f81c,// 338 PAY 299 

    0x60f61361,// 339 PAY 300 

    0x8706ebd9,// 340 PAY 301 

    0x9b8f1cca,// 341 PAY 302 

    0x8ba323a4,// 342 PAY 303 

    0xadd8897c,// 343 PAY 304 

    0xca7c7298,// 344 PAY 305 

    0x199cb323,// 345 PAY 306 

    0x77a12f48,// 346 PAY 307 

    0x80670793,// 347 PAY 308 

    0x41aa0ff4,// 348 PAY 309 

    0x218e434d,// 349 PAY 310 

    0x57f442fe,// 350 PAY 311 

    0xfe84839b,// 351 PAY 312 

    0xacc134ab,// 352 PAY 313 

    0x628f9411,// 353 PAY 314 

    0x986c823e,// 354 PAY 315 

    0x8e4d1556,// 355 PAY 316 

    0xd949d15b,// 356 PAY 317 

    0xc2e8dc49,// 357 PAY 318 

    0x57f75ec5,// 358 PAY 319 

    0x2f45b4b5,// 359 PAY 320 

    0x4a1f2c07,// 360 PAY 321 

    0x48c899c0,// 361 PAY 322 

    0xc1a0dceb,// 362 PAY 323 

    0x45bb2733,// 363 PAY 324 

    0xaeaa98ad,// 364 PAY 325 

    0x3ee78bfb,// 365 PAY 326 

    0xb958f7b8,// 366 PAY 327 

    0x71d5b057,// 367 PAY 328 

    0x00230550,// 368 PAY 329 

    0x6f329a0e,// 369 PAY 330 

    0xa1aace07,// 370 PAY 331 

    0x1eafadf7,// 371 PAY 332 

    0x10bb8cd3,// 372 PAY 333 

    0xc69faef8,// 373 PAY 334 

    0xba7d3af1,// 374 PAY 335 

    0xd56cf785,// 375 PAY 336 

    0x98bf37d6,// 376 PAY 337 

    0x5432cbf0,// 377 PAY 338 

    0xbcd0d28e,// 378 PAY 339 

    0x5fe5628c,// 379 PAY 340 

    0x0e7a2392,// 380 PAY 341 

    0xccab53fb,// 381 PAY 342 

    0xa7e22f85,// 382 PAY 343 

    0x3e42b333,// 383 PAY 344 

    0x7629c8a3,// 384 PAY 345 

    0x2c7b9c35,// 385 PAY 346 

    0xfe3f2d75,// 386 PAY 347 

    0xde84f7b1,// 387 PAY 348 

    0xa72434b9,// 388 PAY 349 

    0x2d386ffc,// 389 PAY 350 

    0x1464e2c9,// 390 PAY 351 

    0xb65cd263,// 391 PAY 352 

    0xf67ffed5,// 392 PAY 353 

    0xd062f1e1,// 393 PAY 354 

    0x407637d4,// 394 PAY 355 

    0x0c425d1c,// 395 PAY 356 

    0x4b4eb5ea,// 396 PAY 357 

    0xd67b1aef,// 397 PAY 358 

    0x894876b2,// 398 PAY 359 

    0x1cd9b7a8,// 399 PAY 360 

    0x66cf4f86,// 400 PAY 361 

    0x5e492a76,// 401 PAY 362 

    0xf4321795,// 402 PAY 363 

    0xa166c7bf,// 403 PAY 364 

    0x2d085732,// 404 PAY 365 

    0x2dbde8a6,// 405 PAY 366 

    0xed40fc8d,// 406 PAY 367 

    0x80cebae8,// 407 PAY 368 

    0x54054c06,// 408 PAY 369 

    0x5006ef41,// 409 PAY 370 

    0xe2c8da32,// 410 PAY 371 

    0x2e29a15e,// 411 PAY 372 

    0x6d40230e,// 412 PAY 373 

    0xc30138c0,// 413 PAY 374 

    0xecc06039,// 414 PAY 375 

    0x7b81d65d,// 415 PAY 376 

    0xbb8d86a8,// 416 PAY 377 

    0x307f8d2e,// 417 PAY 378 

    0x43d5f2e9,// 418 PAY 379 

    0x48ff563d,// 419 PAY 380 

    0x25cfbc28,// 420 PAY 381 

    0x66ce4e2c,// 421 PAY 382 

    0x6c548a5e,// 422 PAY 383 

    0xd2f1f738,// 423 PAY 384 

    0x5b5ca487,// 424 PAY 385 

    0x3908763f,// 425 PAY 386 

    0xe3a84e42,// 426 PAY 387 

    0x8e9a0a0d,// 427 PAY 388 

    0x4a5a7019,// 428 PAY 389 

    0xa37de945,// 429 PAY 390 

    0x4a42ef0f,// 430 PAY 391 

    0xb731bc1e,// 431 PAY 392 

    0x62f61593,// 432 PAY 393 

    0xcb156624,// 433 PAY 394 

    0x4d479f71,// 434 PAY 395 

    0xde816a81,// 435 PAY 396 

    0xb06390f7,// 436 PAY 397 

    0x1a120f9b,// 437 PAY 398 

    0x6b639eff,// 438 PAY 399 

    0x99173c83,// 439 PAY 400 

    0x27dee4dc,// 440 PAY 401 

    0x128d5fbe,// 441 PAY 402 

    0x09214f51,// 442 PAY 403 

    0x0848ed18,// 443 PAY 404 

    0xee20bf1e,// 444 PAY 405 

    0xc2bab095,// 445 PAY 406 

    0xd27e9c5d,// 446 PAY 407 

    0x4df88dc5,// 447 PAY 408 

    0x41c6b69c,// 448 PAY 409 

    0x60811a36,// 449 PAY 410 

    0xfa9437f7,// 450 PAY 411 

    0xfce42fe0,// 451 PAY 412 

    0xcfeef235,// 452 PAY 413 

    0x2f377636,// 453 PAY 414 

    0x3170a066,// 454 PAY 415 

    0x1cad5933,// 455 PAY 416 

    0x5573e407,// 456 PAY 417 

    0x081d0d77,// 457 PAY 418 

    0xaa9b17ea,// 458 PAY 419 

    0xde5aac99,// 459 PAY 420 

    0x8893b073,// 460 PAY 421 

    0xbdc1bf0b,// 461 PAY 422 

    0x7915d3a9,// 462 PAY 423 

    0xfbd2958b,// 463 PAY 424 

    0x266b4ea1,// 464 PAY 425 

    0x9f8a5b12,// 465 PAY 426 

    0xfb3b382e,// 466 PAY 427 

    0xa45ce2ef,// 467 PAY 428 

    0xd7b3ae39,// 468 PAY 429 

    0x3e88f0d6,// 469 PAY 430 

    0x11d55c58,// 470 PAY 431 

    0x117c4976,// 471 PAY 432 

    0xc2e2917e,// 472 PAY 433 

    0xbf4a0481,// 473 PAY 434 

    0xf5e824fa,// 474 PAY 435 

    0x4c03d36d,// 475 PAY 436 

    0x5b5c1abe,// 476 PAY 437 

    0x0bb93661,// 477 PAY 438 

    0x7332de1a,// 478 PAY 439 

    0x5bf546c5,// 479 PAY 440 

    0x40c3afa3,// 480 PAY 441 

    0x52547c7b,// 481 PAY 442 

    0x7e599fd0,// 482 PAY 443 

    0xe49f9e66,// 483 PAY 444 

    0x91aa75ff,// 484 PAY 445 

    0x3c0f088e,// 485 PAY 446 

    0xf11ccec8,// 486 PAY 447 

    0x9de92855,// 487 PAY 448 

    0x56f9f52a,// 488 PAY 449 

    0x6697aaa9,// 489 PAY 450 

    0x2d91a4f0,// 490 PAY 451 

    0xbd919fb4,// 491 PAY 452 

    0x6dda6a36,// 492 PAY 453 

    0x13ca0e84,// 493 PAY 454 

    0xd81a01ee,// 494 PAY 455 

    0x3ad55e59,// 495 PAY 456 

    0x33795338,// 496 PAY 457 

    0x2346e219,// 497 PAY 458 

    0x112783e9,// 498 PAY 459 

    0xc57b04fe,// 499 PAY 460 

    0x0c603f84,// 500 PAY 461 

    0x9b0bcfc5,// 501 PAY 462 

    0xfbde3c55,// 502 PAY 463 

    0x0eb7b45e,// 503 PAY 464 

    0x0e8faf7b,// 504 PAY 465 

    0x02df0e49,// 505 PAY 466 

    0x14960000,// 506 PAY 467 

/// STA is 1 words. 

/// STA num_pkts       : 20 

/// STA pkt_idx        : 132 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x13 

    0x02111314 // 507 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt71_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x09 

/// ECH pdu_tag        : 0x00 

    0x00090000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv !insert_icv !check_icv sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x00000011,// 3 SCX   1 

    0x804448b2,// 4 SCX   2 

    0x000001c2,// 5 SCX   3 

    0xf2686228,// 6 SCX   4 

    0xd0c46652,// 7 SCX   5 

    0xc4b7899b,// 8 SCX   6 

    0xfe6d5c66,// 9 SCX   7 

    0xac0d13c9,// 10 SCX   8 

    0xb3b0dbf0,// 11 SCX   9 

    0xfd0aa8cd,// 12 SCX  10 

    0x5803ee5d,// 13 SCX  11 

    0xf94c15c6,// 14 SCX  12 

    0x86e1176e,// 15 SCX  13 

    0x27b7da6e,// 16 SCX  14 

    0xdfbe9534,// 17 SCX  15 

    0xddbf715e,// 18 SCX  16 

    0xf8c397a0,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1350 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 292 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 292 

/// BFD lencrypto      : 176 

/// BFD ofstcrypto     : 104 

/// BFD (ofst+len)cry  : 280 

/// BFD ofstiv         : 20 

/// BFD ofsticv        : 672 

    0x00000124,// 20 BFD   1 

    0x006800b0,// 21 BFD   2 

    0x02a00014,// 22 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : 10 

    0x100069b6,// 23 MFM   1 

    0x2a1a2e96,// 24 MFM   2 

    0x18770000,// 25 MFM   3 

/// BDA is 339 words. 

/// BDA size     is 1350 (0x546) 

/// BDA id       is 0xc9c9 

    0x0546c9c9,// 26 BDA   1 

/// PAY Generic Data size   : 1350 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0xf0da445d,// 27 PAY   1 

    0xf7ba2066,// 28 PAY   2 

    0xe145a31d,// 29 PAY   3 

    0x02db19e0,// 30 PAY   4 

    0x7c316baa,// 31 PAY   5 

    0xbe14d815,// 32 PAY   6 

    0x61e5f84a,// 33 PAY   7 

    0x0deabcf7,// 34 PAY   8 

    0x2c5545df,// 35 PAY   9 

    0xf6fd771c,// 36 PAY  10 

    0x5ec99562,// 37 PAY  11 

    0x73b178f8,// 38 PAY  12 

    0xaf448ec5,// 39 PAY  13 

    0x6bf01503,// 40 PAY  14 

    0xf02c5462,// 41 PAY  15 

    0x19733cca,// 42 PAY  16 

    0xc2e84d71,// 43 PAY  17 

    0x4e015165,// 44 PAY  18 

    0xae608a64,// 45 PAY  19 

    0x046b6bdc,// 46 PAY  20 

    0x03eca4a0,// 47 PAY  21 

    0xbc01920e,// 48 PAY  22 

    0x51e696e8,// 49 PAY  23 

    0x07bcac02,// 50 PAY  24 

    0x313e4714,// 51 PAY  25 

    0x15a5a4f0,// 52 PAY  26 

    0x8314ade6,// 53 PAY  27 

    0x176502ae,// 54 PAY  28 

    0x3057675a,// 55 PAY  29 

    0x694942ae,// 56 PAY  30 

    0x0d64961f,// 57 PAY  31 

    0x759b1682,// 58 PAY  32 

    0xe7284679,// 59 PAY  33 

    0x935e4c59,// 60 PAY  34 

    0x65110372,// 61 PAY  35 

    0xeed52ca7,// 62 PAY  36 

    0x0e6c18ed,// 63 PAY  37 

    0xdfa75093,// 64 PAY  38 

    0x6f7253bb,// 65 PAY  39 

    0x81139f1e,// 66 PAY  40 

    0x1c6571d6,// 67 PAY  41 

    0x44fe301f,// 68 PAY  42 

    0x2deb2214,// 69 PAY  43 

    0xec6ce2cb,// 70 PAY  44 

    0xa5dc1c77,// 71 PAY  45 

    0xb9cd926c,// 72 PAY  46 

    0x8868fc08,// 73 PAY  47 

    0x926d60aa,// 74 PAY  48 

    0xefc47762,// 75 PAY  49 

    0xa7df605a,// 76 PAY  50 

    0xe472aa3c,// 77 PAY  51 

    0xaf82c5d0,// 78 PAY  52 

    0x40099ae7,// 79 PAY  53 

    0x95be55f1,// 80 PAY  54 

    0xb4ced86d,// 81 PAY  55 

    0x1b629553,// 82 PAY  56 

    0x94189e10,// 83 PAY  57 

    0x965de964,// 84 PAY  58 

    0x6b198887,// 85 PAY  59 

    0xf21d0c2f,// 86 PAY  60 

    0x462c2339,// 87 PAY  61 

    0xc757f824,// 88 PAY  62 

    0xfbb7bcd0,// 89 PAY  63 

    0xeefa8617,// 90 PAY  64 

    0x90f25c33,// 91 PAY  65 

    0xe2feaced,// 92 PAY  66 

    0x9467594a,// 93 PAY  67 

    0x690c47d5,// 94 PAY  68 

    0x2209f9b5,// 95 PAY  69 

    0x0ee59e66,// 96 PAY  70 

    0x0302c2a9,// 97 PAY  71 

    0x4fbed9b3,// 98 PAY  72 

    0x7e64b87f,// 99 PAY  73 

    0xa2ace290,// 100 PAY  74 

    0x9a9c5100,// 101 PAY  75 

    0x5c422b68,// 102 PAY  76 

    0x5b881e1f,// 103 PAY  77 

    0xc2619e8f,// 104 PAY  78 

    0x0a770239,// 105 PAY  79 

    0x6858fcfb,// 106 PAY  80 

    0xafd162d6,// 107 PAY  81 

    0x8ec34452,// 108 PAY  82 

    0xbcce85d8,// 109 PAY  83 

    0x77c1b7cd,// 110 PAY  84 

    0x0e9a4f21,// 111 PAY  85 

    0x28c3d7f0,// 112 PAY  86 

    0xdf3b9cfe,// 113 PAY  87 

    0x5c370029,// 114 PAY  88 

    0x62901b66,// 115 PAY  89 

    0xa05f358a,// 116 PAY  90 

    0x7b5bc37b,// 117 PAY  91 

    0xb1d192a7,// 118 PAY  92 

    0xf2ae481a,// 119 PAY  93 

    0x23455cce,// 120 PAY  94 

    0x49707280,// 121 PAY  95 

    0x87c0496f,// 122 PAY  96 

    0x37bbebf6,// 123 PAY  97 

    0xa79c743b,// 124 PAY  98 

    0x01893203,// 125 PAY  99 

    0x638db109,// 126 PAY 100 

    0x173fb2de,// 127 PAY 101 

    0x25296538,// 128 PAY 102 

    0x589d3279,// 129 PAY 103 

    0x2dd8261b,// 130 PAY 104 

    0xecdd88b6,// 131 PAY 105 

    0x3b91ee07,// 132 PAY 106 

    0xd1f3bd82,// 133 PAY 107 

    0x769ac3c3,// 134 PAY 108 

    0x6afdef3c,// 135 PAY 109 

    0x2efc44da,// 136 PAY 110 

    0x342a8f39,// 137 PAY 111 

    0x640b054a,// 138 PAY 112 

    0x6833da95,// 139 PAY 113 

    0x55704c16,// 140 PAY 114 

    0x1473e804,// 141 PAY 115 

    0xcc4634f7,// 142 PAY 116 

    0xb9dc316b,// 143 PAY 117 

    0x7868e59f,// 144 PAY 118 

    0x8e1943b9,// 145 PAY 119 

    0x44408c5a,// 146 PAY 120 

    0xce372a2c,// 147 PAY 121 

    0x4270a9e3,// 148 PAY 122 

    0x40136ff2,// 149 PAY 123 

    0x2d9accc8,// 150 PAY 124 

    0xb33e6af3,// 151 PAY 125 

    0x12d769f5,// 152 PAY 126 

    0xc223e967,// 153 PAY 127 

    0x3f96c765,// 154 PAY 128 

    0xa5dcfdbd,// 155 PAY 129 

    0xdf253a4a,// 156 PAY 130 

    0x66e2bfd9,// 157 PAY 131 

    0x397f6d04,// 158 PAY 132 

    0xd6edee15,// 159 PAY 133 

    0x6db3c6b3,// 160 PAY 134 

    0xd068f058,// 161 PAY 135 

    0x6530107d,// 162 PAY 136 

    0x5ca5350b,// 163 PAY 137 

    0xed4c9712,// 164 PAY 138 

    0xc11df193,// 165 PAY 139 

    0x392643d3,// 166 PAY 140 

    0x391c2874,// 167 PAY 141 

    0xcdae06fb,// 168 PAY 142 

    0x1d5e658d,// 169 PAY 143 

    0xd66312f1,// 170 PAY 144 

    0x8691e1e8,// 171 PAY 145 

    0x3b96ac41,// 172 PAY 146 

    0xb903a634,// 173 PAY 147 

    0x229f9fc9,// 174 PAY 148 

    0xff1b6ee4,// 175 PAY 149 

    0x12c3d8ac,// 176 PAY 150 

    0x86fd1369,// 177 PAY 151 

    0x21687f78,// 178 PAY 152 

    0x65e0d6bd,// 179 PAY 153 

    0x6e2a500c,// 180 PAY 154 

    0xcb23a2f5,// 181 PAY 155 

    0xeb389ce9,// 182 PAY 156 

    0x6c9f36db,// 183 PAY 157 

    0x1e763011,// 184 PAY 158 

    0x89a23c6b,// 185 PAY 159 

    0xcc788da0,// 186 PAY 160 

    0x9311d320,// 187 PAY 161 

    0xdfdc1948,// 188 PAY 162 

    0xee69d4e8,// 189 PAY 163 

    0xc936ba91,// 190 PAY 164 

    0x8cf6d83f,// 191 PAY 165 

    0x236f720b,// 192 PAY 166 

    0xbb66c8f0,// 193 PAY 167 

    0x86864025,// 194 PAY 168 

    0x73e57f53,// 195 PAY 169 

    0xd8e58daf,// 196 PAY 170 

    0xbaea056a,// 197 PAY 171 

    0x0b9ddb03,// 198 PAY 172 

    0xfeac8fc1,// 199 PAY 173 

    0x13d4b596,// 200 PAY 174 

    0x6d3abdfd,// 201 PAY 175 

    0xc0fface1,// 202 PAY 176 

    0x9ea05069,// 203 PAY 177 

    0xd9bbd059,// 204 PAY 178 

    0x95db126e,// 205 PAY 179 

    0xff2d2f97,// 206 PAY 180 

    0xc239752a,// 207 PAY 181 

    0x1ee3b189,// 208 PAY 182 

    0x6c5495fb,// 209 PAY 183 

    0xd1d389f6,// 210 PAY 184 

    0xd4935ab8,// 211 PAY 185 

    0x3eec86f4,// 212 PAY 186 

    0x8574f0fe,// 213 PAY 187 

    0x39ad9c6c,// 214 PAY 188 

    0x514b5960,// 215 PAY 189 

    0xb42ec15d,// 216 PAY 190 

    0xdc6893d0,// 217 PAY 191 

    0x97cc8c0a,// 218 PAY 192 

    0x02f899a2,// 219 PAY 193 

    0x091095f6,// 220 PAY 194 

    0xf49a613c,// 221 PAY 195 

    0x7fcfd243,// 222 PAY 196 

    0x68f1d1b6,// 223 PAY 197 

    0x112f9dfc,// 224 PAY 198 

    0xb027bc85,// 225 PAY 199 

    0x19bcf2f3,// 226 PAY 200 

    0xab07fc90,// 227 PAY 201 

    0x8edfa472,// 228 PAY 202 

    0xcf5ceee4,// 229 PAY 203 

    0x9859bfb8,// 230 PAY 204 

    0xf865c036,// 231 PAY 205 

    0x2c5ec08c,// 232 PAY 206 

    0x0e908f73,// 233 PAY 207 

    0x8b53fcdd,// 234 PAY 208 

    0x7ee88a36,// 235 PAY 209 

    0x879b28de,// 236 PAY 210 

    0x31da1dbc,// 237 PAY 211 

    0x9ef86a88,// 238 PAY 212 

    0xba7dff39,// 239 PAY 213 

    0x29a3f2b4,// 240 PAY 214 

    0xa4a43996,// 241 PAY 215 

    0x8a66667c,// 242 PAY 216 

    0x774ebce4,// 243 PAY 217 

    0x25cf19ee,// 244 PAY 218 

    0x2e719d40,// 245 PAY 219 

    0xb322285f,// 246 PAY 220 

    0x68a7a368,// 247 PAY 221 

    0xa41171a4,// 248 PAY 222 

    0xe664b1f4,// 249 PAY 223 

    0xbcb722a9,// 250 PAY 224 

    0xbcbaccc9,// 251 PAY 225 

    0x3608a737,// 252 PAY 226 

    0xaa1d0562,// 253 PAY 227 

    0xfbbcb851,// 254 PAY 228 

    0xcd939498,// 255 PAY 229 

    0x9f55c1d0,// 256 PAY 230 

    0xc72a8411,// 257 PAY 231 

    0x4788a1fa,// 258 PAY 232 

    0xa5675d81,// 259 PAY 233 

    0x2d80ba78,// 260 PAY 234 

    0xfbb03e93,// 261 PAY 235 

    0x8c2c62aa,// 262 PAY 236 

    0x1334da85,// 263 PAY 237 

    0x0d93ab48,// 264 PAY 238 

    0x802273e3,// 265 PAY 239 

    0xe90e19d8,// 266 PAY 240 

    0x98cacf94,// 267 PAY 241 

    0xc55c9c7d,// 268 PAY 242 

    0x7d7b9998,// 269 PAY 243 

    0x307ffca8,// 270 PAY 244 

    0x93cd575d,// 271 PAY 245 

    0xc9d6cd72,// 272 PAY 246 

    0x645d0d19,// 273 PAY 247 

    0x1124f5ca,// 274 PAY 248 

    0x1ce3f996,// 275 PAY 249 

    0xf2d03370,// 276 PAY 250 

    0xdf6df113,// 277 PAY 251 

    0xb63eee4a,// 278 PAY 252 

    0xd4b88ac7,// 279 PAY 253 

    0xad0750ff,// 280 PAY 254 

    0xf3473cde,// 281 PAY 255 

    0x91ecac10,// 282 PAY 256 

    0xa702d73f,// 283 PAY 257 

    0x3f549b66,// 284 PAY 258 

    0xfc60a5da,// 285 PAY 259 

    0x83b958cd,// 286 PAY 260 

    0xaab51b17,// 287 PAY 261 

    0xcfba6d60,// 288 PAY 262 

    0x67abbb28,// 289 PAY 263 

    0x2136f018,// 290 PAY 264 

    0x7f3f4b8d,// 291 PAY 265 

    0xb4cb5e88,// 292 PAY 266 

    0xc1ecfe6c,// 293 PAY 267 

    0x3eccaf3e,// 294 PAY 268 

    0xfef819d1,// 295 PAY 269 

    0xa1e18c85,// 296 PAY 270 

    0x173ee4cd,// 297 PAY 271 

    0x2c8cebb7,// 298 PAY 272 

    0x46e9bc2e,// 299 PAY 273 

    0x7ca9f4c7,// 300 PAY 274 

    0xc1235310,// 301 PAY 275 

    0xd75cc299,// 302 PAY 276 

    0xc9109c76,// 303 PAY 277 

    0x0877862d,// 304 PAY 278 

    0x8817f3c5,// 305 PAY 279 

    0x0a50ac28,// 306 PAY 280 

    0x45b45bb8,// 307 PAY 281 

    0xc2383bdf,// 308 PAY 282 

    0xee3f677a,// 309 PAY 283 

    0x75ab78a8,// 310 PAY 284 

    0xc9b58de3,// 311 PAY 285 

    0x9588a6a4,// 312 PAY 286 

    0x5847ce31,// 313 PAY 287 

    0x358a5662,// 314 PAY 288 

    0xbf6a5dff,// 315 PAY 289 

    0x60bf5e6c,// 316 PAY 290 

    0x1d730976,// 317 PAY 291 

    0xb9cb725b,// 318 PAY 292 

    0x7da19edf,// 319 PAY 293 

    0x44073a18,// 320 PAY 294 

    0x3ececb40,// 321 PAY 295 

    0x98a9cdcd,// 322 PAY 296 

    0x313711eb,// 323 PAY 297 

    0x6029f154,// 324 PAY 298 

    0xbd00f233,// 325 PAY 299 

    0x92ee22c0,// 326 PAY 300 

    0x8c3ccdc6,// 327 PAY 301 

    0x320f04bd,// 328 PAY 302 

    0x868ab750,// 329 PAY 303 

    0xecdb4b60,// 330 PAY 304 

    0x86becc5e,// 331 PAY 305 

    0x4f73b2e9,// 332 PAY 306 

    0xe0ab1755,// 333 PAY 307 

    0xaa9d0ac6,// 334 PAY 308 

    0xeaeb94c3,// 335 PAY 309 

    0x770b86cb,// 336 PAY 310 

    0x6e81b8cd,// 337 PAY 311 

    0x8e4f719e,// 338 PAY 312 

    0xfe6ca58c,// 339 PAY 313 

    0xfe9b04fd,// 340 PAY 314 

    0x16feae28,// 341 PAY 315 

    0xe06280d1,// 342 PAY 316 

    0xb8dc7f2e,// 343 PAY 317 

    0x3748e285,// 344 PAY 318 

    0x0d5814dd,// 345 PAY 319 

    0x0e3bedd7,// 346 PAY 320 

    0x83761320,// 347 PAY 321 

    0x0c6c8fae,// 348 PAY 322 

    0x6e7e8cf7,// 349 PAY 323 

    0xc6d2c2b7,// 350 PAY 324 

    0x917b3def,// 351 PAY 325 

    0x94f56429,// 352 PAY 326 

    0x24266930,// 353 PAY 327 

    0x8a20dbf5,// 354 PAY 328 

    0x468a1106,// 355 PAY 329 

    0x0698bd98,// 356 PAY 330 

    0xa5043285,// 357 PAY 331 

    0x6b2a8251,// 358 PAY 332 

    0x2337631c,// 359 PAY 333 

    0xd115a382,// 360 PAY 334 

    0x9d5f7210,// 361 PAY 335 

    0xf4eabbcd,// 362 PAY 336 

    0x4b7f921e,// 363 PAY 337 

    0xc8530000,// 364 PAY 338 

/// STA is 1 words. 

/// STA num_pkts       : 85 

/// STA pkt_idx        : 179 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xf5 

    0x02ccf555 // 365 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt72_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x06 

/// ECH pdu_tag        : 0x00 

    0x00060000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv !insert_icv !check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x5 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x00000011,// 3 SCX   1 

    0x8045484d,// 4 SCX   2 

    0x00004582,// 5 SCX   3 

    0x42c8da38,// 6 SCX   4 

    0x09d2422f,// 7 SCX   5 

    0xf20b9ee1,// 8 SCX   6 

    0xe0f0bebe,// 9 SCX   7 

    0x6e1293bf,// 10 SCX   8 

    0xe10f7ec1,// 11 SCX   9 

    0x53ad5877,// 12 SCX  10 

    0xa17addd8,// 13 SCX  11 

    0xed62eb26,// 14 SCX  12 

    0xff8e9482,// 15 SCX  13 

    0x291b7201,// 16 SCX  14 

    0xd009c5c5,// 17 SCX  15 

    0x18281ce8,// 18 SCX  16 

    0x8bb4d70f,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1915 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 474 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 474 

/// BFD lencrypto      : 120 

/// BFD ofstcrypto     : 88 

/// BFD (ofst+len)cry  : 208 

/// BFD ofstiv         : 68 

/// BFD ofsticv        : 1296 

    0x000001da,// 20 BFD   1 

    0x00580078,// 21 BFD   2 

    0x05100044,// 22 BFD   3 

/// MFM is 4 words. 

/// MFM vldnibs        : 15 

    0x1500422f,// 23 MFM   1 

    0xe1ce283d,// 24 MFM   2 

    0xa98b3f52,// 25 MFM   3 

    0xa0000000,// 26 MFM   4 

/// BDA is 480 words. 

/// BDA size     is 1915 (0x77b) 

/// BDA id       is 0xdad4 

    0x077bdad4,// 27 BDA   1 

/// PAY Generic Data size   : 1915 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x599a2ed8,// 28 PAY   1 

    0xd32fc75c,// 29 PAY   2 

    0x317332dc,// 30 PAY   3 

    0x0de57f25,// 31 PAY   4 

    0x589b45e9,// 32 PAY   5 

    0x408766c5,// 33 PAY   6 

    0x38b8f564,// 34 PAY   7 

    0x3968e307,// 35 PAY   8 

    0x4dd7febd,// 36 PAY   9 

    0xa0d60595,// 37 PAY  10 

    0x1653e1ac,// 38 PAY  11 

    0xfe428150,// 39 PAY  12 

    0x4095f8cc,// 40 PAY  13 

    0x2bf28e80,// 41 PAY  14 

    0x7ad5d01f,// 42 PAY  15 

    0x9ac667c8,// 43 PAY  16 

    0x6dce2554,// 44 PAY  17 

    0x6ce476a4,// 45 PAY  18 

    0xa0e82fab,// 46 PAY  19 

    0x0ee756b1,// 47 PAY  20 

    0x835b2fce,// 48 PAY  21 

    0x58dc28f5,// 49 PAY  22 

    0x419f89d2,// 50 PAY  23 

    0x9be5b929,// 51 PAY  24 

    0x283ba135,// 52 PAY  25 

    0x7b4e89f9,// 53 PAY  26 

    0x781f5c7c,// 54 PAY  27 

    0x8fbd3c30,// 55 PAY  28 

    0x6d29d17a,// 56 PAY  29 

    0xa912fd1a,// 57 PAY  30 

    0x535af136,// 58 PAY  31 

    0x06da1faf,// 59 PAY  32 

    0x4e661aaa,// 60 PAY  33 

    0x434d73c4,// 61 PAY  34 

    0x95c173c1,// 62 PAY  35 

    0x898dff01,// 63 PAY  36 

    0xaa20d6e8,// 64 PAY  37 

    0x39bb388d,// 65 PAY  38 

    0x4b111360,// 66 PAY  39 

    0xef1e67e9,// 67 PAY  40 

    0x458ceeb5,// 68 PAY  41 

    0x02223971,// 69 PAY  42 

    0x433e4dcb,// 70 PAY  43 

    0xd993d793,// 71 PAY  44 

    0x0927fc1b,// 72 PAY  45 

    0x768f1e15,// 73 PAY  46 

    0x4fe8d650,// 74 PAY  47 

    0x983d36dd,// 75 PAY  48 

    0x1e0c00e1,// 76 PAY  49 

    0x2a8f6962,// 77 PAY  50 

    0x6d838275,// 78 PAY  51 

    0x3979dd2f,// 79 PAY  52 

    0xa3e6af44,// 80 PAY  53 

    0xfdd90ffe,// 81 PAY  54 

    0x80eda8f8,// 82 PAY  55 

    0x774d669b,// 83 PAY  56 

    0x58d42fe8,// 84 PAY  57 

    0x13eaf992,// 85 PAY  58 

    0x925096aa,// 86 PAY  59 

    0x453f900d,// 87 PAY  60 

    0x26fa0728,// 88 PAY  61 

    0x31ace57f,// 89 PAY  62 

    0xeae92119,// 90 PAY  63 

    0x56d12f8b,// 91 PAY  64 

    0x4e5dc674,// 92 PAY  65 

    0xa7bb57ba,// 93 PAY  66 

    0x36471244,// 94 PAY  67 

    0x1bfbdbec,// 95 PAY  68 

    0xb157d828,// 96 PAY  69 

    0xf3ca5a60,// 97 PAY  70 

    0x3057fd33,// 98 PAY  71 

    0x50180e66,// 99 PAY  72 

    0xbb53d57c,// 100 PAY  73 

    0x24ae5e80,// 101 PAY  74 

    0x9e3794e1,// 102 PAY  75 

    0x19fa65d0,// 103 PAY  76 

    0x3fef41fd,// 104 PAY  77 

    0xe217afb2,// 105 PAY  78 

    0x27efb570,// 106 PAY  79 

    0x2de9fe25,// 107 PAY  80 

    0x33aa55dc,// 108 PAY  81 

    0x6e2666b9,// 109 PAY  82 

    0xa5911ab3,// 110 PAY  83 

    0x6e2685d5,// 111 PAY  84 

    0x781efaed,// 112 PAY  85 

    0x9264db0d,// 113 PAY  86 

    0xd615e4de,// 114 PAY  87 

    0x487623bb,// 115 PAY  88 

    0x2a1fd7a2,// 116 PAY  89 

    0x9f902ab6,// 117 PAY  90 

    0x1666ac40,// 118 PAY  91 

    0x958204a5,// 119 PAY  92 

    0xf15d0151,// 120 PAY  93 

    0xc7a2cf44,// 121 PAY  94 

    0x51a5e481,// 122 PAY  95 

    0xc2c4a620,// 123 PAY  96 

    0xb66d68b6,// 124 PAY  97 

    0xfd4ab9c5,// 125 PAY  98 

    0xb1df317f,// 126 PAY  99 

    0x597e6f95,// 127 PAY 100 

    0x8ed55b82,// 128 PAY 101 

    0x83bf0530,// 129 PAY 102 

    0x5b07d7ac,// 130 PAY 103 

    0xc4ac7b5a,// 131 PAY 104 

    0x102c1a2f,// 132 PAY 105 

    0x317eca47,// 133 PAY 106 

    0x6ebec1c4,// 134 PAY 107 

    0xcdeae49c,// 135 PAY 108 

    0xe9379e5b,// 136 PAY 109 

    0xa5744c2f,// 137 PAY 110 

    0x9e866062,// 138 PAY 111 

    0x5abb80f7,// 139 PAY 112 

    0xc95a1666,// 140 PAY 113 

    0x8984a06a,// 141 PAY 114 

    0x0df22017,// 142 PAY 115 

    0x4f2da423,// 143 PAY 116 

    0x0b3b7be8,// 144 PAY 117 

    0x75f6d42e,// 145 PAY 118 

    0x6f0cb94d,// 146 PAY 119 

    0xf9b04fff,// 147 PAY 120 

    0x09c357e5,// 148 PAY 121 

    0x42a357c6,// 149 PAY 122 

    0xd69e9cd1,// 150 PAY 123 

    0x10b58799,// 151 PAY 124 

    0x39fa8472,// 152 PAY 125 

    0xd8be9594,// 153 PAY 126 

    0x09c2311e,// 154 PAY 127 

    0xb5932950,// 155 PAY 128 

    0xebc1b23f,// 156 PAY 129 

    0x67c72715,// 157 PAY 130 

    0xebf30681,// 158 PAY 131 

    0x1a19440d,// 159 PAY 132 

    0xdffac3d0,// 160 PAY 133 

    0xb8c3fad9,// 161 PAY 134 

    0x203f3341,// 162 PAY 135 

    0x26c8abac,// 163 PAY 136 

    0xbc17b327,// 164 PAY 137 

    0x5bacc12b,// 165 PAY 138 

    0xb5138e72,// 166 PAY 139 

    0x0b2ebbb3,// 167 PAY 140 

    0x9d2a08e3,// 168 PAY 141 

    0x7889a8ac,// 169 PAY 142 

    0x178152cb,// 170 PAY 143 

    0xa8a454aa,// 171 PAY 144 

    0x6e06ea3b,// 172 PAY 145 

    0x9957bb6e,// 173 PAY 146 

    0x54741b19,// 174 PAY 147 

    0x668985d6,// 175 PAY 148 

    0xc8001791,// 176 PAY 149 

    0x794403c4,// 177 PAY 150 

    0x725b1e39,// 178 PAY 151 

    0x4c3b0322,// 179 PAY 152 

    0xdaa953b8,// 180 PAY 153 

    0x981fad1e,// 181 PAY 154 

    0xecb36528,// 182 PAY 155 

    0xf0f3e034,// 183 PAY 156 

    0x13652866,// 184 PAY 157 

    0xc1b33731,// 185 PAY 158 

    0xd6adb163,// 186 PAY 159 

    0x75eca1ba,// 187 PAY 160 

    0xc0a31fe9,// 188 PAY 161 

    0x5a25d85a,// 189 PAY 162 

    0xe149c162,// 190 PAY 163 

    0x6ebe48bf,// 191 PAY 164 

    0xc2a4c04d,// 192 PAY 165 

    0xe886f340,// 193 PAY 166 

    0x3fc7641d,// 194 PAY 167 

    0xf0dc0282,// 195 PAY 168 

    0x0d411be4,// 196 PAY 169 

    0xa43fa97b,// 197 PAY 170 

    0xe0d1eec0,// 198 PAY 171 

    0xf296717a,// 199 PAY 172 

    0x65f2f24c,// 200 PAY 173 

    0xf8c26950,// 201 PAY 174 

    0x04ae87db,// 202 PAY 175 

    0x047f75e3,// 203 PAY 176 

    0x9416cb0c,// 204 PAY 177 

    0xe1de851b,// 205 PAY 178 

    0xc2733fa8,// 206 PAY 179 

    0xb33c7819,// 207 PAY 180 

    0x186a7b16,// 208 PAY 181 

    0x0ad993cd,// 209 PAY 182 

    0x7e5a5310,// 210 PAY 183 

    0x860e25eb,// 211 PAY 184 

    0x784f108b,// 212 PAY 185 

    0x9ce717d8,// 213 PAY 186 

    0x2fb8bf22,// 214 PAY 187 

    0x7f3794d9,// 215 PAY 188 

    0xb0a02aec,// 216 PAY 189 

    0x98b5a107,// 217 PAY 190 

    0x17eede20,// 218 PAY 191 

    0x39556c13,// 219 PAY 192 

    0x6cf73a9c,// 220 PAY 193 

    0x1cb33009,// 221 PAY 194 

    0xb36b2337,// 222 PAY 195 

    0x633550f1,// 223 PAY 196 

    0xd2cdbf6b,// 224 PAY 197 

    0xb62cd6f1,// 225 PAY 198 

    0xb52bca94,// 226 PAY 199 

    0xc2fa7277,// 227 PAY 200 

    0x7d685118,// 228 PAY 201 

    0xfdc77db7,// 229 PAY 202 

    0x0d697842,// 230 PAY 203 

    0x666066f0,// 231 PAY 204 

    0x2b166ff9,// 232 PAY 205 

    0x792596ba,// 233 PAY 206 

    0xc941b66b,// 234 PAY 207 

    0x59586393,// 235 PAY 208 

    0x52c8b417,// 236 PAY 209 

    0x8ae6d2c1,// 237 PAY 210 

    0x44aa6d88,// 238 PAY 211 

    0x2a3745e0,// 239 PAY 212 

    0x0ab5f4e1,// 240 PAY 213 

    0x300040f1,// 241 PAY 214 

    0xe5a1e34f,// 242 PAY 215 

    0x3964a54b,// 243 PAY 216 

    0x282b630a,// 244 PAY 217 

    0xd39ddc97,// 245 PAY 218 

    0xcea0b2af,// 246 PAY 219 

    0xf4aec525,// 247 PAY 220 

    0x8ff12767,// 248 PAY 221 

    0x30ced89f,// 249 PAY 222 

    0x9648745e,// 250 PAY 223 

    0x240f0d56,// 251 PAY 224 

    0x92f50597,// 252 PAY 225 

    0x6ba2d1a5,// 253 PAY 226 

    0x973739ff,// 254 PAY 227 

    0xcad24cba,// 255 PAY 228 

    0xc6aac81a,// 256 PAY 229 

    0xfa651065,// 257 PAY 230 

    0x824008f2,// 258 PAY 231 

    0x5af4ba8a,// 259 PAY 232 

    0xf86ca7de,// 260 PAY 233 

    0xbfe2b849,// 261 PAY 234 

    0xebcba6c3,// 262 PAY 235 

    0x3f1c530c,// 263 PAY 236 

    0xe6d7b8ed,// 264 PAY 237 

    0x44820cdf,// 265 PAY 238 

    0x082419ba,// 266 PAY 239 

    0x71b08d7e,// 267 PAY 240 

    0xafc2478a,// 268 PAY 241 

    0x60ec8482,// 269 PAY 242 

    0xe3947f28,// 270 PAY 243 

    0x0933f155,// 271 PAY 244 

    0x9f3f0a7a,// 272 PAY 245 

    0x660f5226,// 273 PAY 246 

    0x6cd26d2b,// 274 PAY 247 

    0x3ff158a8,// 275 PAY 248 

    0xe134f01d,// 276 PAY 249 

    0x51fd036b,// 277 PAY 250 

    0x803364d1,// 278 PAY 251 

    0xa0381744,// 279 PAY 252 

    0x96594988,// 280 PAY 253 

    0x0cead9c0,// 281 PAY 254 

    0x9f8f7033,// 282 PAY 255 

    0xa871c9bc,// 283 PAY 256 

    0x5655fc46,// 284 PAY 257 

    0x55cdbf54,// 285 PAY 258 

    0x5b2193fb,// 286 PAY 259 

    0xda924f83,// 287 PAY 260 

    0xff5fe806,// 288 PAY 261 

    0x010ce3b8,// 289 PAY 262 

    0x2f4e0d90,// 290 PAY 263 

    0x3050b54c,// 291 PAY 264 

    0xe5b7414e,// 292 PAY 265 

    0x75a39ec6,// 293 PAY 266 

    0xccfd1028,// 294 PAY 267 

    0xe324fdd8,// 295 PAY 268 

    0xbe925b09,// 296 PAY 269 

    0xb3356859,// 297 PAY 270 

    0x2981b477,// 298 PAY 271 

    0x712a3aa4,// 299 PAY 272 

    0x07394cfc,// 300 PAY 273 

    0x91aff1b3,// 301 PAY 274 

    0x3f4888cb,// 302 PAY 275 

    0x56403f25,// 303 PAY 276 

    0x9e92171e,// 304 PAY 277 

    0xefa85b9b,// 305 PAY 278 

    0x326fe355,// 306 PAY 279 

    0x6ceb6e20,// 307 PAY 280 

    0x778cb3e7,// 308 PAY 281 

    0xd36b9772,// 309 PAY 282 

    0x602891c6,// 310 PAY 283 

    0xc207658d,// 311 PAY 284 

    0x3d212ead,// 312 PAY 285 

    0xa7d619f2,// 313 PAY 286 

    0x2616e394,// 314 PAY 287 

    0xbfe7ad24,// 315 PAY 288 

    0x8e6d0bac,// 316 PAY 289 

    0x5d00317d,// 317 PAY 290 

    0x6f48a1f7,// 318 PAY 291 

    0xe2ce266b,// 319 PAY 292 

    0x4ff4a92b,// 320 PAY 293 

    0x1cfd7fd4,// 321 PAY 294 

    0xcb2cba90,// 322 PAY 295 

    0x4251e762,// 323 PAY 296 

    0x6db075a9,// 324 PAY 297 

    0xd6bbc8af,// 325 PAY 298 

    0x177e284b,// 326 PAY 299 

    0x75d3d8bb,// 327 PAY 300 

    0x899938d6,// 328 PAY 301 

    0x1f374566,// 329 PAY 302 

    0xcd5d78ef,// 330 PAY 303 

    0x1ad7c31a,// 331 PAY 304 

    0xefcafd26,// 332 PAY 305 

    0x4c8b7e68,// 333 PAY 306 

    0xa2c38a6a,// 334 PAY 307 

    0xa9a9ba39,// 335 PAY 308 

    0x964d0e83,// 336 PAY 309 

    0x7281077b,// 337 PAY 310 

    0x33a7509b,// 338 PAY 311 

    0xc187ca2a,// 339 PAY 312 

    0x531e7512,// 340 PAY 313 

    0x9510a407,// 341 PAY 314 

    0x626a7b3b,// 342 PAY 315 

    0xa9069a01,// 343 PAY 316 

    0xf0f01534,// 344 PAY 317 

    0x19841239,// 345 PAY 318 

    0x55af6c9e,// 346 PAY 319 

    0x0b1c1f67,// 347 PAY 320 

    0xd3af9e49,// 348 PAY 321 

    0x52e5f12f,// 349 PAY 322 

    0xf3f3c25c,// 350 PAY 323 

    0xf315d661,// 351 PAY 324 

    0xea3e6ff1,// 352 PAY 325 

    0x71a61728,// 353 PAY 326 

    0xbfcd3013,// 354 PAY 327 

    0x295cf77e,// 355 PAY 328 

    0x2a4b5993,// 356 PAY 329 

    0x59ee121c,// 357 PAY 330 

    0xbafaf42f,// 358 PAY 331 

    0xc13a386f,// 359 PAY 332 

    0xcbf81839,// 360 PAY 333 

    0x1202e478,// 361 PAY 334 

    0xe52ed787,// 362 PAY 335 

    0x5cd180cf,// 363 PAY 336 

    0xe7f4ff41,// 364 PAY 337 

    0x4afb77e7,// 365 PAY 338 

    0xfa6c750a,// 366 PAY 339 

    0x85e86d16,// 367 PAY 340 

    0xc3075d99,// 368 PAY 341 

    0xcfe904bd,// 369 PAY 342 

    0x3b09a799,// 370 PAY 343 

    0x74365f0b,// 371 PAY 344 

    0x53cd3f46,// 372 PAY 345 

    0x171e7ea4,// 373 PAY 346 

    0x7bb99730,// 374 PAY 347 

    0x51d3bd5c,// 375 PAY 348 

    0x06709dc4,// 376 PAY 349 

    0x6f817624,// 377 PAY 350 

    0x92b0c597,// 378 PAY 351 

    0x23028c89,// 379 PAY 352 

    0x1ff4511d,// 380 PAY 353 

    0xccd13f00,// 381 PAY 354 

    0xeb2dd85c,// 382 PAY 355 

    0xe548e0b5,// 383 PAY 356 

    0x7fc4701f,// 384 PAY 357 

    0x5e45c00e,// 385 PAY 358 

    0x3bd5b440,// 386 PAY 359 

    0xf8c8c604,// 387 PAY 360 

    0x0b1128d0,// 388 PAY 361 

    0x8ceee55c,// 389 PAY 362 

    0xcb141d69,// 390 PAY 363 

    0x18058c48,// 391 PAY 364 

    0x9f9869e1,// 392 PAY 365 

    0x5f911163,// 393 PAY 366 

    0xd8780c8b,// 394 PAY 367 

    0x7fe659e6,// 395 PAY 368 

    0x14c8c60a,// 396 PAY 369 

    0xf6b29964,// 397 PAY 370 

    0x9e241d9c,// 398 PAY 371 

    0x9e9a56df,// 399 PAY 372 

    0xe47dc8ca,// 400 PAY 373 

    0xb1e5bfbe,// 401 PAY 374 

    0x376eca92,// 402 PAY 375 

    0xf3d1c871,// 403 PAY 376 

    0xf97929dd,// 404 PAY 377 

    0xdfee3c6d,// 405 PAY 378 

    0x4e0042dc,// 406 PAY 379 

    0x0c1f719a,// 407 PAY 380 

    0x679176bf,// 408 PAY 381 

    0x30fa37f5,// 409 PAY 382 

    0xfcdd8402,// 410 PAY 383 

    0xdf1408da,// 411 PAY 384 

    0xfbc7b1a3,// 412 PAY 385 

    0xe9aa9077,// 413 PAY 386 

    0xa96aa20e,// 414 PAY 387 

    0xa079a07d,// 415 PAY 388 

    0xeaa16f0e,// 416 PAY 389 

    0x1128946e,// 417 PAY 390 

    0x5f1e4f1c,// 418 PAY 391 

    0x7bb2a5a2,// 419 PAY 392 

    0x2080b388,// 420 PAY 393 

    0xec76033f,// 421 PAY 394 

    0x7ce6eff4,// 422 PAY 395 

    0xfca6f19a,// 423 PAY 396 

    0x435fc981,// 424 PAY 397 

    0x1a611e3c,// 425 PAY 398 

    0x73849c25,// 426 PAY 399 

    0xe8e5e7d0,// 427 PAY 400 

    0xf490c220,// 428 PAY 401 

    0x4c4745b9,// 429 PAY 402 

    0x24c61166,// 430 PAY 403 

    0xc800af45,// 431 PAY 404 

    0x6be0d618,// 432 PAY 405 

    0xb37f4457,// 433 PAY 406 

    0xd5e50f15,// 434 PAY 407 

    0xaec8922d,// 435 PAY 408 

    0x71afac5d,// 436 PAY 409 

    0x985ef063,// 437 PAY 410 

    0x7f569580,// 438 PAY 411 

    0xf89b913e,// 439 PAY 412 

    0xe1533ac1,// 440 PAY 413 

    0x9854d3d0,// 441 PAY 414 

    0x7696452d,// 442 PAY 415 

    0xa4b5dbbe,// 443 PAY 416 

    0xe631e3d9,// 444 PAY 417 

    0x1cf5bff3,// 445 PAY 418 

    0xce2b4a3b,// 446 PAY 419 

    0xee34abb3,// 447 PAY 420 

    0x20fa5b17,// 448 PAY 421 

    0x96ae18b6,// 449 PAY 422 

    0x98f1c547,// 450 PAY 423 

    0x6b57e814,// 451 PAY 424 

    0x653fcdb3,// 452 PAY 425 

    0xdc58b79a,// 453 PAY 426 

    0xc96ce362,// 454 PAY 427 

    0x9787a7f6,// 455 PAY 428 

    0x6568f0a8,// 456 PAY 429 

    0x3ed91445,// 457 PAY 430 

    0xa9295c8e,// 458 PAY 431 

    0x768f1049,// 459 PAY 432 

    0x7a473efe,// 460 PAY 433 

    0x485afca0,// 461 PAY 434 

    0xe50bbd83,// 462 PAY 435 

    0x5a00ee4f,// 463 PAY 436 

    0x0e864f99,// 464 PAY 437 

    0x366bdf40,// 465 PAY 438 

    0x26a268c2,// 466 PAY 439 

    0x1b383a09,// 467 PAY 440 

    0xd5ba9e62,// 468 PAY 441 

    0x0913b3bf,// 469 PAY 442 

    0x05dfe275,// 470 PAY 443 

    0xc8f7ea98,// 471 PAY 444 

    0x3d13946e,// 472 PAY 445 

    0x32a3715d,// 473 PAY 446 

    0x08ba9a12,// 474 PAY 447 

    0xe528e39f,// 475 PAY 448 

    0x881c2aca,// 476 PAY 449 

    0x0664f812,// 477 PAY 450 

    0x97bf68b6,// 478 PAY 451 

    0x2d3eb3b7,// 479 PAY 452 

    0xdb682776,// 480 PAY 453 

    0x622e6119,// 481 PAY 454 

    0x861dee8c,// 482 PAY 455 

    0x2476a4e9,// 483 PAY 456 

    0x2437949d,// 484 PAY 457 

    0x86996ce6,// 485 PAY 458 

    0x4f0a2d0a,// 486 PAY 459 

    0x4eb5f609,// 487 PAY 460 

    0x2333b02f,// 488 PAY 461 

    0x009ce838,// 489 PAY 462 

    0x460f8b08,// 490 PAY 463 

    0x79f9703d,// 491 PAY 464 

    0x68f0dc0d,// 492 PAY 465 

    0x3b02a255,// 493 PAY 466 

    0x8219232d,// 494 PAY 467 

    0xd04c03c7,// 495 PAY 468 

    0x047fc25f,// 496 PAY 469 

    0x4b98583b,// 497 PAY 470 

    0x1920c326,// 498 PAY 471 

    0x497a2e36,// 499 PAY 472 

    0x86955a6b,// 500 PAY 473 

    0x54016eeb,// 501 PAY 474 

    0x395c3882,// 502 PAY 475 

    0xc30fdfd2,// 503 PAY 476 

    0x375ffcf4,// 504 PAY 477 

    0x8292e3f2,// 505 PAY 478 

    0x2d287900,// 506 PAY 479 

/// STA is 1 words. 

/// STA num_pkts       : 44 

/// STA pkt_idx        : 45 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x94 

    0x00b5942c // 507 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt73_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x04 

/// ECH pdu_tag        : 0x00 

    0x00040000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0800000f,// 3 SCX   1 

    0x80424853,// 4 SCX   2 

    0x00004200,// 5 SCX   3 

    0x29e1087d,// 6 SCX   4 

    0x8a9acb9d,// 7 SCX   5 

    0xcf95c4cf,// 8 SCX   6 

    0x8cb5f41d,// 9 SCX   7 

    0xa1f34199,// 10 SCX   8 

    0x954d6ada,// 11 SCX   9 

    0x867e4891,// 12 SCX  10 

    0x012adfed,// 13 SCX  11 

    0x4e7f2276,// 14 SCX  12 

    0x6a624005,// 15 SCX  13 

    0xc9b352f3,// 16 SCX  14 

    0xf9349f5b,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 1129 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 21 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 21 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 12 

/// BFD (ofst+len)cry  : 20 

/// BFD ofstiv         : 0 

/// BFD ofsticv        : 1084 

    0x00000015,// 18 BFD   1 

    0x000c0008,// 19 BFD   2 

    0x043c0000,// 20 BFD   3 

/// MFM is 1 words. 

/// MFM vldnibs        : 4 

    0x04007fba,// 21 MFM   1 

/// BDA is 284 words. 

/// BDA size     is 1129 (0x469) 

/// BDA id       is 0xb041 

    0x0469b041,// 22 BDA   1 

/// PAY Generic Data size   : 1129 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x344cbe4f,// 23 PAY   1 

    0xd3c65ad1,// 24 PAY   2 

    0x7019016f,// 25 PAY   3 

    0xecc84214,// 26 PAY   4 

    0x1211b449,// 27 PAY   5 

    0x875480de,// 28 PAY   6 

    0xc8392996,// 29 PAY   7 

    0xa268d1de,// 30 PAY   8 

    0xcffb293f,// 31 PAY   9 

    0x0383b8b5,// 32 PAY  10 

    0xcd0f788a,// 33 PAY  11 

    0x46879c46,// 34 PAY  12 

    0x70c4d894,// 35 PAY  13 

    0x3020ce6b,// 36 PAY  14 

    0x6d49ff2e,// 37 PAY  15 

    0x22d33768,// 38 PAY  16 

    0xf079e834,// 39 PAY  17 

    0x6a862af7,// 40 PAY  18 

    0x2519fa9f,// 41 PAY  19 

    0x0403fd0f,// 42 PAY  20 

    0xba535edc,// 43 PAY  21 

    0x84fb404d,// 44 PAY  22 

    0xd6e94104,// 45 PAY  23 

    0xdc387a2a,// 46 PAY  24 

    0x7f1d2697,// 47 PAY  25 

    0x725893c1,// 48 PAY  26 

    0x462b0ece,// 49 PAY  27 

    0xab12d90f,// 50 PAY  28 

    0x694a31bb,// 51 PAY  29 

    0xfdb92830,// 52 PAY  30 

    0xea99238e,// 53 PAY  31 

    0xfaaab101,// 54 PAY  32 

    0xfd90757c,// 55 PAY  33 

    0xa7d51527,// 56 PAY  34 

    0xf9eef21c,// 57 PAY  35 

    0x03a2c37a,// 58 PAY  36 

    0xae0306eb,// 59 PAY  37 

    0x2564cb70,// 60 PAY  38 

    0x03ae1cfa,// 61 PAY  39 

    0x6ef32654,// 62 PAY  40 

    0xd61e1006,// 63 PAY  41 

    0x8c4a023a,// 64 PAY  42 

    0x247e4037,// 65 PAY  43 

    0x7e480c8a,// 66 PAY  44 

    0x5e6c6db0,// 67 PAY  45 

    0x3e758296,// 68 PAY  46 

    0xc74b4dd1,// 69 PAY  47 

    0xe957a5fb,// 70 PAY  48 

    0xd8e4a9fc,// 71 PAY  49 

    0x2ae8dd0b,// 72 PAY  50 

    0xc079da24,// 73 PAY  51 

    0x72bbfc8a,// 74 PAY  52 

    0x82ed0695,// 75 PAY  53 

    0x7b7a8687,// 76 PAY  54 

    0xf1c1baf9,// 77 PAY  55 

    0x740eae09,// 78 PAY  56 

    0xf019e21c,// 79 PAY  57 

    0x4489d392,// 80 PAY  58 

    0x1dc9b595,// 81 PAY  59 

    0x55b0ac3d,// 82 PAY  60 

    0xfda80d5f,// 83 PAY  61 

    0x1ddcdd4f,// 84 PAY  62 

    0x8847152e,// 85 PAY  63 

    0x10f9571b,// 86 PAY  64 

    0x395cc47a,// 87 PAY  65 

    0x3f87cdb7,// 88 PAY  66 

    0xed518d44,// 89 PAY  67 

    0x197a5f11,// 90 PAY  68 

    0x83e6d658,// 91 PAY  69 

    0x3ab47ce6,// 92 PAY  70 

    0x9cbe7201,// 93 PAY  71 

    0x38bcef26,// 94 PAY  72 

    0x5c9899ee,// 95 PAY  73 

    0x63c8cd34,// 96 PAY  74 

    0x07d6d454,// 97 PAY  75 

    0x18b4fbd2,// 98 PAY  76 

    0x6e54f1ac,// 99 PAY  77 

    0x78b10003,// 100 PAY  78 

    0x9c1bfe92,// 101 PAY  79 

    0x2220db58,// 102 PAY  80 

    0x1fb25112,// 103 PAY  81 

    0xaf1350bd,// 104 PAY  82 

    0x20f4a1f2,// 105 PAY  83 

    0xe880e737,// 106 PAY  84 

    0x506ee528,// 107 PAY  85 

    0x9709f76b,// 108 PAY  86 

    0xd1facfec,// 109 PAY  87 

    0x73096481,// 110 PAY  88 

    0xe5c739ed,// 111 PAY  89 

    0x5332fa59,// 112 PAY  90 

    0x62876828,// 113 PAY  91 

    0x92f1f303,// 114 PAY  92 

    0x79637ae3,// 115 PAY  93 

    0xe57aefe3,// 116 PAY  94 

    0xf2e90bfa,// 117 PAY  95 

    0xf48920d1,// 118 PAY  96 

    0xf2261e8e,// 119 PAY  97 

    0x06ac90fb,// 120 PAY  98 

    0xf3389ca4,// 121 PAY  99 

    0x2b493141,// 122 PAY 100 

    0xe275378f,// 123 PAY 101 

    0x9f44b688,// 124 PAY 102 

    0xd20462cb,// 125 PAY 103 

    0xe52eb83e,// 126 PAY 104 

    0xa27e106d,// 127 PAY 105 

    0x800fe20c,// 128 PAY 106 

    0xdb4189b6,// 129 PAY 107 

    0xfe452be9,// 130 PAY 108 

    0x6f01a475,// 131 PAY 109 

    0x3cea356f,// 132 PAY 110 

    0x7233cafa,// 133 PAY 111 

    0x0ff0b9c6,// 134 PAY 112 

    0x8f8e60ab,// 135 PAY 113 

    0x24714ba7,// 136 PAY 114 

    0xdc0697fe,// 137 PAY 115 

    0x8380bf92,// 138 PAY 116 

    0xba358085,// 139 PAY 117 

    0xa4dd7a1c,// 140 PAY 118 

    0xc29a9da7,// 141 PAY 119 

    0x01312085,// 142 PAY 120 

    0x9f18aadf,// 143 PAY 121 

    0x8f924406,// 144 PAY 122 

    0x81ab79af,// 145 PAY 123 

    0xca0efd89,// 146 PAY 124 

    0x2c3568a9,// 147 PAY 125 

    0x7f9da731,// 148 PAY 126 

    0xafbd3865,// 149 PAY 127 

    0x60220cf6,// 150 PAY 128 

    0x7191ead8,// 151 PAY 129 

    0xf1778e43,// 152 PAY 130 

    0x54704fff,// 153 PAY 131 

    0x8886b4c6,// 154 PAY 132 

    0x87062bb0,// 155 PAY 133 

    0x16787071,// 156 PAY 134 

    0xee1fefb9,// 157 PAY 135 

    0x311fde05,// 158 PAY 136 

    0x699bda3c,// 159 PAY 137 

    0x7ebb60ae,// 160 PAY 138 

    0xd44c3cad,// 161 PAY 139 

    0xb8a9ea69,// 162 PAY 140 

    0xfd67a068,// 163 PAY 141 

    0xa89e6325,// 164 PAY 142 

    0x25c0aba8,// 165 PAY 143 

    0x7026efd2,// 166 PAY 144 

    0xb87c8ef0,// 167 PAY 145 

    0xadc41a98,// 168 PAY 146 

    0x90b1d040,// 169 PAY 147 

    0xcfd156d9,// 170 PAY 148 

    0x20598222,// 171 PAY 149 

    0x8553f289,// 172 PAY 150 

    0xb70d46d7,// 173 PAY 151 

    0x24fae6fd,// 174 PAY 152 

    0xc91c07f9,// 175 PAY 153 

    0xd7021beb,// 176 PAY 154 

    0x154e5022,// 177 PAY 155 

    0xd167a9c7,// 178 PAY 156 

    0xa7322074,// 179 PAY 157 

    0x92d5d6a2,// 180 PAY 158 

    0xaa9e64fd,// 181 PAY 159 

    0xc0b64a48,// 182 PAY 160 

    0xe466719a,// 183 PAY 161 

    0x7568733f,// 184 PAY 162 

    0x22670696,// 185 PAY 163 

    0x463d9c66,// 186 PAY 164 

    0x46e824ac,// 187 PAY 165 

    0xcfaf32cd,// 188 PAY 166 

    0x52728a83,// 189 PAY 167 

    0xda19917e,// 190 PAY 168 

    0xf8d782f7,// 191 PAY 169 

    0x1c9f370d,// 192 PAY 170 

    0xee2f8891,// 193 PAY 171 

    0xdc4dfa28,// 194 PAY 172 

    0x15d9a557,// 195 PAY 173 

    0xaf7747d0,// 196 PAY 174 

    0xa8b854f6,// 197 PAY 175 

    0x634aceac,// 198 PAY 176 

    0xcc4e6971,// 199 PAY 177 

    0x8c79c1f7,// 200 PAY 178 

    0x122a2bff,// 201 PAY 179 

    0xa2d6f5cd,// 202 PAY 180 

    0xa6046036,// 203 PAY 181 

    0xab05865d,// 204 PAY 182 

    0x2b5dc5f2,// 205 PAY 183 

    0xd24118ae,// 206 PAY 184 

    0xc89d1408,// 207 PAY 185 

    0x9f889d83,// 208 PAY 186 

    0xbfc95864,// 209 PAY 187 

    0xa85ad47e,// 210 PAY 188 

    0x00519353,// 211 PAY 189 

    0xf0f67131,// 212 PAY 190 

    0xe898f752,// 213 PAY 191 

    0x84b29145,// 214 PAY 192 

    0x89e395fb,// 215 PAY 193 

    0x12d12a40,// 216 PAY 194 

    0x3e3b5045,// 217 PAY 195 

    0x1b819aa9,// 218 PAY 196 

    0xdfdd3fb2,// 219 PAY 197 

    0xb038e4e7,// 220 PAY 198 

    0x4af1c2ce,// 221 PAY 199 

    0x3eaa5454,// 222 PAY 200 

    0x8d87c8fb,// 223 PAY 201 

    0x92c58333,// 224 PAY 202 

    0x62e166d8,// 225 PAY 203 

    0xaf5e09d1,// 226 PAY 204 

    0xab980f01,// 227 PAY 205 

    0x0e5498ba,// 228 PAY 206 

    0xf4dd4325,// 229 PAY 207 

    0x82de3936,// 230 PAY 208 

    0xd2a2cd20,// 231 PAY 209 

    0x389737ee,// 232 PAY 210 

    0x013f44e8,// 233 PAY 211 

    0x8f4c7f2f,// 234 PAY 212 

    0x9e9e7669,// 235 PAY 213 

    0x90eef5d1,// 236 PAY 214 

    0x911be171,// 237 PAY 215 

    0xd13e73d9,// 238 PAY 216 

    0xb39961b2,// 239 PAY 217 

    0xf40257f5,// 240 PAY 218 

    0xa1fa7760,// 241 PAY 219 

    0xa27593fe,// 242 PAY 220 

    0x1392fe83,// 243 PAY 221 

    0x6d70a643,// 244 PAY 222 

    0xc1f0288c,// 245 PAY 223 

    0x2f82e4ce,// 246 PAY 224 

    0x759df7db,// 247 PAY 225 

    0xa10ea940,// 248 PAY 226 

    0xd30b682f,// 249 PAY 227 

    0x3cd26752,// 250 PAY 228 

    0x77c0e9a2,// 251 PAY 229 

    0xe7e99c88,// 252 PAY 230 

    0x435d6722,// 253 PAY 231 

    0x52294bf1,// 254 PAY 232 

    0x17eadfeb,// 255 PAY 233 

    0xf5e893e0,// 256 PAY 234 

    0xd679e0cb,// 257 PAY 235 

    0xd582899f,// 258 PAY 236 

    0x358b7728,// 259 PAY 237 

    0x79929a8b,// 260 PAY 238 

    0xe0027ef2,// 261 PAY 239 

    0x80e4ff19,// 262 PAY 240 

    0x26abd241,// 263 PAY 241 

    0xb86eb277,// 264 PAY 242 

    0xcacc23b7,// 265 PAY 243 

    0x182cab05,// 266 PAY 244 

    0xadc2f6af,// 267 PAY 245 

    0x014ae877,// 268 PAY 246 

    0x3a15a769,// 269 PAY 247 

    0x17f3370d,// 270 PAY 248 

    0x0225224b,// 271 PAY 249 

    0x76f1ec70,// 272 PAY 250 

    0x922d03f0,// 273 PAY 251 

    0x397369e0,// 274 PAY 252 

    0xc98ea5b1,// 275 PAY 253 

    0x1733fd32,// 276 PAY 254 

    0x5efbd610,// 277 PAY 255 

    0x30597265,// 278 PAY 256 

    0xd6bff066,// 279 PAY 257 

    0xd8ef0e39,// 280 PAY 258 

    0xee4d8190,// 281 PAY 259 

    0xdaff2188,// 282 PAY 260 

    0x0f02beda,// 283 PAY 261 

    0x5f6a1e4b,// 284 PAY 262 

    0xfade5b34,// 285 PAY 263 

    0x237ff968,// 286 PAY 264 

    0x142971e8,// 287 PAY 265 

    0x15577223,// 288 PAY 266 

    0x9c355832,// 289 PAY 267 

    0xf0e479d8,// 290 PAY 268 

    0xb242408f,// 291 PAY 269 

    0x8288bcc1,// 292 PAY 270 

    0x6df575ce,// 293 PAY 271 

    0x8c2c1a55,// 294 PAY 272 

    0xeaa3d2d4,// 295 PAY 273 

    0xc07a6535,// 296 PAY 274 

    0x8d8dc46b,// 297 PAY 275 

    0x0ac71446,// 298 PAY 276 

    0x2f43836b,// 299 PAY 277 

    0xc9b79406,// 300 PAY 278 

    0x7df053cf,// 301 PAY 279 

    0x69e614cd,// 302 PAY 280 

    0x8886fe25,// 303 PAY 281 

    0x8da3a393,// 304 PAY 282 

    0x87000000,// 305 PAY 283 

/// STA is 1 words. 

/// STA num_pkts       : 218 

/// STA pkt_idx        : 241 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x44 

    0x03c544da // 306 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt74_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x0c 

/// ECH pdu_tag        : 0x00 

    0x000c0000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0800000f,// 3 SCX   1 

    0x8040487e,// 4 SCX   2 

    0x00004200,// 5 SCX   3 

    0x92ab5b2a,// 6 SCX   4 

    0x4dbd6c52,// 7 SCX   5 

    0x46acd331,// 8 SCX   6 

    0x77883071,// 9 SCX   7 

    0x7d4f5a47,// 10 SCX   8 

    0x2ba11cb0,// 11 SCX   9 

    0xd65d6e7b,// 12 SCX  10 

    0xc805bc1e,// 13 SCX  11 

    0x5c6e8987,// 14 SCX  12 

    0xd1b0a35e,// 15 SCX  13 

    0xdb349c1d,// 16 SCX  14 

    0xa351c28e,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 935 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 879 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 879 

/// BFD lencrypto      : 144 

/// BFD ofstcrypto     : 668 

/// BFD (ofst+len)cry  : 812 

/// BFD ofstiv         : 428 

/// BFD ofsticv        : 912 

    0x0000036f,// 18 BFD   1 

    0x029c0090,// 19 BFD   2 

    0x039001ac,// 20 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c002e0f,// 21 MFM   1 

    0x92cd13f8,// 22 MFM   2 

    0x9cac25d4,// 23 MFM   3 

    0x2ebdf839,// 24 MFM   4 

    0x60ec77e7,// 25 MFM   5 

    0x328bc47c,// 26 MFM   6 

    0x0eb16ce0,// 27 MFM   7 

    0xca58becd,// 28 MFM   8 

    0x4d5e55d6,// 29 MFM   9 

    0x8628b06d,// 30 MFM  10 

    0x0e0fc42c,// 31 MFM  11 

    0x495dce63,// 32 MFM  12 

    0x74fe8760,// 33 MFM  13 

    0x854bb8e0,// 34 MFM  14 

    0x57b2c1eb,// 35 MFM  15 

    0xbab5925f,// 36 MFM  16 

/// BDA is 235 words. 

/// BDA size     is 935 (0x3a7) 

/// BDA id       is 0xa0be 

    0x03a7a0be,// 37 BDA   1 

/// PAY Generic Data size   : 935 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x6e5bfae0,// 38 PAY   1 

    0x7943758a,// 39 PAY   2 

    0x9143ef99,// 40 PAY   3 

    0x1bb70b28,// 41 PAY   4 

    0x69c23c78,// 42 PAY   5 

    0x13bde055,// 43 PAY   6 

    0x01b1b7d0,// 44 PAY   7 

    0xdd16643e,// 45 PAY   8 

    0x35e24993,// 46 PAY   9 

    0x9e2097a8,// 47 PAY  10 

    0x2aefc1bc,// 48 PAY  11 

    0xe83d4106,// 49 PAY  12 

    0x83ee2a62,// 50 PAY  13 

    0xef970178,// 51 PAY  14 

    0x8838ad4a,// 52 PAY  15 

    0x7c99fd4a,// 53 PAY  16 

    0x40e62d81,// 54 PAY  17 

    0xb74a9ad3,// 55 PAY  18 

    0x6b98bebc,// 56 PAY  19 

    0x54f1c59c,// 57 PAY  20 

    0xa4754fba,// 58 PAY  21 

    0x503c836c,// 59 PAY  22 

    0xd4677536,// 60 PAY  23 

    0xaf873c05,// 61 PAY  24 

    0x1258cdf5,// 62 PAY  25 

    0x0836b495,// 63 PAY  26 

    0x1c4c874b,// 64 PAY  27 

    0x9bb01696,// 65 PAY  28 

    0x74b4c2bd,// 66 PAY  29 

    0x3602ed03,// 67 PAY  30 

    0xb764d3a7,// 68 PAY  31 

    0x362bddbf,// 69 PAY  32 

    0x3c3f1961,// 70 PAY  33 

    0x10eec89d,// 71 PAY  34 

    0xff60380f,// 72 PAY  35 

    0x76a32d58,// 73 PAY  36 

    0x70717367,// 74 PAY  37 

    0xceb2ed54,// 75 PAY  38 

    0x318dc4c8,// 76 PAY  39 

    0xa23aa1f6,// 77 PAY  40 

    0x4fa683a3,// 78 PAY  41 

    0x504b1f01,// 79 PAY  42 

    0x91d454dd,// 80 PAY  43 

    0x413f2df0,// 81 PAY  44 

    0x57ec28c2,// 82 PAY  45 

    0x2b806b96,// 83 PAY  46 

    0x0a6b327a,// 84 PAY  47 

    0x264d75d3,// 85 PAY  48 

    0xad3ab59e,// 86 PAY  49 

    0x7fdc19d9,// 87 PAY  50 

    0x228c22b8,// 88 PAY  51 

    0xd9875fd2,// 89 PAY  52 

    0x42a9ada7,// 90 PAY  53 

    0x4d485edf,// 91 PAY  54 

    0x5f600df8,// 92 PAY  55 

    0x6ef97e41,// 93 PAY  56 

    0x32621879,// 94 PAY  57 

    0xd718f099,// 95 PAY  58 

    0x54c4e205,// 96 PAY  59 

    0xcc37bc67,// 97 PAY  60 

    0x51eb9a28,// 98 PAY  61 

    0x60052a84,// 99 PAY  62 

    0xf23b16c9,// 100 PAY  63 

    0x8181c92c,// 101 PAY  64 

    0x423c6460,// 102 PAY  65 

    0xc20e0cee,// 103 PAY  66 

    0xfa96538d,// 104 PAY  67 

    0x3bc45fe5,// 105 PAY  68 

    0x6c3a42ab,// 106 PAY  69 

    0xf8abd54c,// 107 PAY  70 

    0x2cf6eedb,// 108 PAY  71 

    0xd4f381e4,// 109 PAY  72 

    0x9e6f48ff,// 110 PAY  73 

    0xdce6af13,// 111 PAY  74 

    0x06df2757,// 112 PAY  75 

    0xa9e6ea34,// 113 PAY  76 

    0xa0dafffb,// 114 PAY  77 

    0xe901b5b2,// 115 PAY  78 

    0x6e9417a3,// 116 PAY  79 

    0xed3f6ddc,// 117 PAY  80 

    0xa7ceebe4,// 118 PAY  81 

    0xbc0abd11,// 119 PAY  82 

    0x43498bdf,// 120 PAY  83 

    0x2eee88c3,// 121 PAY  84 

    0x87089588,// 122 PAY  85 

    0x78dbab9c,// 123 PAY  86 

    0x76e46ee5,// 124 PAY  87 

    0xc5156c0f,// 125 PAY  88 

    0x189b3dd9,// 126 PAY  89 

    0x5da610ef,// 127 PAY  90 

    0xeb9ee7dc,// 128 PAY  91 

    0x87144ead,// 129 PAY  92 

    0x266aefe6,// 130 PAY  93 

    0xa91db10e,// 131 PAY  94 

    0x491ca2e7,// 132 PAY  95 

    0x7a0a3962,// 133 PAY  96 

    0x1cad827a,// 134 PAY  97 

    0x27b1c1d2,// 135 PAY  98 

    0xd890569d,// 136 PAY  99 

    0x287b2494,// 137 PAY 100 

    0x69414c28,// 138 PAY 101 

    0xdc92695b,// 139 PAY 102 

    0x2cb2d138,// 140 PAY 103 

    0x320312b0,// 141 PAY 104 

    0xd9a5fb13,// 142 PAY 105 

    0x5f1f7781,// 143 PAY 106 

    0x165a4c9a,// 144 PAY 107 

    0x01cc65ef,// 145 PAY 108 

    0x27b065fd,// 146 PAY 109 

    0xedc29901,// 147 PAY 110 

    0xf36c8678,// 148 PAY 111 

    0x64aa9eb6,// 149 PAY 112 

    0xfc14e015,// 150 PAY 113 

    0x698a93f2,// 151 PAY 114 

    0x981c1261,// 152 PAY 115 

    0x1ce87baa,// 153 PAY 116 

    0x46f848ad,// 154 PAY 117 

    0xaa4246be,// 155 PAY 118 

    0x91970ecb,// 156 PAY 119 

    0xbbeab6d0,// 157 PAY 120 

    0xd048bcd4,// 158 PAY 121 

    0x036763ca,// 159 PAY 122 

    0x73ead135,// 160 PAY 123 

    0x1e1acde0,// 161 PAY 124 

    0x5aca35d8,// 162 PAY 125 

    0x27f29aec,// 163 PAY 126 

    0x488a4e58,// 164 PAY 127 

    0x5cc51821,// 165 PAY 128 

    0x821767e8,// 166 PAY 129 

    0x9e3953e3,// 167 PAY 130 

    0x5f74da4d,// 168 PAY 131 

    0x76263571,// 169 PAY 132 

    0xbf462c2e,// 170 PAY 133 

    0xe7e6aeea,// 171 PAY 134 

    0x510f1d9a,// 172 PAY 135 

    0xa72d2cb8,// 173 PAY 136 

    0xb7c10be1,// 174 PAY 137 

    0xed91aa2b,// 175 PAY 138 

    0x0404c639,// 176 PAY 139 

    0x07d06c73,// 177 PAY 140 

    0x1cf306aa,// 178 PAY 141 

    0xf33b3c4b,// 179 PAY 142 

    0xce1851fe,// 180 PAY 143 

    0x98044f00,// 181 PAY 144 

    0x8f51c7a5,// 182 PAY 145 

    0xfdf461a8,// 183 PAY 146 

    0x818108f1,// 184 PAY 147 

    0xabf7dd2d,// 185 PAY 148 

    0xb66cbfd2,// 186 PAY 149 

    0x449a5c9d,// 187 PAY 150 

    0x20042617,// 188 PAY 151 

    0xac075975,// 189 PAY 152 

    0x53cdae0e,// 190 PAY 153 

    0xc4bb1c38,// 191 PAY 154 

    0x881e13a2,// 192 PAY 155 

    0xeb850728,// 193 PAY 156 

    0xce7a7577,// 194 PAY 157 

    0xff981773,// 195 PAY 158 

    0x3dd24e80,// 196 PAY 159 

    0x92df9fe7,// 197 PAY 160 

    0xab22d160,// 198 PAY 161 

    0xa4500997,// 199 PAY 162 

    0x93535ef4,// 200 PAY 163 

    0x31b37ca3,// 201 PAY 164 

    0xaf8633d3,// 202 PAY 165 

    0x4fc3bc01,// 203 PAY 166 

    0x9ee538a3,// 204 PAY 167 

    0x1cdded49,// 205 PAY 168 

    0xbec4324a,// 206 PAY 169 

    0xefc80d9c,// 207 PAY 170 

    0x18ae83ed,// 208 PAY 171 

    0x28787a9d,// 209 PAY 172 

    0xd7b657d0,// 210 PAY 173 

    0xc478d5f2,// 211 PAY 174 

    0xc7fb62b4,// 212 PAY 175 

    0xa28637e9,// 213 PAY 176 

    0x8f3a8697,// 214 PAY 177 

    0xd93a961e,// 215 PAY 178 

    0xb5a42805,// 216 PAY 179 

    0x280c86ca,// 217 PAY 180 

    0xa7266e46,// 218 PAY 181 

    0x1776583e,// 219 PAY 182 

    0x25c59176,// 220 PAY 183 

    0x019d2c66,// 221 PAY 184 

    0x32bcccd7,// 222 PAY 185 

    0x5a9d476b,// 223 PAY 186 

    0x2cd1ad5c,// 224 PAY 187 

    0x2b68c133,// 225 PAY 188 

    0x3bfa1621,// 226 PAY 189 

    0xce15e4e0,// 227 PAY 190 

    0x6be8d0b1,// 228 PAY 191 

    0x5ebde453,// 229 PAY 192 

    0x26d6862b,// 230 PAY 193 

    0x8e482d01,// 231 PAY 194 

    0x0bb86632,// 232 PAY 195 

    0x7f273560,// 233 PAY 196 

    0xfc61f6f1,// 234 PAY 197 

    0x208c9763,// 235 PAY 198 

    0x31d09101,// 236 PAY 199 

    0xa0279e57,// 237 PAY 200 

    0x84d07cc3,// 238 PAY 201 

    0xbd032732,// 239 PAY 202 

    0xdf350b4e,// 240 PAY 203 

    0xdd366a6e,// 241 PAY 204 

    0x0d7f6761,// 242 PAY 205 

    0xff415f35,// 243 PAY 206 

    0x740731d9,// 244 PAY 207 

    0x8b7e0607,// 245 PAY 208 

    0xcb12cdfc,// 246 PAY 209 

    0xdc7db7ba,// 247 PAY 210 

    0x3106094c,// 248 PAY 211 

    0xc94e0810,// 249 PAY 212 

    0x326ad469,// 250 PAY 213 

    0x55d22c98,// 251 PAY 214 

    0x545bfea1,// 252 PAY 215 

    0xd8fb8dd1,// 253 PAY 216 

    0x0c4f1cd8,// 254 PAY 217 

    0x6ae742eb,// 255 PAY 218 

    0x08e43677,// 256 PAY 219 

    0xb8d90ad6,// 257 PAY 220 

    0xd40d8ff9,// 258 PAY 221 

    0xf50df376,// 259 PAY 222 

    0x61bf5345,// 260 PAY 223 

    0xf6a16c12,// 261 PAY 224 

    0xba9f6d9b,// 262 PAY 225 

    0x0c721e6f,// 263 PAY 226 

    0xe4c77e4b,// 264 PAY 227 

    0xb7085da7,// 265 PAY 228 

    0x7ebf5a04,// 266 PAY 229 

    0x9f29911d,// 267 PAY 230 

    0x21c9d2fe,// 268 PAY 231 

    0xd722a351,// 269 PAY 232 

    0x4fc2ac4b,// 270 PAY 233 

    0x40434800,// 271 PAY 234 

/// STA is 1 words. 

/// STA num_pkts       : 111 

/// STA pkt_idx        : 124 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x4d 

    0x01f04d6f // 272 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt75_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x02 

/// ECH pdu_tag        : 0x00 

    0x00020000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv insert_icv check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x5 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x00000011,// 3 SCX   1 

    0x80464898,// 4 SCX   2 

    0x00003582,// 5 SCX   3 

    0xe8295049,// 6 SCX   4 

    0x7667f126,// 7 SCX   5 

    0x1906c421,// 8 SCX   6 

    0xccc90b69,// 9 SCX   7 

    0xa3b7f3f4,// 10 SCX   8 

    0xd408c780,// 11 SCX   9 

    0x30cb3452,// 12 SCX  10 

    0x3b17cce8,// 13 SCX  11 

    0x92b1b8f2,// 14 SCX  12 

    0xf34968ef,// 15 SCX  13 

    0x7111cb4b,// 16 SCX  14 

    0x1008de2b,// 17 SCX  15 

    0xfa3a572b,// 18 SCX  16 

    0x70791114,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1523 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 360 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 360 

/// BFD lencrypto      : 24 

/// BFD ofstcrypto     : 316 

/// BFD (ofst+len)cry  : 340 

/// BFD ofstiv         : 252 

/// BFD ofsticv        : 752 

    0x00000168,// 20 BFD   1 

    0x013c0018,// 21 BFD   2 

    0x02f000fc,// 22 BFD   3 

/// MFM is 10 words. 

/// MFM vldnibs        : 49 

    0x49007098,// 23 MFM   1 

    0x18284c09,// 24 MFM   2 

    0xfe37f55a,// 25 MFM   3 

    0xa79afab5,// 26 MFM   4 

    0x754f92ca,// 27 MFM   5 

    0x9497f066,// 28 MFM   6 

    0x9542fef3,// 29 MFM   7 

    0xd2c3bd33,// 30 MFM   8 

    0xde4e00fe,// 31 MFM   9 

    0x92b2f000,// 32 MFM  10 

/// BDA is 382 words. 

/// BDA size     is 1523 (0x5f3) 

/// BDA id       is 0xec5d 

    0x05f3ec5d,// 33 BDA   1 

/// PAY Generic Data size   : 1523 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x84fdda40,// 34 PAY   1 

    0x20bdb30f,// 35 PAY   2 

    0xb3951a39,// 36 PAY   3 

    0x9574977c,// 37 PAY   4 

    0x1f7d6fe5,// 38 PAY   5 

    0x80be8f39,// 39 PAY   6 

    0x299cc98e,// 40 PAY   7 

    0xa1eb7d34,// 41 PAY   8 

    0xa11204be,// 42 PAY   9 

    0xe80170fe,// 43 PAY  10 

    0x27f13fd0,// 44 PAY  11 

    0x1fef0790,// 45 PAY  12 

    0xe05e0c39,// 46 PAY  13 

    0x02ea676a,// 47 PAY  14 

    0x4738c840,// 48 PAY  15 

    0x02a0df77,// 49 PAY  16 

    0x0a3c4a26,// 50 PAY  17 

    0xabc613c8,// 51 PAY  18 

    0xbf288444,// 52 PAY  19 

    0xd2a14993,// 53 PAY  20 

    0x9dd8c97e,// 54 PAY  21 

    0x9961bab8,// 55 PAY  22 

    0x51388a07,// 56 PAY  23 

    0xb77b5603,// 57 PAY  24 

    0xaac47a40,// 58 PAY  25 

    0x62e3a73a,// 59 PAY  26 

    0xbf1567ce,// 60 PAY  27 

    0x8cb249fb,// 61 PAY  28 

    0x5cc3df0f,// 62 PAY  29 

    0x087bc034,// 63 PAY  30 

    0x60f3fe3b,// 64 PAY  31 

    0x6f014bbb,// 65 PAY  32 

    0x968d6818,// 66 PAY  33 

    0xf8865bb2,// 67 PAY  34 

    0x6ab26356,// 68 PAY  35 

    0xc1a51bd9,// 69 PAY  36 

    0xf2aabf73,// 70 PAY  37 

    0x51c0d950,// 71 PAY  38 

    0x425b3d1d,// 72 PAY  39 

    0x70458f55,// 73 PAY  40 

    0xfa0fc01e,// 74 PAY  41 

    0x8a2c022e,// 75 PAY  42 

    0x8f97d757,// 76 PAY  43 

    0xe94b50bd,// 77 PAY  44 

    0x56e33aa1,// 78 PAY  45 

    0x99b184d7,// 79 PAY  46 

    0xfb1224aa,// 80 PAY  47 

    0xdf4148e1,// 81 PAY  48 

    0x4b14150a,// 82 PAY  49 

    0x5ce722e9,// 83 PAY  50 

    0x570ee6a3,// 84 PAY  51 

    0x18633896,// 85 PAY  52 

    0xac943f29,// 86 PAY  53 

    0xc46f0abd,// 87 PAY  54 

    0x109b1ff3,// 88 PAY  55 

    0xbd7019d2,// 89 PAY  56 

    0xb13ed464,// 90 PAY  57 

    0x12e3340c,// 91 PAY  58 

    0xdb9b17a9,// 92 PAY  59 

    0x3f31927d,// 93 PAY  60 

    0x24a56c90,// 94 PAY  61 

    0x1de5f8d9,// 95 PAY  62 

    0x0108920b,// 96 PAY  63 

    0xfbfbcc6b,// 97 PAY  64 

    0xb847da45,// 98 PAY  65 

    0xc2612b49,// 99 PAY  66 

    0xdd6617a8,// 100 PAY  67 

    0xc2c5995c,// 101 PAY  68 

    0x63754d97,// 102 PAY  69 

    0x0acdfbe4,// 103 PAY  70 

    0x10c44c65,// 104 PAY  71 

    0x0481bf85,// 105 PAY  72 

    0xfdd3aaf0,// 106 PAY  73 

    0x2d3a31f7,// 107 PAY  74 

    0xd3cfaf91,// 108 PAY  75 

    0xc7e0466c,// 109 PAY  76 

    0xeee3d9bd,// 110 PAY  77 

    0x2ac0f10a,// 111 PAY  78 

    0x3cf2efe7,// 112 PAY  79 

    0x13796ae1,// 113 PAY  80 

    0x106d7753,// 114 PAY  81 

    0x489dabb3,// 115 PAY  82 

    0xb1ae65ff,// 116 PAY  83 

    0xed6da4d2,// 117 PAY  84 

    0x1be47ef5,// 118 PAY  85 

    0x9fe1639b,// 119 PAY  86 

    0x32ea71fe,// 120 PAY  87 

    0xe5e66d35,// 121 PAY  88 

    0xf90d342a,// 122 PAY  89 

    0xf5a51c8c,// 123 PAY  90 

    0x6d52c87d,// 124 PAY  91 

    0xd2398e8d,// 125 PAY  92 

    0x4bb12088,// 126 PAY  93 

    0x36b0b54d,// 127 PAY  94 

    0x7afe18d6,// 128 PAY  95 

    0x505303e9,// 129 PAY  96 

    0xaee69759,// 130 PAY  97 

    0x8eda9d70,// 131 PAY  98 

    0x2d6b7537,// 132 PAY  99 

    0x1f9043f7,// 133 PAY 100 

    0xa8fd84d9,// 134 PAY 101 

    0x4c409742,// 135 PAY 102 

    0xfbeababb,// 136 PAY 103 

    0x5725e4e8,// 137 PAY 104 

    0x0abef7f2,// 138 PAY 105 

    0xe8716edb,// 139 PAY 106 

    0xac50bba7,// 140 PAY 107 

    0xf86c846c,// 141 PAY 108 

    0x815a61d7,// 142 PAY 109 

    0x9912b7f9,// 143 PAY 110 

    0x8925d10a,// 144 PAY 111 

    0x8d64502e,// 145 PAY 112 

    0x7bf2bdb5,// 146 PAY 113 

    0x967fbaad,// 147 PAY 114 

    0xb147caa8,// 148 PAY 115 

    0x13493382,// 149 PAY 116 

    0xeb8410d1,// 150 PAY 117 

    0x4573a155,// 151 PAY 118 

    0x8c4290f0,// 152 PAY 119 

    0xe0a6b1b0,// 153 PAY 120 

    0x513fbd4e,// 154 PAY 121 

    0xf02beecb,// 155 PAY 122 

    0x15d653cc,// 156 PAY 123 

    0xcbb21213,// 157 PAY 124 

    0xde38b5d3,// 158 PAY 125 

    0xf8f49530,// 159 PAY 126 

    0x499ab83f,// 160 PAY 127 

    0x7e27bb52,// 161 PAY 128 

    0xd86e084b,// 162 PAY 129 

    0x02950e22,// 163 PAY 130 

    0x523e3fc7,// 164 PAY 131 

    0xf8dc55d3,// 165 PAY 132 

    0xa3de63f2,// 166 PAY 133 

    0x91163767,// 167 PAY 134 

    0xf3ac1fe2,// 168 PAY 135 

    0xd3d014f7,// 169 PAY 136 

    0xa05ab35d,// 170 PAY 137 

    0x1c4e90c0,// 171 PAY 138 

    0x4c7b550f,// 172 PAY 139 

    0xbac09ec9,// 173 PAY 140 

    0x83a6e934,// 174 PAY 141 

    0x1f9a48e5,// 175 PAY 142 

    0xfcbfc784,// 176 PAY 143 

    0x808d58ad,// 177 PAY 144 

    0x39bd5c37,// 178 PAY 145 

    0xa590c28b,// 179 PAY 146 

    0x6b3e8175,// 180 PAY 147 

    0xe897c723,// 181 PAY 148 

    0x30d2480c,// 182 PAY 149 

    0x3e2c7b56,// 183 PAY 150 

    0xe6085f0f,// 184 PAY 151 

    0x760a3e29,// 185 PAY 152 

    0xa1810b6e,// 186 PAY 153 

    0xa9c330d2,// 187 PAY 154 

    0xfc2c6339,// 188 PAY 155 

    0x2f724d86,// 189 PAY 156 

    0x8d747bfb,// 190 PAY 157 

    0xb4051c85,// 191 PAY 158 

    0xf184adf1,// 192 PAY 159 

    0x180d4dc0,// 193 PAY 160 

    0x99218fe3,// 194 PAY 161 

    0x515e3c97,// 195 PAY 162 

    0xb5cdfe7d,// 196 PAY 163 

    0xe79a4d2d,// 197 PAY 164 

    0xd0d4a626,// 198 PAY 165 

    0xbfa218a9,// 199 PAY 166 

    0x442bdb78,// 200 PAY 167 

    0x09d1db9f,// 201 PAY 168 

    0xb619fc79,// 202 PAY 169 

    0xc2f10d96,// 203 PAY 170 

    0x622f6926,// 204 PAY 171 

    0xcdf81522,// 205 PAY 172 

    0xf7fb8699,// 206 PAY 173 

    0x66efadb3,// 207 PAY 174 

    0xd94080da,// 208 PAY 175 

    0x57161937,// 209 PAY 176 

    0x167a62d6,// 210 PAY 177 

    0xe10ab55e,// 211 PAY 178 

    0x574abc09,// 212 PAY 179 

    0xc30c2a1d,// 213 PAY 180 

    0x079a3e06,// 214 PAY 181 

    0xe2aaa3e9,// 215 PAY 182 

    0x2ebf09f9,// 216 PAY 183 

    0xda0662c8,// 217 PAY 184 

    0xac4f5540,// 218 PAY 185 

    0xcd628647,// 219 PAY 186 

    0xdca5d8e1,// 220 PAY 187 

    0xe8e2186d,// 221 PAY 188 

    0xd1c555ec,// 222 PAY 189 

    0x8b396e2a,// 223 PAY 190 

    0x880cdf37,// 224 PAY 191 

    0x8d9f8eda,// 225 PAY 192 

    0x1a8d4b4f,// 226 PAY 193 

    0xcdec1baf,// 227 PAY 194 

    0xddf23f46,// 228 PAY 195 

    0xde0be85a,// 229 PAY 196 

    0x3cb34812,// 230 PAY 197 

    0xe1c30fdb,// 231 PAY 198 

    0x476a27bc,// 232 PAY 199 

    0x447ba0e4,// 233 PAY 200 

    0x46dd3c7e,// 234 PAY 201 

    0x825916cb,// 235 PAY 202 

    0xed18db2b,// 236 PAY 203 

    0x171e175b,// 237 PAY 204 

    0x765dd56b,// 238 PAY 205 

    0x8f39822a,// 239 PAY 206 

    0xb482c2f5,// 240 PAY 207 

    0x8efbc7d1,// 241 PAY 208 

    0x1716626d,// 242 PAY 209 

    0x97396074,// 243 PAY 210 

    0x098ba85c,// 244 PAY 211 

    0x1758e231,// 245 PAY 212 

    0xa2942edc,// 246 PAY 213 

    0x088ffc00,// 247 PAY 214 

    0x68a64093,// 248 PAY 215 

    0x9411f84c,// 249 PAY 216 

    0x3f99a3af,// 250 PAY 217 

    0x96c46df2,// 251 PAY 218 

    0x42246c37,// 252 PAY 219 

    0xfed23de3,// 253 PAY 220 

    0x9fa1a7cb,// 254 PAY 221 

    0xa2199d34,// 255 PAY 222 

    0xbf76e2e8,// 256 PAY 223 

    0x428f1e69,// 257 PAY 224 

    0x91b2a809,// 258 PAY 225 

    0x2cf92a15,// 259 PAY 226 

    0xcbafe4ae,// 260 PAY 227 

    0xc8996674,// 261 PAY 228 

    0x34afc052,// 262 PAY 229 

    0xefef8a10,// 263 PAY 230 

    0xed3c405d,// 264 PAY 231 

    0x23eaca19,// 265 PAY 232 

    0xa5ef9c7e,// 266 PAY 233 

    0x9fe10d09,// 267 PAY 234 

    0x2e4c8f44,// 268 PAY 235 

    0x845e6a32,// 269 PAY 236 

    0x23b36b2b,// 270 PAY 237 

    0x34978cb9,// 271 PAY 238 

    0x47ed8be4,// 272 PAY 239 

    0x0ca55f53,// 273 PAY 240 

    0x13460391,// 274 PAY 241 

    0xe257145d,// 275 PAY 242 

    0x3034a7e3,// 276 PAY 243 

    0xb42026b0,// 277 PAY 244 

    0x514ef3a6,// 278 PAY 245 

    0x3d6c22f1,// 279 PAY 246 

    0x8208e2ce,// 280 PAY 247 

    0x083595ec,// 281 PAY 248 

    0xcb2f7c82,// 282 PAY 249 

    0x364ff57f,// 283 PAY 250 

    0xe1078ddd,// 284 PAY 251 

    0x1f359af7,// 285 PAY 252 

    0x4a1740d9,// 286 PAY 253 

    0x885493ba,// 287 PAY 254 

    0xa022d889,// 288 PAY 255 

    0xc15a3818,// 289 PAY 256 

    0x98fcab8c,// 290 PAY 257 

    0x72c722e0,// 291 PAY 258 

    0xf06cefa6,// 292 PAY 259 

    0x8f50159c,// 293 PAY 260 

    0x4632f114,// 294 PAY 261 

    0x95712a17,// 295 PAY 262 

    0xd39fa6b1,// 296 PAY 263 

    0x9785537b,// 297 PAY 264 

    0xb3d45582,// 298 PAY 265 

    0xd9835292,// 299 PAY 266 

    0x1999705c,// 300 PAY 267 

    0xa01fc4df,// 301 PAY 268 

    0x5b027eb0,// 302 PAY 269 

    0x2e24cd76,// 303 PAY 270 

    0xd8486380,// 304 PAY 271 

    0x1ee435f2,// 305 PAY 272 

    0xed306bc4,// 306 PAY 273 

    0x804ed16a,// 307 PAY 274 

    0x3c7c3f01,// 308 PAY 275 

    0xb1c6d7c4,// 309 PAY 276 

    0x1b18a79a,// 310 PAY 277 

    0x2569869e,// 311 PAY 278 

    0xedba49a2,// 312 PAY 279 

    0x581b928c,// 313 PAY 280 

    0xcfa9f29e,// 314 PAY 281 

    0xbcf3351f,// 315 PAY 282 

    0x4ca4b7e5,// 316 PAY 283 

    0xd9455906,// 317 PAY 284 

    0x65687bfe,// 318 PAY 285 

    0x764edbdc,// 319 PAY 286 

    0x9669dc9b,// 320 PAY 287 

    0xec84aebd,// 321 PAY 288 

    0xe1f9182a,// 322 PAY 289 

    0x2923c4aa,// 323 PAY 290 

    0x871eb7c1,// 324 PAY 291 

    0x9f41f983,// 325 PAY 292 

    0xcd05afad,// 326 PAY 293 

    0x39d5762b,// 327 PAY 294 

    0xa32eb4cc,// 328 PAY 295 

    0x6c2e4714,// 329 PAY 296 

    0xbd3cba54,// 330 PAY 297 

    0xb963613a,// 331 PAY 298 

    0x75203433,// 332 PAY 299 

    0x113da8a7,// 333 PAY 300 

    0x62a94074,// 334 PAY 301 

    0x9acbfd53,// 335 PAY 302 

    0x0b692a4e,// 336 PAY 303 

    0xe7f3ac18,// 337 PAY 304 

    0x74be4bee,// 338 PAY 305 

    0xf707c4d1,// 339 PAY 306 

    0x8805c470,// 340 PAY 307 

    0x4f37c9be,// 341 PAY 308 

    0x9f8239a2,// 342 PAY 309 

    0x74de69de,// 343 PAY 310 

    0x2cf815c8,// 344 PAY 311 

    0x20dbb7cc,// 345 PAY 312 

    0xd9218a34,// 346 PAY 313 

    0x79fee165,// 347 PAY 314 

    0xc96c537e,// 348 PAY 315 

    0xe4f61c1a,// 349 PAY 316 

    0xee5a4340,// 350 PAY 317 

    0xd2339bec,// 351 PAY 318 

    0x2138ab1e,// 352 PAY 319 

    0x15d88abd,// 353 PAY 320 

    0x0451eaf3,// 354 PAY 321 

    0x591772b0,// 355 PAY 322 

    0xaf5e50c4,// 356 PAY 323 

    0x44b9b0e8,// 357 PAY 324 

    0x2c979226,// 358 PAY 325 

    0x40cb8359,// 359 PAY 326 

    0x62fdae52,// 360 PAY 327 

    0x2b808aa6,// 361 PAY 328 

    0x44817ea1,// 362 PAY 329 

    0x8dcc98a9,// 363 PAY 330 

    0x37bdecc8,// 364 PAY 331 

    0x286f31a4,// 365 PAY 332 

    0xbad90edd,// 366 PAY 333 

    0x2e6dfd7f,// 367 PAY 334 

    0xc345592b,// 368 PAY 335 

    0x25b987f2,// 369 PAY 336 

    0x3a293d68,// 370 PAY 337 

    0x83e9f655,// 371 PAY 338 

    0x347cecb9,// 372 PAY 339 

    0xf0aa4076,// 373 PAY 340 

    0xa3fd2590,// 374 PAY 341 

    0x78f8bb30,// 375 PAY 342 

    0x9c1acba1,// 376 PAY 343 

    0x23c846e7,// 377 PAY 344 

    0x684e704b,// 378 PAY 345 

    0x8164639e,// 379 PAY 346 

    0x6fb2989a,// 380 PAY 347 

    0x5ae00fa0,// 381 PAY 348 

    0xd68f8d8e,// 382 PAY 349 

    0x4fb3f92e,// 383 PAY 350 

    0x6e232355,// 384 PAY 351 

    0xb33936da,// 385 PAY 352 

    0x1cadf46d,// 386 PAY 353 

    0xb92f67d9,// 387 PAY 354 

    0x0d58f2c7,// 388 PAY 355 

    0x5b481b01,// 389 PAY 356 

    0x989762ff,// 390 PAY 357 

    0x8ee550f2,// 391 PAY 358 

    0xb0e91581,// 392 PAY 359 

    0xa56f2c56,// 393 PAY 360 

    0x3c957b1b,// 394 PAY 361 

    0x7473d6ae,// 395 PAY 362 

    0x261eaf06,// 396 PAY 363 

    0xd34850e6,// 397 PAY 364 

    0x31444d71,// 398 PAY 365 

    0x62649544,// 399 PAY 366 

    0x3caf2bbd,// 400 PAY 367 

    0x243e5ceb,// 401 PAY 368 

    0x5cd118cb,// 402 PAY 369 

    0x16489fb9,// 403 PAY 370 

    0x0fb3080a,// 404 PAY 371 

    0x9a3de689,// 405 PAY 372 

    0x802e6100,// 406 PAY 373 

    0xce4393a4,// 407 PAY 374 

    0x7abe2e7f,// 408 PAY 375 

    0xe68ac8a4,// 409 PAY 376 

    0xbf4ca502,// 410 PAY 377 

    0x97b083be,// 411 PAY 378 

    0x43aaa914,// 412 PAY 379 

    0xbeab49bf,// 413 PAY 380 

    0xdeab6000,// 414 PAY 381 

/// STA is 1 words. 

/// STA num_pkts       : 147 

/// STA pkt_idx        : 180 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x96 

    0x02d09693 // 415 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt76_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x05 

/// ECH pdu_tag        : 0x00 

    0x00050000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x5 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0800000f,// 3 SCX   1 

    0x8040483a,// 4 SCX   2 

    0x00001500,// 5 SCX   3 

    0x014c8dc1,// 6 SCX   4 

    0x855a7b27,// 7 SCX   5 

    0xd210aede,// 8 SCX   6 

    0x8805dc62,// 9 SCX   7 

    0xfe73a041,// 10 SCX   8 

    0x96bd2bbc,// 11 SCX   9 

    0x7547e3d5,// 12 SCX  10 

    0x83ef82cb,// 13 SCX  11 

    0x747f81d8,// 14 SCX  12 

    0xc2b3ad7a,// 15 SCX  13 

    0xdc6c58c3,// 16 SCX  14 

    0xe3e7d8af,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 1654 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 396 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 396 

/// BFD lencrypto      : 216 

/// BFD ofstcrypto     : 32 

/// BFD (ofst+len)cry  : 248 

/// BFD ofstiv         : 4 

/// BFD ofsticv        : 688 

    0x0000018c,// 18 BFD   1 

    0x002000d8,// 19 BFD   2 

    0x02b00004,// 20 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : f 

    0x0f009be2,// 21 MFM   1 

    0x0cc5bef4,// 22 MFM   2 

    0xaf300000,// 23 MFM   3 

/// BDA is 415 words. 

/// BDA size     is 1654 (0x676) 

/// BDA id       is 0xd76a 

    0x0676d76a,// 24 BDA   1 

/// PAY Generic Data size   : 1654 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x44bf5494,// 25 PAY   1 

    0x0b9c32be,// 26 PAY   2 

    0x4ae85f49,// 27 PAY   3 

    0x0423034f,// 28 PAY   4 

    0xbcc4fc99,// 29 PAY   5 

    0xccdcc124,// 30 PAY   6 

    0xe4f08bb7,// 31 PAY   7 

    0xf0daccf4,// 32 PAY   8 

    0x3b4952dd,// 33 PAY   9 

    0x8a6f9ef3,// 34 PAY  10 

    0x951f9996,// 35 PAY  11 

    0x7c9a990a,// 36 PAY  12 

    0xa498d895,// 37 PAY  13 

    0xf0078a1d,// 38 PAY  14 

    0x16cc7e7c,// 39 PAY  15 

    0xafa10558,// 40 PAY  16 

    0x0b2fbb72,// 41 PAY  17 

    0xd0caee74,// 42 PAY  18 

    0x33d6cc73,// 43 PAY  19 

    0xdc2a7f94,// 44 PAY  20 

    0xacb1c540,// 45 PAY  21 

    0x9fcbbbe5,// 46 PAY  22 

    0xc3914b88,// 47 PAY  23 

    0xa48bd242,// 48 PAY  24 

    0x9738d54a,// 49 PAY  25 

    0xbd03e56f,// 50 PAY  26 

    0x99483d01,// 51 PAY  27 

    0xc9b978fe,// 52 PAY  28 

    0x128b39f0,// 53 PAY  29 

    0x50fe391f,// 54 PAY  30 

    0x258115fd,// 55 PAY  31 

    0xe7353c22,// 56 PAY  32 

    0x01f23e72,// 57 PAY  33 

    0x5cfe36ee,// 58 PAY  34 

    0xddf55e87,// 59 PAY  35 

    0x92a8438b,// 60 PAY  36 

    0x55cdf369,// 61 PAY  37 

    0xe851fb55,// 62 PAY  38 

    0xb2faa984,// 63 PAY  39 

    0xc38f37b7,// 64 PAY  40 

    0x12d136c8,// 65 PAY  41 

    0xc7108e9b,// 66 PAY  42 

    0x3cfb3423,// 67 PAY  43 

    0x60c333b1,// 68 PAY  44 

    0x4051f37a,// 69 PAY  45 

    0xbb52b4e2,// 70 PAY  46 

    0x8f75241e,// 71 PAY  47 

    0xd95758f1,// 72 PAY  48 

    0x94e110eb,// 73 PAY  49 

    0x6801469b,// 74 PAY  50 

    0x0cd606d3,// 75 PAY  51 

    0x925b20d0,// 76 PAY  52 

    0xe039f433,// 77 PAY  53 

    0x4d22c4a1,// 78 PAY  54 

    0xaf01e2e5,// 79 PAY  55 

    0xea773398,// 80 PAY  56 

    0x7809c120,// 81 PAY  57 

    0x6417820c,// 82 PAY  58 

    0xe46c32ab,// 83 PAY  59 

    0x9de2e954,// 84 PAY  60 

    0x89f7f982,// 85 PAY  61 

    0xf8b326d8,// 86 PAY  62 

    0x690b9f67,// 87 PAY  63 

    0x96f6c2b3,// 88 PAY  64 

    0xdc7cc3f8,// 89 PAY  65 

    0xde71f785,// 90 PAY  66 

    0x67640147,// 91 PAY  67 

    0xa782817f,// 92 PAY  68 

    0x8c3b1ea1,// 93 PAY  69 

    0x153c4dd3,// 94 PAY  70 

    0x98799afa,// 95 PAY  71 

    0xced99272,// 96 PAY  72 

    0x3fef0fd3,// 97 PAY  73 

    0x06067513,// 98 PAY  74 

    0x1e45d32c,// 99 PAY  75 

    0xd00bc1d0,// 100 PAY  76 

    0x77a37f85,// 101 PAY  77 

    0x41d138fa,// 102 PAY  78 

    0xcef437a6,// 103 PAY  79 

    0x19dbbc2c,// 104 PAY  80 

    0x98e4156a,// 105 PAY  81 

    0x2e4bb72b,// 106 PAY  82 

    0xcf4d4a70,// 107 PAY  83 

    0xaedbe741,// 108 PAY  84 

    0x544c6254,// 109 PAY  85 

    0x9c67e2f4,// 110 PAY  86 

    0x5535641d,// 111 PAY  87 

    0x2594b87d,// 112 PAY  88 

    0x5ce8cb2e,// 113 PAY  89 

    0x09eb1073,// 114 PAY  90 

    0x84179727,// 115 PAY  91 

    0xa8a05491,// 116 PAY  92 

    0x2e26c25d,// 117 PAY  93 

    0x30eb60b7,// 118 PAY  94 

    0xe1fe83e8,// 119 PAY  95 

    0xeea12ae5,// 120 PAY  96 

    0x4ba2f204,// 121 PAY  97 

    0xcf46af54,// 122 PAY  98 

    0x7b673d7f,// 123 PAY  99 

    0x34e5ca05,// 124 PAY 100 

    0xb218a4e7,// 125 PAY 101 

    0x96f2d1a6,// 126 PAY 102 

    0xc848785f,// 127 PAY 103 

    0x557749ac,// 128 PAY 104 

    0xa4f42d5c,// 129 PAY 105 

    0xff464575,// 130 PAY 106 

    0x34ceadcb,// 131 PAY 107 

    0x3f791e63,// 132 PAY 108 

    0xb7deac31,// 133 PAY 109 

    0x4dda39d9,// 134 PAY 110 

    0x68411e3c,// 135 PAY 111 

    0xf271b756,// 136 PAY 112 

    0x81eb8ca0,// 137 PAY 113 

    0xbfdd9c48,// 138 PAY 114 

    0x921e1c2f,// 139 PAY 115 

    0xa72ab4dd,// 140 PAY 116 

    0x5f0f0d35,// 141 PAY 117 

    0xf45d6678,// 142 PAY 118 

    0x38d25461,// 143 PAY 119 

    0x9c80b547,// 144 PAY 120 

    0x40652c6b,// 145 PAY 121 

    0x41975b31,// 146 PAY 122 

    0x3f86bafb,// 147 PAY 123 

    0x61785b62,// 148 PAY 124 

    0x90c5bc51,// 149 PAY 125 

    0x63cf25a3,// 150 PAY 126 

    0xb7c6a057,// 151 PAY 127 

    0x4c7598fc,// 152 PAY 128 

    0x257fdd9e,// 153 PAY 129 

    0x030f4e13,// 154 PAY 130 

    0x003581fb,// 155 PAY 131 

    0x49ac8389,// 156 PAY 132 

    0x55fa427d,// 157 PAY 133 

    0xb4ec7ba8,// 158 PAY 134 

    0xb7f6f4f5,// 159 PAY 135 

    0x4f21a5b0,// 160 PAY 136 

    0xe53b4a94,// 161 PAY 137 

    0x87ac8444,// 162 PAY 138 

    0xefce69f7,// 163 PAY 139 

    0xcb3edfed,// 164 PAY 140 

    0xab489494,// 165 PAY 141 

    0xd575dc07,// 166 PAY 142 

    0x60360898,// 167 PAY 143 

    0x197eea18,// 168 PAY 144 

    0xe49ce216,// 169 PAY 145 

    0xa3eec54f,// 170 PAY 146 

    0x3fe70785,// 171 PAY 147 

    0x8af5fd68,// 172 PAY 148 

    0x2dfff093,// 173 PAY 149 

    0x1886bb99,// 174 PAY 150 

    0xc5cbbba2,// 175 PAY 151 

    0xa92c68c5,// 176 PAY 152 

    0xc4436048,// 177 PAY 153 

    0xa4637da6,// 178 PAY 154 

    0x9e316e59,// 179 PAY 155 

    0x05997632,// 180 PAY 156 

    0x8fb7c7df,// 181 PAY 157 

    0x8299ef87,// 182 PAY 158 

    0x5760ea36,// 183 PAY 159 

    0x655fa70b,// 184 PAY 160 

    0x8ba83105,// 185 PAY 161 

    0x4f3a60a1,// 186 PAY 162 

    0xd4aab2eb,// 187 PAY 163 

    0x1bf553fc,// 188 PAY 164 

    0x757fc414,// 189 PAY 165 

    0x2f3cec51,// 190 PAY 166 

    0x0fecae9a,// 191 PAY 167 

    0x60b66947,// 192 PAY 168 

    0x2267959a,// 193 PAY 169 

    0x3eecf956,// 194 PAY 170 

    0xbc926fa1,// 195 PAY 171 

    0xe3d37da7,// 196 PAY 172 

    0xdedb005f,// 197 PAY 173 

    0x816dec6a,// 198 PAY 174 

    0x5ca6a48d,// 199 PAY 175 

    0xa1ba5e5c,// 200 PAY 176 

    0xeb811ffd,// 201 PAY 177 

    0x849eb8c2,// 202 PAY 178 

    0x9261c6c6,// 203 PAY 179 

    0x01c379dc,// 204 PAY 180 

    0xad3048b1,// 205 PAY 181 

    0x0d6a0fa4,// 206 PAY 182 

    0xeba60c10,// 207 PAY 183 

    0x764ebdba,// 208 PAY 184 

    0xec3cb7cc,// 209 PAY 185 

    0x5c896468,// 210 PAY 186 

    0x1ccd07b6,// 211 PAY 187 

    0xfa588fa8,// 212 PAY 188 

    0xb261a581,// 213 PAY 189 

    0xf4d1a90a,// 214 PAY 190 

    0xeece991f,// 215 PAY 191 

    0xf9c54678,// 216 PAY 192 

    0x87d239ee,// 217 PAY 193 

    0xa2430abe,// 218 PAY 194 

    0x22a195f1,// 219 PAY 195 

    0x5c2ddc53,// 220 PAY 196 

    0x597e09e5,// 221 PAY 197 

    0xa5bc0319,// 222 PAY 198 

    0x194cf783,// 223 PAY 199 

    0x09b1d463,// 224 PAY 200 

    0xca956950,// 225 PAY 201 

    0xfcc7bfc3,// 226 PAY 202 

    0x4eac2c02,// 227 PAY 203 

    0x549b2c1b,// 228 PAY 204 

    0x07c11659,// 229 PAY 205 

    0xacf809ce,// 230 PAY 206 

    0x6be8b89a,// 231 PAY 207 

    0x8b1e799e,// 232 PAY 208 

    0x3ae1f2f6,// 233 PAY 209 

    0x7e8f7e12,// 234 PAY 210 

    0x06d9baa2,// 235 PAY 211 

    0x86c914a9,// 236 PAY 212 

    0xb33678b1,// 237 PAY 213 

    0x59298f87,// 238 PAY 214 

    0xa1c56593,// 239 PAY 215 

    0x1bec1270,// 240 PAY 216 

    0x25c44001,// 241 PAY 217 

    0x6f8e81d2,// 242 PAY 218 

    0xce9e2a32,// 243 PAY 219 

    0x35fc45ce,// 244 PAY 220 

    0x43c89c5a,// 245 PAY 221 

    0x3a7c85ce,// 246 PAY 222 

    0xd3db6328,// 247 PAY 223 

    0x4e87e803,// 248 PAY 224 

    0x0ebdda92,// 249 PAY 225 

    0x03a33cfc,// 250 PAY 226 

    0xb832e011,// 251 PAY 227 

    0x0d4c1d7e,// 252 PAY 228 

    0x1e202416,// 253 PAY 229 

    0xc5a4951a,// 254 PAY 230 

    0x584b01a4,// 255 PAY 231 

    0x9c5d70fc,// 256 PAY 232 

    0x486750e5,// 257 PAY 233 

    0xed4ddd57,// 258 PAY 234 

    0x01ab6949,// 259 PAY 235 

    0x123b734b,// 260 PAY 236 

    0xd37a76f5,// 261 PAY 237 

    0x7699881f,// 262 PAY 238 

    0x9df0fde9,// 263 PAY 239 

    0x693a2ecf,// 264 PAY 240 

    0x6c36e477,// 265 PAY 241 

    0x66ff2416,// 266 PAY 242 

    0x2075354b,// 267 PAY 243 

    0x1f51569e,// 268 PAY 244 

    0x088ac978,// 269 PAY 245 

    0xfd508690,// 270 PAY 246 

    0x7b098068,// 271 PAY 247 

    0x53085c4e,// 272 PAY 248 

    0xc09a210a,// 273 PAY 249 

    0x3fd5cf21,// 274 PAY 250 

    0x94414940,// 275 PAY 251 

    0x084dfaed,// 276 PAY 252 

    0x7ade8c5f,// 277 PAY 253 

    0x47ae005f,// 278 PAY 254 

    0x8b08cd18,// 279 PAY 255 

    0xe7747e41,// 280 PAY 256 

    0xc434a1a7,// 281 PAY 257 

    0x4be3b573,// 282 PAY 258 

    0x178a4e8b,// 283 PAY 259 

    0xf04a717d,// 284 PAY 260 

    0x41e2c8a8,// 285 PAY 261 

    0x18782cab,// 286 PAY 262 

    0xc4d1fa5b,// 287 PAY 263 

    0x3c9ccfe6,// 288 PAY 264 

    0xf96be32c,// 289 PAY 265 

    0x94cb32c5,// 290 PAY 266 

    0x914d0a12,// 291 PAY 267 

    0x5e746b05,// 292 PAY 268 

    0xa188f8eb,// 293 PAY 269 

    0xed97b84c,// 294 PAY 270 

    0x7e191d23,// 295 PAY 271 

    0xe01e2df2,// 296 PAY 272 

    0xa1a77f68,// 297 PAY 273 

    0x0852fd48,// 298 PAY 274 

    0xf3523617,// 299 PAY 275 

    0x5108f46f,// 300 PAY 276 

    0x7c5e737e,// 301 PAY 277 

    0x59987233,// 302 PAY 278 

    0x777478a4,// 303 PAY 279 

    0x1034605a,// 304 PAY 280 

    0xb796e67e,// 305 PAY 281 

    0x11ab7e7a,// 306 PAY 282 

    0xb23bda64,// 307 PAY 283 

    0x0d81845d,// 308 PAY 284 

    0x0e54bf65,// 309 PAY 285 

    0x180eddc0,// 310 PAY 286 

    0x4357768e,// 311 PAY 287 

    0x13765849,// 312 PAY 288 

    0x26fd3949,// 313 PAY 289 

    0xd5d30d73,// 314 PAY 290 

    0xac3b2c22,// 315 PAY 291 

    0x253ee495,// 316 PAY 292 

    0xbb7689e4,// 317 PAY 293 

    0xfcfd595d,// 318 PAY 294 

    0xcd1055bc,// 319 PAY 295 

    0xed9bc390,// 320 PAY 296 

    0xf5ed6739,// 321 PAY 297 

    0x5cb92cf2,// 322 PAY 298 

    0x33520483,// 323 PAY 299 

    0x9dbbb7fb,// 324 PAY 300 

    0x985a13b9,// 325 PAY 301 

    0x50645dc6,// 326 PAY 302 

    0xe5752864,// 327 PAY 303 

    0x5da47299,// 328 PAY 304 

    0x113a2391,// 329 PAY 305 

    0xc3a565ff,// 330 PAY 306 

    0x046b34b3,// 331 PAY 307 

    0x2dc89e23,// 332 PAY 308 

    0xb5fb9ddb,// 333 PAY 309 

    0xc1ac1bc4,// 334 PAY 310 

    0x46a345ea,// 335 PAY 311 

    0x6f42c6ce,// 336 PAY 312 

    0x54ee0304,// 337 PAY 313 

    0x9c45443e,// 338 PAY 314 

    0xe24c4d24,// 339 PAY 315 

    0x9b588071,// 340 PAY 316 

    0x0b5aeaf5,// 341 PAY 317 

    0x6c056462,// 342 PAY 318 

    0x22abaf9f,// 343 PAY 319 

    0x38e66dbb,// 344 PAY 320 

    0x3167cd72,// 345 PAY 321 

    0x21094064,// 346 PAY 322 

    0xf3a46c21,// 347 PAY 323 

    0x968cbe51,// 348 PAY 324 

    0xa323ea3b,// 349 PAY 325 

    0xacc772f3,// 350 PAY 326 

    0x63bc447f,// 351 PAY 327 

    0x2bdcc64d,// 352 PAY 328 

    0xdc20f80f,// 353 PAY 329 

    0x611e0178,// 354 PAY 330 

    0x1f3aa337,// 355 PAY 331 

    0x2629bcc1,// 356 PAY 332 

    0x62d2fb14,// 357 PAY 333 

    0x384417c2,// 358 PAY 334 

    0x2f5b797c,// 359 PAY 335 

    0x614db4d1,// 360 PAY 336 

    0xb5b061be,// 361 PAY 337 

    0x38dfc035,// 362 PAY 338 

    0x15b05609,// 363 PAY 339 

    0x936a27e1,// 364 PAY 340 

    0x946fd56c,// 365 PAY 341 

    0xe8626c78,// 366 PAY 342 

    0x7c47244f,// 367 PAY 343 

    0x6fd290e0,// 368 PAY 344 

    0xd40df44f,// 369 PAY 345 

    0x41ca1b3b,// 370 PAY 346 

    0xe03d8b15,// 371 PAY 347 

    0x2097f288,// 372 PAY 348 

    0xfb49f753,// 373 PAY 349 

    0x2aa486d3,// 374 PAY 350 

    0xaf55b21f,// 375 PAY 351 

    0x34a39c1b,// 376 PAY 352 

    0xc9d7bedf,// 377 PAY 353 

    0xe443048f,// 378 PAY 354 

    0xa9489540,// 379 PAY 355 

    0x92192063,// 380 PAY 356 

    0x3a5b8a62,// 381 PAY 357 

    0xe60e380b,// 382 PAY 358 

    0x85250d9d,// 383 PAY 359 

    0x145927b4,// 384 PAY 360 

    0xc967e939,// 385 PAY 361 

    0x0b0fcbaa,// 386 PAY 362 

    0x0100daca,// 387 PAY 363 

    0xd86886d4,// 388 PAY 364 

    0x1bdb8650,// 389 PAY 365 

    0x5a7e3775,// 390 PAY 366 

    0xb2bda177,// 391 PAY 367 

    0x276db8c4,// 392 PAY 368 

    0x16c629cd,// 393 PAY 369 

    0x38bee713,// 394 PAY 370 

    0x2556ea74,// 395 PAY 371 

    0x3b48e94c,// 396 PAY 372 

    0x10c8316d,// 397 PAY 373 

    0x3fc92b4d,// 398 PAY 374 

    0x0c88b02e,// 399 PAY 375 

    0xe113bbbf,// 400 PAY 376 

    0x7b0c63b9,// 401 PAY 377 

    0x55f5438e,// 402 PAY 378 

    0x12191ac5,// 403 PAY 379 

    0xa36937d3,// 404 PAY 380 

    0xaa6c6a38,// 405 PAY 381 

    0xa241ce17,// 406 PAY 382 

    0x9e7545c6,// 407 PAY 383 

    0x3d9ced0f,// 408 PAY 384 

    0xab78f534,// 409 PAY 385 

    0xf62d7e8e,// 410 PAY 386 

    0x6457d20b,// 411 PAY 387 

    0x7e2d2322,// 412 PAY 388 

    0x5d3a965e,// 413 PAY 389 

    0x3fd9c0b1,// 414 PAY 390 

    0x12baea22,// 415 PAY 391 

    0x9008b121,// 416 PAY 392 

    0xc1115367,// 417 PAY 393 

    0x69407d77,// 418 PAY 394 

    0xee559f81,// 419 PAY 395 

    0xd32b7c56,// 420 PAY 396 

    0x73746090,// 421 PAY 397 

    0x9cb95a44,// 422 PAY 398 

    0xdd67b5de,// 423 PAY 399 

    0xa3d14182,// 424 PAY 400 

    0xb62945e4,// 425 PAY 401 

    0xb2c53f79,// 426 PAY 402 

    0x4277b122,// 427 PAY 403 

    0x8b043f88,// 428 PAY 404 

    0x90c43bac,// 429 PAY 405 

    0x7b2ea867,// 430 PAY 406 

    0xf27064b6,// 431 PAY 407 

    0x5a1e1a92,// 432 PAY 408 

    0x00dc00b1,// 433 PAY 409 

    0x8f216257,// 434 PAY 410 

    0xa0e3d751,// 435 PAY 411 

    0x5be66629,// 436 PAY 412 

    0xa81dd09a,// 437 PAY 413 

    0x7c530000,// 438 PAY 414 

/// STA is 1 words. 

/// STA num_pkts       : 235 

/// STA pkt_idx        : 178 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x1c 

    0x02c81ceb // 439 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt77_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x08 

/// ECH pdu_tag        : 0x00 

    0x00080000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv insert_icv check_icv !sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0000000f,// 3 SCX   1 

    0x804548ab,// 4 SCX   2 

    0x00007142,// 5 SCX   3 

    0xa65a25b3,// 6 SCX   4 

    0x49cd7633,// 7 SCX   5 

    0x3bf24f47,// 8 SCX   6 

    0x68056339,// 9 SCX   7 

    0x5e1db01c,// 10 SCX   8 

    0xe7d86b9c,// 11 SCX   9 

    0xb04b6752,// 12 SCX  10 

    0xd9c24c37,// 13 SCX  11 

    0x21b59304,// 14 SCX  12 

    0x610a306d,// 15 SCX  13 

    0x025131b7,// 16 SCX  14 

    0xf5965567,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 683 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 572 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 572 

/// BFD lencrypto      : 232 

/// BFD ofstcrypto     : 304 

/// BFD (ofst+len)cry  : 536 

/// BFD ofstiv         : 232 

/// BFD ofsticv        : 620 

    0x0000023c,// 18 BFD   1 

    0x013000e8,// 19 BFD   2 

    0x026c00e8,// 20 BFD   3 

/// MFM is 12 words. 

/// MFM vldnibs        : 58 

    0x5800b37f,// 21 MFM   1 

    0xbb445d1c,// 22 MFM   2 

    0xed18f9bc,// 23 MFM   3 

    0xa279abf0,// 24 MFM   4 

    0xd6d796dc,// 25 MFM   5 

    0x5fd71a8d,// 26 MFM   6 

    0x974ebe86,// 27 MFM   7 

    0xdc50ec0a,// 28 MFM   8 

    0x32bbac79,// 29 MFM   9 

    0x34f8ffcd,// 30 MFM  10 

    0xeee986b3,// 31 MFM  11 

    0xa1f90000,// 32 MFM  12 

/// BDA is 172 words. 

/// BDA size     is 683 (0x2ab) 

/// BDA id       is 0xaa5 

    0x02ab0aa5,// 33 BDA   1 

/// PAY Generic Data size   : 683 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0xf4fe11c2,// 34 PAY   1 

    0x911ab0d8,// 35 PAY   2 

    0xfcbdbfac,// 36 PAY   3 

    0x1c24dfad,// 37 PAY   4 

    0xea1284b5,// 38 PAY   5 

    0x41c8b4f6,// 39 PAY   6 

    0x5e2eb704,// 40 PAY   7 

    0x00207c48,// 41 PAY   8 

    0xd25d2875,// 42 PAY   9 

    0xe16f2837,// 43 PAY  10 

    0x85830de6,// 44 PAY  11 

    0xf7ef0c99,// 45 PAY  12 

    0xc443a05b,// 46 PAY  13 

    0x6a24aa0f,// 47 PAY  14 

    0x2a0ea680,// 48 PAY  15 

    0x45e8e5dc,// 49 PAY  16 

    0xe7eb9fb1,// 50 PAY  17 

    0x2ddc9d57,// 51 PAY  18 

    0x20fff8ab,// 52 PAY  19 

    0xe7b753ae,// 53 PAY  20 

    0xe601207b,// 54 PAY  21 

    0x90845309,// 55 PAY  22 

    0x73072838,// 56 PAY  23 

    0xb3777a9d,// 57 PAY  24 

    0x5e6b46a3,// 58 PAY  25 

    0x4eb4abad,// 59 PAY  26 

    0xdfd3e496,// 60 PAY  27 

    0x0912555f,// 61 PAY  28 

    0x7f572fb5,// 62 PAY  29 

    0x961a230a,// 63 PAY  30 

    0xa18ee60f,// 64 PAY  31 

    0x57a1404a,// 65 PAY  32 

    0x1e4a53e7,// 66 PAY  33 

    0x9a02d908,// 67 PAY  34 

    0xa244210c,// 68 PAY  35 

    0xaf934b73,// 69 PAY  36 

    0x0672c857,// 70 PAY  37 

    0x217d0ed2,// 71 PAY  38 

    0x465b3f07,// 72 PAY  39 

    0x9dcf2a29,// 73 PAY  40 

    0xbac8a058,// 74 PAY  41 

    0x5639c86f,// 75 PAY  42 

    0x696e01f1,// 76 PAY  43 

    0xe71b8207,// 77 PAY  44 

    0x98691494,// 78 PAY  45 

    0xf648b06b,// 79 PAY  46 

    0x7ad3d103,// 80 PAY  47 

    0x96f6c29c,// 81 PAY  48 

    0x2a26d336,// 82 PAY  49 

    0xc2097981,// 83 PAY  50 

    0xdf17a32d,// 84 PAY  51 

    0xc338c828,// 85 PAY  52 

    0x371ae6f6,// 86 PAY  53 

    0xd069de54,// 87 PAY  54 

    0x3d4d07eb,// 88 PAY  55 

    0x09a2c976,// 89 PAY  56 

    0xda0d6083,// 90 PAY  57 

    0x120e961f,// 91 PAY  58 

    0xf63663b8,// 92 PAY  59 

    0x4e05297a,// 93 PAY  60 

    0xe8a415eb,// 94 PAY  61 

    0x9555a236,// 95 PAY  62 

    0x51f616a6,// 96 PAY  63 

    0xad2f01ee,// 97 PAY  64 

    0x30f979c8,// 98 PAY  65 

    0x10231dae,// 99 PAY  66 

    0xaa55d3b7,// 100 PAY  67 

    0x2b495841,// 101 PAY  68 

    0x5ccb89b4,// 102 PAY  69 

    0x32f7c11c,// 103 PAY  70 

    0x81fa97c7,// 104 PAY  71 

    0xfae273df,// 105 PAY  72 

    0x962fd9a6,// 106 PAY  73 

    0xfe71e040,// 107 PAY  74 

    0x5abc360a,// 108 PAY  75 

    0xd6e8ed31,// 109 PAY  76 

    0x3c838aa1,// 110 PAY  77 

    0x4ec67404,// 111 PAY  78 

    0x2de22229,// 112 PAY  79 

    0xce81e008,// 113 PAY  80 

    0x51a4e99b,// 114 PAY  81 

    0xd992f73b,// 115 PAY  82 

    0x30c31cd1,// 116 PAY  83 

    0xb146a7dc,// 117 PAY  84 

    0x071a6884,// 118 PAY  85 

    0x330cf1ff,// 119 PAY  86 

    0xcff77eda,// 120 PAY  87 

    0xf7947982,// 121 PAY  88 

    0x9dc80db6,// 122 PAY  89 

    0x934b0a7d,// 123 PAY  90 

    0x1445b46d,// 124 PAY  91 

    0xf031f51d,// 125 PAY  92 

    0x733f590e,// 126 PAY  93 

    0xff7672a8,// 127 PAY  94 

    0x7da2ca9b,// 128 PAY  95 

    0x8c71f827,// 129 PAY  96 

    0xb1a96189,// 130 PAY  97 

    0xc743e87b,// 131 PAY  98 

    0xb4f13484,// 132 PAY  99 

    0xdfd19ce2,// 133 PAY 100 

    0x15d93f75,// 134 PAY 101 

    0x6dda75c9,// 135 PAY 102 

    0xfe52b716,// 136 PAY 103 

    0x627b0908,// 137 PAY 104 

    0x80cc4741,// 138 PAY 105 

    0x5670186d,// 139 PAY 106 

    0xab8bfff2,// 140 PAY 107 

    0xd30d858c,// 141 PAY 108 

    0x4b48c79d,// 142 PAY 109 

    0xe393c509,// 143 PAY 110 

    0xf8ca2840,// 144 PAY 111 

    0x326e13cf,// 145 PAY 112 

    0x944787aa,// 146 PAY 113 

    0xee849989,// 147 PAY 114 

    0x42e2ee71,// 148 PAY 115 

    0x4d654288,// 149 PAY 116 

    0xb89c4a89,// 150 PAY 117 

    0xfeb62f4b,// 151 PAY 118 

    0xd0b71a1f,// 152 PAY 119 

    0x4df3cd53,// 153 PAY 120 

    0x009f77af,// 154 PAY 121 

    0x1121ee68,// 155 PAY 122 

    0xd120a262,// 156 PAY 123 

    0xc3a49dd0,// 157 PAY 124 

    0x6f7ac656,// 158 PAY 125 

    0xb8b2f7a3,// 159 PAY 126 

    0x9ea785be,// 160 PAY 127 

    0xe78c526d,// 161 PAY 128 

    0x606de290,// 162 PAY 129 

    0x8a5345e1,// 163 PAY 130 

    0xc938cd3b,// 164 PAY 131 

    0x12b584c1,// 165 PAY 132 

    0x7530eb1a,// 166 PAY 133 

    0x748bcfee,// 167 PAY 134 

    0xb97bb9e6,// 168 PAY 135 

    0xd0476651,// 169 PAY 136 

    0x4593e86d,// 170 PAY 137 

    0x5a50019d,// 171 PAY 138 

    0xd92b0f5f,// 172 PAY 139 

    0x839c8cd7,// 173 PAY 140 

    0x463b237e,// 174 PAY 141 

    0xf7db7ee6,// 175 PAY 142 

    0x34d8cdcd,// 176 PAY 143 

    0x48fad5e4,// 177 PAY 144 

    0x5e598d89,// 178 PAY 145 

    0x416bcec7,// 179 PAY 146 

    0x4e002f4d,// 180 PAY 147 

    0xfece6025,// 181 PAY 148 

    0xb661a235,// 182 PAY 149 

    0xe2be8050,// 183 PAY 150 

    0x6ada4aa8,// 184 PAY 151 

    0x9d856e3e,// 185 PAY 152 

    0xd855fcc3,// 186 PAY 153 

    0xbf1397b5,// 187 PAY 154 

    0xdba28a05,// 188 PAY 155 

    0xc9c1bf9c,// 189 PAY 156 

    0x7d479e15,// 190 PAY 157 

    0x2e99629b,// 191 PAY 158 

    0x4b158d0b,// 192 PAY 159 

    0x9896b22d,// 193 PAY 160 

    0xa924497b,// 194 PAY 161 

    0xfb15cf15,// 195 PAY 162 

    0x7acbc444,// 196 PAY 163 

    0xc6e7169e,// 197 PAY 164 

    0xa8e63711,// 198 PAY 165 

    0xc8cb31e4,// 199 PAY 166 

    0xa0b65c11,// 200 PAY 167 

    0x5e351f69,// 201 PAY 168 

    0x6ae8a687,// 202 PAY 169 

    0x9d449b1b,// 203 PAY 170 

    0x109e0600,// 204 PAY 171 

/// STA is 1 words. 

/// STA num_pkts       : 254 

/// STA pkt_idx        : 71 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xbe 

    0x011dbefe // 205 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt78_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x00 

/// ECH pdu_tag        : 0x00 

    0x00000000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv insert_icv !check_icv !sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0000000f,// 3 SCX   1 

    0x804648af,// 4 SCX   2 

    0x00006142,// 5 SCX   3 

    0x90351699,// 6 SCX   4 

    0x61129b68,// 7 SCX   5 

    0x8f793ab3,// 8 SCX   6 

    0xe18a3f7e,// 9 SCX   7 

    0x5fb6fe6c,// 10 SCX   8 

    0x0b1d1aa6,// 11 SCX   9 

    0x79e94c0e,// 12 SCX  10 

    0xa0c25db3,// 13 SCX  11 

    0x825da7f1,// 14 SCX  12 

    0xbe4f9f79,// 15 SCX  13 

    0x3cf3df34,// 16 SCX  14 

    0x26bafd7c,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 1312 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 563 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 563 

/// BFD lencrypto      : 120 

/// BFD ofstcrypto     : 440 

/// BFD (ofst+len)cry  : 560 

/// BFD ofstiv         : 424 

/// BFD ofsticv        : 756 

    0x00000233,// 18 BFD   1 

    0x01b80078,// 19 BFD   2 

    0x02f401a8,// 20 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : 11 

    0x11009478,// 21 MFM   1 

    0x43ccf251,// 22 MFM   2 

    0xf3cc1000,// 23 MFM   3 

/// BDA is 329 words. 

/// BDA size     is 1312 (0x520) 

/// BDA id       is 0xdef3 

    0x0520def3,// 24 BDA   1 

/// PAY Generic Data size   : 1312 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0xa2db9046,// 25 PAY   1 

    0x2f66252a,// 26 PAY   2 

    0x6d7556ad,// 27 PAY   3 

    0x789c3e4d,// 28 PAY   4 

    0x790bd0c9,// 29 PAY   5 

    0x81d5e94b,// 30 PAY   6 

    0x719fdfbd,// 31 PAY   7 

    0xcd798e5d,// 32 PAY   8 

    0x1e3ca240,// 33 PAY   9 

    0xf9a928c3,// 34 PAY  10 

    0x90bcdd28,// 35 PAY  11 

    0xe0948443,// 36 PAY  12 

    0xe5ac604b,// 37 PAY  13 

    0x3ae0def2,// 38 PAY  14 

    0x2eb8633e,// 39 PAY  15 

    0xa6700e5a,// 40 PAY  16 

    0x3b54397c,// 41 PAY  17 

    0xc8b60fc6,// 42 PAY  18 

    0x21085baf,// 43 PAY  19 

    0x12bf5dca,// 44 PAY  20 

    0xde557bc8,// 45 PAY  21 

    0xd67b6412,// 46 PAY  22 

    0xcdafa13f,// 47 PAY  23 

    0x68766480,// 48 PAY  24 

    0x53d026c0,// 49 PAY  25 

    0x99092e8f,// 50 PAY  26 

    0xbd0cc55c,// 51 PAY  27 

    0x4ffda16c,// 52 PAY  28 

    0xad20b4da,// 53 PAY  29 

    0x78d89565,// 54 PAY  30 

    0x66ca5321,// 55 PAY  31 

    0x64dcef7a,// 56 PAY  32 

    0xf3b1237f,// 57 PAY  33 

    0xae9c5185,// 58 PAY  34 

    0x91cd7038,// 59 PAY  35 

    0x20fb8e78,// 60 PAY  36 

    0xf1b4a307,// 61 PAY  37 

    0x9e2de7ca,// 62 PAY  38 

    0x9431cbb2,// 63 PAY  39 

    0x866964dc,// 64 PAY  40 

    0xf8554ba1,// 65 PAY  41 

    0xd36996a4,// 66 PAY  42 

    0xc631a4d1,// 67 PAY  43 

    0xecd319ff,// 68 PAY  44 

    0x6d64a416,// 69 PAY  45 

    0x8d8bba94,// 70 PAY  46 

    0xfbb9b3c2,// 71 PAY  47 

    0x3dfbc0f7,// 72 PAY  48 

    0x15b97de7,// 73 PAY  49 

    0xb29d9f8b,// 74 PAY  50 

    0x1d5ca033,// 75 PAY  51 

    0x71df66cd,// 76 PAY  52 

    0xacaca427,// 77 PAY  53 

    0xba20771d,// 78 PAY  54 

    0x99d0d583,// 79 PAY  55 

    0x63f120ef,// 80 PAY  56 

    0xfcd87fea,// 81 PAY  57 

    0x2679a952,// 82 PAY  58 

    0xb8a574c6,// 83 PAY  59 

    0x10e4e619,// 84 PAY  60 

    0xeec8d520,// 85 PAY  61 

    0x1297c8ca,// 86 PAY  62 

    0xdf3fb662,// 87 PAY  63 

    0x76c27a84,// 88 PAY  64 

    0x544b1283,// 89 PAY  65 

    0x00bd454a,// 90 PAY  66 

    0x369fc379,// 91 PAY  67 

    0xa703f598,// 92 PAY  68 

    0x8fd9fe1c,// 93 PAY  69 

    0x8ede8ad7,// 94 PAY  70 

    0x89560e1d,// 95 PAY  71 

    0x33b639bd,// 96 PAY  72 

    0xcc26c893,// 97 PAY  73 

    0x00ccce94,// 98 PAY  74 

    0x95d21282,// 99 PAY  75 

    0xfa706d9c,// 100 PAY  76 

    0x07624f33,// 101 PAY  77 

    0xad4c96eb,// 102 PAY  78 

    0x5fdabfda,// 103 PAY  79 

    0x444c9d1e,// 104 PAY  80 

    0x878f3511,// 105 PAY  81 

    0x68e676f3,// 106 PAY  82 

    0xd8c29214,// 107 PAY  83 

    0x6ecb79dd,// 108 PAY  84 

    0xcbbf524c,// 109 PAY  85 

    0x5e5a740b,// 110 PAY  86 

    0x529dbf7e,// 111 PAY  87 

    0xbc9f61b7,// 112 PAY  88 

    0xdee1526c,// 113 PAY  89 

    0x9e37f370,// 114 PAY  90 

    0x8b444dc7,// 115 PAY  91 

    0xec48b501,// 116 PAY  92 

    0xa1db0b04,// 117 PAY  93 

    0x5e5bc9a0,// 118 PAY  94 

    0x3714c92e,// 119 PAY  95 

    0x01edfc9c,// 120 PAY  96 

    0xb882e70b,// 121 PAY  97 

    0xefb83b4d,// 122 PAY  98 

    0xee41fd0a,// 123 PAY  99 

    0x57dc0d3c,// 124 PAY 100 

    0x01a48ef8,// 125 PAY 101 

    0x5a9c089a,// 126 PAY 102 

    0x023edf4e,// 127 PAY 103 

    0xb7f4423e,// 128 PAY 104 

    0x97151d61,// 129 PAY 105 

    0x15f9f308,// 130 PAY 106 

    0x0ea43d57,// 131 PAY 107 

    0x3a408a08,// 132 PAY 108 

    0x241f9d0c,// 133 PAY 109 

    0x1ba14a4f,// 134 PAY 110 

    0xd4a37698,// 135 PAY 111 

    0x980aa082,// 136 PAY 112 

    0x718c5e02,// 137 PAY 113 

    0xd95f80c0,// 138 PAY 114 

    0x36459b7e,// 139 PAY 115 

    0x5e2db43f,// 140 PAY 116 

    0x1de6a2c4,// 141 PAY 117 

    0xe1ca3db8,// 142 PAY 118 

    0x6f584f31,// 143 PAY 119 

    0xb545b813,// 144 PAY 120 

    0xb70cc2c7,// 145 PAY 121 

    0xc3786990,// 146 PAY 122 

    0x1d8130ff,// 147 PAY 123 

    0x6dba40c2,// 148 PAY 124 

    0xbaa286a5,// 149 PAY 125 

    0x166ee05e,// 150 PAY 126 

    0x78856f2b,// 151 PAY 127 

    0xad6276a4,// 152 PAY 128 

    0xe9057bf5,// 153 PAY 129 

    0xec439cbf,// 154 PAY 130 

    0x110eb87f,// 155 PAY 131 

    0xb5f02567,// 156 PAY 132 

    0x2609cd9d,// 157 PAY 133 

    0xc9cb8b0e,// 158 PAY 134 

    0xc310622c,// 159 PAY 135 

    0x5918f628,// 160 PAY 136 

    0x67c6a29f,// 161 PAY 137 

    0x4b1cd287,// 162 PAY 138 

    0x61812405,// 163 PAY 139 

    0xbfbc137a,// 164 PAY 140 

    0x35874dd7,// 165 PAY 141 

    0x58d5c3ff,// 166 PAY 142 

    0x1a2c8692,// 167 PAY 143 

    0xdd148081,// 168 PAY 144 

    0xd412a62c,// 169 PAY 145 

    0xc8530881,// 170 PAY 146 

    0x2f2d6580,// 171 PAY 147 

    0x734e939b,// 172 PAY 148 

    0x75e249fe,// 173 PAY 149 

    0x071e25af,// 174 PAY 150 

    0x6646b961,// 175 PAY 151 

    0xcf071ab4,// 176 PAY 152 

    0xe15e21ae,// 177 PAY 153 

    0x119cc60a,// 178 PAY 154 

    0xe46ecbc5,// 179 PAY 155 

    0x9f929a9e,// 180 PAY 156 

    0x25402f12,// 181 PAY 157 

    0x47c380eb,// 182 PAY 158 

    0x34367e7a,// 183 PAY 159 

    0x22c6aafa,// 184 PAY 160 

    0x47f03202,// 185 PAY 161 

    0x703359c4,// 186 PAY 162 

    0x8349daaf,// 187 PAY 163 

    0x2e7bb4aa,// 188 PAY 164 

    0x3aaa602f,// 189 PAY 165 

    0x74bac291,// 190 PAY 166 

    0xccac29f5,// 191 PAY 167 

    0x4f44d5ba,// 192 PAY 168 

    0xe23c5a34,// 193 PAY 169 

    0xcd7a2887,// 194 PAY 170 

    0x00f19dbc,// 195 PAY 171 

    0xd2f87737,// 196 PAY 172 

    0x17592504,// 197 PAY 173 

    0xcfdf7305,// 198 PAY 174 

    0x62638e9b,// 199 PAY 175 

    0x3e0207e0,// 200 PAY 176 

    0x94e3c7ad,// 201 PAY 177 

    0x67c4c52d,// 202 PAY 178 

    0x8344b0df,// 203 PAY 179 

    0xeabc5a01,// 204 PAY 180 

    0xce7cf649,// 205 PAY 181 

    0x34a073b5,// 206 PAY 182 

    0x8a4b75c7,// 207 PAY 183 

    0x4c15b6ee,// 208 PAY 184 

    0x40a6c429,// 209 PAY 185 

    0x6e92bda5,// 210 PAY 186 

    0xa8d7b357,// 211 PAY 187 

    0x9b7fa7d4,// 212 PAY 188 

    0xf44efd4d,// 213 PAY 189 

    0xa54f13f3,// 214 PAY 190 

    0xf776ad3d,// 215 PAY 191 

    0xff29ea7c,// 216 PAY 192 

    0x7fae64ba,// 217 PAY 193 

    0xe1540f5d,// 218 PAY 194 

    0xc9c42f71,// 219 PAY 195 

    0x443a6d8d,// 220 PAY 196 

    0x997fa81e,// 221 PAY 197 

    0xda922252,// 222 PAY 198 

    0x63bddb21,// 223 PAY 199 

    0xa9be3ebd,// 224 PAY 200 

    0xc6aea4f9,// 225 PAY 201 

    0x7edb48aa,// 226 PAY 202 

    0x84707f72,// 227 PAY 203 

    0xd86587d4,// 228 PAY 204 

    0xf82320b9,// 229 PAY 205 

    0xc960a6a9,// 230 PAY 206 

    0xcb221b65,// 231 PAY 207 

    0x1f0b2f05,// 232 PAY 208 

    0x6dcf9f4c,// 233 PAY 209 

    0x47917e5b,// 234 PAY 210 

    0x3a0c5e47,// 235 PAY 211 

    0xffab1fd8,// 236 PAY 212 

    0x175afb04,// 237 PAY 213 

    0x47614085,// 238 PAY 214 

    0xf9b0201d,// 239 PAY 215 

    0xb35e2772,// 240 PAY 216 

    0xa9e3a827,// 241 PAY 217 

    0xeb06bc5e,// 242 PAY 218 

    0xbfc441ec,// 243 PAY 219 

    0xd048f903,// 244 PAY 220 

    0x7173c485,// 245 PAY 221 

    0x6c289c27,// 246 PAY 222 

    0xdf5db08c,// 247 PAY 223 

    0xee0092e4,// 248 PAY 224 

    0x4b3ad036,// 249 PAY 225 

    0x5c1329ff,// 250 PAY 226 

    0x3824574a,// 251 PAY 227 

    0xfb0eee41,// 252 PAY 228 

    0x859ac52f,// 253 PAY 229 

    0x3160f719,// 254 PAY 230 

    0x1305e84e,// 255 PAY 231 

    0x00ea46a2,// 256 PAY 232 

    0xacbf155e,// 257 PAY 233 

    0xcfdeec00,// 258 PAY 234 

    0xe83d8215,// 259 PAY 235 

    0x99638edf,// 260 PAY 236 

    0xa9f1eb3e,// 261 PAY 237 

    0xc4f5853e,// 262 PAY 238 

    0x47b55192,// 263 PAY 239 

    0xf53c2b96,// 264 PAY 240 

    0xd2a57c2b,// 265 PAY 241 

    0x5b1bd7da,// 266 PAY 242 

    0xf2bc51bc,// 267 PAY 243 

    0x935cc2dc,// 268 PAY 244 

    0xc967a6d4,// 269 PAY 245 

    0x9c5cdcd2,// 270 PAY 246 

    0xb180b491,// 271 PAY 247 

    0x27d59b00,// 272 PAY 248 

    0x31e187e7,// 273 PAY 249 

    0xa78cb333,// 274 PAY 250 

    0xc3be7fc9,// 275 PAY 251 

    0x20afdc81,// 276 PAY 252 

    0x69cd65f2,// 277 PAY 253 

    0x6870f025,// 278 PAY 254 

    0x6245ee6e,// 279 PAY 255 

    0x87c2d30c,// 280 PAY 256 

    0x7e4f1dae,// 281 PAY 257 

    0xe75cd0cc,// 282 PAY 258 

    0xe57dc46a,// 283 PAY 259 

    0x9b304e69,// 284 PAY 260 

    0x94b8ddc6,// 285 PAY 261 

    0x16d8fffe,// 286 PAY 262 

    0xf3d0cc3a,// 287 PAY 263 

    0xe5304bdb,// 288 PAY 264 

    0x545a6b17,// 289 PAY 265 

    0x1a6f0432,// 290 PAY 266 

    0xb5f5f0f1,// 291 PAY 267 

    0x4662425f,// 292 PAY 268 

    0x5ea4c694,// 293 PAY 269 

    0xeaca011e,// 294 PAY 270 

    0x100f3bd3,// 295 PAY 271 

    0x816c4a07,// 296 PAY 272 

    0x46d15c1f,// 297 PAY 273 

    0x53a79ad7,// 298 PAY 274 

    0x9a854d83,// 299 PAY 275 

    0xcd4161d5,// 300 PAY 276 

    0x7bbd2b65,// 301 PAY 277 

    0x368ca0b0,// 302 PAY 278 

    0x586a82cd,// 303 PAY 279 

    0x46b67c62,// 304 PAY 280 

    0x30717e69,// 305 PAY 281 

    0xbb35ae75,// 306 PAY 282 

    0xb59ae379,// 307 PAY 283 

    0x0465ab1e,// 308 PAY 284 

    0xea1cd926,// 309 PAY 285 

    0xc7670f9d,// 310 PAY 286 

    0x34de4ecb,// 311 PAY 287 

    0xffd58ff6,// 312 PAY 288 

    0x79d2f99b,// 313 PAY 289 

    0xe9a20e98,// 314 PAY 290 

    0xb0b8e7f4,// 315 PAY 291 

    0x9fb0e760,// 316 PAY 292 

    0x81bcaf6d,// 317 PAY 293 

    0xf5f0186e,// 318 PAY 294 

    0x1971cbb0,// 319 PAY 295 

    0xcfbfa883,// 320 PAY 296 

    0x506234ba,// 321 PAY 297 

    0x898c05b5,// 322 PAY 298 

    0x4983cb2b,// 323 PAY 299 

    0x81b82c33,// 324 PAY 300 

    0xe3f06900,// 325 PAY 301 

    0x317e1cf4,// 326 PAY 302 

    0xa7946627,// 327 PAY 303 

    0x05e3d649,// 328 PAY 304 

    0x793e51f6,// 329 PAY 305 

    0x6bfc8552,// 330 PAY 306 

    0xfcd4c08f,// 331 PAY 307 

    0xb3de979a,// 332 PAY 308 

    0x30fa54da,// 333 PAY 309 

    0x2581ef16,// 334 PAY 310 

    0x50eccca8,// 335 PAY 311 

    0xc8b39c38,// 336 PAY 312 

    0x35501333,// 337 PAY 313 

    0x11889edb,// 338 PAY 314 

    0x08c74aa0,// 339 PAY 315 

    0x58fa1296,// 340 PAY 316 

    0xb80012c1,// 341 PAY 317 

    0xe412aae9,// 342 PAY 318 

    0x47de8047,// 343 PAY 319 

    0x141fc344,// 344 PAY 320 

    0x268174c3,// 345 PAY 321 

    0x2cc64798,// 346 PAY 322 

    0xabbe7f14,// 347 PAY 323 

    0xf1743de9,// 348 PAY 324 

    0xa4a329b5,// 349 PAY 325 

    0x2a08e618,// 350 PAY 326 

    0xeeadd366,// 351 PAY 327 

    0xbbf8ae6c,// 352 PAY 328 

/// STA is 1 words. 

/// STA num_pkts       : 55 

/// STA pkt_idx        : 168 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xf4 

    0x02a0f437 // 353 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt79_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x0c 

/// ECH pdu_tag        : 0x00 

    0x000c0000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x08000011,// 3 SCX   1 

    0x804448d1,// 4 SCX   2 

    0x00005482,// 5 SCX   3 

    0x82f6736e,// 6 SCX   4 

    0x2a5033c7,// 7 SCX   5 

    0xfdfcde9e,// 8 SCX   6 

    0x0f8bafc4,// 9 SCX   7 

    0xde7ee046,// 10 SCX   8 

    0x30128220,// 11 SCX   9 

    0xe9d5b9c8,// 12 SCX  10 

    0x08b4d540,// 13 SCX  11 

    0xa77b24c0,// 14 SCX  12 

    0xadc089e3,// 15 SCX  13 

    0x33400fe7,// 16 SCX  14 

    0xa948f2af,// 17 SCX  15 

    0xa91e7774,// 18 SCX  16 

    0x64c24c51,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1287 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 445 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 445 

/// BFD lencrypto      : 72 

/// BFD ofstcrypto     : 156 

/// BFD (ofst+len)cry  : 228 

/// BFD ofstiv         : 16 

/// BFD ofsticv        : 480 

    0x000001bd,// 20 BFD   1 

    0x009c0048,// 21 BFD   2 

    0x01e00010,// 22 BFD   3 

/// MFM is 13 words. 

/// MFM vldnibs        : 60 

    0x60001e9f,// 23 MFM   1 

    0xea44a236,// 24 MFM   2 

    0xfb6d0025,// 25 MFM   3 

    0x43ef1e5a,// 26 MFM   4 

    0x812fd316,// 27 MFM   5 

    0xcd0d8d22,// 28 MFM   6 

    0xf29644e0,// 29 MFM   7 

    0x2e3f437a,// 30 MFM   8 

    0xdd57efed,// 31 MFM   9 

    0x61b4229e,// 32 MFM  10 

    0x914abd89,// 33 MFM  11 

    0x02f7b73f,// 34 MFM  12 

    0x29d80000,// 35 MFM  13 

/// BDA is 323 words. 

/// BDA size     is 1287 (0x507) 

/// BDA id       is 0x4d3 

    0x050704d3,// 36 BDA   1 

/// PAY Generic Data size   : 1287 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x2a31b684,// 37 PAY   1 

    0x19b57234,// 38 PAY   2 

    0x98533061,// 39 PAY   3 

    0xdd4ec9ed,// 40 PAY   4 

    0x3787ec90,// 41 PAY   5 

    0xd5789aac,// 42 PAY   6 

    0x210f46ab,// 43 PAY   7 

    0xaaf74bd0,// 44 PAY   8 

    0x85d11338,// 45 PAY   9 

    0xb232111b,// 46 PAY  10 

    0xe187154e,// 47 PAY  11 

    0x5c583b2a,// 48 PAY  12 

    0xc45172b6,// 49 PAY  13 

    0xcfce8f28,// 50 PAY  14 

    0x651377f9,// 51 PAY  15 

    0xd5a550ef,// 52 PAY  16 

    0xa950fdeb,// 53 PAY  17 

    0x847273c3,// 54 PAY  18 

    0x99d2fe59,// 55 PAY  19 

    0x8f54d1fc,// 56 PAY  20 

    0x3ba48508,// 57 PAY  21 

    0x972ee34a,// 58 PAY  22 

    0xea4fceb0,// 59 PAY  23 

    0x23caaf93,// 60 PAY  24 

    0xfb4d5d7f,// 61 PAY  25 

    0xe9556205,// 62 PAY  26 

    0x8bc54877,// 63 PAY  27 

    0x85e6f3e2,// 64 PAY  28 

    0x50d591ce,// 65 PAY  29 

    0x16543faa,// 66 PAY  30 

    0x27855252,// 67 PAY  31 

    0x89a3ee53,// 68 PAY  32 

    0x6ca387c3,// 69 PAY  33 

    0x01ef738b,// 70 PAY  34 

    0x47464175,// 71 PAY  35 

    0x8eb93453,// 72 PAY  36 

    0x462e10d6,// 73 PAY  37 

    0xa591e735,// 74 PAY  38 

    0x3d3800db,// 75 PAY  39 

    0xd865fc86,// 76 PAY  40 

    0xac21c020,// 77 PAY  41 

    0xf4c9bed2,// 78 PAY  42 

    0xa22c93b0,// 79 PAY  43 

    0x5bfbc7ae,// 80 PAY  44 

    0xde5a79b2,// 81 PAY  45 

    0xe3ef94ff,// 82 PAY  46 

    0xe7a01594,// 83 PAY  47 

    0x5017ead8,// 84 PAY  48 

    0x2eb59baf,// 85 PAY  49 

    0x05e3b0ff,// 86 PAY  50 

    0xbef44116,// 87 PAY  51 

    0xce0535d4,// 88 PAY  52 

    0xc21822ef,// 89 PAY  53 

    0x14dad6b6,// 90 PAY  54 

    0x4586dad3,// 91 PAY  55 

    0x018ff1b8,// 92 PAY  56 

    0xf0e70657,// 93 PAY  57 

    0x1dd3b0f5,// 94 PAY  58 

    0x32ecf93b,// 95 PAY  59 

    0x7e437b63,// 96 PAY  60 

    0x59096046,// 97 PAY  61 

    0x0fb46115,// 98 PAY  62 

    0xdf7b73fd,// 99 PAY  63 

    0x209a8185,// 100 PAY  64 

    0x0ba7d483,// 101 PAY  65 

    0x51090e6d,// 102 PAY  66 

    0xa804149e,// 103 PAY  67 

    0xe41368c3,// 104 PAY  68 

    0x1c4a489d,// 105 PAY  69 

    0xda12f071,// 106 PAY  70 

    0xe4ae2c37,// 107 PAY  71 

    0x43d7ce2b,// 108 PAY  72 

    0x72a3f2c3,// 109 PAY  73 

    0xb7ffd6cf,// 110 PAY  74 

    0x88c81156,// 111 PAY  75 

    0xfac5139a,// 112 PAY  76 

    0x93a63550,// 113 PAY  77 

    0x0adb8815,// 114 PAY  78 

    0xda01c8d7,// 115 PAY  79 

    0xac740480,// 116 PAY  80 

    0x48c12fea,// 117 PAY  81 

    0x9ab93c9e,// 118 PAY  82 

    0x5a848fdf,// 119 PAY  83 

    0x48033ee8,// 120 PAY  84 

    0x31f316f7,// 121 PAY  85 

    0xd11b4f84,// 122 PAY  86 

    0xa6a0e9f6,// 123 PAY  87 

    0x97c7f6b5,// 124 PAY  88 

    0x67cbdb34,// 125 PAY  89 

    0x6678b306,// 126 PAY  90 

    0xc7e82d37,// 127 PAY  91 

    0xd2ff3a69,// 128 PAY  92 

    0x3469f16c,// 129 PAY  93 

    0x491d7323,// 130 PAY  94 

    0x0f9ea291,// 131 PAY  95 

    0xd707c7ec,// 132 PAY  96 

    0x22dfdc0c,// 133 PAY  97 

    0x6ea055e0,// 134 PAY  98 

    0x28e62867,// 135 PAY  99 

    0x30273cc1,// 136 PAY 100 

    0xe94241c8,// 137 PAY 101 

    0x5cbb090f,// 138 PAY 102 

    0x390a9037,// 139 PAY 103 

    0x2702f28f,// 140 PAY 104 

    0x5049654a,// 141 PAY 105 

    0x69991ecb,// 142 PAY 106 

    0xe5ccc072,// 143 PAY 107 

    0x4e766e22,// 144 PAY 108 

    0xa1dcc1ed,// 145 PAY 109 

    0x9981a7ef,// 146 PAY 110 

    0xea5296cf,// 147 PAY 111 

    0x739cc13b,// 148 PAY 112 

    0x288c04ea,// 149 PAY 113 

    0x9d6049be,// 150 PAY 114 

    0x210628b9,// 151 PAY 115 

    0xd47d6a26,// 152 PAY 116 

    0x49576ac4,// 153 PAY 117 

    0xce7d268f,// 154 PAY 118 

    0x652a11e3,// 155 PAY 119 

    0xb0156eb5,// 156 PAY 120 

    0x02629009,// 157 PAY 121 

    0xf8c61d79,// 158 PAY 122 

    0xc45ded1d,// 159 PAY 123 

    0x6ad36e41,// 160 PAY 124 

    0xfbd70447,// 161 PAY 125 

    0xfbd89278,// 162 PAY 126 

    0xea9f7ae7,// 163 PAY 127 

    0x60fac404,// 164 PAY 128 

    0x6d6798d5,// 165 PAY 129 

    0x8c79f1af,// 166 PAY 130 

    0x434e5d13,// 167 PAY 131 

    0xa6551347,// 168 PAY 132 

    0x5404e469,// 169 PAY 133 

    0x2c87a576,// 170 PAY 134 

    0xfab3ae88,// 171 PAY 135 

    0xad46684f,// 172 PAY 136 

    0xde77ee34,// 173 PAY 137 

    0x84a95396,// 174 PAY 138 

    0xdc79cfdb,// 175 PAY 139 

    0xdac9171c,// 176 PAY 140 

    0xb9c06e32,// 177 PAY 141 

    0x08b1072a,// 178 PAY 142 

    0x52211e95,// 179 PAY 143 

    0xed311425,// 180 PAY 144 

    0x8e3e0d0c,// 181 PAY 145 

    0x38fdb9e7,// 182 PAY 146 

    0xabb16910,// 183 PAY 147 

    0x8537fb64,// 184 PAY 148 

    0x79637e8d,// 185 PAY 149 

    0x3e0a2d83,// 186 PAY 150 

    0xa59ab660,// 187 PAY 151 

    0x10f9b988,// 188 PAY 152 

    0xed9c665b,// 189 PAY 153 

    0x04f8b697,// 190 PAY 154 

    0x9960c693,// 191 PAY 155 

    0xcccc8cba,// 192 PAY 156 

    0xf16a2197,// 193 PAY 157 

    0xbd22ee16,// 194 PAY 158 

    0xe16ff8ed,// 195 PAY 159 

    0xe5636005,// 196 PAY 160 

    0x6ffce3c0,// 197 PAY 161 

    0x65ab6a02,// 198 PAY 162 

    0x61af63f9,// 199 PAY 163 

    0xf1859b1f,// 200 PAY 164 

    0xb201dc02,// 201 PAY 165 

    0xbe0ba268,// 202 PAY 166 

    0x574d6dcc,// 203 PAY 167 

    0x727c9b7d,// 204 PAY 168 

    0xba99aaa7,// 205 PAY 169 

    0x7974e705,// 206 PAY 170 

    0x6dccc142,// 207 PAY 171 

    0xf4335d3d,// 208 PAY 172 

    0x3b25477c,// 209 PAY 173 

    0x18845d45,// 210 PAY 174 

    0x495058a7,// 211 PAY 175 

    0x7388c811,// 212 PAY 176 

    0x012c377e,// 213 PAY 177 

    0x5f6c5a15,// 214 PAY 178 

    0x7db9e8d8,// 215 PAY 179 

    0x3c3635cc,// 216 PAY 180 

    0xba162990,// 217 PAY 181 

    0x61bb3457,// 218 PAY 182 

    0x9c102f6a,// 219 PAY 183 

    0x1b0863fe,// 220 PAY 184 

    0xee6c611e,// 221 PAY 185 

    0x82324144,// 222 PAY 186 

    0xa7804274,// 223 PAY 187 

    0x3aa4ca96,// 224 PAY 188 

    0xed08c494,// 225 PAY 189 

    0x313169a7,// 226 PAY 190 

    0x74fda078,// 227 PAY 191 

    0x866ed2d6,// 228 PAY 192 

    0xae85130d,// 229 PAY 193 

    0x2748a1f0,// 230 PAY 194 

    0xaccf3dc5,// 231 PAY 195 

    0x8ced46fc,// 232 PAY 196 

    0x5bb60325,// 233 PAY 197 

    0x9c4389e5,// 234 PAY 198 

    0x59ed7d6e,// 235 PAY 199 

    0x53bb222b,// 236 PAY 200 

    0xe8e80a3c,// 237 PAY 201 

    0x6025dd6b,// 238 PAY 202 

    0xd3fa9964,// 239 PAY 203 

    0x43dd68b9,// 240 PAY 204 

    0x1afd1265,// 241 PAY 205 

    0x3bb3d4d4,// 242 PAY 206 

    0xf4f7f3b4,// 243 PAY 207 

    0xcb51863a,// 244 PAY 208 

    0x67f95ecb,// 245 PAY 209 

    0x324e5292,// 246 PAY 210 

    0xff1078a7,// 247 PAY 211 

    0x5cf4b16e,// 248 PAY 212 

    0x9cc761e4,// 249 PAY 213 

    0x0d718da3,// 250 PAY 214 

    0x6cd36d18,// 251 PAY 215 

    0x147144bd,// 252 PAY 216 

    0xe20b2cb5,// 253 PAY 217 

    0x5d902b34,// 254 PAY 218 

    0xdbcd395b,// 255 PAY 219 

    0x347060f3,// 256 PAY 220 

    0x84dfc1f9,// 257 PAY 221 

    0xcee5921e,// 258 PAY 222 

    0x992a9239,// 259 PAY 223 

    0xa89b4a78,// 260 PAY 224 

    0x376fe45c,// 261 PAY 225 

    0x670ca631,// 262 PAY 226 

    0xc151850f,// 263 PAY 227 

    0xbee99544,// 264 PAY 228 

    0x9211b06f,// 265 PAY 229 

    0x85bc3ef2,// 266 PAY 230 

    0xf02b6ecd,// 267 PAY 231 

    0x2059a0a2,// 268 PAY 232 

    0x861e9ec3,// 269 PAY 233 

    0xb378ad21,// 270 PAY 234 

    0xa6643462,// 271 PAY 235 

    0x6ce982e3,// 272 PAY 236 

    0x0293a872,// 273 PAY 237 

    0x32995eec,// 274 PAY 238 

    0xc034a89e,// 275 PAY 239 

    0xd5542cc9,// 276 PAY 240 

    0x5da09039,// 277 PAY 241 

    0xdf634ac0,// 278 PAY 242 

    0x3516ab99,// 279 PAY 243 

    0xc47cbc23,// 280 PAY 244 

    0xd9649782,// 281 PAY 245 

    0x32028d2d,// 282 PAY 246 

    0xa08685f3,// 283 PAY 247 

    0xd8408d0c,// 284 PAY 248 

    0xfc164dfd,// 285 PAY 249 

    0xc3cdde75,// 286 PAY 250 

    0x00faaf99,// 287 PAY 251 

    0xded6c919,// 288 PAY 252 

    0x2356a441,// 289 PAY 253 

    0x3ccfc340,// 290 PAY 254 

    0x6903a6d1,// 291 PAY 255 

    0x7343ff13,// 292 PAY 256 

    0x0a9546f3,// 293 PAY 257 

    0x0ef429e2,// 294 PAY 258 

    0xd2f3ca73,// 295 PAY 259 

    0x429f789b,// 296 PAY 260 

    0xf9fcd9e5,// 297 PAY 261 

    0x83eb7146,// 298 PAY 262 

    0x14fe9aa0,// 299 PAY 263 

    0xfdc0e7ee,// 300 PAY 264 

    0x1e86febb,// 301 PAY 265 

    0xaf762605,// 302 PAY 266 

    0xf03db7f6,// 303 PAY 267 

    0x1b18fe76,// 304 PAY 268 

    0x52d511bc,// 305 PAY 269 

    0x0ee92347,// 306 PAY 270 

    0xd481b7ec,// 307 PAY 271 

    0x0f895230,// 308 PAY 272 

    0x0b8488a0,// 309 PAY 273 

    0xc548ba0f,// 310 PAY 274 

    0x5a7987d5,// 311 PAY 275 

    0xd7f4e0f8,// 312 PAY 276 

    0x82cfffe0,// 313 PAY 277 

    0x3441b6e3,// 314 PAY 278 

    0xa87fc5ae,// 315 PAY 279 

    0x6e584197,// 316 PAY 280 

    0x2784c0cb,// 317 PAY 281 

    0x4a1d6000,// 318 PAY 282 

    0xfc60aa81,// 319 PAY 283 

    0x3884d975,// 320 PAY 284 

    0x8572f701,// 321 PAY 285 

    0x494e5c5a,// 322 PAY 286 

    0x00d10d5f,// 323 PAY 287 

    0xe768713a,// 324 PAY 288 

    0x3f5dc95f,// 325 PAY 289 

    0x23aca171,// 326 PAY 290 

    0x071baae8,// 327 PAY 291 

    0x11bdd6f9,// 328 PAY 292 

    0x88a7bc68,// 329 PAY 293 

    0xe2d0c475,// 330 PAY 294 

    0x22eaab71,// 331 PAY 295 

    0x63079f27,// 332 PAY 296 

    0x7ce32da1,// 333 PAY 297 

    0x7ad60baa,// 334 PAY 298 

    0x28663f7c,// 335 PAY 299 

    0xe41e4603,// 336 PAY 300 

    0x0ffbf733,// 337 PAY 301 

    0x37799363,// 338 PAY 302 

    0x3c627bff,// 339 PAY 303 

    0x5a9c1be5,// 340 PAY 304 

    0x606c14b4,// 341 PAY 305 

    0xdc54bbd1,// 342 PAY 306 

    0x5fa18cda,// 343 PAY 307 

    0xb7267cd6,// 344 PAY 308 

    0x2fa46942,// 345 PAY 309 

    0xbe7cd425,// 346 PAY 310 

    0xc38ac45d,// 347 PAY 311 

    0x72a8c5b1,// 348 PAY 312 

    0x2a165073,// 349 PAY 313 

    0xdf7895da,// 350 PAY 314 

    0x2774c568,// 351 PAY 315 

    0x9718f502,// 352 PAY 316 

    0x89290550,// 353 PAY 317 

    0x939da5a4,// 354 PAY 318 

    0xacb07082,// 355 PAY 319 

    0x752b8970,// 356 PAY 320 

    0xe04e2647,// 357 PAY 321 

    0x00733700,// 358 PAY 322 

/// STA is 1 words. 

/// STA num_pkts       : 45 

/// STA pkt_idx        : 90 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xf 

    0x01690f2d // 359 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt80_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x0a 

/// ECH pdu_tag        : 0x00 

    0x000a0000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv insert_icv check_icv sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x00000011,// 3 SCX   1 

    0x80464842,// 4 SCX   2 

    0x000033c2,// 5 SCX   3 

    0xa799d1a3,// 6 SCX   4 

    0x72e92d8b,// 7 SCX   5 

    0xcc930e2c,// 8 SCX   6 

    0xd437e6da,// 9 SCX   7 

    0x47a1288b,// 10 SCX   8 

    0x499636fc,// 11 SCX   9 

    0xca2e54ad,// 12 SCX  10 

    0xfde7129d,// 13 SCX  11 

    0x21e3155d,// 14 SCX  12 

    0x588d88a6,// 15 SCX  13 

    0xc0d4bd87,// 16 SCX  14 

    0xa426f223,// 17 SCX  15 

    0x1619dc51,// 18 SCX  16 

    0x2ab359fb,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1748 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 513 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 513 

/// BFD lencrypto      : 16 

/// BFD ofstcrypto     : 492 

/// BFD (ofst+len)cry  : 508 

/// BFD ofstiv         : 288 

/// BFD ofsticv        : 1100 

    0x00000201,// 20 BFD   1 

    0x01ec0010,// 21 BFD   2 

    0x044c0120,// 22 BFD   3 

/// MFM is 2 words. 

/// MFM vldnibs        : 8 

    0x08004752,// 23 MFM   1 

    0x5a8c0000,// 24 MFM   2 

/// BDA is 438 words. 

/// BDA size     is 1748 (0x6d4) 

/// BDA id       is 0xcf5d 

    0x06d4cf5d,// 25 BDA   1 

/// PAY Generic Data size   : 1748 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x9eb8edda,// 26 PAY   1 

    0xa8cf3c8e,// 27 PAY   2 

    0x15b99ef9,// 28 PAY   3 

    0xdfac629c,// 29 PAY   4 

    0x7040633c,// 30 PAY   5 

    0xe5f2b7f8,// 31 PAY   6 

    0x0cb854ba,// 32 PAY   7 

    0xb7741103,// 33 PAY   8 

    0x8156c4c1,// 34 PAY   9 

    0x16286725,// 35 PAY  10 

    0x16d276d2,// 36 PAY  11 

    0x0d8dbd19,// 37 PAY  12 

    0x6e4bfade,// 38 PAY  13 

    0xd000def4,// 39 PAY  14 

    0x9cb4ebbd,// 40 PAY  15 

    0x80ff3c74,// 41 PAY  16 

    0x5936f5fe,// 42 PAY  17 

    0x9562435a,// 43 PAY  18 

    0xf1e2e251,// 44 PAY  19 

    0x57172034,// 45 PAY  20 

    0xd27e0edc,// 46 PAY  21 

    0xed5faf66,// 47 PAY  22 

    0x59412233,// 48 PAY  23 

    0x895f0336,// 49 PAY  24 

    0x23c5c0aa,// 50 PAY  25 

    0x31f8deec,// 51 PAY  26 

    0x3b4f6f75,// 52 PAY  27 

    0xa30f760e,// 53 PAY  28 

    0x69ec7430,// 54 PAY  29 

    0x82aa3970,// 55 PAY  30 

    0x94d941c3,// 56 PAY  31 

    0x6e446ca1,// 57 PAY  32 

    0x4635af4c,// 58 PAY  33 

    0xc7381dc5,// 59 PAY  34 

    0x55dabcf8,// 60 PAY  35 

    0x8082040d,// 61 PAY  36 

    0xd611b4b9,// 62 PAY  37 

    0x10f53a5a,// 63 PAY  38 

    0x8e3c078c,// 64 PAY  39 

    0x118ebe6c,// 65 PAY  40 

    0x4302fbb6,// 66 PAY  41 

    0x58bdb951,// 67 PAY  42 

    0x97ee2824,// 68 PAY  43 

    0x354a5099,// 69 PAY  44 

    0x332b2dab,// 70 PAY  45 

    0x1b3b6b13,// 71 PAY  46 

    0x3c952092,// 72 PAY  47 

    0xcf93b0d4,// 73 PAY  48 

    0xc426c46f,// 74 PAY  49 

    0x2c0e713b,// 75 PAY  50 

    0x04cb773a,// 76 PAY  51 

    0x52e88a24,// 77 PAY  52 

    0xda9e41ff,// 78 PAY  53 

    0x706533f0,// 79 PAY  54 

    0xccb1c430,// 80 PAY  55 

    0x86797484,// 81 PAY  56 

    0xadd517fe,// 82 PAY  57 

    0x5e643583,// 83 PAY  58 

    0xa0834d81,// 84 PAY  59 

    0xa68fe74c,// 85 PAY  60 

    0x29dbe5e2,// 86 PAY  61 

    0xe467e72d,// 87 PAY  62 

    0xa5c42125,// 88 PAY  63 

    0xcb03cb6e,// 89 PAY  64 

    0x75cb9a66,// 90 PAY  65 

    0x24bbe5dd,// 91 PAY  66 

    0x3f05d5e2,// 92 PAY  67 

    0xfe601717,// 93 PAY  68 

    0x9d60649b,// 94 PAY  69 

    0x74f28379,// 95 PAY  70 

    0x82c9deaf,// 96 PAY  71 

    0x13cc5c82,// 97 PAY  72 

    0x2c411448,// 98 PAY  73 

    0x92c113d1,// 99 PAY  74 

    0xba632ebf,// 100 PAY  75 

    0xe02ff658,// 101 PAY  76 

    0x7f3d5b7d,// 102 PAY  77 

    0x3a09eec3,// 103 PAY  78 

    0xcbf1deb2,// 104 PAY  79 

    0xb49f993a,// 105 PAY  80 

    0x5ce3d0dd,// 106 PAY  81 

    0xb53817c5,// 107 PAY  82 

    0xf698ceb0,// 108 PAY  83 

    0xc6766113,// 109 PAY  84 

    0xddcdab5b,// 110 PAY  85 

    0xadec1e70,// 111 PAY  86 

    0x96479cda,// 112 PAY  87 

    0xb431aa22,// 113 PAY  88 

    0x132a544e,// 114 PAY  89 

    0xfb78a1a8,// 115 PAY  90 

    0x22d82d45,// 116 PAY  91 

    0x67d8fdad,// 117 PAY  92 

    0xcfa030b9,// 118 PAY  93 

    0x9a16c319,// 119 PAY  94 

    0x2f3a5478,// 120 PAY  95 

    0x2374aac3,// 121 PAY  96 

    0x8ab60de3,// 122 PAY  97 

    0x13d71835,// 123 PAY  98 

    0xf86c920a,// 124 PAY  99 

    0xf3217782,// 125 PAY 100 

    0xe009e839,// 126 PAY 101 

    0x7f47abbd,// 127 PAY 102 

    0xde42ca9f,// 128 PAY 103 

    0x586cef52,// 129 PAY 104 

    0x6554a9aa,// 130 PAY 105 

    0xbe9bb724,// 131 PAY 106 

    0x7964ed60,// 132 PAY 107 

    0xdaddf3b3,// 133 PAY 108 

    0x5f948027,// 134 PAY 109 

    0x1c6f8b99,// 135 PAY 110 

    0x594f59ec,// 136 PAY 111 

    0x9fbc5145,// 137 PAY 112 

    0xfe8cb550,// 138 PAY 113 

    0x43893178,// 139 PAY 114 

    0x68836899,// 140 PAY 115 

    0xa6a891d6,// 141 PAY 116 

    0xae0b86cc,// 142 PAY 117 

    0xe6e9eb05,// 143 PAY 118 

    0x7b6b0bff,// 144 PAY 119 

    0xbac9fc98,// 145 PAY 120 

    0xdea3de6a,// 146 PAY 121 

    0x8492a91b,// 147 PAY 122 

    0xb6c50a3d,// 148 PAY 123 

    0x9bdf31cb,// 149 PAY 124 

    0x3f94db98,// 150 PAY 125 

    0x24d980e2,// 151 PAY 126 

    0xa67cc338,// 152 PAY 127 

    0x024a971a,// 153 PAY 128 

    0xe3b805b5,// 154 PAY 129 

    0x29aa10e0,// 155 PAY 130 

    0x6b710610,// 156 PAY 131 

    0xf63436ae,// 157 PAY 132 

    0xc4dd50cc,// 158 PAY 133 

    0xf54ec43d,// 159 PAY 134 

    0x8e71d3ba,// 160 PAY 135 

    0x3a63e8e0,// 161 PAY 136 

    0x8ea8f3a4,// 162 PAY 137 

    0x769f962b,// 163 PAY 138 

    0xd8fa233a,// 164 PAY 139 

    0x8dc2da27,// 165 PAY 140 

    0x940cee2e,// 166 PAY 141 

    0xc5a1de9b,// 167 PAY 142 

    0x66e2c30d,// 168 PAY 143 

    0x537614c9,// 169 PAY 144 

    0x10e62497,// 170 PAY 145 

    0xeeb49950,// 171 PAY 146 

    0x8435c15f,// 172 PAY 147 

    0x317017f6,// 173 PAY 148 

    0x5bed7c2e,// 174 PAY 149 

    0x18d3dc05,// 175 PAY 150 

    0xe45fb695,// 176 PAY 151 

    0xaba8c706,// 177 PAY 152 

    0x2e8baa42,// 178 PAY 153 

    0xbc418d19,// 179 PAY 154 

    0x31fad492,// 180 PAY 155 

    0xcceb9f3e,// 181 PAY 156 

    0xbe143f88,// 182 PAY 157 

    0x10b9d527,// 183 PAY 158 

    0x0de0615a,// 184 PAY 159 

    0xebeb30cc,// 185 PAY 160 

    0x521486cf,// 186 PAY 161 

    0x9af00c27,// 187 PAY 162 

    0xfb78c2d8,// 188 PAY 163 

    0x623585e7,// 189 PAY 164 

    0x1f508a35,// 190 PAY 165 

    0x76730218,// 191 PAY 166 

    0xd1317ab1,// 192 PAY 167 

    0x567f10e4,// 193 PAY 168 

    0x1b36c02d,// 194 PAY 169 

    0x08e016a3,// 195 PAY 170 

    0xeb7e44bf,// 196 PAY 171 

    0x636e253d,// 197 PAY 172 

    0x4396da5a,// 198 PAY 173 

    0xc181ea9a,// 199 PAY 174 

    0x2d3b57ab,// 200 PAY 175 

    0xd22a02f9,// 201 PAY 176 

    0x0a8f2240,// 202 PAY 177 

    0x17c18144,// 203 PAY 178 

    0xc3e0ada1,// 204 PAY 179 

    0xad3c52aa,// 205 PAY 180 

    0xc939adc7,// 206 PAY 181 

    0x53a7c5f3,// 207 PAY 182 

    0x343e3eac,// 208 PAY 183 

    0x07fa9ac5,// 209 PAY 184 

    0xdf9d4abf,// 210 PAY 185 

    0x1aa063a1,// 211 PAY 186 

    0xe88ed1e4,// 212 PAY 187 

    0xc34f2b53,// 213 PAY 188 

    0x33d10184,// 214 PAY 189 

    0x623cbec1,// 215 PAY 190 

    0xd5dbca9d,// 216 PAY 191 

    0x9424da99,// 217 PAY 192 

    0x7858b773,// 218 PAY 193 

    0x15097ee7,// 219 PAY 194 

    0x2f8d8594,// 220 PAY 195 

    0xb70bd23b,// 221 PAY 196 

    0x88602dbd,// 222 PAY 197 

    0x285e8169,// 223 PAY 198 

    0xf3e9bd9b,// 224 PAY 199 

    0xdf9754d2,// 225 PAY 200 

    0xb9db87a2,// 226 PAY 201 

    0x86040217,// 227 PAY 202 

    0xd16007e4,// 228 PAY 203 

    0x3b1d1e59,// 229 PAY 204 

    0xa031ad82,// 230 PAY 205 

    0xd9b4cc97,// 231 PAY 206 

    0x80a35ca0,// 232 PAY 207 

    0x8f245fba,// 233 PAY 208 

    0xc0d4f5a7,// 234 PAY 209 

    0xe607650e,// 235 PAY 210 

    0x7023d959,// 236 PAY 211 

    0xae43e514,// 237 PAY 212 

    0xdc53d9b8,// 238 PAY 213 

    0x03ea3e82,// 239 PAY 214 

    0x60d4bccb,// 240 PAY 215 

    0x99622489,// 241 PAY 216 

    0xeb6c3458,// 242 PAY 217 

    0x99720159,// 243 PAY 218 

    0x4724d605,// 244 PAY 219 

    0x1dc8b1d4,// 245 PAY 220 

    0x6ebad712,// 246 PAY 221 

    0xe42241c5,// 247 PAY 222 

    0x5948f633,// 248 PAY 223 

    0x25265d36,// 249 PAY 224 

    0x961964dd,// 250 PAY 225 

    0x756f372d,// 251 PAY 226 

    0x986d2bd9,// 252 PAY 227 

    0xc0937062,// 253 PAY 228 

    0xca018cf0,// 254 PAY 229 

    0x98a44638,// 255 PAY 230 

    0xb59c0ac7,// 256 PAY 231 

    0xb9924983,// 257 PAY 232 

    0xb0c8b555,// 258 PAY 233 

    0xa4cc5f6e,// 259 PAY 234 

    0x96cb929a,// 260 PAY 235 

    0xa9f9f95c,// 261 PAY 236 

    0x8daf86cf,// 262 PAY 237 

    0x1a7c20c8,// 263 PAY 238 

    0xb1b60d0c,// 264 PAY 239 

    0x2b554c84,// 265 PAY 240 

    0x10e31230,// 266 PAY 241 

    0x8ba22332,// 267 PAY 242 

    0xcb46a029,// 268 PAY 243 

    0x9dbedcfc,// 269 PAY 244 

    0xadb4988c,// 270 PAY 245 

    0xa4e92bd7,// 271 PAY 246 

    0xdee07436,// 272 PAY 247 

    0xd17fffcb,// 273 PAY 248 

    0xe2ef5730,// 274 PAY 249 

    0x17080d11,// 275 PAY 250 

    0x9ef9ff22,// 276 PAY 251 

    0x99459a19,// 277 PAY 252 

    0x9d48c20e,// 278 PAY 253 

    0xb7257d77,// 279 PAY 254 

    0xa8baf3f9,// 280 PAY 255 

    0xe762f1ba,// 281 PAY 256 

    0x5affb523,// 282 PAY 257 

    0x54a2b300,// 283 PAY 258 

    0xee7e71d9,// 284 PAY 259 

    0x2857a653,// 285 PAY 260 

    0xfc7e6cdb,// 286 PAY 261 

    0x118f31c6,// 287 PAY 262 

    0xe88ea549,// 288 PAY 263 

    0xa46a3709,// 289 PAY 264 

    0xd650139e,// 290 PAY 265 

    0xc41a7d2b,// 291 PAY 266 

    0xb838011b,// 292 PAY 267 

    0x5ce2d841,// 293 PAY 268 

    0x996c8b92,// 294 PAY 269 

    0xd918350f,// 295 PAY 270 

    0xe74866d1,// 296 PAY 271 

    0x276cf890,// 297 PAY 272 

    0x0590eb8d,// 298 PAY 273 

    0xa2f86e69,// 299 PAY 274 

    0xd45ef1e0,// 300 PAY 275 

    0x1da02d09,// 301 PAY 276 

    0x59216f16,// 302 PAY 277 

    0xfb3846b3,// 303 PAY 278 

    0x29548b55,// 304 PAY 279 

    0xc6eb2328,// 305 PAY 280 

    0xbaaa31d7,// 306 PAY 281 

    0xca024a53,// 307 PAY 282 

    0x475973ad,// 308 PAY 283 

    0x06c8fe74,// 309 PAY 284 

    0x31450756,// 310 PAY 285 

    0x5c7098f2,// 311 PAY 286 

    0x3663d52e,// 312 PAY 287 

    0xc1522d50,// 313 PAY 288 

    0xad5217ba,// 314 PAY 289 

    0xc8755afa,// 315 PAY 290 

    0x368c7622,// 316 PAY 291 

    0x2e87a51b,// 317 PAY 292 

    0xfa97cbb9,// 318 PAY 293 

    0x1986a696,// 319 PAY 294 

    0x3cd0a802,// 320 PAY 295 

    0x00d3ac23,// 321 PAY 296 

    0xb258a197,// 322 PAY 297 

    0xe29b1f2f,// 323 PAY 298 

    0xf73a015d,// 324 PAY 299 

    0x7611c9e1,// 325 PAY 300 

    0xa29d69b3,// 326 PAY 301 

    0x896a57ac,// 327 PAY 302 

    0x3eaee271,// 328 PAY 303 

    0xf0872f02,// 329 PAY 304 

    0x68da8af5,// 330 PAY 305 

    0x0149de5e,// 331 PAY 306 

    0x7a4aa272,// 332 PAY 307 

    0x2fcf4cc5,// 333 PAY 308 

    0xa32e6034,// 334 PAY 309 

    0xf939e570,// 335 PAY 310 

    0x5ae9709a,// 336 PAY 311 

    0x37290729,// 337 PAY 312 

    0xe27d6154,// 338 PAY 313 

    0x573dbb0e,// 339 PAY 314 

    0x7fe132d0,// 340 PAY 315 

    0x469e6318,// 341 PAY 316 

    0x0cf2b0f9,// 342 PAY 317 

    0xa72977d2,// 343 PAY 318 

    0x7d37d0d4,// 344 PAY 319 

    0xac9d1a77,// 345 PAY 320 

    0xfbbaabdb,// 346 PAY 321 

    0x00e75740,// 347 PAY 322 

    0xac1a0f9d,// 348 PAY 323 

    0xa9588fa8,// 349 PAY 324 

    0x455ca353,// 350 PAY 325 

    0x8b7fe34e,// 351 PAY 326 

    0x16ed5286,// 352 PAY 327 

    0xe7b7edc7,// 353 PAY 328 

    0xab0d6ec3,// 354 PAY 329 

    0x393b4d33,// 355 PAY 330 

    0xc0f2ed49,// 356 PAY 331 

    0x4459f623,// 357 PAY 332 

    0x1c41e7e4,// 358 PAY 333 

    0x49232bc0,// 359 PAY 334 

    0x2f774fc4,// 360 PAY 335 

    0xc57af5da,// 361 PAY 336 

    0x5a64080f,// 362 PAY 337 

    0x9794249d,// 363 PAY 338 

    0x7659b79e,// 364 PAY 339 

    0x8edfa118,// 365 PAY 340 

    0xe3a3039a,// 366 PAY 341 

    0x5e71a979,// 367 PAY 342 

    0x35e6b41d,// 368 PAY 343 

    0xb9db8b76,// 369 PAY 344 

    0x00220556,// 370 PAY 345 

    0x601a3a3e,// 371 PAY 346 

    0x406b2fcb,// 372 PAY 347 

    0x9ba5f5e5,// 373 PAY 348 

    0x0d0b97da,// 374 PAY 349 

    0xbc40269c,// 375 PAY 350 

    0xa6bc5c69,// 376 PAY 351 

    0x1f84b679,// 377 PAY 352 

    0xf675352e,// 378 PAY 353 

    0xa16c0b27,// 379 PAY 354 

    0x9d2b06bf,// 380 PAY 355 

    0x3a801c45,// 381 PAY 356 

    0xbf0f16b1,// 382 PAY 357 

    0x0e4de8bc,// 383 PAY 358 

    0x8f63df05,// 384 PAY 359 

    0xbf2ba1bd,// 385 PAY 360 

    0xda616aec,// 386 PAY 361 

    0x1cf31104,// 387 PAY 362 

    0xcb59afa8,// 388 PAY 363 

    0x48baafbe,// 389 PAY 364 

    0x4e1ca358,// 390 PAY 365 

    0x398a480f,// 391 PAY 366 

    0xdd6bd614,// 392 PAY 367 

    0xd1c818d7,// 393 PAY 368 

    0xa8765f23,// 394 PAY 369 

    0xaaf16b14,// 395 PAY 370 

    0x19240aa0,// 396 PAY 371 

    0xea66c591,// 397 PAY 372 

    0xc2f33cb0,// 398 PAY 373 

    0x1aae809b,// 399 PAY 374 

    0x39e47c36,// 400 PAY 375 

    0xcec22f86,// 401 PAY 376 

    0x64581cb3,// 402 PAY 377 

    0xea1a5844,// 403 PAY 378 

    0xb91cfb8e,// 404 PAY 379 

    0xa1005c4c,// 405 PAY 380 

    0x4e36621c,// 406 PAY 381 

    0x063a8cdd,// 407 PAY 382 

    0x9a488820,// 408 PAY 383 

    0x5c4dbd85,// 409 PAY 384 

    0xdedfc6f7,// 410 PAY 385 

    0xad661a33,// 411 PAY 386 

    0xe21ddd97,// 412 PAY 387 

    0xa041aa06,// 413 PAY 388 

    0x7ac8703f,// 414 PAY 389 

    0x4bda2cc5,// 415 PAY 390 

    0x15e98f13,// 416 PAY 391 

    0x96a715bc,// 417 PAY 392 

    0x3ac6e9dd,// 418 PAY 393 

    0x7ea8a8d2,// 419 PAY 394 

    0xd7c14b90,// 420 PAY 395 

    0x037ccff0,// 421 PAY 396 

    0x6688ba51,// 422 PAY 397 

    0x025a28f2,// 423 PAY 398 

    0x4c2cb6c1,// 424 PAY 399 

    0x461b90dd,// 425 PAY 400 

    0x949721a4,// 426 PAY 401 

    0x97a08994,// 427 PAY 402 

    0xf48e479e,// 428 PAY 403 

    0x21527ad6,// 429 PAY 404 

    0xe91437a4,// 430 PAY 405 

    0xf89f161f,// 431 PAY 406 

    0xff154feb,// 432 PAY 407 

    0xdd0c7a92,// 433 PAY 408 

    0x1b2af819,// 434 PAY 409 

    0x06f19ce8,// 435 PAY 410 

    0x318ee3e9,// 436 PAY 411 

    0x3aa7f6f4,// 437 PAY 412 

    0xfe48d50f,// 438 PAY 413 

    0x9b7b950f,// 439 PAY 414 

    0x6b9859f8,// 440 PAY 415 

    0x3167f33a,// 441 PAY 416 

    0x362e2ad7,// 442 PAY 417 

    0x20cabdd3,// 443 PAY 418 

    0xe8052a12,// 444 PAY 419 

    0x362c3327,// 445 PAY 420 

    0x97c1ca03,// 446 PAY 421 

    0x23a59869,// 447 PAY 422 

    0xa22c3794,// 448 PAY 423 

    0x9fce7470,// 449 PAY 424 

    0x12f8e275,// 450 PAY 425 

    0x24547ca1,// 451 PAY 426 

    0x5ab73dd8,// 452 PAY 427 

    0x0786db4e,// 453 PAY 428 

    0x701f0304,// 454 PAY 429 

    0x95ebf6e7,// 455 PAY 430 

    0x24531661,// 456 PAY 431 

    0x9c7f1382,// 457 PAY 432 

    0x54974523,// 458 PAY 433 

    0x868c3e98,// 459 PAY 434 

    0x96bea438,// 460 PAY 435 

    0xbe40792f,// 461 PAY 436 

    0xdde9a14f,// 462 PAY 437 

/// STA is 1 words. 

/// STA num_pkts       : 133 

/// STA pkt_idx        : 255 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x4 

    0x03fc0485 // 463 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt81_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x0e 

/// ECH pdu_tag        : 0x00 

    0x000e0000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0800000f,// 3 SCX   1 

    0x8041481c,// 4 SCX   2 

    0x00003100,// 5 SCX   3 

    0x2b97ce31,// 6 SCX   4 

    0x6880199f,// 7 SCX   5 

    0xbf4c01b2,// 8 SCX   6 

    0x23d2faf2,// 9 SCX   7 

    0xf3b5bc4e,// 10 SCX   8 

    0x66bf601c,// 11 SCX   9 

    0x21035ad7,// 12 SCX  10 

    0x7e2cfba9,// 13 SCX  11 

    0xfb880789,// 14 SCX  12 

    0xf17a91e8,// 15 SCX  13 

    0x689ebd6a,// 16 SCX  14 

    0x1d731e1a,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 210 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 134 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 134 

/// BFD lencrypto      : 16 

/// BFD ofstcrypto     : 52 

/// BFD (ofst+len)cry  : 68 

/// BFD ofstiv         : 32 

/// BFD ofsticv        : 140 

    0x00000086,// 18 BFD   1 

    0x00340010,// 19 BFD   2 

    0x008c0020,// 20 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : 10 

    0x10003397,// 21 MFM   1 

    0x2c6a4029,// 22 MFM   2 

    0x3cb50000,// 23 MFM   3 

/// BDA is 54 words. 

/// BDA size     is 210 (0xd2) 

/// BDA id       is 0xe599 

    0x00d2e599,// 24 BDA   1 

/// PAY Generic Data size   : 210 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x35f8108d,// 25 PAY   1 

    0xf2c9a7cc,// 26 PAY   2 

    0x977c7ef9,// 27 PAY   3 

    0x4b7ee154,// 28 PAY   4 

    0xa60ca1a1,// 29 PAY   5 

    0xb5182951,// 30 PAY   6 

    0x51653ee6,// 31 PAY   7 

    0xb087a969,// 32 PAY   8 

    0x46f6ee49,// 33 PAY   9 

    0x84ad570c,// 34 PAY  10 

    0xb07cd3d0,// 35 PAY  11 

    0xf9dd2feb,// 36 PAY  12 

    0x8a6421ef,// 37 PAY  13 

    0x1964e98a,// 38 PAY  14 

    0x58695014,// 39 PAY  15 

    0x8f9808e2,// 40 PAY  16 

    0xa6d5276a,// 41 PAY  17 

    0x8da70b34,// 42 PAY  18 

    0x2d974a3d,// 43 PAY  19 

    0xbee534dc,// 44 PAY  20 

    0x77a29560,// 45 PAY  21 

    0x3532d411,// 46 PAY  22 

    0xb10792ed,// 47 PAY  23 

    0xff7e1d21,// 48 PAY  24 

    0x57167ede,// 49 PAY  25 

    0x4b82c125,// 50 PAY  26 

    0x79e5f0e9,// 51 PAY  27 

    0xb7e56798,// 52 PAY  28 

    0x4471561f,// 53 PAY  29 

    0x0b96b0cf,// 54 PAY  30 

    0x60922cc7,// 55 PAY  31 

    0x343df9d9,// 56 PAY  32 

    0x729f2523,// 57 PAY  33 

    0xfec0dc78,// 58 PAY  34 

    0xdbb687f5,// 59 PAY  35 

    0x7fe3ffd8,// 60 PAY  36 

    0x4e1e14d1,// 61 PAY  37 

    0x56e85325,// 62 PAY  38 

    0x3f2e30ba,// 63 PAY  39 

    0xe375a7d6,// 64 PAY  40 

    0x424856bf,// 65 PAY  41 

    0x404e8288,// 66 PAY  42 

    0x52c00c2b,// 67 PAY  43 

    0xb59f013d,// 68 PAY  44 

    0x87d386b8,// 69 PAY  45 

    0x9a331e3f,// 70 PAY  46 

    0x279d83da,// 71 PAY  47 

    0x5c4c3a20,// 72 PAY  48 

    0x5958381c,// 73 PAY  49 

    0x40f49251,// 74 PAY  50 

    0x9897757d,// 75 PAY  51 

    0x53a98f19,// 76 PAY  52 

    0x054e0000,// 77 PAY  53 

/// STA is 1 words. 

/// STA num_pkts       : 210 

/// STA pkt_idx        : 251 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x1f 

    0x03ed1fd2 // 78 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt82_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x06 

/// ECH pdu_tag        : 0x00 

    0x00060000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv !insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0800000f,// 3 SCX   1 

    0x804248ab,// 4 SCX   2 

    0x00000400,// 5 SCX   3 

    0xf5e22d6c,// 6 SCX   4 

    0xe5f8da85,// 7 SCX   5 

    0xef2714fc,// 8 SCX   6 

    0xc95c8924,// 9 SCX   7 

    0x8d886b35,// 10 SCX   8 

    0xb8b4fe93,// 11 SCX   9 

    0x75140ae2,// 12 SCX  10 

    0x4ba6cc6a,// 13 SCX  11 

    0x40cae6e1,// 14 SCX  12 

    0x71c18d5d,// 15 SCX  13 

    0x5cab186b,// 16 SCX  14 

    0x03534e7a,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 616 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 283 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 283 

/// BFD lencrypto      : 24 

/// BFD ofstcrypto     : 236 

/// BFD (ofst+len)cry  : 260 

/// BFD ofstiv         : 136 

/// BFD ofsticv        : 308 

    0x0000011b,// 18 BFD   1 

    0x00ec0018,// 19 BFD   2 

    0x01340088,// 20 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : f 

    0x0f00bcb0,// 21 MFM   1 

    0xdb868951,// 22 MFM   2 

    0xb4300000,// 23 MFM   3 

/// BDA is 155 words. 

/// BDA size     is 616 (0x268) 

/// BDA id       is 0x8517 

    0x02688517,// 24 BDA   1 

/// PAY Generic Data size   : 616 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x33812981,// 25 PAY   1 

    0x3f00df34,// 26 PAY   2 

    0x77ea94bc,// 27 PAY   3 

    0x7e15ce08,// 28 PAY   4 

    0x66c27f93,// 29 PAY   5 

    0x92c7b865,// 30 PAY   6 

    0xac536fc1,// 31 PAY   7 

    0x8f5c2a00,// 32 PAY   8 

    0xaf5b064d,// 33 PAY   9 

    0x91d0ba47,// 34 PAY  10 

    0x4c0bd185,// 35 PAY  11 

    0x2ae63cae,// 36 PAY  12 

    0x2e3b9a20,// 37 PAY  13 

    0x7571dfaf,// 38 PAY  14 

    0xa28488bf,// 39 PAY  15 

    0xd2fd3cfd,// 40 PAY  16 

    0xa6d462bb,// 41 PAY  17 

    0x7f2da2ef,// 42 PAY  18 

    0x82569725,// 43 PAY  19 

    0xe4ceb625,// 44 PAY  20 

    0xebb3855e,// 45 PAY  21 

    0xfbefbd57,// 46 PAY  22 

    0x465be8c6,// 47 PAY  23 

    0x2eccbbd8,// 48 PAY  24 

    0xf4740ede,// 49 PAY  25 

    0x70b08037,// 50 PAY  26 

    0xaa34bfe7,// 51 PAY  27 

    0x63f7d82c,// 52 PAY  28 

    0x60419cb7,// 53 PAY  29 

    0x7aaf6b07,// 54 PAY  30 

    0x030f71a9,// 55 PAY  31 

    0xe0c1fc16,// 56 PAY  32 

    0xaf5290fa,// 57 PAY  33 

    0xd0e0404d,// 58 PAY  34 

    0x7117fcad,// 59 PAY  35 

    0x76ed0e52,// 60 PAY  36 

    0xac3ca39c,// 61 PAY  37 

    0xfa711a06,// 62 PAY  38 

    0xba1d6117,// 63 PAY  39 

    0x1d943811,// 64 PAY  40 

    0x36e9e4c8,// 65 PAY  41 

    0xbf672ac8,// 66 PAY  42 

    0x4ddbf050,// 67 PAY  43 

    0xaa7deae7,// 68 PAY  44 

    0xfab57244,// 69 PAY  45 

    0x88688c56,// 70 PAY  46 

    0x6ade3304,// 71 PAY  47 

    0xb6b263f8,// 72 PAY  48 

    0xbbf3d729,// 73 PAY  49 

    0x4ebfed49,// 74 PAY  50 

    0x694676e1,// 75 PAY  51 

    0x7145dd79,// 76 PAY  52 

    0x5993cb10,// 77 PAY  53 

    0x93867cd5,// 78 PAY  54 

    0x471a81f0,// 79 PAY  55 

    0x705c8e99,// 80 PAY  56 

    0x9e2a9e94,// 81 PAY  57 

    0x730033fb,// 82 PAY  58 

    0x580dd81f,// 83 PAY  59 

    0x58f73dd6,// 84 PAY  60 

    0x06366e90,// 85 PAY  61 

    0xd2d2fecc,// 86 PAY  62 

    0x27551dd2,// 87 PAY  63 

    0xc14c201f,// 88 PAY  64 

    0xb1a9a066,// 89 PAY  65 

    0x817ea6fd,// 90 PAY  66 

    0x5a283f95,// 91 PAY  67 

    0x4111666c,// 92 PAY  68 

    0x5738c89f,// 93 PAY  69 

    0x41cc9042,// 94 PAY  70 

    0xb5993a1e,// 95 PAY  71 

    0x6551e9cb,// 96 PAY  72 

    0xa0a3031b,// 97 PAY  73 

    0x6a29a424,// 98 PAY  74 

    0x814d27ff,// 99 PAY  75 

    0x2ddce56b,// 100 PAY  76 

    0x9c5b6e42,// 101 PAY  77 

    0x730e7f9e,// 102 PAY  78 

    0x3ca77e6b,// 103 PAY  79 

    0x7d862b99,// 104 PAY  80 

    0x4394a8eb,// 105 PAY  81 

    0xdc282878,// 106 PAY  82 

    0xd1733c0f,// 107 PAY  83 

    0x4af923e8,// 108 PAY  84 

    0x92aa0ef7,// 109 PAY  85 

    0x08a57c77,// 110 PAY  86 

    0x87b57936,// 111 PAY  87 

    0xe4218da0,// 112 PAY  88 

    0xaa2b156a,// 113 PAY  89 

    0x7fd9ef9a,// 114 PAY  90 

    0x97b9ac02,// 115 PAY  91 

    0xa9b47cbb,// 116 PAY  92 

    0xbbac6b5f,// 117 PAY  93 

    0xe8ff30d5,// 118 PAY  94 

    0x60f6bf8b,// 119 PAY  95 

    0x66d100e9,// 120 PAY  96 

    0x6a19c051,// 121 PAY  97 

    0x078bb5ea,// 122 PAY  98 

    0x2651b00b,// 123 PAY  99 

    0xd2c58557,// 124 PAY 100 

    0xe4e37923,// 125 PAY 101 

    0x9c116715,// 126 PAY 102 

    0x7d14d517,// 127 PAY 103 

    0xb08f0700,// 128 PAY 104 

    0xfd8b2d9e,// 129 PAY 105 

    0x4830797c,// 130 PAY 106 

    0x373aa817,// 131 PAY 107 

    0xf447c14a,// 132 PAY 108 

    0x0ee02168,// 133 PAY 109 

    0x58a7dd5e,// 134 PAY 110 

    0x73874fe4,// 135 PAY 111 

    0x38b11290,// 136 PAY 112 

    0x80980dab,// 137 PAY 113 

    0x0b1fac69,// 138 PAY 114 

    0x094b5e5f,// 139 PAY 115 

    0x1242739e,// 140 PAY 116 

    0x78029f6d,// 141 PAY 117 

    0x634055a2,// 142 PAY 118 

    0xb21bdf92,// 143 PAY 119 

    0x97a65fc2,// 144 PAY 120 

    0xdcbf2bce,// 145 PAY 121 

    0x4c57c68a,// 146 PAY 122 

    0xb2796f3f,// 147 PAY 123 

    0x19c5ea39,// 148 PAY 124 

    0xd7f4d165,// 149 PAY 125 

    0x195c721d,// 150 PAY 126 

    0xb263fc2a,// 151 PAY 127 

    0x3e856e31,// 152 PAY 128 

    0xe5f23b95,// 153 PAY 129 

    0xeb6adb09,// 154 PAY 130 

    0x42e7a1c5,// 155 PAY 131 

    0x34d88ce8,// 156 PAY 132 

    0xc34a8835,// 157 PAY 133 

    0xcd649757,// 158 PAY 134 

    0xa409359d,// 159 PAY 135 

    0x39e3f3fa,// 160 PAY 136 

    0x1fb6db10,// 161 PAY 137 

    0x7dc17ed3,// 162 PAY 138 

    0x48cb5044,// 163 PAY 139 

    0x2e25e8d7,// 164 PAY 140 

    0x36e9acd5,// 165 PAY 141 

    0x020fdf8c,// 166 PAY 142 

    0xfa6e8f30,// 167 PAY 143 

    0xda581872,// 168 PAY 144 

    0x6309debf,// 169 PAY 145 

    0x14593f2d,// 170 PAY 146 

    0xefe2d02e,// 171 PAY 147 

    0x399f9d6d,// 172 PAY 148 

    0x7e665049,// 173 PAY 149 

    0x1e2635b7,// 174 PAY 150 

    0x9dab7e90,// 175 PAY 151 

    0xeb8e119e,// 176 PAY 152 

    0x1d60c070,// 177 PAY 153 

    0xc5454d54,// 178 PAY 154 

/// STA is 1 words. 

/// STA num_pkts       : 81 

/// STA pkt_idx        : 247 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xdc 

    0x03dcdc51 // 179 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt83_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x0f 

/// ECH pdu_tag        : 0x00 

    0x000f0000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv !check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x08000011,// 3 SCX   1 

    0x80444853,// 4 SCX   2 

    0x00002382,// 5 SCX   3 

    0xeb6454c7,// 6 SCX   4 

    0x02b9fa5f,// 7 SCX   5 

    0x8685e038,// 8 SCX   6 

    0x45d32e24,// 9 SCX   7 

    0x4e2366c1,// 10 SCX   8 

    0x0ab13862,// 11 SCX   9 

    0xeeed615f,// 12 SCX  10 

    0xe92ebc57,// 13 SCX  11 

    0xc538e765,// 14 SCX  12 

    0x7e39a1bf,// 15 SCX  13 

    0x2baf3de6,// 16 SCX  14 

    0x4a8e2aa9,// 17 SCX  15 

    0xde70bc25,// 18 SCX  16 

    0x39eb700d,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1946 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1746 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1746 

/// BFD lencrypto      : 272 

/// BFD ofstcrypto     : 1248 

/// BFD (ofst+len)cry  : 1520 

/// BFD ofstiv         : 408 

/// BFD ofsticv        : 1812 

    0x000006d2,// 20 BFD   1 

    0x04e00110,// 21 BFD   2 

    0x07140198,// 22 BFD   3 

/// MFM is 14 words. 

/// MFM vldnibs        : 68 

    0x68008b2a,// 23 MFM   1 

    0xcdc8f0ef,// 24 MFM   2 

    0x18a94412,// 25 MFM   3 

    0x9902dca0,// 26 MFM   4 

    0x29e445f6,// 27 MFM   5 

    0x28602b6b,// 28 MFM   6 

    0x16dc4393,// 29 MFM   7 

    0x84716c95,// 30 MFM   8 

    0x8a178de2,// 31 MFM   9 

    0x044b826a,// 32 MFM  10 

    0x37dc448e,// 33 MFM  11 

    0x441f1151,// 34 MFM  12 

    0xc4ca4814,// 35 MFM  13 

    0xfffb0000,// 36 MFM  14 

/// BDA is 488 words. 

/// BDA size     is 1946 (0x79a) 

/// BDA id       is 0x8d6d 

    0x079a8d6d,// 37 BDA   1 

/// PAY Generic Data size   : 1946 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x369000fe,// 38 PAY   1 

    0x4b96fdda,// 39 PAY   2 

    0xf1125a51,// 40 PAY   3 

    0x30dcf55b,// 41 PAY   4 

    0xb9a207c4,// 42 PAY   5 

    0xc8c9e3d8,// 43 PAY   6 

    0xfcf5f07e,// 44 PAY   7 

    0x5cbdc94b,// 45 PAY   8 

    0x4e5e51f4,// 46 PAY   9 

    0x82b72e84,// 47 PAY  10 

    0x31ec8c8f,// 48 PAY  11 

    0xa098be60,// 49 PAY  12 

    0x155cde0b,// 50 PAY  13 

    0x7bc9d511,// 51 PAY  14 

    0xdfffd7c3,// 52 PAY  15 

    0xafa3cf61,// 53 PAY  16 

    0x03652780,// 54 PAY  17 

    0x8b296bf3,// 55 PAY  18 

    0x26844df6,// 56 PAY  19 

    0x90f73ce9,// 57 PAY  20 

    0x38ad34e7,// 58 PAY  21 

    0xe8fe61f4,// 59 PAY  22 

    0x896f79cb,// 60 PAY  23 

    0x9fc9e4a4,// 61 PAY  24 

    0x32205cad,// 62 PAY  25 

    0x8f010d42,// 63 PAY  26 

    0x04c4a0e7,// 64 PAY  27 

    0x40e35df3,// 65 PAY  28 

    0x2d6846a2,// 66 PAY  29 

    0xb342373a,// 67 PAY  30 

    0x5ec7f7be,// 68 PAY  31 

    0xabeaddce,// 69 PAY  32 

    0x95c5cc85,// 70 PAY  33 

    0xf1ab8ef0,// 71 PAY  34 

    0xc9bc788b,// 72 PAY  35 

    0x00ca02b4,// 73 PAY  36 

    0x19e631f6,// 74 PAY  37 

    0x808039ed,// 75 PAY  38 

    0x58597b2d,// 76 PAY  39 

    0xb9e63dec,// 77 PAY  40 

    0xe79ba792,// 78 PAY  41 

    0x193a98e4,// 79 PAY  42 

    0x0185e734,// 80 PAY  43 

    0xffb1b515,// 81 PAY  44 

    0x1117e0d8,// 82 PAY  45 

    0x4119eefe,// 83 PAY  46 

    0xe000ec93,// 84 PAY  47 

    0xacddf1f1,// 85 PAY  48 

    0x6cdb5a68,// 86 PAY  49 

    0x318954e4,// 87 PAY  50 

    0x27cb669d,// 88 PAY  51 

    0x7a51aa2b,// 89 PAY  52 

    0x9705d3df,// 90 PAY  53 

    0x2694cd72,// 91 PAY  54 

    0xa0fcc600,// 92 PAY  55 

    0xccd94411,// 93 PAY  56 

    0xdff2e8e0,// 94 PAY  57 

    0xebc87e88,// 95 PAY  58 

    0xe415feac,// 96 PAY  59 

    0xf9164741,// 97 PAY  60 

    0xa80090f3,// 98 PAY  61 

    0x82089177,// 99 PAY  62 

    0x1327e04e,// 100 PAY  63 

    0x84910e1c,// 101 PAY  64 

    0x7a93344c,// 102 PAY  65 

    0x92919e9b,// 103 PAY  66 

    0x6a4fe762,// 104 PAY  67 

    0x0d501787,// 105 PAY  68 

    0xf7f00a73,// 106 PAY  69 

    0x6e270bc8,// 107 PAY  70 

    0xe65f869e,// 108 PAY  71 

    0x4f2ab923,// 109 PAY  72 

    0x33c9322a,// 110 PAY  73 

    0xa4d96969,// 111 PAY  74 

    0x8dad229b,// 112 PAY  75 

    0xe6baaf19,// 113 PAY  76 

    0xc3590822,// 114 PAY  77 

    0x641ecc02,// 115 PAY  78 

    0x89f9cc60,// 116 PAY  79 

    0x31ef92ae,// 117 PAY  80 

    0xebc28077,// 118 PAY  81 

    0xe8c36d02,// 119 PAY  82 

    0x02af50a4,// 120 PAY  83 

    0x02379e75,// 121 PAY  84 

    0xec882d29,// 122 PAY  85 

    0xedfc20d6,// 123 PAY  86 

    0x193a46b6,// 124 PAY  87 

    0xe152f48f,// 125 PAY  88 

    0xb614b718,// 126 PAY  89 

    0xda96321f,// 127 PAY  90 

    0xff2c0631,// 128 PAY  91 

    0x2dca2849,// 129 PAY  92 

    0x45804a72,// 130 PAY  93 

    0xe939a65a,// 131 PAY  94 

    0xb225ca09,// 132 PAY  95 

    0x6c906495,// 133 PAY  96 

    0x4055e408,// 134 PAY  97 

    0xbde3b7a4,// 135 PAY  98 

    0xb33d552a,// 136 PAY  99 

    0xaa56404f,// 137 PAY 100 

    0x62c902b8,// 138 PAY 101 

    0x75841cc2,// 139 PAY 102 

    0x91f118d9,// 140 PAY 103 

    0xcd6ac39b,// 141 PAY 104 

    0xdc6bfaa1,// 142 PAY 105 

    0xa7e3a5f1,// 143 PAY 106 

    0x67da098f,// 144 PAY 107 

    0x675e03fc,// 145 PAY 108 

    0x132567c8,// 146 PAY 109 

    0x9bb4c358,// 147 PAY 110 

    0xd6256d53,// 148 PAY 111 

    0xf4c279fb,// 149 PAY 112 

    0xe6f8814c,// 150 PAY 113 

    0xe051f52e,// 151 PAY 114 

    0xb3a2d05c,// 152 PAY 115 

    0x20b625f3,// 153 PAY 116 

    0xdd497ed5,// 154 PAY 117 

    0xfe7de7bd,// 155 PAY 118 

    0xbaab08a2,// 156 PAY 119 

    0x09d8d62b,// 157 PAY 120 

    0x09cdbacb,// 158 PAY 121 

    0x1c948014,// 159 PAY 122 

    0x7eabce81,// 160 PAY 123 

    0xbdd34667,// 161 PAY 124 

    0x6d128835,// 162 PAY 125 

    0x34933532,// 163 PAY 126 

    0xec2f07df,// 164 PAY 127 

    0x397db6f8,// 165 PAY 128 

    0x26214287,// 166 PAY 129 

    0xe84ca959,// 167 PAY 130 

    0x85655109,// 168 PAY 131 

    0xaf926b40,// 169 PAY 132 

    0x0e45acc4,// 170 PAY 133 

    0xb7fe7dfe,// 171 PAY 134 

    0xd360bda9,// 172 PAY 135 

    0x225efab7,// 173 PAY 136 

    0xe432998e,// 174 PAY 137 

    0x3d343988,// 175 PAY 138 

    0x3c6f0c6c,// 176 PAY 139 

    0xa6560a3c,// 177 PAY 140 

    0xc909e3bc,// 178 PAY 141 

    0x8fe09e90,// 179 PAY 142 

    0xa8bf7869,// 180 PAY 143 

    0x9dcc0856,// 181 PAY 144 

    0x12cd75c6,// 182 PAY 145 

    0xb1230124,// 183 PAY 146 

    0xbf350e94,// 184 PAY 147 

    0xf33c06ff,// 185 PAY 148 

    0x0e992bbe,// 186 PAY 149 

    0x68026cfa,// 187 PAY 150 

    0xbeb00c00,// 188 PAY 151 

    0xd9d5b446,// 189 PAY 152 

    0x251495ae,// 190 PAY 153 

    0xe21ebe65,// 191 PAY 154 

    0x953f1c05,// 192 PAY 155 

    0x1e8b8018,// 193 PAY 156 

    0x97fea260,// 194 PAY 157 

    0x2899d8ab,// 195 PAY 158 

    0x51b54a3f,// 196 PAY 159 

    0x7156a0d3,// 197 PAY 160 

    0x3201ecac,// 198 PAY 161 

    0xa6fba62d,// 199 PAY 162 

    0x7cc4da2c,// 200 PAY 163 

    0x11b33937,// 201 PAY 164 

    0x3a9637ef,// 202 PAY 165 

    0x946e21db,// 203 PAY 166 

    0x3408c3c3,// 204 PAY 167 

    0xf10881d7,// 205 PAY 168 

    0x05315d62,// 206 PAY 169 

    0xbc13598c,// 207 PAY 170 

    0x908b54ca,// 208 PAY 171 

    0x15d65ef1,// 209 PAY 172 

    0xde5abfad,// 210 PAY 173 

    0x2d2fb85e,// 211 PAY 174 

    0x81c7b0e3,// 212 PAY 175 

    0x6874a7cc,// 213 PAY 176 

    0xa4935486,// 214 PAY 177 

    0x9c1232b3,// 215 PAY 178 

    0xcc1d6b7d,// 216 PAY 179 

    0x68b9e530,// 217 PAY 180 

    0x861a8810,// 218 PAY 181 

    0x09d13a71,// 219 PAY 182 

    0xa58b299e,// 220 PAY 183 

    0x86333f53,// 221 PAY 184 

    0xd2fd224e,// 222 PAY 185 

    0xe61054a4,// 223 PAY 186 

    0xd05ebe14,// 224 PAY 187 

    0x449e8475,// 225 PAY 188 

    0x6a47d23e,// 226 PAY 189 

    0xe5970ad2,// 227 PAY 190 

    0x01b36c4f,// 228 PAY 191 

    0x11bdefb1,// 229 PAY 192 

    0x191293be,// 230 PAY 193 

    0xda384203,// 231 PAY 194 

    0x0f1b0b11,// 232 PAY 195 

    0xbd765037,// 233 PAY 196 

    0x5203f550,// 234 PAY 197 

    0x4fa5eaee,// 235 PAY 198 

    0x5c66493b,// 236 PAY 199 

    0xb7ff3a15,// 237 PAY 200 

    0xe554d935,// 238 PAY 201 

    0x22aefd6e,// 239 PAY 202 

    0x13b2c711,// 240 PAY 203 

    0x4be5ab40,// 241 PAY 204 

    0xace4fca1,// 242 PAY 205 

    0xa2723b88,// 243 PAY 206 

    0xb3da3a8e,// 244 PAY 207 

    0xa39e525f,// 245 PAY 208 

    0x5d829026,// 246 PAY 209 

    0xb8969c1f,// 247 PAY 210 

    0xaf59f42d,// 248 PAY 211 

    0xdf1acc5a,// 249 PAY 212 

    0x92d8019c,// 250 PAY 213 

    0x38897b74,// 251 PAY 214 

    0x9a25214d,// 252 PAY 215 

    0xbb4fc6b0,// 253 PAY 216 

    0x4b5bfdd9,// 254 PAY 217 

    0xd7d590ea,// 255 PAY 218 

    0x2e48bb68,// 256 PAY 219 

    0x85c10865,// 257 PAY 220 

    0x294ced6c,// 258 PAY 221 

    0x8be1b730,// 259 PAY 222 

    0x07ac7eac,// 260 PAY 223 

    0xc53174c4,// 261 PAY 224 

    0x4e267279,// 262 PAY 225 

    0xaa71015e,// 263 PAY 226 

    0x2b9a6115,// 264 PAY 227 

    0x7873dbb5,// 265 PAY 228 

    0xf9b1e0eb,// 266 PAY 229 

    0xd9dfa974,// 267 PAY 230 

    0xfd99370a,// 268 PAY 231 

    0x1b2c33fc,// 269 PAY 232 

    0x9320844c,// 270 PAY 233 

    0x075bdfc3,// 271 PAY 234 

    0x558a20cd,// 272 PAY 235 

    0xa700cdf8,// 273 PAY 236 

    0xa0f3ecf1,// 274 PAY 237 

    0xa6b21472,// 275 PAY 238 

    0x2fbc6cdb,// 276 PAY 239 

    0xf37a0009,// 277 PAY 240 

    0xc2434ec7,// 278 PAY 241 

    0x14f3ccfa,// 279 PAY 242 

    0x0fb82dc7,// 280 PAY 243 

    0xb7d61933,// 281 PAY 244 

    0x03743492,// 282 PAY 245 

    0xfc84671a,// 283 PAY 246 

    0x342875e8,// 284 PAY 247 

    0x5aafe739,// 285 PAY 248 

    0x8c50e6d3,// 286 PAY 249 

    0x0244237b,// 287 PAY 250 

    0x01b4eb96,// 288 PAY 251 

    0xb9a6d019,// 289 PAY 252 

    0x782474c3,// 290 PAY 253 

    0xb32ffe0e,// 291 PAY 254 

    0x3883db3f,// 292 PAY 255 

    0x38026de4,// 293 PAY 256 

    0xb8703f75,// 294 PAY 257 

    0x0fe484b5,// 295 PAY 258 

    0x50fd6830,// 296 PAY 259 

    0x5b77780d,// 297 PAY 260 

    0x5ffaf131,// 298 PAY 261 

    0xf95267cd,// 299 PAY 262 

    0x837f058d,// 300 PAY 263 

    0xd494602f,// 301 PAY 264 

    0x6088b916,// 302 PAY 265 

    0x8c07029e,// 303 PAY 266 

    0x7ce4d340,// 304 PAY 267 

    0x1cfc873d,// 305 PAY 268 

    0x371a6a06,// 306 PAY 269 

    0xc6fc32fc,// 307 PAY 270 

    0xe9edb36b,// 308 PAY 271 

    0x393a8968,// 309 PAY 272 

    0x1e14986a,// 310 PAY 273 

    0xf2f8ad7f,// 311 PAY 274 

    0x4a18111a,// 312 PAY 275 

    0xbeb7d75e,// 313 PAY 276 

    0xc8f5715a,// 314 PAY 277 

    0x1d13d7dc,// 315 PAY 278 

    0xe1c05cf5,// 316 PAY 279 

    0x45212e48,// 317 PAY 280 

    0x327e2470,// 318 PAY 281 

    0x31fc7881,// 319 PAY 282 

    0x2804f9b1,// 320 PAY 283 

    0x28b2098e,// 321 PAY 284 

    0xca133e8e,// 322 PAY 285 

    0x39139806,// 323 PAY 286 

    0x42ae4a2b,// 324 PAY 287 

    0x03acfda3,// 325 PAY 288 

    0xc88df92c,// 326 PAY 289 

    0x0746ef10,// 327 PAY 290 

    0x7aff09cf,// 328 PAY 291 

    0x2a31b3d8,// 329 PAY 292 

    0x901bff3a,// 330 PAY 293 

    0xe098f81b,// 331 PAY 294 

    0x5d5fe9ad,// 332 PAY 295 

    0x1e6b76f8,// 333 PAY 296 

    0xf5241ef9,// 334 PAY 297 

    0x5318d2ef,// 335 PAY 298 

    0xcd6568cd,// 336 PAY 299 

    0xac554cff,// 337 PAY 300 

    0xce896e9d,// 338 PAY 301 

    0xa1a8af95,// 339 PAY 302 

    0x29482bbb,// 340 PAY 303 

    0x00810e56,// 341 PAY 304 

    0x9c27929e,// 342 PAY 305 

    0x59d3a16a,// 343 PAY 306 

    0x9f26bffe,// 344 PAY 307 

    0xbfac2045,// 345 PAY 308 

    0x02417dba,// 346 PAY 309 

    0xf8de61d8,// 347 PAY 310 

    0x00921258,// 348 PAY 311 

    0x85bca8c9,// 349 PAY 312 

    0x2f4cf77e,// 350 PAY 313 

    0x53057de8,// 351 PAY 314 

    0x0f8b09b0,// 352 PAY 315 

    0xcd12ae71,// 353 PAY 316 

    0xafc6b425,// 354 PAY 317 

    0x77011b0e,// 355 PAY 318 

    0x3f959b3e,// 356 PAY 319 

    0x13b2aafd,// 357 PAY 320 

    0xe7378c8e,// 358 PAY 321 

    0x20ef0021,// 359 PAY 322 

    0x02f72ea6,// 360 PAY 323 

    0x7689412c,// 361 PAY 324 

    0x56ad1da7,// 362 PAY 325 

    0x312fc398,// 363 PAY 326 

    0xdbf5311d,// 364 PAY 327 

    0x7a990fc5,// 365 PAY 328 

    0x24cb41bf,// 366 PAY 329 

    0xaaa6fab8,// 367 PAY 330 

    0x1bf1cb17,// 368 PAY 331 

    0xb5c0b38a,// 369 PAY 332 

    0x32b02737,// 370 PAY 333 

    0x42a45970,// 371 PAY 334 

    0x9edb7ae4,// 372 PAY 335 

    0xae7c2ee9,// 373 PAY 336 

    0x8061c7ac,// 374 PAY 337 

    0x59c29dc6,// 375 PAY 338 

    0xea067253,// 376 PAY 339 

    0x68a11030,// 377 PAY 340 

    0x2799bc63,// 378 PAY 341 

    0x49934816,// 379 PAY 342 

    0x32dc77cb,// 380 PAY 343 

    0x2196a55b,// 381 PAY 344 

    0x7242d999,// 382 PAY 345 

    0x3525a913,// 383 PAY 346 

    0x681dedcd,// 384 PAY 347 

    0xcb80a9ae,// 385 PAY 348 

    0x6e88c0c7,// 386 PAY 349 

    0xdffbe978,// 387 PAY 350 

    0xb44b8cba,// 388 PAY 351 

    0xa0d0caa1,// 389 PAY 352 

    0x712a04f9,// 390 PAY 353 

    0x15734b72,// 391 PAY 354 

    0xf864912d,// 392 PAY 355 

    0xd105de2b,// 393 PAY 356 

    0x6d24afbd,// 394 PAY 357 

    0x2919fc69,// 395 PAY 358 

    0x06e4fa7d,// 396 PAY 359 

    0x227224dd,// 397 PAY 360 

    0x8201935a,// 398 PAY 361 

    0x20cd6163,// 399 PAY 362 

    0x309c7ddd,// 400 PAY 363 

    0x006d371c,// 401 PAY 364 

    0x827f3503,// 402 PAY 365 

    0x2ae973f2,// 403 PAY 366 

    0xbd8c0d6f,// 404 PAY 367 

    0x5675d0bc,// 405 PAY 368 

    0x0840d614,// 406 PAY 369 

    0x93152c5c,// 407 PAY 370 

    0x458a7247,// 408 PAY 371 

    0x8d64cb3f,// 409 PAY 372 

    0xb6edc1aa,// 410 PAY 373 

    0xbedbde48,// 411 PAY 374 

    0xb28a8098,// 412 PAY 375 

    0xa39b60bc,// 413 PAY 376 

    0xa8401014,// 414 PAY 377 

    0x11be7ad5,// 415 PAY 378 

    0xb309ef12,// 416 PAY 379 

    0x7b395750,// 417 PAY 380 

    0xac8c6db3,// 418 PAY 381 

    0xe34b1f8b,// 419 PAY 382 

    0x8b0bb994,// 420 PAY 383 

    0x4e085c14,// 421 PAY 384 

    0x025487d7,// 422 PAY 385 

    0xdc6d8273,// 423 PAY 386 

    0x4e90cda1,// 424 PAY 387 

    0xb2d00a3b,// 425 PAY 388 

    0xef63d9ef,// 426 PAY 389 

    0xa2a6b7e7,// 427 PAY 390 

    0x116dfab3,// 428 PAY 391 

    0x442ba5ce,// 429 PAY 392 

    0x6fc95f3f,// 430 PAY 393 

    0xdfcda654,// 431 PAY 394 

    0xec39e0f4,// 432 PAY 395 

    0x1f3a044e,// 433 PAY 396 

    0x3c295cc2,// 434 PAY 397 

    0x5e1a6f09,// 435 PAY 398 

    0x62ab9cab,// 436 PAY 399 

    0x752ebb70,// 437 PAY 400 

    0x973dcfd7,// 438 PAY 401 

    0x4dd6bb44,// 439 PAY 402 

    0x932023f1,// 440 PAY 403 

    0xd905a138,// 441 PAY 404 

    0x03f51ea9,// 442 PAY 405 

    0x5a2ba36f,// 443 PAY 406 

    0xed935d54,// 444 PAY 407 

    0x2d8883da,// 445 PAY 408 

    0x026a27fd,// 446 PAY 409 

    0x083ca56a,// 447 PAY 410 

    0x32aa5c32,// 448 PAY 411 

    0xbb9c173f,// 449 PAY 412 

    0x3a08d19e,// 450 PAY 413 

    0x2d4ad8b0,// 451 PAY 414 

    0xd123a5ee,// 452 PAY 415 

    0xdcee9e74,// 453 PAY 416 

    0x09233663,// 454 PAY 417 

    0x1632c9dd,// 455 PAY 418 

    0xdbf3677b,// 456 PAY 419 

    0xc030e13f,// 457 PAY 420 

    0x299402a1,// 458 PAY 421 

    0x88eee516,// 459 PAY 422 

    0x12afb763,// 460 PAY 423 

    0x2e5e2a4d,// 461 PAY 424 

    0x315e33da,// 462 PAY 425 

    0x306697c8,// 463 PAY 426 

    0x1f0d7e15,// 464 PAY 427 

    0x5595e788,// 465 PAY 428 

    0x0ab7d6d9,// 466 PAY 429 

    0x312d1709,// 467 PAY 430 

    0x32993af2,// 468 PAY 431 

    0x917a946b,// 469 PAY 432 

    0xfea16f84,// 470 PAY 433 

    0xa6a76973,// 471 PAY 434 

    0xfb7aa3df,// 472 PAY 435 

    0x6ee810b2,// 473 PAY 436 

    0x30bb06b7,// 474 PAY 437 

    0x35a63287,// 475 PAY 438 

    0xb62d07cf,// 476 PAY 439 

    0x70a85688,// 477 PAY 440 

    0x2d878ffb,// 478 PAY 441 

    0xa09a9126,// 479 PAY 442 

    0xea3f10ef,// 480 PAY 443 

    0x6e75131e,// 481 PAY 444 

    0x15f97e84,// 482 PAY 445 

    0x5747e34b,// 483 PAY 446 

    0x0f136fc2,// 484 PAY 447 

    0x0ee2f535,// 485 PAY 448 

    0xa79c0f8d,// 486 PAY 449 

    0x8822274a,// 487 PAY 450 

    0x2f0890e8,// 488 PAY 451 

    0x60a79dd2,// 489 PAY 452 

    0x3bcb7e2e,// 490 PAY 453 

    0x05b2a12b,// 491 PAY 454 

    0x80abf8de,// 492 PAY 455 

    0xf410a3b0,// 493 PAY 456 

    0xc4aab198,// 494 PAY 457 

    0x62181e4a,// 495 PAY 458 

    0x87d21533,// 496 PAY 459 

    0x151bd1ea,// 497 PAY 460 

    0xb7a39999,// 498 PAY 461 

    0x28858b17,// 499 PAY 462 

    0x3a1f90e0,// 500 PAY 463 

    0x31344b21,// 501 PAY 464 

    0xac2f4fd9,// 502 PAY 465 

    0x249200ae,// 503 PAY 466 

    0xe959bc5b,// 504 PAY 467 

    0x57de6502,// 505 PAY 468 

    0x1a58612b,// 506 PAY 469 

    0x9ce1d952,// 507 PAY 470 

    0x6e2f4934,// 508 PAY 471 

    0xeaf4f784,// 509 PAY 472 

    0xd333315e,// 510 PAY 473 

    0x2285c2ec,// 511 PAY 474 

    0x6e285551,// 512 PAY 475 

    0x070a71e3,// 513 PAY 476 

    0xa827f2e4,// 514 PAY 477 

    0x94f5c596,// 515 PAY 478 

    0x0fcc2d95,// 516 PAY 479 

    0xf0a51fe2,// 517 PAY 480 

    0xfdd87304,// 518 PAY 481 

    0xbdb5c46c,// 519 PAY 482 

    0x87f6c2be,// 520 PAY 483 

    0x0acc324e,// 521 PAY 484 

    0xd126869d,// 522 PAY 485 

    0x9b29a924,// 523 PAY 486 

    0xdc560000,// 524 PAY 487 

/// STA is 1 words. 

/// STA num_pkts       : 73 

/// STA pkt_idx        : 206 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x16 

    0x03391649 // 525 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt84_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x0e 

/// ECH pdu_tag        : 0x00 

    0x000e0000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0800000f,// 3 SCX   1 

    0x8040487c,// 4 SCX   2 

    0x00005300,// 5 SCX   3 

    0x690a687b,// 6 SCX   4 

    0xb297f845,// 7 SCX   5 

    0x3b528274,// 8 SCX   6 

    0x398863f3,// 9 SCX   7 

    0xd348ea02,// 10 SCX   8 

    0xbbd5774c,// 11 SCX   9 

    0xed268dea,// 12 SCX  10 

    0x9e2bd57e,// 13 SCX  11 

    0xaef2e50f,// 14 SCX  12 

    0xa7c3e964,// 15 SCX  13 

    0x8b1bd3bf,// 16 SCX  14 

    0xbaf725af,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 1983 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1246 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1246 

/// BFD lencrypto      : 64 

/// BFD ofstcrypto     : 1160 

/// BFD (ofst+len)cry  : 1224 

/// BFD ofstiv         : 1100 

/// BFD ofsticv        : 1616 

    0x000004de,// 18 BFD   1 

    0x04880040,// 19 BFD   2 

    0x0650044c,// 20 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c00d86a,// 21 MFM   1 

    0xdfe55db7,// 22 MFM   2 

    0x3dcff06e,// 23 MFM   3 

    0x015e2aa0,// 24 MFM   4 

    0x3ea4ddd3,// 25 MFM   5 

    0x66313ca7,// 26 MFM   6 

    0xe8304647,// 27 MFM   7 

    0x1b5a09d0,// 28 MFM   8 

    0x06b950c2,// 29 MFM   9 

    0x67717043,// 30 MFM  10 

    0xf63cb23b,// 31 MFM  11 

    0x6fbab7c8,// 32 MFM  12 

    0x3c164ff6,// 33 MFM  13 

    0x369059b0,// 34 MFM  14 

    0x4ff76c24,// 35 MFM  15 

    0x37715bae,// 36 MFM  16 

/// BDA is 497 words. 

/// BDA size     is 1983 (0x7bf) 

/// BDA id       is 0x8ef 

    0x07bf08ef,// 37 BDA   1 

/// PAY Generic Data size   : 1983 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x9c9271c2,// 38 PAY   1 

    0x161adddb,// 39 PAY   2 

    0x6875eb60,// 40 PAY   3 

    0xadb53449,// 41 PAY   4 

    0xc59c0467,// 42 PAY   5 

    0xfa44a79b,// 43 PAY   6 

    0x15507b8e,// 44 PAY   7 

    0xe55fda25,// 45 PAY   8 

    0x35f86520,// 46 PAY   9 

    0xaac7cb59,// 47 PAY  10 

    0x6df16d4c,// 48 PAY  11 

    0x22e5d80c,// 49 PAY  12 

    0xe3fa30b0,// 50 PAY  13 

    0x9b60cacf,// 51 PAY  14 

    0xb2b9ed5b,// 52 PAY  15 

    0x0c5945af,// 53 PAY  16 

    0xec8c227f,// 54 PAY  17 

    0xa6581243,// 55 PAY  18 

    0xd9c9391a,// 56 PAY  19 

    0x2a9f16d9,// 57 PAY  20 

    0xba477727,// 58 PAY  21 

    0xe89b456e,// 59 PAY  22 

    0x94c58fcb,// 60 PAY  23 

    0x500881a7,// 61 PAY  24 

    0x151ba1a1,// 62 PAY  25 

    0x80653fbd,// 63 PAY  26 

    0x32f4a14a,// 64 PAY  27 

    0xff75164d,// 65 PAY  28 

    0x7e8f1bb1,// 66 PAY  29 

    0xb336df1a,// 67 PAY  30 

    0x14e00040,// 68 PAY  31 

    0x36ba763e,// 69 PAY  32 

    0x9e099e38,// 70 PAY  33 

    0x25dcbe96,// 71 PAY  34 

    0xf7e76db3,// 72 PAY  35 

    0x2d12b372,// 73 PAY  36 

    0x4b129c6f,// 74 PAY  37 

    0xc1fe39f2,// 75 PAY  38 

    0xf85f516a,// 76 PAY  39 

    0xaaf13bd8,// 77 PAY  40 

    0x4c7f3562,// 78 PAY  41 

    0x7b5866da,// 79 PAY  42 

    0x6db5fd6f,// 80 PAY  43 

    0xdaa9566d,// 81 PAY  44 

    0x09fcd691,// 82 PAY  45 

    0xde973c62,// 83 PAY  46 

    0xc31f61bf,// 84 PAY  47 

    0xa746c05d,// 85 PAY  48 

    0x51777807,// 86 PAY  49 

    0x77882e0e,// 87 PAY  50 

    0x05a6e746,// 88 PAY  51 

    0x5b26a2ac,// 89 PAY  52 

    0x4240191e,// 90 PAY  53 

    0xec525a0f,// 91 PAY  54 

    0x491e7080,// 92 PAY  55 

    0x6509e4b8,// 93 PAY  56 

    0x5ba1a35a,// 94 PAY  57 

    0xbf9bf2f5,// 95 PAY  58 

    0x5ec72df3,// 96 PAY  59 

    0xf1e51d8a,// 97 PAY  60 

    0x9f46ec4f,// 98 PAY  61 

    0x7d57f885,// 99 PAY  62 

    0x2ac50a9c,// 100 PAY  63 

    0xb98fcb1b,// 101 PAY  64 

    0x6bae1c3c,// 102 PAY  65 

    0x67592b0b,// 103 PAY  66 

    0xede6cc57,// 104 PAY  67 

    0xfea48a3c,// 105 PAY  68 

    0x100861bc,// 106 PAY  69 

    0x2290c50f,// 107 PAY  70 

    0xc32216db,// 108 PAY  71 

    0xe8899df4,// 109 PAY  72 

    0xfeeb1314,// 110 PAY  73 

    0x6578388b,// 111 PAY  74 

    0xa55a31e5,// 112 PAY  75 

    0xdce82e58,// 113 PAY  76 

    0x3c85c9b1,// 114 PAY  77 

    0x4c481eab,// 115 PAY  78 

    0xfe908bba,// 116 PAY  79 

    0xf3344070,// 117 PAY  80 

    0x89ceb240,// 118 PAY  81 

    0x381ca462,// 119 PAY  82 

    0x509af437,// 120 PAY  83 

    0xc5c62690,// 121 PAY  84 

    0x8ef23a2e,// 122 PAY  85 

    0x40c50ca8,// 123 PAY  86 

    0x780015d9,// 124 PAY  87 

    0x3093691f,// 125 PAY  88 

    0x2ab713ed,// 126 PAY  89 

    0x2fd4305f,// 127 PAY  90 

    0x50a089cc,// 128 PAY  91 

    0xc7b64e0d,// 129 PAY  92 

    0x785b880d,// 130 PAY  93 

    0xf01069e1,// 131 PAY  94 

    0x6a809bbc,// 132 PAY  95 

    0x858f1f4c,// 133 PAY  96 

    0xd2fc498b,// 134 PAY  97 

    0xea3464d2,// 135 PAY  98 

    0x54bab70f,// 136 PAY  99 

    0xecc96dcb,// 137 PAY 100 

    0x28cc2642,// 138 PAY 101 

    0xa8b206d6,// 139 PAY 102 

    0xefc66069,// 140 PAY 103 

    0xeff2d357,// 141 PAY 104 

    0x5b2f6478,// 142 PAY 105 

    0xbd8f6409,// 143 PAY 106 

    0x26ff4bd0,// 144 PAY 107 

    0xde100ff5,// 145 PAY 108 

    0x300a8487,// 146 PAY 109 

    0x60174412,// 147 PAY 110 

    0x6d12e6d2,// 148 PAY 111 

    0x851cc427,// 149 PAY 112 

    0xbc981716,// 150 PAY 113 

    0xea801746,// 151 PAY 114 

    0xbe75271c,// 152 PAY 115 

    0xa9c4a76a,// 153 PAY 116 

    0x7a0c0ddb,// 154 PAY 117 

    0xb3c7181e,// 155 PAY 118 

    0xb68c0b3f,// 156 PAY 119 

    0x09a9fecb,// 157 PAY 120 

    0xaf63ed76,// 158 PAY 121 

    0x0ee7e80f,// 159 PAY 122 

    0x305afa90,// 160 PAY 123 

    0x13fd8d47,// 161 PAY 124 

    0x32d5cccd,// 162 PAY 125 

    0xfe0ef4b4,// 163 PAY 126 

    0xcf9445b4,// 164 PAY 127 

    0x1eb56ec2,// 165 PAY 128 

    0x2e4aafb1,// 166 PAY 129 

    0x5c946ca8,// 167 PAY 130 

    0x530b88a8,// 168 PAY 131 

    0xe23b3fe0,// 169 PAY 132 

    0x7c651087,// 170 PAY 133 

    0x52761c05,// 171 PAY 134 

    0xbb1029ae,// 172 PAY 135 

    0x52a23cf5,// 173 PAY 136 

    0x2bdefa23,// 174 PAY 137 

    0xef33fd79,// 175 PAY 138 

    0xd5979137,// 176 PAY 139 

    0xb6fdf95b,// 177 PAY 140 

    0x8fd88c1f,// 178 PAY 141 

    0xbf0d374e,// 179 PAY 142 

    0xca03a947,// 180 PAY 143 

    0xa92f98f3,// 181 PAY 144 

    0x3f088d78,// 182 PAY 145 

    0x03ad711c,// 183 PAY 146 

    0xa66cc23d,// 184 PAY 147 

    0xe4ad17d9,// 185 PAY 148 

    0x24dc9ce3,// 186 PAY 149 

    0xd29f33b4,// 187 PAY 150 

    0x61950b62,// 188 PAY 151 

    0x9d6742b8,// 189 PAY 152 

    0x1b9fa1cc,// 190 PAY 153 

    0x8730c396,// 191 PAY 154 

    0x6d05ad6e,// 192 PAY 155 

    0x85100d80,// 193 PAY 156 

    0x63c54be0,// 194 PAY 157 

    0xc0340fdb,// 195 PAY 158 

    0x991d9a64,// 196 PAY 159 

    0x780acfd6,// 197 PAY 160 

    0xc24f033c,// 198 PAY 161 

    0x5bcf08bc,// 199 PAY 162 

    0xc024443a,// 200 PAY 163 

    0x2f05c192,// 201 PAY 164 

    0x08b99921,// 202 PAY 165 

    0x3359bd07,// 203 PAY 166 

    0x83124194,// 204 PAY 167 

    0x4a21c7fa,// 205 PAY 168 

    0xe7b84476,// 206 PAY 169 

    0x58ac643e,// 207 PAY 170 

    0x1bfa324e,// 208 PAY 171 

    0x4124c99f,// 209 PAY 172 

    0x79747ae8,// 210 PAY 173 

    0xcc500337,// 211 PAY 174 

    0xe98d61ba,// 212 PAY 175 

    0x634cda54,// 213 PAY 176 

    0x4797bc1c,// 214 PAY 177 

    0x97ff7c5f,// 215 PAY 178 

    0xd6a38b1e,// 216 PAY 179 

    0x548b5b14,// 217 PAY 180 

    0x20b75f17,// 218 PAY 181 

    0x30ba6400,// 219 PAY 182 

    0xddd43c1e,// 220 PAY 183 

    0x387e7571,// 221 PAY 184 

    0xabb171c2,// 222 PAY 185 

    0x950bb682,// 223 PAY 186 

    0xe986c476,// 224 PAY 187 

    0xb87f8eea,// 225 PAY 188 

    0x00184067,// 226 PAY 189 

    0x40c74f95,// 227 PAY 190 

    0x48bdcf13,// 228 PAY 191 

    0x660f8a5f,// 229 PAY 192 

    0xdb28890a,// 230 PAY 193 

    0xb3a4ec21,// 231 PAY 194 

    0x6813792d,// 232 PAY 195 

    0xb5b7f189,// 233 PAY 196 

    0xdff12800,// 234 PAY 197 

    0x622642c2,// 235 PAY 198 

    0x872f2844,// 236 PAY 199 

    0x81affe59,// 237 PAY 200 

    0x0fba94a1,// 238 PAY 201 

    0x33990d43,// 239 PAY 202 

    0x97e8913e,// 240 PAY 203 

    0x51734ad3,// 241 PAY 204 

    0xfb8ab4eb,// 242 PAY 205 

    0x83bdc52a,// 243 PAY 206 

    0xd38b8483,// 244 PAY 207 

    0x4d591778,// 245 PAY 208 

    0xf8c32e54,// 246 PAY 209 

    0x10fca49d,// 247 PAY 210 

    0xbcf4392b,// 248 PAY 211 

    0x11242553,// 249 PAY 212 

    0xd300fc03,// 250 PAY 213 

    0x05a7e4fd,// 251 PAY 214 

    0x922de5b0,// 252 PAY 215 

    0x379cdc02,// 253 PAY 216 

    0x21edaf16,// 254 PAY 217 

    0x3ab895fe,// 255 PAY 218 

    0x09559159,// 256 PAY 219 

    0x49b57881,// 257 PAY 220 

    0x4b586049,// 258 PAY 221 

    0x73c0052f,// 259 PAY 222 

    0xd3bdc4d4,// 260 PAY 223 

    0xf180a643,// 261 PAY 224 

    0x849264f0,// 262 PAY 225 

    0x07795755,// 263 PAY 226 

    0x1ac0b079,// 264 PAY 227 

    0xe2b8b4f0,// 265 PAY 228 

    0x44806f06,// 266 PAY 229 

    0xb6e4ef5c,// 267 PAY 230 

    0xa4b924ed,// 268 PAY 231 

    0xc366a765,// 269 PAY 232 

    0x48c3f211,// 270 PAY 233 

    0x8ec4b88c,// 271 PAY 234 

    0x6795990d,// 272 PAY 235 

    0x6ffc4a70,// 273 PAY 236 

    0xe0c69247,// 274 PAY 237 

    0x1cd5f59d,// 275 PAY 238 

    0x1f4571b2,// 276 PAY 239 

    0x1bb82823,// 277 PAY 240 

    0xed7bac26,// 278 PAY 241 

    0xdddf8b60,// 279 PAY 242 

    0xd2afa44f,// 280 PAY 243 

    0x112fb103,// 281 PAY 244 

    0xef887df9,// 282 PAY 245 

    0xe0ca6ffc,// 283 PAY 246 

    0x6855b46a,// 284 PAY 247 

    0x6a9070b0,// 285 PAY 248 

    0xa7fc897b,// 286 PAY 249 

    0x312a179b,// 287 PAY 250 

    0x476e8d63,// 288 PAY 251 

    0x5ef5fb7e,// 289 PAY 252 

    0x005764ba,// 290 PAY 253 

    0x4f58cdb3,// 291 PAY 254 

    0x4a3965b4,// 292 PAY 255 

    0xf6900a8d,// 293 PAY 256 

    0xd6423a49,// 294 PAY 257 

    0x8e7469be,// 295 PAY 258 

    0xc7443611,// 296 PAY 259 

    0x2f4d2943,// 297 PAY 260 

    0xc8f26b56,// 298 PAY 261 

    0x58bdcd04,// 299 PAY 262 

    0xd52db8dd,// 300 PAY 263 

    0xd4f0bb7e,// 301 PAY 264 

    0xb4c14021,// 302 PAY 265 

    0xf3e11b10,// 303 PAY 266 

    0xa3de78a4,// 304 PAY 267 

    0xd2fd495d,// 305 PAY 268 

    0xe48fb4cb,// 306 PAY 269 

    0x3696e254,// 307 PAY 270 

    0xe37cf27c,// 308 PAY 271 

    0xaec10fe6,// 309 PAY 272 

    0x81a2d3b2,// 310 PAY 273 

    0x8af770c8,// 311 PAY 274 

    0xe73cb39d,// 312 PAY 275 

    0x490dfbc9,// 313 PAY 276 

    0x835f77b1,// 314 PAY 277 

    0x35105e96,// 315 PAY 278 

    0x3f40b00a,// 316 PAY 279 

    0xdfd1e824,// 317 PAY 280 

    0x110ba00e,// 318 PAY 281 

    0xbbb908c2,// 319 PAY 282 

    0xa3adb4fd,// 320 PAY 283 

    0x2a4bc648,// 321 PAY 284 

    0x7a822d15,// 322 PAY 285 

    0xd4458b6d,// 323 PAY 286 

    0xa151dbcc,// 324 PAY 287 

    0xd536a8be,// 325 PAY 288 

    0xa0ed7077,// 326 PAY 289 

    0xd984cbfb,// 327 PAY 290 

    0x395b05da,// 328 PAY 291 

    0x5dc7bbd2,// 329 PAY 292 

    0x00661844,// 330 PAY 293 

    0x6463b334,// 331 PAY 294 

    0xd6fe2e53,// 332 PAY 295 

    0x9f8f1548,// 333 PAY 296 

    0xc5be9cb9,// 334 PAY 297 

    0x8226a2b8,// 335 PAY 298 

    0x77577204,// 336 PAY 299 

    0xf604a75b,// 337 PAY 300 

    0x8ada18bb,// 338 PAY 301 

    0xdc6f21fc,// 339 PAY 302 

    0x548bf54a,// 340 PAY 303 

    0xff531c6b,// 341 PAY 304 

    0x1ebbf24a,// 342 PAY 305 

    0xb5abb3e1,// 343 PAY 306 

    0x182e8803,// 344 PAY 307 

    0xea68f07a,// 345 PAY 308 

    0x1945b9c9,// 346 PAY 309 

    0xe1d9b0c8,// 347 PAY 310 

    0xd4f6262a,// 348 PAY 311 

    0x94a0f6ec,// 349 PAY 312 

    0xb4abb6a3,// 350 PAY 313 

    0x289bb28f,// 351 PAY 314 

    0x0e14c402,// 352 PAY 315 

    0xa3ef2e26,// 353 PAY 316 

    0xc3d52946,// 354 PAY 317 

    0xe42245b0,// 355 PAY 318 

    0x4ec3fbd5,// 356 PAY 319 

    0x3d44e06b,// 357 PAY 320 

    0x12ea2e9e,// 358 PAY 321 

    0x2164aba6,// 359 PAY 322 

    0x9cebfc8a,// 360 PAY 323 

    0xbc5de34b,// 361 PAY 324 

    0x5d54c7c9,// 362 PAY 325 

    0x1eeb1d8b,// 363 PAY 326 

    0x54adb716,// 364 PAY 327 

    0x91595072,// 365 PAY 328 

    0xbb416e7c,// 366 PAY 329 

    0x4a562c2a,// 367 PAY 330 

    0xebb2d9ef,// 368 PAY 331 

    0x38d4d8eb,// 369 PAY 332 

    0x48bcd044,// 370 PAY 333 

    0x0665d844,// 371 PAY 334 

    0x79189ee0,// 372 PAY 335 

    0x1def1323,// 373 PAY 336 

    0x44ffdc79,// 374 PAY 337 

    0xade654d7,// 375 PAY 338 

    0x9efc6494,// 376 PAY 339 

    0xf8c77b68,// 377 PAY 340 

    0x66bb7e0c,// 378 PAY 341 

    0x4dd25f69,// 379 PAY 342 

    0x0812de14,// 380 PAY 343 

    0xd3d3e3f2,// 381 PAY 344 

    0x821bcf82,// 382 PAY 345 

    0xe15e6e90,// 383 PAY 346 

    0x4e6fa30d,// 384 PAY 347 

    0x2991ee29,// 385 PAY 348 

    0x0e1d47c2,// 386 PAY 349 

    0x8246fccc,// 387 PAY 350 

    0x7aef5ae3,// 388 PAY 351 

    0x17b4e94d,// 389 PAY 352 

    0xd933da6e,// 390 PAY 353 

    0x4fd95c06,// 391 PAY 354 

    0xa1623311,// 392 PAY 355 

    0x75601988,// 393 PAY 356 

    0xb225ade6,// 394 PAY 357 

    0x4ee01029,// 395 PAY 358 

    0x10003ca7,// 396 PAY 359 

    0xaae10b5a,// 397 PAY 360 

    0xe26bc0a3,// 398 PAY 361 

    0xd11f6e9c,// 399 PAY 362 

    0xf91533ed,// 400 PAY 363 

    0x060d7413,// 401 PAY 364 

    0x1d3dae7b,// 402 PAY 365 

    0x294a23d8,// 403 PAY 366 

    0x76ac0404,// 404 PAY 367 

    0xc9c5f018,// 405 PAY 368 

    0xb9b78485,// 406 PAY 369 

    0xa9756d9a,// 407 PAY 370 

    0xec6cd481,// 408 PAY 371 

    0x6cbbf150,// 409 PAY 372 

    0xc848a996,// 410 PAY 373 

    0xf30ca2b7,// 411 PAY 374 

    0x1d232061,// 412 PAY 375 

    0x57654e31,// 413 PAY 376 

    0x34479af6,// 414 PAY 377 

    0x3c3b7cbb,// 415 PAY 378 

    0xcf5730c3,// 416 PAY 379 

    0xd750d82a,// 417 PAY 380 

    0x4df92c08,// 418 PAY 381 

    0xfaf839f7,// 419 PAY 382 

    0x40e4c1e3,// 420 PAY 383 

    0xd278fc96,// 421 PAY 384 

    0x2da20403,// 422 PAY 385 

    0x3476ba39,// 423 PAY 386 

    0xf6c41f30,// 424 PAY 387 

    0x74978845,// 425 PAY 388 

    0x74b6635f,// 426 PAY 389 

    0x18c7de26,// 427 PAY 390 

    0x4c774732,// 428 PAY 391 

    0xb8623b91,// 429 PAY 392 

    0xf0ddc803,// 430 PAY 393 

    0x12c20915,// 431 PAY 394 

    0xcc143594,// 432 PAY 395 

    0x3c20995f,// 433 PAY 396 

    0x6c935059,// 434 PAY 397 

    0x4e514b5d,// 435 PAY 398 

    0x8f2e56fb,// 436 PAY 399 

    0xc12d944b,// 437 PAY 400 

    0x7ebc51c2,// 438 PAY 401 

    0xd709d9d9,// 439 PAY 402 

    0x5426cba0,// 440 PAY 403 

    0x0c6263c0,// 441 PAY 404 

    0xf6b84a03,// 442 PAY 405 

    0xe6535785,// 443 PAY 406 

    0xa02fa917,// 444 PAY 407 

    0x7b4e78c5,// 445 PAY 408 

    0x68c0e96d,// 446 PAY 409 

    0xf7481e6f,// 447 PAY 410 

    0xd184f5c0,// 448 PAY 411 

    0xb2e66d96,// 449 PAY 412 

    0x7f18d7ed,// 450 PAY 413 

    0xadc59a2d,// 451 PAY 414 

    0xdec2e515,// 452 PAY 415 

    0xaffae755,// 453 PAY 416 

    0xb4eb9365,// 454 PAY 417 

    0x62661073,// 455 PAY 418 

    0x36cc0cc9,// 456 PAY 419 

    0xad16ff0b,// 457 PAY 420 

    0xd07e979a,// 458 PAY 421 

    0x7b902485,// 459 PAY 422 

    0x37160362,// 460 PAY 423 

    0xdb597b3a,// 461 PAY 424 

    0x7e308661,// 462 PAY 425 

    0xbf6e5ba0,// 463 PAY 426 

    0x2c504478,// 464 PAY 427 

    0x72742087,// 465 PAY 428 

    0xcbf0d08e,// 466 PAY 429 

    0x9cd49492,// 467 PAY 430 

    0x51fc02df,// 468 PAY 431 

    0x3435b816,// 469 PAY 432 

    0x3cac0bda,// 470 PAY 433 

    0x4a973dcb,// 471 PAY 434 

    0xedd20098,// 472 PAY 435 

    0x8fe3770b,// 473 PAY 436 

    0x4849af77,// 474 PAY 437 

    0x4cd32c40,// 475 PAY 438 

    0xd3ccff9a,// 476 PAY 439 

    0x8e5775f2,// 477 PAY 440 

    0x7f595015,// 478 PAY 441 

    0xa05eec39,// 479 PAY 442 

    0x9f0615a3,// 480 PAY 443 

    0x3a465c9e,// 481 PAY 444 

    0xcf67c776,// 482 PAY 445 

    0xeb66cdee,// 483 PAY 446 

    0x9cbd6230,// 484 PAY 447 

    0xf2e918b8,// 485 PAY 448 

    0xd48a57db,// 486 PAY 449 

    0xe6ba68cb,// 487 PAY 450 

    0xdffe898c,// 488 PAY 451 

    0x3b920360,// 489 PAY 452 

    0x091a1bce,// 490 PAY 453 

    0xeb4771ca,// 491 PAY 454 

    0x1a0c95a8,// 492 PAY 455 

    0xa34a9b9a,// 493 PAY 456 

    0x04c6f25e,// 494 PAY 457 

    0x742aba70,// 495 PAY 458 

    0x17ee22c1,// 496 PAY 459 

    0x63052ca4,// 497 PAY 460 

    0xd41dddee,// 498 PAY 461 

    0x6527ba2b,// 499 PAY 462 

    0x29ab1ebc,// 500 PAY 463 

    0x7565db09,// 501 PAY 464 

    0x41930f80,// 502 PAY 465 

    0x12c26dda,// 503 PAY 466 

    0xe70e3e9d,// 504 PAY 467 

    0xc1f3e63a,// 505 PAY 468 

    0xcc4c365c,// 506 PAY 469 

    0x3be37a3a,// 507 PAY 470 

    0xbdaa8464,// 508 PAY 471 

    0xbfe709c0,// 509 PAY 472 

    0xe809e530,// 510 PAY 473 

    0x7516a8c8,// 511 PAY 474 

    0x45960324,// 512 PAY 475 

    0x6ea4cbc7,// 513 PAY 476 

    0x592a36dc,// 514 PAY 477 

    0x0f5ce4c8,// 515 PAY 478 

    0xb61b31d9,// 516 PAY 479 

    0x1536b016,// 517 PAY 480 

    0xbbf490a5,// 518 PAY 481 

    0xf95588d4,// 519 PAY 482 

    0xe7119db1,// 520 PAY 483 

    0x7ab5ad44,// 521 PAY 484 

    0x9f9e292e,// 522 PAY 485 

    0x7b217486,// 523 PAY 486 

    0xdcc0e0fa,// 524 PAY 487 

    0x86d89b72,// 525 PAY 488 

    0x939b9940,// 526 PAY 489 

    0x2dee9380,// 527 PAY 490 

    0x4a5dda32,// 528 PAY 491 

    0x17e697d7,// 529 PAY 492 

    0xc005e3d6,// 530 PAY 493 

    0x095acf88,// 531 PAY 494 

    0x4b0fd009,// 532 PAY 495 

    0x5a68b500,// 533 PAY 496 

/// STA is 1 words. 

/// STA num_pkts       : 53 

/// STA pkt_idx        : 49 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xb4 

    0x00c4b435 // 534 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt85_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x04 

/// ECH pdu_tag        : 0x00 

    0x00040000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv !insert_icv check_icv sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x5 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x08000011,// 3 SCX   1 

    0x8045487f,// 4 SCX   2 

    0x000015c2,// 5 SCX   3 

    0x03827bd8,// 6 SCX   4 

    0x68aef0d9,// 7 SCX   5 

    0xede1d273,// 8 SCX   6 

    0xa9da4a0d,// 9 SCX   7 

    0x4cdbd704,// 10 SCX   8 

    0xec0815db,// 11 SCX   9 

    0x236b37db,// 12 SCX  10 

    0x41283be6,// 13 SCX  11 

    0xd79770ad,// 14 SCX  12 

    0x30955d90,// 15 SCX  13 

    0x73ed1d77,// 16 SCX  14 

    0x08230f0b,// 17 SCX  15 

    0x8d438263,// 18 SCX  16 

    0x4fe17b55,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 357 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 199 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 199 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 152 

/// BFD (ofst+len)cry  : 160 

/// BFD ofstiv         : 96 

/// BFD ofsticv        : 296 

    0x000000c7,// 20 BFD   1 

    0x00980008,// 21 BFD   2 

    0x01280060,// 22 BFD   3 

/// MFM is 6 words. 

/// MFM vldnibs        : 2b 

    0x2b0091f5,// 23 MFM   1 

    0x2cace808,// 24 MFM   2 

    0xc65c54ab,// 25 MFM   3 

    0x6d7b0958,// 26 MFM   4 

    0x3e27da02,// 27 MFM   5 

    0xb0a18940,// 28 MFM   6 

/// BDA is 91 words. 

/// BDA size     is 357 (0x165) 

/// BDA id       is 0xca9 

    0x01650ca9,// 29 BDA   1 

/// PAY Generic Data size   : 357 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x602a59d2,// 30 PAY   1 

    0x90b7490d,// 31 PAY   2 

    0xcc6c1eb9,// 32 PAY   3 

    0x147617f0,// 33 PAY   4 

    0x9b382a5b,// 34 PAY   5 

    0x3e7f8e34,// 35 PAY   6 

    0x2218cab2,// 36 PAY   7 

    0xb610113c,// 37 PAY   8 

    0x97cc08ee,// 38 PAY   9 

    0x2f74b3b7,// 39 PAY  10 

    0xf18b6424,// 40 PAY  11 

    0x2487bf23,// 41 PAY  12 

    0xfc139d7b,// 42 PAY  13 

    0x9bb66847,// 43 PAY  14 

    0x82d2ea41,// 44 PAY  15 

    0x6f873edc,// 45 PAY  16 

    0x4314a130,// 46 PAY  17 

    0x40a7372b,// 47 PAY  18 

    0x54061357,// 48 PAY  19 

    0x57ff52cb,// 49 PAY  20 

    0xb5dc8300,// 50 PAY  21 

    0x6b8fe18c,// 51 PAY  22 

    0x914c13fc,// 52 PAY  23 

    0x0b6c1d40,// 53 PAY  24 

    0x1038f232,// 54 PAY  25 

    0xd9c42d25,// 55 PAY  26 

    0x1337f1c7,// 56 PAY  27 

    0xa9f1b9c1,// 57 PAY  28 

    0xfd46f82e,// 58 PAY  29 

    0xa63abe41,// 59 PAY  30 

    0xa74c007c,// 60 PAY  31 

    0x799e876c,// 61 PAY  32 

    0xa738ca58,// 62 PAY  33 

    0x62f56566,// 63 PAY  34 

    0xac5ecb25,// 64 PAY  35 

    0x9acfeeaf,// 65 PAY  36 

    0xdf223b39,// 66 PAY  37 

    0x706d23e5,// 67 PAY  38 

    0x67e48081,// 68 PAY  39 

    0x8d99e45e,// 69 PAY  40 

    0x88d8af8e,// 70 PAY  41 

    0xd06dfa99,// 71 PAY  42 

    0x2f356935,// 72 PAY  43 

    0x044bdcf6,// 73 PAY  44 

    0xf4a9f925,// 74 PAY  45 

    0xf9d9b664,// 75 PAY  46 

    0x2cbe1654,// 76 PAY  47 

    0xf63fdedb,// 77 PAY  48 

    0x3b5731dc,// 78 PAY  49 

    0x8ee69e7e,// 79 PAY  50 

    0x350523ad,// 80 PAY  51 

    0x48a1464c,// 81 PAY  52 

    0xb1024c82,// 82 PAY  53 

    0xbd544248,// 83 PAY  54 

    0x4f9cfead,// 84 PAY  55 

    0x228511ff,// 85 PAY  56 

    0xbd7588c8,// 86 PAY  57 

    0x5ebbce49,// 87 PAY  58 

    0x7c5bc764,// 88 PAY  59 

    0x97726dc0,// 89 PAY  60 

    0x1a2c86dc,// 90 PAY  61 

    0xebb5941c,// 91 PAY  62 

    0x5b307dc7,// 92 PAY  63 

    0x71bc8324,// 93 PAY  64 

    0x547b318d,// 94 PAY  65 

    0x0a90662c,// 95 PAY  66 

    0x14f7769c,// 96 PAY  67 

    0x77f811ac,// 97 PAY  68 

    0xf37d5c78,// 98 PAY  69 

    0x65cfe1bf,// 99 PAY  70 

    0x0fa50ec9,// 100 PAY  71 

    0xba25e906,// 101 PAY  72 

    0xf9da7b8d,// 102 PAY  73 

    0x2a24fb74,// 103 PAY  74 

    0x7281ea5e,// 104 PAY  75 

    0xba9433a4,// 105 PAY  76 

    0x92b35e08,// 106 PAY  77 

    0x17f28ada,// 107 PAY  78 

    0x569f1a28,// 108 PAY  79 

    0x3a3bd679,// 109 PAY  80 

    0x49c12a5f,// 110 PAY  81 

    0x292716fd,// 111 PAY  82 

    0xf7fcc7e5,// 112 PAY  83 

    0xa0c9c8bc,// 113 PAY  84 

    0xd42dfab6,// 114 PAY  85 

    0x7935f48c,// 115 PAY  86 

    0x16bad988,// 116 PAY  87 

    0x788a8869,// 117 PAY  88 

    0x773896c0,// 118 PAY  89 

    0xe8000000,// 119 PAY  90 

/// STA is 1 words. 

/// STA num_pkts       : 126 

/// STA pkt_idx        : 53 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x5e 

    0x00d55e7e // 120 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt86_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x0e 

/// ECH pdu_tag        : 0x00 

    0x000e0000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv !insert_icv !check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x08000011,// 3 SCX   1 

    0x8046489e,// 4 SCX   2 

    0x00000482,// 5 SCX   3 

    0xc9a76afd,// 6 SCX   4 

    0xf4b02d06,// 7 SCX   5 

    0xee86f5b0,// 8 SCX   6 

    0x5b7fd85b,// 9 SCX   7 

    0xf776db48,// 10 SCX   8 

    0xc31a02a8,// 11 SCX   9 

    0xdb356e6b,// 12 SCX  10 

    0x391b80df,// 13 SCX  11 

    0x2926545b,// 14 SCX  12 

    0xbc7dd194,// 15 SCX  13 

    0x0e0cd394,// 16 SCX  14 

    0xe2ccc261,// 17 SCX  15 

    0xe289b74a,// 18 SCX  16 

    0x9dcaee4f,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 1544 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 574 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 574 

/// BFD lencrypto      : 128 

/// BFD ofstcrypto     : 432 

/// BFD (ofst+len)cry  : 560 

/// BFD ofstiv         : 332 

/// BFD ofsticv        : 1128 

    0x0000023e,// 20 BFD   1 

    0x01b00080,// 21 BFD   2 

    0x0468014c,// 22 BFD   3 

/// MFM is 7 words. 

/// MFM vldnibs        : 30 

    0x3000163f,// 23 MFM   1 

    0xbd0879d6,// 24 MFM   2 

    0xbf8555f5,// 25 MFM   3 

    0xc160f060,// 26 MFM   4 

    0xc046a46a,// 27 MFM   5 

    0xfc689962,// 28 MFM   6 

    0xa95e0000,// 29 MFM   7 

/// BDA is 387 words. 

/// BDA size     is 1544 (0x608) 

/// BDA id       is 0xf6c2 

    0x0608f6c2,// 30 BDA   1 

/// PAY Generic Data size   : 1544 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x18834df7,// 31 PAY   1 

    0xad5b163f,// 32 PAY   2 

    0xa20a9405,// 33 PAY   3 

    0xc4e3530b,// 34 PAY   4 

    0xa4815b32,// 35 PAY   5 

    0x06220567,// 36 PAY   6 

    0xc83b3e39,// 37 PAY   7 

    0xe4840966,// 38 PAY   8 

    0x7e18622e,// 39 PAY   9 

    0xddde866c,// 40 PAY  10 

    0x8e448dc9,// 41 PAY  11 

    0xfb8d51a3,// 42 PAY  12 

    0xf07b7470,// 43 PAY  13 

    0xee2e661b,// 44 PAY  14 

    0xc56bf53f,// 45 PAY  15 

    0x551aaf17,// 46 PAY  16 

    0x92327589,// 47 PAY  17 

    0xd4a59a11,// 48 PAY  18 

    0x1432fe7d,// 49 PAY  19 

    0x2ca9256a,// 50 PAY  20 

    0x12443a61,// 51 PAY  21 

    0x2e543867,// 52 PAY  22 

    0x38b0535a,// 53 PAY  23 

    0xefaf3f9e,// 54 PAY  24 

    0xba340ac8,// 55 PAY  25 

    0x2d488251,// 56 PAY  26 

    0x370da4a3,// 57 PAY  27 

    0xbd2f6847,// 58 PAY  28 

    0x688d5a54,// 59 PAY  29 

    0x3ee28453,// 60 PAY  30 

    0xbcf2d16d,// 61 PAY  31 

    0x308cdf6e,// 62 PAY  32 

    0x95cb0436,// 63 PAY  33 

    0xa1cc0897,// 64 PAY  34 

    0x578dce5f,// 65 PAY  35 

    0x9e14e78f,// 66 PAY  36 

    0x2c046c5f,// 67 PAY  37 

    0x3d9d21db,// 68 PAY  38 

    0x484309f9,// 69 PAY  39 

    0x1c54143c,// 70 PAY  40 

    0x3242af52,// 71 PAY  41 

    0x7ed3a3e7,// 72 PAY  42 

    0x182a9e19,// 73 PAY  43 

    0x3870b9e1,// 74 PAY  44 

    0xcac12dc2,// 75 PAY  45 

    0xc8a2d2c8,// 76 PAY  46 

    0x6a8bb317,// 77 PAY  47 

    0xe792e2f7,// 78 PAY  48 

    0x762bccff,// 79 PAY  49 

    0x3cc91118,// 80 PAY  50 

    0x47578617,// 81 PAY  51 

    0x8c742c85,// 82 PAY  52 

    0x2acbf70f,// 83 PAY  53 

    0xf5f4378b,// 84 PAY  54 

    0xdd4c9b92,// 85 PAY  55 

    0xf64d9c6b,// 86 PAY  56 

    0x1f0877c4,// 87 PAY  57 

    0x17316e4e,// 88 PAY  58 

    0xbd9f60ae,// 89 PAY  59 

    0xe168efe8,// 90 PAY  60 

    0x201e18ea,// 91 PAY  61 

    0xb6be696b,// 92 PAY  62 

    0x26d1bf9b,// 93 PAY  63 

    0x56c3bfa0,// 94 PAY  64 

    0xcf302eb4,// 95 PAY  65 

    0x0e30f959,// 96 PAY  66 

    0x44220191,// 97 PAY  67 

    0x72ffcca6,// 98 PAY  68 

    0x85e8e7e4,// 99 PAY  69 

    0x26a36b52,// 100 PAY  70 

    0x9d4660d7,// 101 PAY  71 

    0x7106584a,// 102 PAY  72 

    0xb7a77bf4,// 103 PAY  73 

    0xb03aec67,// 104 PAY  74 

    0x9583e68e,// 105 PAY  75 

    0x6c761c7c,// 106 PAY  76 

    0xa721fb50,// 107 PAY  77 

    0xd482ed86,// 108 PAY  78 

    0x4095d279,// 109 PAY  79 

    0x85e1000c,// 110 PAY  80 

    0xc04a1a5c,// 111 PAY  81 

    0xcbfb6eae,// 112 PAY  82 

    0x49e54a93,// 113 PAY  83 

    0x1cee031c,// 114 PAY  84 

    0x9f632453,// 115 PAY  85 

    0xf7e9470e,// 116 PAY  86 

    0x9c020c45,// 117 PAY  87 

    0x3227fc3d,// 118 PAY  88 

    0x9e8a0fe7,// 119 PAY  89 

    0x84c83bdc,// 120 PAY  90 

    0xa176eea1,// 121 PAY  91 

    0x8af0b079,// 122 PAY  92 

    0xe068ee4e,// 123 PAY  93 

    0x274fba59,// 124 PAY  94 

    0xa93e9ee2,// 125 PAY  95 

    0x71dcb54c,// 126 PAY  96 

    0x01980e08,// 127 PAY  97 

    0x66ab7e5a,// 128 PAY  98 

    0x2174e03c,// 129 PAY  99 

    0x6f7719ae,// 130 PAY 100 

    0x51d6f47f,// 131 PAY 101 

    0x48b6d299,// 132 PAY 102 

    0xe0117d0c,// 133 PAY 103 

    0xacb1c578,// 134 PAY 104 

    0x1be9aad3,// 135 PAY 105 

    0x54d806f7,// 136 PAY 106 

    0x9b01eac1,// 137 PAY 107 

    0x02edebd4,// 138 PAY 108 

    0x3070365e,// 139 PAY 109 

    0xa44a3bc4,// 140 PAY 110 

    0xc0fec99f,// 141 PAY 111 

    0x0f7c70a8,// 142 PAY 112 

    0x75a5ff36,// 143 PAY 113 

    0x8a19a2d3,// 144 PAY 114 

    0xf2d7dd75,// 145 PAY 115 

    0x528a1c67,// 146 PAY 116 

    0x43911624,// 147 PAY 117 

    0x329e79a0,// 148 PAY 118 

    0x85596191,// 149 PAY 119 

    0x5d1ba638,// 150 PAY 120 

    0x950fcf4b,// 151 PAY 121 

    0xcd9a1e14,// 152 PAY 122 

    0x50115ab9,// 153 PAY 123 

    0xf5119faa,// 154 PAY 124 

    0x60e8c1b2,// 155 PAY 125 

    0x931a6d1a,// 156 PAY 126 

    0x4ff376cf,// 157 PAY 127 

    0x8250fb92,// 158 PAY 128 

    0x72d63536,// 159 PAY 129 

    0x7978ae10,// 160 PAY 130 

    0x0382bcac,// 161 PAY 131 

    0x02bbd9bf,// 162 PAY 132 

    0xe66d4519,// 163 PAY 133 

    0xf21cb9ef,// 164 PAY 134 

    0xf034ff19,// 165 PAY 135 

    0x20afed91,// 166 PAY 136 

    0xd8c6c670,// 167 PAY 137 

    0x4ab2d5f5,// 168 PAY 138 

    0x074b0517,// 169 PAY 139 

    0xc3f58a24,// 170 PAY 140 

    0xd487584e,// 171 PAY 141 

    0x36ce2fb7,// 172 PAY 142 

    0x960ddaac,// 173 PAY 143 

    0x1a38e754,// 174 PAY 144 

    0x4f85cd47,// 175 PAY 145 

    0x3b7769a3,// 176 PAY 146 

    0x3c292992,// 177 PAY 147 

    0x1c596e3e,// 178 PAY 148 

    0x5d72d9bb,// 179 PAY 149 

    0xe949f9de,// 180 PAY 150 

    0x7d9238ec,// 181 PAY 151 

    0x8d20709b,// 182 PAY 152 

    0xf16ba776,// 183 PAY 153 

    0x37ee35f7,// 184 PAY 154 

    0xfce72a3f,// 185 PAY 155 

    0x62c00fe9,// 186 PAY 156 

    0xd93f44a1,// 187 PAY 157 

    0x88a0675a,// 188 PAY 158 

    0x3cb21dc2,// 189 PAY 159 

    0x348db55e,// 190 PAY 160 

    0x538f88c5,// 191 PAY 161 

    0x894437d1,// 192 PAY 162 

    0xfb553156,// 193 PAY 163 

    0xf702b54c,// 194 PAY 164 

    0x197211a8,// 195 PAY 165 

    0xedd9af4a,// 196 PAY 166 

    0xbc28328d,// 197 PAY 167 

    0xd86f9873,// 198 PAY 168 

    0x773cbc0b,// 199 PAY 169 

    0x01f161b5,// 200 PAY 170 

    0x89614a0f,// 201 PAY 171 

    0x8fa6b2ad,// 202 PAY 172 

    0x1b7f8bf2,// 203 PAY 173 

    0x87ffd5f5,// 204 PAY 174 

    0xb88715cd,// 205 PAY 175 

    0x71a43545,// 206 PAY 176 

    0xcd6e2561,// 207 PAY 177 

    0x60223309,// 208 PAY 178 

    0x48c53c8a,// 209 PAY 179 

    0xac0c211b,// 210 PAY 180 

    0x624ee381,// 211 PAY 181 

    0xc0097bc3,// 212 PAY 182 

    0x3c1d74a8,// 213 PAY 183 

    0x6f89b449,// 214 PAY 184 

    0xec0018fd,// 215 PAY 185 

    0x977a52ef,// 216 PAY 186 

    0xe3bb7cfc,// 217 PAY 187 

    0x2e56a8d4,// 218 PAY 188 

    0xef5e05f8,// 219 PAY 189 

    0xfddd61e9,// 220 PAY 190 

    0x84322ed4,// 221 PAY 191 

    0x56e1fff9,// 222 PAY 192 

    0x634f1d73,// 223 PAY 193 

    0xb6f042f8,// 224 PAY 194 

    0x9c754e20,// 225 PAY 195 

    0xa527b7e4,// 226 PAY 196 

    0x64097978,// 227 PAY 197 

    0xf27caa08,// 228 PAY 198 

    0x7fb9ceba,// 229 PAY 199 

    0x762e4eb3,// 230 PAY 200 

    0x1dd1b64a,// 231 PAY 201 

    0x3f55444b,// 232 PAY 202 

    0xdb92f00a,// 233 PAY 203 

    0x1c973711,// 234 PAY 204 

    0x52652dff,// 235 PAY 205 

    0xe03fd1c8,// 236 PAY 206 

    0x5f9ccdc3,// 237 PAY 207 

    0x24c13386,// 238 PAY 208 

    0x9fd22ac0,// 239 PAY 209 

    0xa8b84ffc,// 240 PAY 210 

    0xb02e9a3b,// 241 PAY 211 

    0x2cc0ed1f,// 242 PAY 212 

    0x666ba837,// 243 PAY 213 

    0xd234d0d9,// 244 PAY 214 

    0xbe96a59c,// 245 PAY 215 

    0x70b3a743,// 246 PAY 216 

    0xccb088ff,// 247 PAY 217 

    0x56cd3919,// 248 PAY 218 

    0xa3946e78,// 249 PAY 219 

    0x9fe74185,// 250 PAY 220 

    0xd2e8070a,// 251 PAY 221 

    0x8d95a628,// 252 PAY 222 

    0x39edc4fd,// 253 PAY 223 

    0xc2578bd0,// 254 PAY 224 

    0xa521599c,// 255 PAY 225 

    0x320f5694,// 256 PAY 226 

    0x91ffe11f,// 257 PAY 227 

    0xeaf8a0fd,// 258 PAY 228 

    0x9792a92d,// 259 PAY 229 

    0x68d157fb,// 260 PAY 230 

    0x95633d51,// 261 PAY 231 

    0x354e53b8,// 262 PAY 232 

    0xa4211ba7,// 263 PAY 233 

    0x4d725ce4,// 264 PAY 234 

    0x66e420e8,// 265 PAY 235 

    0x09096b85,// 266 PAY 236 

    0xac0bbd21,// 267 PAY 237 

    0xc0191a3d,// 268 PAY 238 

    0x34584775,// 269 PAY 239 

    0xcf24edbb,// 270 PAY 240 

    0xba02727f,// 271 PAY 241 

    0x21889932,// 272 PAY 242 

    0x3773d834,// 273 PAY 243 

    0x227fef74,// 274 PAY 244 

    0x2d53b5c1,// 275 PAY 245 

    0x7677f90c,// 276 PAY 246 

    0xeb32b454,// 277 PAY 247 

    0xcb7777eb,// 278 PAY 248 

    0x13bccb8d,// 279 PAY 249 

    0x257e353d,// 280 PAY 250 

    0x16a20b2a,// 281 PAY 251 

    0x8efe0509,// 282 PAY 252 

    0x567af12d,// 283 PAY 253 

    0x5ddb0157,// 284 PAY 254 

    0x702a3bd3,// 285 PAY 255 

    0xe6c18379,// 286 PAY 256 

    0xc4f58f20,// 287 PAY 257 

    0x3e4abd62,// 288 PAY 258 

    0xef77c193,// 289 PAY 259 

    0x57281e7f,// 290 PAY 260 

    0x0fb91165,// 291 PAY 261 

    0x9ae8fc9c,// 292 PAY 262 

    0x431cb11e,// 293 PAY 263 

    0x91a8d1b3,// 294 PAY 264 

    0xb344ca6b,// 295 PAY 265 

    0x8d17d051,// 296 PAY 266 

    0x06272cbd,// 297 PAY 267 

    0x9eb1a991,// 298 PAY 268 

    0x46347585,// 299 PAY 269 

    0xae7c11e3,// 300 PAY 270 

    0xe99b3791,// 301 PAY 271 

    0x08b5c582,// 302 PAY 272 

    0xb0eaa131,// 303 PAY 273 

    0x4ac907ae,// 304 PAY 274 

    0x06ac7f2b,// 305 PAY 275 

    0xbd51ed4c,// 306 PAY 276 

    0x2f74715a,// 307 PAY 277 

    0x2677abf5,// 308 PAY 278 

    0x968ae67d,// 309 PAY 279 

    0x5f67caa1,// 310 PAY 280 

    0x35c25061,// 311 PAY 281 

    0xa6781d07,// 312 PAY 282 

    0xfa72da9b,// 313 PAY 283 

    0x1552e983,// 314 PAY 284 

    0x75ecab39,// 315 PAY 285 

    0xfba3133a,// 316 PAY 286 

    0x773b16f4,// 317 PAY 287 

    0xe2beffef,// 318 PAY 288 

    0x330c9d0f,// 319 PAY 289 

    0xd2a971be,// 320 PAY 290 

    0x1a9f7b18,// 321 PAY 291 

    0x7196bd64,// 322 PAY 292 

    0x10e874a6,// 323 PAY 293 

    0x5958fbf7,// 324 PAY 294 

    0x8124c59b,// 325 PAY 295 

    0xbf0d0225,// 326 PAY 296 

    0xf841502c,// 327 PAY 297 

    0x9168c611,// 328 PAY 298 

    0xe4eb6e94,// 329 PAY 299 

    0x2304256d,// 330 PAY 300 

    0x8bcc3884,// 331 PAY 301 

    0x43b24b86,// 332 PAY 302 

    0xda18df92,// 333 PAY 303 

    0x0289e5a1,// 334 PAY 304 

    0x30429588,// 335 PAY 305 

    0x0083015f,// 336 PAY 306 

    0x8dd84a57,// 337 PAY 307 

    0xff187053,// 338 PAY 308 

    0xc84c1a22,// 339 PAY 309 

    0x5ddf92f3,// 340 PAY 310 

    0x575e80d5,// 341 PAY 311 

    0x506bb79b,// 342 PAY 312 

    0x498e56aa,// 343 PAY 313 

    0xf465763f,// 344 PAY 314 

    0x51643cc0,// 345 PAY 315 

    0x0cacac93,// 346 PAY 316 

    0xb60e1ab5,// 347 PAY 317 

    0x96f2e49b,// 348 PAY 318 

    0xc0ec5b55,// 349 PAY 319 

    0xe49ac39e,// 350 PAY 320 

    0x2466371d,// 351 PAY 321 

    0x2fa965db,// 352 PAY 322 

    0x5e997376,// 353 PAY 323 

    0x412bf2eb,// 354 PAY 324 

    0x0b2483f3,// 355 PAY 325 

    0xf9b941ec,// 356 PAY 326 

    0xebc5d1a9,// 357 PAY 327 

    0x1e8c3287,// 358 PAY 328 

    0xa68a1469,// 359 PAY 329 

    0xc2a85e9f,// 360 PAY 330 

    0xd1871512,// 361 PAY 331 

    0x760fb4b5,// 362 PAY 332 

    0x415d2b4f,// 363 PAY 333 

    0xce6c9445,// 364 PAY 334 

    0x9f143d6f,// 365 PAY 335 

    0x76a89f3a,// 366 PAY 336 

    0x4ba3485c,// 367 PAY 337 

    0xf66e7cf0,// 368 PAY 338 

    0xc646dc8d,// 369 PAY 339 

    0xfd79d453,// 370 PAY 340 

    0xfd7d0d46,// 371 PAY 341 

    0xd79d722a,// 372 PAY 342 

    0x97ebbad4,// 373 PAY 343 

    0xffefd700,// 374 PAY 344 

    0x9fab533d,// 375 PAY 345 

    0xf91feefb,// 376 PAY 346 

    0xde531f5c,// 377 PAY 347 

    0x008d2522,// 378 PAY 348 

    0xf7a4aa2c,// 379 PAY 349 

    0x3f4de058,// 380 PAY 350 

    0xb36a15d0,// 381 PAY 351 

    0xbdfef8a6,// 382 PAY 352 

    0xabb190eb,// 383 PAY 353 

    0x27e11e59,// 384 PAY 354 

    0xfc4f1ced,// 385 PAY 355 

    0x85a9ead2,// 386 PAY 356 

    0xb6cd7379,// 387 PAY 357 

    0x9a5d61e0,// 388 PAY 358 

    0x56aeaa35,// 389 PAY 359 

    0x7f8a31d7,// 390 PAY 360 

    0xec6a8435,// 391 PAY 361 

    0xb8599bef,// 392 PAY 362 

    0x4ef20e68,// 393 PAY 363 

    0x677b1079,// 394 PAY 364 

    0xe7d1f895,// 395 PAY 365 

    0x8ce1a764,// 396 PAY 366 

    0xa0fe3268,// 397 PAY 367 

    0x1d81b6a9,// 398 PAY 368 

    0xf3abda71,// 399 PAY 369 

    0x4defc312,// 400 PAY 370 

    0xe7029aed,// 401 PAY 371 

    0xdcda25ad,// 402 PAY 372 

    0x37dcdc98,// 403 PAY 373 

    0xa1480b78,// 404 PAY 374 

    0x3d1bc612,// 405 PAY 375 

    0x311cf992,// 406 PAY 376 

    0xbb71d30a,// 407 PAY 377 

    0xbd4e0751,// 408 PAY 378 

    0x1a45a1ea,// 409 PAY 379 

    0xfe6be178,// 410 PAY 380 

    0xba9ccefb,// 411 PAY 381 

    0xc0c7bb84,// 412 PAY 382 

    0x27a61327,// 413 PAY 383 

    0xf5892ce6,// 414 PAY 384 

    0x2661b36f,// 415 PAY 385 

    0x2d63f449,// 416 PAY 386 

/// STA is 1 words. 

/// STA num_pkts       : 233 

/// STA pkt_idx        : 239 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x5b 

    0x03bc5be9 // 417 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt87_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x0e 

/// ECH pdu_tag        : 0x00 

    0x000e0000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv insert_icv check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x5 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x08000011,// 3 SCX   1 

    0x804648c1,// 4 SCX   2 

    0x00007582,// 5 SCX   3 

    0x50aa5fdf,// 6 SCX   4 

    0xfc339b3c,// 7 SCX   5 

    0xd9f1ac38,// 8 SCX   6 

    0xa9f8d163,// 9 SCX   7 

    0x99b872e4,// 10 SCX   8 

    0x02e272ff,// 11 SCX   9 

    0x64174364,// 12 SCX  10 

    0xc590938d,// 13 SCX  11 

    0xaf0e5121,// 14 SCX  12 

    0x4ae5b26d,// 15 SCX  13 

    0x0a6498ac,// 16 SCX  14 

    0x76feac33,// 17 SCX  15 

    0x1ae4536a,// 18 SCX  16 

    0xde25d16d,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 685 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 85 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 85 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 76 

/// BFD (ofst+len)cry  : 84 

/// BFD ofstiv         : 40 

/// BFD ofsticv        : 536 

    0x00000055,// 20 BFD   1 

    0x004c0008,// 21 BFD   2 

    0x02180028,// 22 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : e 

    0x0e00c138,// 23 MFM   1 

    0x54449ea9,// 24 MFM   2 

    0x20000000,// 25 MFM   3 

/// BDA is 173 words. 

/// BDA size     is 685 (0x2ad) 

/// BDA id       is 0x316c 

    0x02ad316c,// 26 BDA   1 

/// PAY Generic Data size   : 685 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x7b96287b,// 27 PAY   1 

    0x2b74ab2c,// 28 PAY   2 

    0xa7c00938,// 29 PAY   3 

    0xa645c18f,// 30 PAY   4 

    0xf1fd646c,// 31 PAY   5 

    0x6c8276b1,// 32 PAY   6 

    0xd57ddb86,// 33 PAY   7 

    0xa778992c,// 34 PAY   8 

    0x6ffe4f6e,// 35 PAY   9 

    0xc91b2f04,// 36 PAY  10 

    0x5ee6a32a,// 37 PAY  11 

    0x56fbda0e,// 38 PAY  12 

    0xa239c519,// 39 PAY  13 

    0x621cd48a,// 40 PAY  14 

    0xb5836640,// 41 PAY  15 

    0x7d869bcd,// 42 PAY  16 

    0xc3fee07a,// 43 PAY  17 

    0x8bdcc255,// 44 PAY  18 

    0x34f69c38,// 45 PAY  19 

    0xd7da2178,// 46 PAY  20 

    0x33e6a75f,// 47 PAY  21 

    0x68ff08f1,// 48 PAY  22 

    0x8bc453c0,// 49 PAY  23 

    0x19f04cab,// 50 PAY  24 

    0x9e7d37a8,// 51 PAY  25 

    0x84f9a53e,// 52 PAY  26 

    0x13574201,// 53 PAY  27 

    0x12284ed7,// 54 PAY  28 

    0xd08d2a96,// 55 PAY  29 

    0x4ac898c6,// 56 PAY  30 

    0x30b07bc2,// 57 PAY  31 

    0xbca704cf,// 58 PAY  32 

    0xc317fc1c,// 59 PAY  33 

    0xe5de6e03,// 60 PAY  34 

    0x6a891a9c,// 61 PAY  35 

    0xe7e9ab26,// 62 PAY  36 

    0xedeab293,// 63 PAY  37 

    0x91010c3a,// 64 PAY  38 

    0x3523440e,// 65 PAY  39 

    0x1b4e633d,// 66 PAY  40 

    0x6f8567b9,// 67 PAY  41 

    0x8601a2cc,// 68 PAY  42 

    0xbee3fc86,// 69 PAY  43 

    0x3b9d0493,// 70 PAY  44 

    0xc2f1e8be,// 71 PAY  45 

    0xbf9b8954,// 72 PAY  46 

    0xba02dd5d,// 73 PAY  47 

    0x00ac59bb,// 74 PAY  48 

    0x95155471,// 75 PAY  49 

    0x581e0dbe,// 76 PAY  50 

    0x226bbe6d,// 77 PAY  51 

    0x5324ce6a,// 78 PAY  52 

    0xb9204ed8,// 79 PAY  53 

    0x580edef7,// 80 PAY  54 

    0xdb4bbc4c,// 81 PAY  55 

    0x035a6412,// 82 PAY  56 

    0x2b44f83e,// 83 PAY  57 

    0xb135c302,// 84 PAY  58 

    0x7e2249e9,// 85 PAY  59 

    0xf2df3f20,// 86 PAY  60 

    0xbe0f4a58,// 87 PAY  61 

    0x60f19455,// 88 PAY  62 

    0x8a0c66d4,// 89 PAY  63 

    0x8a0cc0b0,// 90 PAY  64 

    0xb2c9c9bd,// 91 PAY  65 

    0xec6f50fb,// 92 PAY  66 

    0xa84afffb,// 93 PAY  67 

    0x7de1c23b,// 94 PAY  68 

    0xb6da6bd7,// 95 PAY  69 

    0xe5bab197,// 96 PAY  70 

    0x80b2d08d,// 97 PAY  71 

    0x3fdeac9f,// 98 PAY  72 

    0x8aad85a2,// 99 PAY  73 

    0x36977b71,// 100 PAY  74 

    0x9f9e79de,// 101 PAY  75 

    0x39bcdee4,// 102 PAY  76 

    0x3a7e3af4,// 103 PAY  77 

    0xfd7e3238,// 104 PAY  78 

    0x76d059f6,// 105 PAY  79 

    0x42b88940,// 106 PAY  80 

    0xedb4b2cf,// 107 PAY  81 

    0xfda78aa0,// 108 PAY  82 

    0xa7882a0f,// 109 PAY  83 

    0xafc60964,// 110 PAY  84 

    0x2262a9b3,// 111 PAY  85 

    0xcfdf8061,// 112 PAY  86 

    0xae36b1f4,// 113 PAY  87 

    0xab69e80e,// 114 PAY  88 

    0xee852db2,// 115 PAY  89 

    0x6279d550,// 116 PAY  90 

    0xe4ca4f93,// 117 PAY  91 

    0x46777a9f,// 118 PAY  92 

    0x3c330961,// 119 PAY  93 

    0xd5a722fa,// 120 PAY  94 

    0xbbb03d76,// 121 PAY  95 

    0xdd7a13ea,// 122 PAY  96 

    0xe999a1fd,// 123 PAY  97 

    0x140e9d59,// 124 PAY  98 

    0x6bdb9de5,// 125 PAY  99 

    0x14c7c219,// 126 PAY 100 

    0xdd777de4,// 127 PAY 101 

    0x87ec4b01,// 128 PAY 102 

    0x94aee0f8,// 129 PAY 103 

    0x4e54601c,// 130 PAY 104 

    0xf868aff7,// 131 PAY 105 

    0xd7147456,// 132 PAY 106 

    0x10afdb20,// 133 PAY 107 

    0xddf83fbe,// 134 PAY 108 

    0xcfefefc9,// 135 PAY 109 

    0xaae30b20,// 136 PAY 110 

    0x2a3b0ef7,// 137 PAY 111 

    0xa38702a2,// 138 PAY 112 

    0xc0259c57,// 139 PAY 113 

    0xed21bf4b,// 140 PAY 114 

    0xf1aad939,// 141 PAY 115 

    0x93e1f34c,// 142 PAY 116 

    0xe29a6efe,// 143 PAY 117 

    0x0d8f6082,// 144 PAY 118 

    0x5ff14f72,// 145 PAY 119 

    0xbf4b3a11,// 146 PAY 120 

    0x4a0abb2c,// 147 PAY 121 

    0xd7dad8d3,// 148 PAY 122 

    0x1723dc9d,// 149 PAY 123 

    0xb7195a5e,// 150 PAY 124 

    0xae8e1a5e,// 151 PAY 125 

    0x9b9b6700,// 152 PAY 126 

    0x92600b6b,// 153 PAY 127 

    0x5ff5308a,// 154 PAY 128 

    0xa2dfe733,// 155 PAY 129 

    0xcc0ba393,// 156 PAY 130 

    0x335d39f9,// 157 PAY 131 

    0xacb386f1,// 158 PAY 132 

    0x311540b0,// 159 PAY 133 

    0x6392af58,// 160 PAY 134 

    0xe3606671,// 161 PAY 135 

    0xc89225db,// 162 PAY 136 

    0x39a6458d,// 163 PAY 137 

    0xd0b9ee12,// 164 PAY 138 

    0xbd1c2f7b,// 165 PAY 139 

    0x2b9b5a7b,// 166 PAY 140 

    0x2da50b72,// 167 PAY 141 

    0x23e1a2d3,// 168 PAY 142 

    0xa3a4ae1a,// 169 PAY 143 

    0x85715d1c,// 170 PAY 144 

    0x2f527f5a,// 171 PAY 145 

    0x14bdde67,// 172 PAY 146 

    0x5b664941,// 173 PAY 147 

    0x14908e95,// 174 PAY 148 

    0x7b90c7f9,// 175 PAY 149 

    0x572bf281,// 176 PAY 150 

    0x6d20cdba,// 177 PAY 151 

    0xe300eda6,// 178 PAY 152 

    0xe99619b3,// 179 PAY 153 

    0xd5f82c60,// 180 PAY 154 

    0xcd22178c,// 181 PAY 155 

    0x5c882a41,// 182 PAY 156 

    0xef8adbab,// 183 PAY 157 

    0x1d92e479,// 184 PAY 158 

    0x5e7bab02,// 185 PAY 159 

    0xf1b77e7b,// 186 PAY 160 

    0x5c340b2f,// 187 PAY 161 

    0x28060ae5,// 188 PAY 162 

    0xdeb3d968,// 189 PAY 163 

    0xcd5d8249,// 190 PAY 164 

    0xed15cd0d,// 191 PAY 165 

    0x6ff70ccb,// 192 PAY 166 

    0x11eed592,// 193 PAY 167 

    0x1420e20b,// 194 PAY 168 

    0x4ee68569,// 195 PAY 169 

    0x4a57d9e6,// 196 PAY 170 

    0xa2e4ce15,// 197 PAY 171 

    0xa6000000,// 198 PAY 172 

/// STA is 1 words. 

/// STA num_pkts       : 189 

/// STA pkt_idx        : 136 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xcb 

    0x0220cbbd // 199 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt88_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x09 

/// ECH pdu_tag        : 0x00 

    0x00090000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 40 

    0x0000000f,// 3 SCX   1 

    0x804048de,// 4 SCX   2 

    0x00007100,// 5 SCX   3 

    0x541fd6ae,// 6 SCX   4 

    0x24f52267,// 7 SCX   5 

    0x6fbed207,// 8 SCX   6 

    0x65866685,// 9 SCX   7 

    0x55240797,// 10 SCX   8 

    0x35e08efd,// 11 SCX   9 

    0x10a6c8f5,// 12 SCX  10 

    0xaa622f3c,// 13 SCX  11 

    0x6260964c,// 14 SCX  12 

    0x631a9e81,// 15 SCX  13 

    0x033d6ade,// 16 SCX  14 

    0x1c841e1a,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 855 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 645 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 645 

/// BFD lencrypto      : 352 

/// BFD ofstcrypto     : 76 

/// BFD (ofst+len)cry  : 428 

/// BFD ofstiv         : 32 

/// BFD ofsticv        : 696 

    0x00000285,// 18 BFD   1 

    0x004c0160,// 19 BFD   2 

    0x02b80020,// 20 BFD   3 

/// MFM is 5 words. 

/// MFM vldnibs        : 24 

    0x2400c104,// 21 MFM   1 

    0xde8d7434,// 22 MFM   2 

    0xd0f69e4d,// 23 MFM   3 

    0x145a3fb8,// 24 MFM   4 

    0x8d697f2c,// 25 MFM   5 

/// BDA is 215 words. 

/// BDA size     is 855 (0x357) 

/// BDA id       is 0x441 

    0x03570441,// 26 BDA   1 

/// PAY Generic Data size   : 855 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x70f1b087,// 27 PAY   1 

    0xf8926a33,// 28 PAY   2 

    0xc843928a,// 29 PAY   3 

    0xfdb54d09,// 30 PAY   4 

    0x487e56ff,// 31 PAY   5 

    0xea3e55cd,// 32 PAY   6 

    0x7c863498,// 33 PAY   7 

    0x968a5c61,// 34 PAY   8 

    0x8c12badf,// 35 PAY   9 

    0x01f9854e,// 36 PAY  10 

    0xe71f7e32,// 37 PAY  11 

    0x64d1c5ca,// 38 PAY  12 

    0xc4784609,// 39 PAY  13 

    0x2d9ea248,// 40 PAY  14 

    0x1faa0ef6,// 41 PAY  15 

    0x23077a4a,// 42 PAY  16 

    0x3ccd6844,// 43 PAY  17 

    0xae72feee,// 44 PAY  18 

    0x50ef4a0b,// 45 PAY  19 

    0x4a3f9b98,// 46 PAY  20 

    0x6975e78e,// 47 PAY  21 

    0x572f81d1,// 48 PAY  22 

    0xa48078cf,// 49 PAY  23 

    0x45deb51c,// 50 PAY  24 

    0xf0fabae3,// 51 PAY  25 

    0x5603c359,// 52 PAY  26 

    0x43839a43,// 53 PAY  27 

    0x275a3d16,// 54 PAY  28 

    0x266e9acc,// 55 PAY  29 

    0x867a24e7,// 56 PAY  30 

    0x28948e3b,// 57 PAY  31 

    0xec679544,// 58 PAY  32 

    0x196047d2,// 59 PAY  33 

    0x783e6824,// 60 PAY  34 

    0xc35b7ee6,// 61 PAY  35 

    0x98a141c5,// 62 PAY  36 

    0x7adf4e08,// 63 PAY  37 

    0x950bfb4f,// 64 PAY  38 

    0xbb449aa7,// 65 PAY  39 

    0xe88dbfc0,// 66 PAY  40 

    0x790449b5,// 67 PAY  41 

    0x90d7bc3d,// 68 PAY  42 

    0x9e83cb2c,// 69 PAY  43 

    0x7d291eeb,// 70 PAY  44 

    0x3f49fed9,// 71 PAY  45 

    0xeac1a97b,// 72 PAY  46 

    0x62738f2e,// 73 PAY  47 

    0x7fe90b59,// 74 PAY  48 

    0xf152ef82,// 75 PAY  49 

    0x6ad59164,// 76 PAY  50 

    0xf5b56730,// 77 PAY  51 

    0x0e1e1e52,// 78 PAY  52 

    0x6f133e78,// 79 PAY  53 

    0xef001e95,// 80 PAY  54 

    0xbb5b3053,// 81 PAY  55 

    0x9e552515,// 82 PAY  56 

    0xbf6b38cf,// 83 PAY  57 

    0xa3dde2db,// 84 PAY  58 

    0x5660d6d1,// 85 PAY  59 

    0x3db20e21,// 86 PAY  60 

    0x38c11b55,// 87 PAY  61 

    0x2c1a4e99,// 88 PAY  62 

    0x96611aab,// 89 PAY  63 

    0x90dd735e,// 90 PAY  64 

    0x2bb4960f,// 91 PAY  65 

    0xb84bc3ee,// 92 PAY  66 

    0xe1a91910,// 93 PAY  67 

    0x9901dcdd,// 94 PAY  68 

    0x5117aa15,// 95 PAY  69 

    0x0c336a5c,// 96 PAY  70 

    0x87dbcae0,// 97 PAY  71 

    0xe50ba51b,// 98 PAY  72 

    0x3ee08f59,// 99 PAY  73 

    0xeec32d09,// 100 PAY  74 

    0x2996adcf,// 101 PAY  75 

    0xfc2ece4d,// 102 PAY  76 

    0x57aa7c4f,// 103 PAY  77 

    0x5fddbb5a,// 104 PAY  78 

    0xadb3fa72,// 105 PAY  79 

    0xc270a57a,// 106 PAY  80 

    0xfd9adee6,// 107 PAY  81 

    0xa60f9ba6,// 108 PAY  82 

    0xccc9b369,// 109 PAY  83 

    0x39c36f0c,// 110 PAY  84 

    0xd1270628,// 111 PAY  85 

    0xfdb06f96,// 112 PAY  86 

    0x2039e67c,// 113 PAY  87 

    0x7a9283ed,// 114 PAY  88 

    0x92b8d936,// 115 PAY  89 

    0x1de73580,// 116 PAY  90 

    0x5907bcdd,// 117 PAY  91 

    0xbe7bcf05,// 118 PAY  92 

    0x3fc10f33,// 119 PAY  93 

    0xee74b240,// 120 PAY  94 

    0x36808df8,// 121 PAY  95 

    0xbb04d833,// 122 PAY  96 

    0x5664492e,// 123 PAY  97 

    0xa3a1b846,// 124 PAY  98 

    0x58bab933,// 125 PAY  99 

    0xc46ee77c,// 126 PAY 100 

    0x8e737a7d,// 127 PAY 101 

    0x44c6f82a,// 128 PAY 102 

    0x47a82c46,// 129 PAY 103 

    0xb33a1ac2,// 130 PAY 104 

    0x674a8593,// 131 PAY 105 

    0xbb1e0bf6,// 132 PAY 106 

    0x9e4e6155,// 133 PAY 107 

    0x772a75f9,// 134 PAY 108 

    0xefd1dbe1,// 135 PAY 109 

    0xd59a3f65,// 136 PAY 110 

    0x1cdbeba9,// 137 PAY 111 

    0x8aa9f34f,// 138 PAY 112 

    0x09bab02d,// 139 PAY 113 

    0xd9384ea7,// 140 PAY 114 

    0x4df80cf4,// 141 PAY 115 

    0x9eef6e81,// 142 PAY 116 

    0x6aa80b32,// 143 PAY 117 

    0x234fee70,// 144 PAY 118 

    0x1258c433,// 145 PAY 119 

    0xfd045260,// 146 PAY 120 

    0xb796052a,// 147 PAY 121 

    0xde5b41a9,// 148 PAY 122 

    0x66ad8510,// 149 PAY 123 

    0x5bc77597,// 150 PAY 124 

    0xdb59bd96,// 151 PAY 125 

    0x0b349a86,// 152 PAY 126 

    0xb8bd938f,// 153 PAY 127 

    0x18d5a502,// 154 PAY 128 

    0xa7ed1c74,// 155 PAY 129 

    0xeb5a62f2,// 156 PAY 130 

    0x73d837fa,// 157 PAY 131 

    0x9063ed9f,// 158 PAY 132 

    0x424af5a9,// 159 PAY 133 

    0x70fe5f16,// 160 PAY 134 

    0x5cc4e16a,// 161 PAY 135 

    0x270c0b3c,// 162 PAY 136 

    0x2733d574,// 163 PAY 137 

    0x5bb80ee0,// 164 PAY 138 

    0x0a280673,// 165 PAY 139 

    0x3a55428b,// 166 PAY 140 

    0x743274d2,// 167 PAY 141 

    0x3e012be5,// 168 PAY 142 

    0x61258a40,// 169 PAY 143 

    0x0792028a,// 170 PAY 144 

    0xe596b208,// 171 PAY 145 

    0x75b3c00b,// 172 PAY 146 

    0xf0662147,// 173 PAY 147 

    0x75326226,// 174 PAY 148 

    0x1918d33b,// 175 PAY 149 

    0x9a9fd0d3,// 176 PAY 150 

    0xab74b1d2,// 177 PAY 151 

    0x216913de,// 178 PAY 152 

    0xc11e3931,// 179 PAY 153 

    0x8545e6e4,// 180 PAY 154 

    0x505b941f,// 181 PAY 155 

    0xf45e6606,// 182 PAY 156 

    0x3f3a1504,// 183 PAY 157 

    0x66df181c,// 184 PAY 158 

    0xe2cd4a52,// 185 PAY 159 

    0xa3a89c7f,// 186 PAY 160 

    0x3a54e520,// 187 PAY 161 

    0x31d9d5d0,// 188 PAY 162 

    0x53b7fa09,// 189 PAY 163 

    0xad0922cc,// 190 PAY 164 

    0xfadcda04,// 191 PAY 165 

    0x17bf791e,// 192 PAY 166 

    0x92a1f21c,// 193 PAY 167 

    0x84b94734,// 194 PAY 168 

    0x3679dc29,// 195 PAY 169 

    0x91b89800,// 196 PAY 170 

    0x3b3060f6,// 197 PAY 171 

    0xbc5b08c3,// 198 PAY 172 

    0xa8b55892,// 199 PAY 173 

    0x6b5df41c,// 200 PAY 174 

    0xdc8d19b1,// 201 PAY 175 

    0x46bdd9a0,// 202 PAY 176 

    0xe1950c67,// 203 PAY 177 

    0x69e99743,// 204 PAY 178 

    0xa9c55ce5,// 205 PAY 179 

    0xe36881c8,// 206 PAY 180 

    0x3c238558,// 207 PAY 181 

    0x720bde03,// 208 PAY 182 

    0x5db5578c,// 209 PAY 183 

    0x71dc0bbb,// 210 PAY 184 

    0x207f971f,// 211 PAY 185 

    0x810c51b1,// 212 PAY 186 

    0x97963451,// 213 PAY 187 

    0xcf20e181,// 214 PAY 188 

    0xa70ff795,// 215 PAY 189 

    0x03adb374,// 216 PAY 190 

    0x7ef840bb,// 217 PAY 191 

    0x958772c9,// 218 PAY 192 

    0x2e6ec2a4,// 219 PAY 193 

    0xe70ae758,// 220 PAY 194 

    0x05b10736,// 221 PAY 195 

    0x6d59d136,// 222 PAY 196 

    0x4d5cc948,// 223 PAY 197 

    0xb566aba2,// 224 PAY 198 

    0xc65c9b22,// 225 PAY 199 

    0xceb09612,// 226 PAY 200 

    0x20600395,// 227 PAY 201 

    0xe37870cc,// 228 PAY 202 

    0xe60eb481,// 229 PAY 203 

    0x7395b4c3,// 230 PAY 204 

    0x760be11f,// 231 PAY 205 

    0x99ccd646,// 232 PAY 206 

    0x78667297,// 233 PAY 207 

    0x5ebf2132,// 234 PAY 208 

    0x2092bbea,// 235 PAY 209 

    0x0325167e,// 236 PAY 210 

    0xd5dfd0ad,// 237 PAY 211 

    0x3359d6a5,// 238 PAY 212 

    0xbf4533a8,// 239 PAY 213 

    0x421b0000,// 240 PAY 214 

/// STA is 1 words. 

/// STA num_pkts       : 126 

/// STA pkt_idx        : 146 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xf1 

    0x0248f17e // 241 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 72 (0x48) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_sha1_pkt89_tmpl[] = {
    0xb8010048,// 1 CCH   1 

/// ECH cache_idx      : 0x0c 

/// ECH pdu_tag        : 0x00 

    0x000c0000,// 2 ECH   1 

/// SCX is 17 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv insert_icv !check_icv sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : SHA1 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 40 

    0x00000011,// 3 SCX   1 

    0x8045482c,// 4 SCX   2 

    0x000021c2,// 5 SCX   3 

    0xa89f65f2,// 6 SCX   4 

    0xa8f012b2,// 7 SCX   5 

    0x64cc9618,// 8 SCX   6 

    0xb195fd81,// 9 SCX   7 

    0x2534c8fc,// 10 SCX   8 

    0x79a532a5,// 11 SCX   9 

    0x57f0e6be,// 12 SCX  10 

    0x3b1d5928,// 13 SCX  11 

    0x9c8b9bc3,// 14 SCX  12 

    0x30f627aa,// 15 SCX  13 

    0x4799e6b2,// 16 SCX  14 

    0x71ceba60,// 17 SCX  15 

    0x221595eb,// 18 SCX  16 

    0x0c2c1b75,// 19 SCX  17 

/// BFD is 3 words. 

/// BFD tot_len        : 894 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 320 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 320 

/// BFD lencrypto      : 104 

/// BFD ofstcrypto     : 12 

/// BFD (ofst+len)cry  : 116 

/// BFD ofstiv         : 0 

/// BFD ofsticv        : 584 

    0x00000140,// 20 BFD   1 

    0x000c0068,// 21 BFD   2 

    0x02480000,// 22 BFD   3 

/// MFM is 1 words. 

/// MFM vldnibs        : 2 

    0x0200aa00,// 23 MFM   1 

/// BDA is 225 words. 

/// BDA size     is 894 (0x37e) 

/// BDA id       is 0x8e30 

    0x037e8e30,// 24 BDA   1 

/// PAY Generic Data size   : 894 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0xccbd4598,// 25 PAY   1 

    0x35f267ca,// 26 PAY   2 

    0x43dba36c,// 27 PAY   3 

    0x25894ad0,// 28 PAY   4 

    0xaf2f0ff3,// 29 PAY   5 

    0xa4b76ef5,// 30 PAY   6 

    0xc56ba781,// 31 PAY   7 

    0xdbd9a6c5,// 32 PAY   8 

    0x931d608a,// 33 PAY   9 

    0xd6e0055b,// 34 PAY  10 

    0x237c952d,// 35 PAY  11 

    0x5f274eea,// 36 PAY  12 

    0xe0063e7e,// 37 PAY  13 

    0xac8ec2f4,// 38 PAY  14 

    0x81035611,// 39 PAY  15 

    0x7818bbf4,// 40 PAY  16 

    0x9ac18c6d,// 41 PAY  17 

    0x0bd79399,// 42 PAY  18 

    0x6763b1e4,// 43 PAY  19 

    0x4a65e9c2,// 44 PAY  20 

    0x295fb4f6,// 45 PAY  21 

    0x13178393,// 46 PAY  22 

    0xf0b2971c,// 47 PAY  23 

    0x65bc3037,// 48 PAY  24 

    0x7c35de04,// 49 PAY  25 

    0x2c57410c,// 50 PAY  26 

    0x2adc5f59,// 51 PAY  27 

    0x889fa610,// 52 PAY  28 

    0x46a2bd92,// 53 PAY  29 

    0x7b33df8f,// 54 PAY  30 

    0x7de930dd,// 55 PAY  31 

    0xfa269134,// 56 PAY  32 

    0xdaaa33fd,// 57 PAY  33 

    0xa7f662d6,// 58 PAY  34 

    0x5833c2bc,// 59 PAY  35 

    0x7eeac37d,// 60 PAY  36 

    0xadf832b3,// 61 PAY  37 

    0x958b5bd1,// 62 PAY  38 

    0x24cc4020,// 63 PAY  39 

    0x2be2871c,// 64 PAY  40 

    0xa3b152e1,// 65 PAY  41 

    0x0f42532a,// 66 PAY  42 

    0xe8f95d94,// 67 PAY  43 

    0xe2c3cbce,// 68 PAY  44 

    0x1a58581f,// 69 PAY  45 

    0x66b70a78,// 70 PAY  46 

    0x793d2e96,// 71 PAY  47 

    0xd97e28ba,// 72 PAY  48 

    0x7b18c0bd,// 73 PAY  49 

    0x634ce04a,// 74 PAY  50 

    0x2b40d72a,// 75 PAY  51 

    0xac08df59,// 76 PAY  52 

    0x188c0f19,// 77 PAY  53 

    0x34662558,// 78 PAY  54 

    0xbf65b235,// 79 PAY  55 

    0xb584a9d2,// 80 PAY  56 

    0x5c1a338f,// 81 PAY  57 

    0xec958d51,// 82 PAY  58 

    0x3bfce8cb,// 83 PAY  59 

    0x4bc9b534,// 84 PAY  60 

    0x5f339aa0,// 85 PAY  61 

    0x18fdcbb9,// 86 PAY  62 

    0x03aa28bf,// 87 PAY  63 

    0x8045ee8a,// 88 PAY  64 

    0x344f53e5,// 89 PAY  65 

    0x96b21a90,// 90 PAY  66 

    0xef55084e,// 91 PAY  67 

    0xb40ae26d,// 92 PAY  68 

    0xa42f726b,// 93 PAY  69 

    0x9135557d,// 94 PAY  70 

    0xf7f9ae74,// 95 PAY  71 

    0xa4dd2c54,// 96 PAY  72 

    0x7c38907a,// 97 PAY  73 

    0x554b9a95,// 98 PAY  74 

    0x74de714c,// 99 PAY  75 

    0x6744f844,// 100 PAY  76 

    0x763556e3,// 101 PAY  77 

    0xb96274ed,// 102 PAY  78 

    0x8e942014,// 103 PAY  79 

    0xfb0b7acd,// 104 PAY  80 

    0x71f94ab8,// 105 PAY  81 

    0x866231b8,// 106 PAY  82 

    0x26cf9323,// 107 PAY  83 

    0x7164d5cc,// 108 PAY  84 

    0x49bf10a5,// 109 PAY  85 

    0xc0ec0732,// 110 PAY  86 

    0x3f93eab1,// 111 PAY  87 

    0x354502d9,// 112 PAY  88 

    0x028538e8,// 113 PAY  89 

    0xdbb34468,// 114 PAY  90 

    0x83436fbb,// 115 PAY  91 

    0x2117f983,// 116 PAY  92 

    0x960ec66f,// 117 PAY  93 

    0xb6cf41a4,// 118 PAY  94 

    0x31a25c52,// 119 PAY  95 

    0x7e83ffd6,// 120 PAY  96 

    0xf94d607e,// 121 PAY  97 

    0x4a5973d3,// 122 PAY  98 

    0x69b1b3be,// 123 PAY  99 

    0x0c3d70df,// 124 PAY 100 

    0xde56529b,// 125 PAY 101 

    0x3b061760,// 126 PAY 102 

    0x6de13b7f,// 127 PAY 103 

    0x4b900b8b,// 128 PAY 104 

    0xdf452656,// 129 PAY 105 

    0xbc6665ec,// 130 PAY 106 

    0x4d3f1c60,// 131 PAY 107 

    0x20e60091,// 132 PAY 108 

    0x151d0ad7,// 133 PAY 109 

    0xafb15817,// 134 PAY 110 

    0x367c4c7c,// 135 PAY 111 

    0xd746d0f9,// 136 PAY 112 

    0xbc1e292d,// 137 PAY 113 

    0x8e969492,// 138 PAY 114 

    0xdc16ddd3,// 139 PAY 115 

    0x263e6350,// 140 PAY 116 

    0x3b3bbceb,// 141 PAY 117 

    0x53c9a07e,// 142 PAY 118 

    0x6ae97049,// 143 PAY 119 

    0x9c8b987e,// 144 PAY 120 

    0x8c3c1434,// 145 PAY 121 

    0x588efd7e,// 146 PAY 122 

    0xee850db7,// 147 PAY 123 

    0x79e92ef1,// 148 PAY 124 

    0xc865cc8b,// 149 PAY 125 

    0x00f71e06,// 150 PAY 126 

    0x1cd09623,// 151 PAY 127 

    0x4bc3497a,// 152 PAY 128 

    0xab9f5013,// 153 PAY 129 

    0x492f83f6,// 154 PAY 130 

    0xf4459d74,// 155 PAY 131 

    0xffd6c45f,// 156 PAY 132 

    0x68788b64,// 157 PAY 133 

    0x4f79c807,// 158 PAY 134 

    0xab119434,// 159 PAY 135 
