// This file is generated by Tools/cases_generator/uop_id_generator.py
// from:
//   Python/bytecodes.c
// Do not edit!

#ifndef Py_CORE_UOP_IDS_H
#define Py_CORE_UOP_IDS_H
#ifdef __cplusplus
extern "C" {
#endif

#define _EXIT_TRACE 300
#define _SET_IP 301
#define _BINARY_OP 302
#define _BINARY_OP_ADD_FLOAT 303
#define _BINARY_OP_ADD_INT 304
#define _BINARY_OP_ADD_UNICODE 305
#define _BINARY_OP_INPLACE_ADD_UNICODE 306
#define _BINARY_OP_MULTIPLY_FLOAT 307
#define _BINARY_OP_MULTIPLY_INT 308
#define _BINARY_OP_SUBTRACT_FLOAT 309
#define _BINARY_OP_SUBTRACT_INT 310
#define _BINARY_SLICE 311
#define _BINARY_SUBSCR 312
#define _BINARY_SUBSCR_CHECK_FUNC 313
#define _BINARY_SUBSCR_DICT BINARY_SUBSCR_DICT
#define _BINARY_SUBSCR_INIT_CALL 314
#define _BINARY_SUBSCR_LIST_INT BINARY_SUBSCR_LIST_INT
#define _BINARY_SUBSCR_STR_INT BINARY_SUBSCR_STR_INT
#define _BINARY_SUBSCR_TUPLE_INT BINARY_SUBSCR_TUPLE_INT
#define _BUILD_LIST BUILD_LIST
#define _BUILD_MAP BUILD_MAP
#define _BUILD_SET BUILD_SET
#define _BUILD_SLICE BUILD_SLICE
#define _BUILD_STRING BUILD_STRING
#define _BUILD_TUPLE BUILD_TUPLE
#define _CALL_BUILTIN_CLASS 315
#define _CALL_BUILTIN_FAST 316
#define _CALL_BUILTIN_FAST_WITH_KEYWORDS 317
#define _CALL_BUILTIN_O 318
#define _CALL_INTRINSIC_1 CALL_INTRINSIC_1
#define _CALL_INTRINSIC_2 CALL_INTRINSIC_2
#define _CALL_ISINSTANCE CALL_ISINSTANCE
#define _CALL_KW_NON_PY 319
#define _CALL_LEN CALL_LEN
#define _CALL_LIST_APPEND CALL_LIST_APPEND
#define _CALL_METHOD_DESCRIPTOR_FAST 320
#define _CALL_METHOD_DESCRIPTOR_FAST_WITH_KEYWORDS 321
#define _CALL_METHOD_DESCRIPTOR_NOARGS 322
#define _CALL_METHOD_DESCRIPTOR_O 323
#define _CALL_NON_PY_GENERAL 324
#define _CALL_STR_1 325
#define _CALL_TUPLE_1 326
#define _CALL_TYPE_1 CALL_TYPE_1
#define _CHECK_AND_ALLOCATE_OBJECT 327
#define _CHECK_ATTR_CLASS 328
#define _CHECK_ATTR_METHOD_LAZY_DICT 329
#define _CHECK_ATTR_MODULE_PUSH_KEYS 330
#define _CHECK_ATTR_WITH_HINT 331
#define _CHECK_CALL_BOUND_METHOD_EXACT_ARGS 332
#define _CHECK_EG_MATCH CHECK_EG_MATCH
#define _CHECK_EXC_MATCH CHECK_EXC_MATCH
#define _CHECK_FUNCTION 333
#define _CHECK_FUNCTION_EXACT_ARGS 334
#define _CHECK_FUNCTION_VERSION 335
#define _CHECK_FUNCTION_VERSION_INLINE 336
#define _CHECK_FUNCTION_VERSION_KW 337
#define _CHECK_IS_NOT_PY_CALLABLE 338
#define _CHECK_IS_NOT_PY_CALLABLE_KW 339
#define _CHECK_MANAGED_OBJECT_HAS_VALUES 340
#define _CHECK_METHOD_VERSION 341
#define _CHECK_METHOD_VERSION_KW 342
#define _CHECK_PEP_523 343
#define _CHECK_PERIODIC 344
#define _CHECK_PERIODIC_IF_NOT_YIELD_FROM 345
#define _CHECK_STACK_SPACE 346
#define _CHECK_STACK_SPACE_OPERAND 347
#define _CHECK_VALIDITY 348
#define _CHECK_VALIDITY_AND_SET_IP 349
#define _COMPARE_OP 350
#define _COMPARE_OP_FLOAT 351
#define _COMPARE_OP_INT 352
#define _COMPARE_OP_STR 353
#define _CONTAINS_OP 354
#define _CONTAINS_OP_DICT CONTAINS_OP_DICT
#define _CONTAINS_OP_SET CONTAINS_OP_SET
#define _CONVERT_VALUE CONVERT_VALUE
#define _COPY COPY
#define _COPY_FREE_VARS COPY_FREE_VARS
#define _CREATE_INIT_FRAME 355
#define _DELETE_ATTR DELETE_ATTR
#define _DELETE_DEREF DELETE_DEREF
#define _DELETE_FAST DELETE_FAST
#define _DELETE_GLOBAL DELETE_GLOBAL
#define _DELETE_NAME DELETE_NAME
#define _DELETE_SUBSCR DELETE_SUBSCR
#define _DEOPT 356
#define _DICT_MERGE DICT_MERGE
#define _DICT_UPDATE DICT_UPDATE
#define _DO_CALL 357
#define _DO_CALL_FUNCTION_EX 358
#define _DO_CALL_KW 359
#define _DYNAMIC_EXIT 360
#define _END_SEND END_SEND
#define _ERROR_POP_N 361
#define _EXIT_INIT_CHECK EXIT_INIT_CHECK
#define _EXPAND_METHOD 362
#define _EXPAND_METHOD_KW 363
#define _FATAL_ERROR 364
#define _FORMAT_SIMPLE FORMAT_SIMPLE
#define _FORMAT_WITH_SPEC FORMAT_WITH_SPEC
#define _FOR_ITER 365
#define _FOR_ITER_GEN_FRAME 366
#define _FOR_ITER_TIER_TWO 367
#define _GET_AITER GET_AITER
#define _GET_ANEXT GET_ANEXT
#define _GET_AWAITABLE GET_AWAITABLE
#define _GET_ITER GET_ITER
#define _GET_LEN GET_LEN
#define _GET_YIELD_FROM_ITER GET_YIELD_FROM_ITER
#define _GUARD_BOTH_FLOAT 368
#define _GUARD_BOTH_INT 369
#define _GUARD_BOTH_UNICODE 370
#define _GUARD_BUILTINS_VERSION_PUSH_KEYS 371
#define _GUARD_DORV_NO_DICT 372
#define _GUARD_DORV_VALUES_INST_ATTR_FROM_DICT 373
#define _GUARD_GLOBALS_VERSION 374
#define _GUARD_GLOBALS_VERSION_PUSH_KEYS 375
#define _GUARD_IS_FALSE_POP 376
#define _GUARD_IS_NONE_POP 377
#define _GUARD_IS_NOT_NONE_POP 378
#define _GUARD_IS_TRUE_POP 379
#define _GUARD_KEYS_VERSION 380
#define _GUARD_NOS_FLOAT 381
#define _GUARD_NOS_INT 382
#define _GUARD_NOT_EXHAUSTED_LIST 383
#define _GUARD_NOT_EXHAUSTED_RANGE 384
#define _GUARD_NOT_EXHAUSTED_TUPLE 385
#define _GUARD_TOS_FLOAT 386
#define _GUARD_TOS_INT 387
#define _GUARD_TYPE_VERSION 388
#define _IMPORT_FROM IMPORT_FROM
#define _IMPORT_NAME IMPORT_NAME
#define _INIT_CALL_BOUND_METHOD_EXACT_ARGS 389
#define _INIT_CALL_PY_EXACT_ARGS 390
#define _INIT_CALL_PY_EXACT_ARGS_0 391
#define _INIT_CALL_PY_EXACT_ARGS_1 392
#define _INIT_CALL_PY_EXACT_ARGS_2 393
#define _INIT_CALL_PY_EXACT_ARGS_3 394
#define _INIT_CALL_PY_EXACT_ARGS_4 395
#define _INSTRUMENTED_CALL_FUNCTION_EX INSTRUMENTED_CALL_FUNCTION_EX
#define _INSTRUMENTED_CALL_KW INSTRUMENTED_CALL_KW
#define _INSTRUMENTED_FOR_ITER INSTRUMENTED_FOR_ITER
#define _INSTRUMENTED_INSTRUCTION INSTRUMENTED_INSTRUCTION
#define _INSTRUMENTED_JUMP_FORWARD INSTRUMENTED_JUMP_FORWARD
#define _INSTRUMENTED_LINE INSTRUMENTED_LINE
#define _INSTRUMENTED_LOAD_SUPER_ATTR INSTRUMENTED_LOAD_SUPER_ATTR
#define _INSTRUMENTED_NOT_TAKEN INSTRUMENTED_NOT_TAKEN
#define _INSTRUMENTED_POP_JUMP_IF_FALSE INSTRUMENTED_POP_JUMP_IF_FALSE
#define _INSTRUMENTED_POP_JUMP_IF_NONE INSTRUMENTED_POP_JUMP_IF_NONE
#define _INSTRUMENTED_POP_JUMP_IF_NOT_NONE INSTRUMENTED_POP_JUMP_IF_NOT_NONE
#define _INSTRUMENTED_POP_JUMP_IF_TRUE INSTRUMENTED_POP_JUMP_IF_TRUE
#define _INTERNAL_INCREMENT_OPT_COUNTER 396
#define _IS_NONE 397
#define _IS_OP IS_OP
#define _ITER_CHECK_LIST 398
#define _ITER_CHECK_RANGE 399
#define _ITER_CHECK_TUPLE 400
#define _ITER_JUMP_LIST 401
#define _ITER_JUMP_RANGE 402
#define _ITER_JUMP_TUPLE 403
#define _ITER_NEXT_LIST 404
#define _ITER_NEXT_RANGE 405
#define _ITER_NEXT_TUPLE 406
#define _JUMP_TO_TOP 407
#define _LIST_APPEND LIST_APPEND
#define _LIST_EXTEND LIST_EXTEND
#define _LOAD_ATTR 408
#define _LOAD_ATTR_CLASS 409
#define _LOAD_ATTR_CLASS_0 410
#define _LOAD_ATTR_CLASS_1 411
#define _LOAD_ATTR_GETATTRIBUTE_OVERRIDDEN LOAD_ATTR_GETATTRIBUTE_OVERRIDDEN
#define _LOAD_ATTR_INSTANCE_VALUE 412
#define _LOAD_ATTR_INSTANCE_VALUE_0 413
#define _LOAD_ATTR_INSTANCE_VALUE_1 414
#define _LOAD_ATTR_METHOD_LAZY_DICT 415
#define _LOAD_ATTR_METHOD_NO_DICT 416
#define _LOAD_ATTR_METHOD_WITH_VALUES 417
#define _LOAD_ATTR_MODULE 418
#define _LOAD_ATTR_MODULE_FROM_KEYS 419
#define _LOAD_ATTR_NONDESCRIPTOR_NO_DICT 420
#define _LOAD_ATTR_NONDESCRIPTOR_WITH_VALUES 421
#define _LOAD_ATTR_PROPERTY_FRAME 422
#define _LOAD_ATTR_SLOT 423
#define _LOAD_ATTR_SLOT_0 424
#define _LOAD_ATTR_SLOT_1 425
#define _LOAD_ATTR_WITH_HINT 426
#define _LOAD_BUILD_CLASS LOAD_BUILD_CLASS
#define _LOAD_BYTECODE 427
#define _LOAD_COMMON_CONSTANT LOAD_COMMON_CONSTANT
#define _LOAD_CONST LOAD_CONST
#define _LOAD_CONST_IMMORTAL LOAD_CONST_IMMORTAL
#define _LOAD_CONST_INLINE 428
#define _LOAD_CONST_INLINE_BORROW 429
#define _LOAD_CONST_INLINE_BORROW_WITH_NULL 430
#define _LOAD_CONST_INLINE_WITH_NULL 431
#define _LOAD_DEREF LOAD_DEREF
#define _LOAD_FAST 432
#define _LOAD_FAST_0 433
#define _LOAD_FAST_1 434
#define _LOAD_FAST_2 435
#define _LOAD_FAST_3 436
#define _LOAD_FAST_4 437
#define _LOAD_FAST_5 438
#define _LOAD_FAST_6 439
#define _LOAD_FAST_7 440
#define _LOAD_FAST_AND_CLEAR LOAD_FAST_AND_CLEAR
#define _LOAD_FAST_CHECK LOAD_FAST_CHECK
#define _LOAD_FAST_LOAD_FAST LOAD_FAST_LOAD_FAST
#define _LOAD_FROM_DICT_OR_DEREF LOAD_FROM_DICT_OR_DEREF
#define _LOAD_FROM_DICT_OR_GLOBALS LOAD_FROM_DICT_OR_GLOBALS
#define _LOAD_GLOBAL 441
#define _LOAD_GLOBAL_BUILTINS 442
#define _LOAD_GLOBAL_BUILTINS_FROM_KEYS 443
#define _LOAD_GLOBAL_MODULE 444
#define _LOAD_GLOBAL_MODULE_FROM_KEYS 445
#define _LOAD_LOCALS LOAD_LOCALS
#define _LOAD_NAME LOAD_NAME
#define _LOAD_SMALL_INT 446
#define _LOAD_SMALL_INT_0 447
#define _LOAD_SMALL_INT_1 448
#define _LOAD_SMALL_INT_2 449
#define _LOAD_SMALL_INT_3 450
#define _LOAD_SPECIAL LOAD_SPECIAL
#define _LOAD_SUPER_ATTR_ATTR LOAD_SUPER_ATTR_ATTR
#define _LOAD_SUPER_ATTR_METHOD LOAD_SUPER_ATTR_METHOD
#define _MAKE_CALLARGS_A_TUPLE 451
#define _MAKE_CELL MAKE_CELL
#define _MAKE_FUNCTION MAKE_FUNCTION
#define _MAKE_WARM 452
#define _MAP_ADD MAP_ADD
#define _MATCH_CLASS MATCH_CLASS
#define _MATCH_KEYS MATCH_KEYS
#define _MATCH_MAPPING MATCH_MAPPING
#define _MATCH_SEQUENCE MATCH_SEQUENCE
#define _MAYBE_EXPAND_METHOD 453
#define _MAYBE_EXPAND_METHOD_KW 454
#define _MONITOR_CALL 455
#define _MONITOR_JUMP_BACKWARD 456
#define _MONITOR_RESUME 457
#define _NOP NOP
#define _POP_EXCEPT POP_EXCEPT
#define _POP_JUMP_IF_FALSE 458
#define _POP_JUMP_IF_TRUE 459
#define _POP_TOP POP_TOP
#define _POP_TOP_LOAD_CONST_INLINE_BORROW 460
#define _PUSH_EXC_INFO PUSH_EXC_INFO
#define _PUSH_FRAME 461
#define _PUSH_NULL PUSH_NULL
#define _PY_FRAME_GENERAL 462
#define _PY_FRAME_KW 463
#define _QUICKEN_RESUME 464
#define _REPLACE_WITH_TRUE 465
#define _RESUME_CHECK RESUME_CHECK
#define _RETURN_GENERATOR RETURN_GENERATOR
#define _RETURN_VALUE RETURN_VALUE
#define _SAVE_RETURN_OFFSET 466
#define _SEND 467
#define _SEND_GEN_FRAME 468
#define _SETUP_ANNOTATIONS SETUP_ANNOTATIONS
#define _SET_ADD SET_ADD
#define _SET_FUNCTION_ATTRIBUTE SET_FUNCTION_ATTRIBUTE
#define _SET_UPDATE SET_UPDATE
#define _START_EXECUTOR 469
#define _STORE_ATTR 470
#define _STORE_ATTR_INSTANCE_VALUE 471
#define _STORE_ATTR_SLOT 472
#define _STORE_ATTR_WITH_HINT 473
#define _STORE_DEREF STORE_DEREF
#define _STORE_FAST 474
#define _STORE_FAST_0 475
#define _STORE_FAST_1 476
#define _STORE_FAST_2 477
#define _STORE_FAST_3 478
#define _STORE_FAST_4 479
#define _STORE_FAST_5 480
#define _STORE_FAST_6 481
#define _STORE_FAST_7 482
#define _STORE_FAST_LOAD_FAST STORE_FAST_LOAD_FAST
#define _STORE_FAST_STORE_FAST STORE_FAST_STORE_FAST
#define _STORE_GLOBAL STORE_GLOBAL
#define _STORE_NAME STORE_NAME
#define _STORE_SLICE 483
#define _STORE_SUBSCR 484
#define _STORE_SUBSCR_DICT STORE_SUBSCR_DICT
#define _STORE_SUBSCR_LIST_INT STORE_SUBSCR_LIST_INT
#define _SWAP SWAP
#define _TIER2_RESUME_CHECK 485
#define _TO_BOOL 486
#define _TO_BOOL_BOOL TO_BOOL_BOOL
#define _TO_BOOL_INT TO_BOOL_INT
#define _TO_BOOL_LIST TO_BOOL_LIST
#define _TO_BOOL_NONE TO_BOOL_NONE
#define _TO_BOOL_STR TO_BOOL_STR
#define _UNARY_INVERT UNARY_INVERT
#define _UNARY_NEGATIVE UNARY_NEGATIVE
#define _UNARY_NOT UNARY_NOT
#define _UNPACK_EX UNPACK_EX
#define _UNPACK_SEQUENCE 487
#define _UNPACK_SEQUENCE_LIST UNPACK_SEQUENCE_LIST
#define _UNPACK_SEQUENCE_TUPLE UNPACK_SEQUENCE_TUPLE
#define _UNPACK_SEQUENCE_TWO_TUPLE UNPACK_SEQUENCE_TWO_TUPLE
#define _WITH_EXCEPT_START WITH_EXCEPT_START
#define _YIELD_VALUE YIELD_VALUE
#define MAX_UOP_ID 487

#ifdef __cplusplus
}
#endif
#endif /* !Py_CORE_UOP_IDS_H */
