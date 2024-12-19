// This file is generated by Tools/cases_generator/opcode_id_generator.py
// from:
//   Python/bytecodes.c
// Do not edit!

#ifndef Py_OPCODE_IDS_H
#define Py_OPCODE_IDS_H
#ifdef __cplusplus
extern "C" {
#endif

/* Instruction opcodes for compiled code */
#define CACHE                                    0
#define BINARY_SLICE                             1
#define BINARY_SUBSCR                            2
#define BINARY_OP_INPLACE_ADD_UNICODE            3
#define CHECK_EG_MATCH                           4
#define CHECK_EXC_MATCH                          5
#define CLEANUP_THROW                            6
#define DELETE_SUBSCR                            7
#define END_ASYNC_FOR                            8
#define END_FOR                                  9
#define END_SEND                                10
#define EXIT_INIT_CHECK                         11
#define FORMAT_SIMPLE                           12
#define FORMAT_WITH_SPEC                        13
#define GET_AITER                               14
#define GET_ANEXT                               15
#define GET_ITER                                16
#define RESERVED                                17
#define GET_LEN                                 18
#define GET_YIELD_FROM_ITER                     19
#define INTERPRETER_EXIT                        20
#define LOAD_BUILD_CLASS                        21
#define LOAD_LOCALS                             22
#define MAKE_FUNCTION                           23
#define MATCH_KEYS                              24
#define MATCH_MAPPING                           25
#define MATCH_SEQUENCE                          26
#define NOP                                     27
#define NOT_TAKEN                               28
#define POP_EXCEPT                              29
#define POP_TOP                                 30
#define PUSH_EXC_INFO                           31
#define PUSH_NULL                               32
#define RETURN_GENERATOR                        33
#define RETURN_VALUE                            34
#define SETUP_ANNOTATIONS                       35
#define STORE_SLICE                             36
#define STORE_SUBSCR                            37
#define TO_BOOL                                 38
#define UNARY_INVERT                            39
#define UNARY_NEGATIVE                          40
#define UNARY_NOT                               41
#define WITH_EXCEPT_START                       42
#define BINARY_OP                               43
#define BUILD_LIST                              44
#define BUILD_MAP                               45
#define BUILD_SET                               46
#define BUILD_SLICE                             47
#define BUILD_STRING                            48
#define BUILD_TUPLE                             49
#define CALL                                    50
#define CALL_FUNCTION_EX                        51
#define CALL_INTRINSIC_1                        52
#define CALL_INTRINSIC_2                        53
#define CALL_KW                                 54
#define COMPARE_OP                              55
#define CONTAINS_OP                             56
#define CONVERT_VALUE                           57
#define COPY                                    58
#define COPY_FREE_VARS                          59
#define DELETE_ATTR                             60
#define DELETE_DEREF                            61
#define DELETE_FAST                             62
#define DELETE_GLOBAL                           63
#define DELETE_NAME                             64
#define DICT_MERGE                              65
#define DICT_UPDATE                             66
#define EXTENDED_ARG                            67
#define FOR_ITER                                68
#define GET_AWAITABLE                           69
#define IMPORT_FROM                             70
#define IMPORT_NAME                             71
#define IS_OP                                   72
#define JUMP_BACKWARD                           73
#define JUMP_BACKWARD_NO_INTERRUPT              74
#define JUMP_FORWARD                            75
#define LIST_APPEND                             76
#define LIST_EXTEND                             77
#define LOAD_ATTR                               78
#define LOAD_COMMON_CONSTANT                    79
#define LOAD_CONST                              80
#define LOAD_DEREF                              81
#define LOAD_FAST                               82
#define LOAD_FAST_AND_CLEAR                     83
#define LOAD_FAST_CHECK                         84
#define LOAD_FAST_LOAD_FAST                     85
#define LOAD_FROM_DICT_OR_DEREF                 86
#define LOAD_FROM_DICT_OR_GLOBALS               87
#define LOAD_GLOBAL                             88
#define LOAD_NAME                               89
#define LOAD_SMALL_INT                          90
#define LOAD_SPECIAL                            91
#define LOAD_SUPER_ATTR                         92
#define MAKE_CELL                               93
#define MAP_ADD                                 94
#define MATCH_CLASS                             95
#define POP_JUMP_IF_FALSE                       96
#define POP_JUMP_IF_NONE                        97
#define POP_JUMP_IF_NOT_NONE                    98
#define POP_JUMP_IF_TRUE                        99
#define RAISE_VARARGS                          100
#define RERAISE                                101
#define SEND                                   102
#define SET_ADD                                103
#define SET_FUNCTION_ATTRIBUTE                 104
#define SET_UPDATE                             105
#define STORE_ATTR                             106
#define STORE_DEREF                            107
#define STORE_FAST                             108
#define STORE_FAST_LOAD_FAST                   109
#define STORE_FAST_STORE_FAST                  110
#define STORE_GLOBAL                           111
#define STORE_NAME                             112
#define SWAP                                   113
#define UNPACK_EX                              114
#define UNPACK_SEQUENCE                        115
#define YIELD_VALUE                            116
#define RESUME                                 149
#define BINARY_OP_ADD_FLOAT                    150
#define BINARY_OP_ADD_INT                      151
#define BINARY_OP_ADD_UNICODE                  152
#define BINARY_OP_MULTIPLY_FLOAT               153
#define BINARY_OP_MULTIPLY_INT                 154
#define BINARY_OP_SUBTRACT_FLOAT               155
#define BINARY_OP_SUBTRACT_INT                 156
#define BINARY_SUBSCR_DICT                     157
#define BINARY_SUBSCR_GETITEM                  158
#define BINARY_SUBSCR_LIST_INT                 159
#define BINARY_SUBSCR_STR_INT                  160
#define BINARY_SUBSCR_TUPLE_INT                161
#define CALL_ALLOC_AND_ENTER_INIT              162
#define CALL_BOUND_METHOD_EXACT_ARGS           163
#define CALL_BOUND_METHOD_GENERAL              164
#define CALL_BUILTIN_CLASS                     165
#define CALL_BUILTIN_FAST                      166
#define CALL_BUILTIN_FAST_WITH_KEYWORDS        167
#define CALL_BUILTIN_O                         168
#define CALL_ISINSTANCE                        169
#define CALL_KW_BOUND_METHOD                   170
#define CALL_KW_NON_PY                         171
#define CALL_KW_PY                             172
#define CALL_LEN                               173
#define CALL_LIST_APPEND                       174
#define CALL_METHOD_DESCRIPTOR_FAST            175
#define CALL_METHOD_DESCRIPTOR_FAST_WITH_KEYWORDS 176
#define CALL_METHOD_DESCRIPTOR_NOARGS          177
#define CALL_METHOD_DESCRIPTOR_O               178
#define CALL_NON_PY_GENERAL                    179
#define CALL_PY_EXACT_ARGS                     180
#define CALL_PY_GENERAL                        181
#define CALL_STR_1                             182
#define CALL_TUPLE_1                           183
#define CALL_TYPE_1                            184
#define COMPARE_OP_FLOAT                       185
#define COMPARE_OP_INT                         186
#define COMPARE_OP_STR                         187
#define CONTAINS_OP_DICT                       188
#define CONTAINS_OP_SET                        189
#define FOR_ITER_GEN                           190
#define FOR_ITER_LIST                          191
#define FOR_ITER_RANGE                         192
#define FOR_ITER_TUPLE                         193
#define LOAD_ATTR_CLASS                        194
#define LOAD_ATTR_CLASS_WITH_METACLASS_CHECK   195
#define LOAD_ATTR_GETATTRIBUTE_OVERRIDDEN      196
#define LOAD_ATTR_INSTANCE_VALUE               197
#define LOAD_ATTR_METHOD_LAZY_DICT             198
#define LOAD_ATTR_METHOD_NO_DICT               199
#define LOAD_ATTR_METHOD_WITH_VALUES           200
#define LOAD_ATTR_MODULE                       201
#define LOAD_ATTR_NONDESCRIPTOR_NO_DICT        202
#define LOAD_ATTR_NONDESCRIPTOR_WITH_VALUES    203
#define LOAD_ATTR_PROPERTY                     204
#define LOAD_ATTR_SLOT                         205
#define LOAD_ATTR_WITH_HINT                    206
#define LOAD_CONST_IMMORTAL                    207
#define LOAD_GLOBAL_BUILTIN                    208
#define LOAD_GLOBAL_MODULE                     209
#define LOAD_SUPER_ATTR_ATTR                   210
#define LOAD_SUPER_ATTR_METHOD                 211
#define RESUME_CHECK                           212
#define SEND_GEN                               213
#define STORE_ATTR_INSTANCE_VALUE              214
#define STORE_ATTR_SLOT                        215
#define STORE_ATTR_WITH_HINT                   216
#define STORE_SUBSCR_DICT                      217
#define STORE_SUBSCR_LIST_INT                  218
#define TO_BOOL_ALWAYS_TRUE                    219
#define TO_BOOL_BOOL                           220
#define TO_BOOL_INT                            221
#define TO_BOOL_LIST                           222
#define TO_BOOL_NONE                           223
#define TO_BOOL_STR                            224
#define UNPACK_SEQUENCE_LIST                   225
#define UNPACK_SEQUENCE_TUPLE                  226
#define UNPACK_SEQUENCE_TWO_TUPLE              227
#define INSTRUMENTED_END_FOR                   236
#define INSTRUMENTED_END_SEND                  237
#define INSTRUMENTED_LOAD_SUPER_ATTR           238
#define INSTRUMENTED_FOR_ITER                  239
#define INSTRUMENTED_CALL_KW                   240
#define INSTRUMENTED_CALL_FUNCTION_EX          241
#define INSTRUMENTED_INSTRUCTION               242
#define INSTRUMENTED_JUMP_FORWARD              243
#define INSTRUMENTED_NOT_TAKEN                 244
#define INSTRUMENTED_POP_JUMP_IF_TRUE          245
#define INSTRUMENTED_POP_JUMP_IF_FALSE         246
#define INSTRUMENTED_POP_JUMP_IF_NONE          247
#define INSTRUMENTED_POP_JUMP_IF_NOT_NONE      248
#define INSTRUMENTED_RESUME                    249
#define INSTRUMENTED_RETURN_VALUE              250
#define INSTRUMENTED_YIELD_VALUE               251
#define INSTRUMENTED_CALL                      252
#define INSTRUMENTED_JUMP_BACKWARD             253
#define INSTRUMENTED_LINE                      254
#define ENTER_EXECUTOR                         255
#define JUMP                                   256
#define JUMP_IF_FALSE                          257
#define JUMP_IF_TRUE                           258
#define JUMP_NO_INTERRUPT                      259
#define LOAD_CLOSURE                           260
#define POP_BLOCK                              261
#define SETUP_CLEANUP                          262
#define SETUP_FINALLY                          263
#define SETUP_WITH                             264
#define STORE_FAST_MAYBE_NULL                  265

#define HAVE_ARGUMENT                           42
#define MIN_SPECIALIZED_OPCODE                 150
#define MIN_INSTRUMENTED_OPCODE                236

#ifdef __cplusplus
}
#endif
#endif /* !Py_OPCODE_IDS_H */
