#ifdef FRONTENDSTART
__FRONTENDSTART = DIAG_START_FRONTEND,
#undef FRONTENDSTART
#endif

DIAG(err_conflicting_module_files, CLASS_ERROR, (unsigned)diag::Severity::Error, "module '%0' is defined in both '%1' and '%2'", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_conflicting_module_names, CLASS_ERROR, (unsigned)diag::Severity::Error, "conflicting module names specified: '-fmodule-name=%0' and '-fmodule-implementation-of %1'", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_fe_action_not_available, CLASS_ERROR, (unsigned)diag::Severity::Error, "action %0 not compiled in", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_fe_backend_frame_larger_than, CLASS_ERROR, (unsigned)diag::Severity::Error, "%0", 0, SFINAE_SubstitutionFailure, false, true, 13)
DIAG(err_fe_backend_plugin, CLASS_ERROR, (unsigned)diag::Severity::Error, "%0", 0, SFINAE_SubstitutionFailure, false, true, 13)
DIAG(err_fe_cannot_link_module, CLASS_ERROR, (unsigned)diag::Severity::Fatal, "cannot link module '%0': %1", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_fe_dependency_file_requires_MT, CLASS_ERROR, (unsigned)diag::Severity::Error, "-dependency-file requires at least one -MT or -MQ option", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_fe_error_backend, CLASS_ERROR, (unsigned)diag::Severity::Fatal, "error in backend: %0", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_fe_error_opening, CLASS_ERROR, (unsigned)diag::Severity::Error, "error opening '%0': %1", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_fe_error_reading, CLASS_ERROR, (unsigned)diag::Severity::Error, "error reading '%0'", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_fe_error_reading_stdin, CLASS_ERROR, (unsigned)diag::Severity::Error, "error reading stdin: %0", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_fe_expected_clang_command, CLASS_ERROR, (unsigned)diag::Severity::Error, "expected a clang compiler command", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_fe_expected_compiler_job, CLASS_ERROR, (unsigned)diag::Severity::Error, "unable to handle compilation, expected exactly one compiler job in '%0'", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_fe_inline_asm, CLASS_ERROR, (unsigned)diag::Severity::Error, "%0", 0, SFINAE_SubstitutionFailure, false, true, 11)
DIAG(err_fe_invalid_code_complete_file, CLASS_ERROR, (unsigned)diag::Severity::Fatal, "cannot locate code-completion file %0", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_fe_invalid_plugin_name, CLASS_ERROR, (unsigned)diag::Severity::Error, "unable to find plugin '%0'", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_fe_no_pch_in_dir, CLASS_ERROR, (unsigned)diag::Severity::Error, "no suitable precompiled header file found in directory '%0'", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_fe_pth_file_has_no_source_header, CLASS_ERROR, (unsigned)diag::Severity::Error, "PTH file '%0' does not designate an original source header file for -include-pth", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_fe_remap_missing_from_file, CLASS_ERROR, (unsigned)diag::Severity::Fatal, "could not remap from missing file '%0'", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_fe_remap_missing_to_file, CLASS_ERROR, (unsigned)diag::Severity::Fatal, "could not remap file '%0' to the contents of file '%1'", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_fe_stdout_binary, CLASS_ERROR, (unsigned)diag::Severity::Fatal, "unable to change standard output to binary", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_fe_unable_to_create_target, CLASS_ERROR, (unsigned)diag::Severity::Error, "unable to create target: '%0'", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_fe_unable_to_interface_with_target, CLASS_ERROR, (unsigned)diag::Severity::Error, "unable to interface with target machine", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_fe_unable_to_load_pch, CLASS_ERROR, (unsigned)diag::Severity::Error, "unable to load PCH file", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_fe_unable_to_load_plugin, CLASS_ERROR, (unsigned)diag::Severity::Error, "unable to load plugin '%0': '%1'", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_fe_unable_to_open_output, CLASS_ERROR, (unsigned)diag::Severity::Error, "unable to open output file '%0': '%1'", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_invalid_vfs_overlay, CLASS_ERROR, (unsigned)diag::Severity::Fatal, "invalid virtual filesystem overlay file '%0'", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_missing_module, CLASS_ERROR, (unsigned)diag::Severity::Fatal, "no module named '%0' declared in module map file '%1'", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_missing_module_name, CLASS_ERROR, (unsigned)diag::Severity::Fatal, "no module name provided; specify one with -fmodule-name=", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_missing_vfs_overlay_file, CLASS_ERROR, (unsigned)diag::Severity::Fatal, "virtual filesystem overlay file '%0' not found", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_module_cannot_create_includes, CLASS_ERROR, (unsigned)diag::Severity::Error, "cannot create includes file for module %0: %1", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_module_file_invalid, CLASS_ERROR, (unsigned)diag::Severity::Fatal, "file '%0' is not a valid precompiled module file", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_module_file_not_found, CLASS_ERROR, (unsigned)diag::Severity::Fatal, "module file '%0' not found", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_module_file_not_module, CLASS_ERROR, (unsigned)diag::Severity::Fatal, "AST file '%0' was not built as a module", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_module_header_missing, CLASS_ERROR, (unsigned)diag::Severity::Error, "%select{|umbrella }0header '%1' not found", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_module_map_not_found, CLASS_ERROR, (unsigned)diag::Severity::Fatal, "module map file '%0' not found", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_module_unavailable, CLASS_ERROR, (unsigned)diag::Severity::Error, "module '%0' %select{is incompatible with|requires}1 feature '%2'", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_no_submodule, CLASS_ERROR, (unsigned)diag::Severity::Error, "no submodule named %0 in module '%1'", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_no_submodule_suggest, CLASS_ERROR, (unsigned)diag::Severity::Error, "no submodule named %0 in module '%1'; did you mean '%2'?", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_relocatable_without_isysroot, CLASS_ERROR, (unsigned)diag::Severity::Error, "must specify system root with -isysroot when building a relocatable PCH file", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_unknown_analyzer_checker, CLASS_ERROR, (unsigned)diag::Severity::Error, "no analyzer checkers are associated with '%0'", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_verify_inconsistent_diags, CLASS_ERROR, (unsigned)diag::Severity::Error, "'%0' diagnostics %select{expected|seen}1 but not %select{seen|expected}1: %2", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_verify_invalid_content, CLASS_ERROR, (unsigned)diag::Severity::Error, "invalid expected %0: %1", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_verify_invalid_no_diags, CLASS_ERROR, (unsigned)diag::Severity::Error, "%select{expected|'expected-no-diagnostics'}0 directive cannot follow %select{'expected-no-diagnostics' directive|other expected directives}0", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_verify_invalid_range, CLASS_ERROR, (unsigned)diag::Severity::Error, "invalid range following '-' in expected %0", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_verify_missing_end, CLASS_ERROR, (unsigned)diag::Severity::Error, "cannot find end ('}}') of expected %0", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_verify_missing_file, CLASS_ERROR, (unsigned)diag::Severity::Error, "file '%0' could not be located in expected %1", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_verify_missing_line, CLASS_ERROR, (unsigned)diag::Severity::Error, "missing or invalid line number following '@' in expected %0", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_verify_missing_regex, CLASS_ERROR, (unsigned)diag::Severity::Error, "cannot find start of regex ('{{') in %0", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_verify_missing_start, CLASS_ERROR, (unsigned)diag::Severity::Error, "cannot find start ('{{') of expected %0", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_verify_no_directives, CLASS_ERROR, (unsigned)diag::Severity::Error, "no expected directives found: consider use of 'expected-no-diagnostics'", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(note_fe_backend_frame_larger_than, CLASS_NOTE, (unsigned)diag::Severity::Fatal, "%0", 0, SFINAE_Suppress, false, true, 13)
DIAG(note_fe_backend_optimization_remark_invalid_loc, CLASS_NOTE, (unsigned)diag::Severity::Fatal, "could not determine the original source location for %0:%1:%2", 0, SFINAE_Suppress, false, false, 0)
DIAG(note_fe_backend_plugin, CLASS_NOTE, (unsigned)diag::Severity::Fatal, "%0", 0, SFINAE_Suppress, false, true, 13)
DIAG(note_fe_inline_asm, CLASS_NOTE, (unsigned)diag::Severity::Fatal, "%0", 0, SFINAE_Suppress, false, false, 11)
DIAG(note_fe_inline_asm_here, CLASS_NOTE, (unsigned)diag::Severity::Fatal, "instantiated into assembly here", 0, SFINAE_Suppress, false, false, 0)
DIAG(note_fixit_applied, CLASS_NOTE, (unsigned)diag::Severity::Fatal, "FIX-IT applied suggested code changes", 0, SFINAE_Suppress, false, false, 0)
DIAG(note_fixit_failed, CLASS_NOTE, (unsigned)diag::Severity::Fatal, "FIX-IT unable to apply suggested code changes", 0, SFINAE_Suppress, false, false, 0)
DIAG(note_fixit_in_macro, CLASS_NOTE, (unsigned)diag::Severity::Fatal, "FIX-IT unable to apply suggested code changes in a macro", 0, SFINAE_Suppress, false, false, 0)
DIAG(note_fixit_unfixed_error, CLASS_NOTE, (unsigned)diag::Severity::Fatal, "FIX-IT detected an error it cannot fix", 0, SFINAE_Suppress, false, false, 0)
DIAG(note_incompatible_analyzer_plugin_api, CLASS_NOTE, (unsigned)diag::Severity::Fatal, "current API version is '%0', but plugin was compiled with version '%1'", 0, SFINAE_Suppress, false, false, 0)
DIAG(note_module_def_undef_here, CLASS_NOTE, (unsigned)diag::Severity::Fatal, "macro was %select{defined|#undef'd}0 here", 0, SFINAE_Suppress, false, false, 0)
DIAG(note_module_file_imported_by, CLASS_NOTE, (unsigned)diag::Severity::Fatal, "imported by %select{|module '%2' in }1'%0'", 0, SFINAE_Suppress, false, false, 0)
DIAG(note_suggest_disabling_all_checkers, CLASS_NOTE, (unsigned)diag::Severity::Fatal, "use -analyzer-disable-all-checks to disable all static analyzer checkers", 0, SFINAE_Suppress, false, false, 0)
DIAG(remark_fe_backend_optimization_remark, CLASS_REMARK, (unsigned)diag::Severity::Ignored, "%0", 402, SFINAE_Suppress, false, true, 13)
DIAG(remark_fe_backend_optimization_remark_analysis, CLASS_REMARK, (unsigned)diag::Severity::Ignored, "%0", 403, SFINAE_Suppress, false, true, 13)
DIAG(remark_fe_backend_optimization_remark_missed, CLASS_REMARK, (unsigned)diag::Severity::Ignored, "%0", 405, SFINAE_Suppress, false, true, 13)
DIAG(remark_fe_backend_plugin, CLASS_REMARK, (unsigned)diag::Severity::Ignored, "%0", 439, SFINAE_Suppress, false, true, 13)
DIAG(remark_module_build, CLASS_REMARK, (unsigned)diag::Severity::Ignored, "building module '%0' as '%1'", 323, SFINAE_Suppress, false, false, 0)
DIAG(remark_module_build_done, CLASS_REMARK, (unsigned)diag::Severity::Ignored, "finished building module '%0'", 323, SFINAE_Suppress, false, false, 0)
DIAG(remark_sanitize_address_insert_extra_padding_accepted, CLASS_REMARK, (unsigned)diag::Severity::Ignored, "-fsanitize-address-field-padding applied to %0", 449, SFINAE_Suppress, false, true, 0)
DIAG(remark_sanitize_address_insert_extra_padding_rejected, CLASS_REMARK, (unsigned)diag::Severity::Ignored, "-fsanitize-address-field-padding ignored for %0 because it %select{is not C++|is packed|is a union|is trivially copyable|has trivial destructor|is standard layout|is in a blacklisted file|is blacklisted}1", 449, SFINAE_Suppress, false, true, 0)
DIAG(warn_fe_backend_frame_larger_than, CLASS_WARNING, (unsigned)diag::Severity::Warning, "%0", 197, SFINAE_Suppress, false, true, 13)
DIAG(warn_fe_backend_optimization_failure, CLASS_WARNING, (unsigned)diag::Severity::Warning, "%0", 404, SFINAE_Suppress, false, true, 13)
DIAG(warn_fe_backend_plugin, CLASS_WARNING, (unsigned)diag::Severity::Warning, "%0", 47, SFINAE_Suppress, false, true, 13)
DIAG(warn_fe_cc_log_diagnostics_failure, CLASS_WARNING, (unsigned)diag::Severity::Warning, "unable to open CC_LOG_DIAGNOSTICS file: %0 (using stderr)", 0, SFINAE_Suppress, false, false, 0)
DIAG(warn_fe_cc_print_header_failure, CLASS_WARNING, (unsigned)diag::Severity::Warning, "unable to open CC_PRINT_HEADERS file: %0 (using stderr)", 0, SFINAE_Suppress, false, false, 0)
DIAG(warn_fe_frame_larger_than, CLASS_WARNING, (unsigned)diag::Severity::Warning, "stack frame size of %0 bytes in %q1", 197, SFINAE_Suppress, false, true, 13)
DIAG(warn_fe_inline_asm, CLASS_WARNING, (unsigned)diag::Severity::Warning, "%0", 267, SFINAE_Suppress, false, false, 11)
DIAG(warn_fe_macro_contains_embedded_newline, CLASS_WARNING, (unsigned)diag::Severity::Warning, "macro '%0' contains embedded newline; text after the newline is ignored", 0, SFINAE_Suppress, false, false, 0)
DIAG(warn_fe_override_module, CLASS_WARNING, (unsigned)diag::Severity::Warning, "overriding the module target triple with %0", 392, SFINAE_Suppress, false, false, 0)
DIAG(warn_fe_serialized_diag_failure, CLASS_WARNING, (unsigned)diag::Severity::Warning, "unable to open file %0 for serializing diagnostics (%1)", 460, SFINAE_Suppress, false, false, 0)
DIAG(warn_fe_serialized_diag_merge_failure, CLASS_WARNING, (unsigned)diag::Severity::Warning, "unable to merge a subprocess's serialized diagnostics", 460, SFINAE_Suppress, false, false, 0)
DIAG(warn_fixit_no_changes, CLASS_NOTE, (unsigned)diag::Severity::Fatal, "FIX-IT detected errors it could not fix; no output will be generated", 0, SFINAE_Suppress, false, false, 0)
DIAG(warn_incompatible_analyzer_plugin_api, CLASS_WARNING, (unsigned)diag::Severity::Warning, "checker plugin '%0' is not compatible with this version of the analyzer", 19, SFINAE_Suppress, false, false, 0)
DIAG(warn_missing_submodule, CLASS_WARNING, (unsigned)diag::Severity::Warning, "missing submodule '%0'", 259, SFINAE_Suppress, false, false, 0)
DIAG(warn_module_config_macro_undef, CLASS_WARNING, (unsigned)diag::Severity::Warning, "%select{definition|#undef}0 of configuration macro '%1' has no effect on the import of '%2'; pass '%select{-D%1=...|-U%1}0' on the command line to configure the module", 103, SFINAE_Suppress, false, false, 0)
DIAG(warn_unknown_diag_option, CLASS_WARNING, (unsigned)diag::Severity::Warning, "unknown %select{warning|remark}0 option '%1'%select{|; did you mean '%3'?}2", 546, SFINAE_Suppress, false, false, 0)
DIAG(warn_unknown_warning_specifier, CLASS_WARNING, (unsigned)diag::Severity::Warning, "unknown %0 warning specifier: '%1'", 546, SFINAE_Suppress, false, false, 0)
