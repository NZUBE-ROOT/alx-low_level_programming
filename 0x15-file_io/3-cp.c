{"payload":{"allShortcutsEnabled":false,"fileTree":{"0x15-file_io":{"items":[{"name":"0-read_textfile.c","path":"0x15-file_io/0-read_textfile.c","contentType":"file"},{"name":"1-create_file.c","path":"0x15-file_io/1-create_file.c","contentType":"file"},{"name":"100-elf_header.c","path":"0x15-file_io/100-elf_header.c","contentType":"file"},{"name":"2-append_text_to_file.c","path":"0x15-file_io/2-append_text_to_file.c","contentType":"file"},{"name":"3-cp.c","path":"0x15-file_io/3-cp.c","contentType":"file"},{"name":"README.md","path":"0x15-file_io/README.md","contentType":"file"},{"name":"main.h","path":"0x15-file_io/main.h","contentType":"file"}],"totalCount":7},"":{"items":[{"name":"0x00-hello_world","path":"0x00-hello_world","contentType":"directory"},{"name":"0x01-variables_if_else_while","path":"0x01-variables_if_else_while","contentType":"directory"},{"name":"0x02-functions_nested_loops","path":"0x02-functions_nested_loops","contentType":"directory"},{"name":"0x03-debugging","path":"0x03-debugging","contentType":"directory"},{"name":"0x04-more_functions_nested_loops","path":"0x04-more_functions_nested_loops","contentType":"directory"},{"name":"0x05-pointers_arrays_strings","path":"0x05-pointers_arrays_strings","contentType":"directory"},{"name":"0x06-pointers_arrays_strings","path":"0x06-pointers_arrays_strings","contentType":"directory"},{"name":"0x07-pointers_arrays_strings","path":"0x07-pointers_arrays_strings","contentType":"directory"},{"name":"0x08-recursion","path":"0x08-recursion","contentType":"directory"},{"name":"0x09-static_libraries","path":"0x09-static_libraries","contentType":"directory"},{"name":"0x0A-argc_argv","path":"0x0A-argc_argv","contentType":"directory"},{"name":"0x0B-malloc_free","path":"0x0B-malloc_free","contentType":"directory"},{"name":"0x0C-more_malloc_free","path":"0x0C-more_malloc_free","contentType":"directory"},{"name":"0x0D-preprocessor","path":"0x0D-preprocessor","contentType":"directory"},{"name":"0x0E-structures_typedef","path":"0x0E-structures_typedef","contentType":"directory"},{"name":"0x0F-function_pointers","path":"0x0F-function_pointers","contentType":"directory"},{"name":"0x10-variadic_functions","path":"0x10-variadic_functions","contentType":"directory"},{"name":"0x12-singly_linked_lists","path":"0x12-singly_linked_lists","contentType":"directory"},{"name":"0x13-more_singly_linked_lists","path":"0x13-more_singly_linked_lists","contentType":"directory"},{"name":"0x14-bit_manipulation","path":"0x14-bit_manipulation","contentType":"directory"},{"name":"0x15-file_io","path":"0x15-file_io","contentType":"directory"},{"name":"README.md","path":"README.md","contentType":"file"}],"totalCount":22}},"fileTreeProcessingTime":8.539318,"foldersToFetch":[],"reducedMotionEnabled":null,"repo":{"id":546578712,"defaultBranch":"master","name":"alx-low_level_programming-1","ownerLogin":"cupa007","currentUserCanPush":false,"isFork":true,"isEmpty":false,"createdAt":"2022-10-06T09:54:29.000Z","ownerAvatar":"https://avatars.githubusercontent.com/u/109801650?v=4","public":true,"private":false,"isOrgOwned":false},"symbolsExpanded":false,"treeExpanded":true,"refInfo":{"name":"master","listCacheKey":"v0:1665051110.25737","canEdit":false,"refType":"branch","currentOid":"8015227dda553301e1b426a951ff966090d27474"},"path":"0x15-file_io/3-cp.c","currentUser":null,"blob":{"rawLines":["#include \"main.h\"","#include <stdio.h>","","/**"," * error_file - checks if files can be opened."," * @file_from: file_from."," * @file_to: file_to."," * @argv: arguments vector."," * Return: no return."," */","void error_file(int file_from, int file_to, char *argv[])","{","\tif (file_from == -1)","\t{","\t\tdprintf(STDERR_FILENO, \"Error: Can't read from file %s\\n\", argv[1]);","\t\texit(98);","\t}","\tif (file_to == -1)","\t{","\t\tdprintf(STDERR_FILENO, \"Error: Can't write to %s\\n\", argv[2]);","\t\texit(99);","\t}","}","","/**"," * main - check the code for Holberton School students."," * @argc: number of arguments."," * @argv: arguments vector."," * Return: Always 0."," */","int main(int argc, char *argv[])","{","\tint file_from, file_to, err_close;","\tssize_t nchars, nwr;","\tchar buf[1024];","","\tif (argc != 3)","\t{","\t\tdprintf(STDERR_FILENO, \"%s\\n\", \"Usage: cp file_from file_to\");","\t\texit(97);","\t}","","\tfile_from = open(argv[1], O_RDONLY);","\tfile_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);","\terror_file(file_from, file_to, argv);","","\tnchars = 1024;","\twhile (nchars == 1024)","\t{","\t\tnchars = read(file_from, buf, 1024);","\t\tif (nchars == -1)","\t\t\terror_file(-1, 0, argv);","\t\tnwr = write(file_to, buf, nchars);","\t\tif (nwr == -1)","\t\t\terror_file(0, -1, argv);","\t}","","\terr_close = close(file_from);","\tif (err_close == -1)","\t{","\t\tdprintf(STDERR_FILENO, \"Error: Can't close fd %d\\n\", file_from);","\t\texit(100);","\t}","","\terr_close = close(file_to);","\tif (err_close == -1)","\t{","\t\tdprintf(STDERR_FILENO, \"Error: Can't close fd %d\\n\", file_from);","\t\texit(100);","\t}","\treturn (0);","}"],"stylingDirectives":[[{"start":0,"end":8,"cssClass":"pl-k"},{"start":9,"end":17,"cssClass":"pl-s"}],[{"start":0,"end":8,"cssClass":"pl-k"},{"start":9,"end":18,"cssClass":"pl-s"}],[],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":46,"cssClass":"pl-c"}],[{"start":0,"end":25,"cssClass":"pl-c"}],[{"start":0,"end":21,"cssClass":"pl-c"}],[{"start":0,"end":27,"cssClass":"pl-c"}],[{"start":0,"end":21,"cssClass":"pl-c"}],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":4,"cssClass":"pl-smi"},{"start":5,"end":15,"cssClass":"pl-en"},{"start":16,"end":19,"cssClass":"pl-smi"},{"start":20,"end":29,"cssClass":"pl-s1"},{"start":31,"end":34,"cssClass":"pl-smi"},{"start":35,"end":42,"cssClass":"pl-s1"},{"start":44,"end":48,"cssClass":"pl-smi"},{"start":49,"end":50,"cssClass":"pl-c1"},{"start":50,"end":54,"cssClass":"pl-s1"}],[],[{"start":1,"end":3,"cssClass":"pl-k"},{"start":5,"end":14,"cssClass":"pl-s1"},{"start":15,"end":17,"cssClass":"pl-c1"},{"start":18,"end":20,"cssClass":"pl-c1"}],[],[{"start":2,"end":9,"cssClass":"pl-en"},{"start":10,"end":23,"cssClass":"pl-c1"},{"start":25,"end":59,"cssClass":"pl-s"},{"start":61,"end":65,"cssClass":"pl-s1"},{"start":66,"end":67,"cssClass":"pl-c1"}],[{"start":2,"end":6,"cssClass":"pl-en"},{"start":7,"end":9,"cssClass":"pl-c1"}],[],[{"start":1,"end":3,"cssClass":"pl-k"},{"start":5,"end":12,"cssClass":"pl-s1"},{"start":13,"end":15,"cssClass":"pl-c1"},{"start":16,"end":18,"cssClass":"pl-c1"}],[],[{"start":2,"end":9,"cssClass":"pl-en"},{"start":10,"end":23,"cssClass":"pl-c1"},{"start":25,"end":53,"cssClass":"pl-s"},{"start":55,"end":59,"cssClass":"pl-s1"},{"start":60,"end":61,"cssClass":"pl-c1"}],[{"start":2,"end":6,"cssClass":"pl-en"},{"start":7,"end":9,"cssClass":"pl-c1"}],[],[],[],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":55,"cssClass":"pl-c"}],[{"start":0,"end":30,"cssClass":"pl-c"}],[{"start":0,"end":27,"cssClass":"pl-c"}],[{"start":0,"end":20,"cssClass":"pl-c"}],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":3,"cssClass":"pl-smi"},{"start":4,"end":8,"cssClass":"pl-en"},{"start":9,"end":12,"cssClass":"pl-smi"},{"start":13,"end":17,"cssClass":"pl-s1"},{"start":19,"end":23,"cssClass":"pl-smi"},{"start":24,"end":25,"cssClass":"pl-c1"},{"start":25,"end":29,"cssClass":"pl-s1"}],[],[{"start":1,"end":4,"cssClass":"pl-smi"},{"start":5,"end":14,"cssClass":"pl-s1"},{"start":16,"end":23,"cssClass":"pl-s1"},{"start":25,"end":34,"cssClass":"pl-s1"}],[{"start":1,"end":8,"cssClass":"pl-smi"},{"start":9,"end":15,"cssClass":"pl-s1"},{"start":17,"end":20,"cssClass":"pl-s1"}],[{"start":1,"end":5,"cssClass":"pl-smi"},{"start":6,"end":9,"cssClass":"pl-s1"},{"start":10,"end":14,"cssClass":"pl-c1"}],[],[{"start":1,"end":3,"cssClass":"pl-k"},{"start":5,"end":9,"cssClass":"pl-s1"},{"start":10,"end":12,"cssClass":"pl-c1"},{"start":13,"end":14,"cssClass":"pl-c1"}],[],[{"start":2,"end":9,"cssClass":"pl-en"},{"start":10,"end":23,"cssClass":"pl-c1"},{"start":25,"end":31,"cssClass":"pl-s"},{"start":33,"end":62,"cssClass":"pl-s"}],[{"start":2,"end":6,"cssClass":"pl-en"},{"start":7,"end":9,"cssClass":"pl-c1"}],[],[],[{"start":1,"end":10,"cssClass":"pl-s1"},{"start":11,"end":12,"cssClass":"pl-c1"},{"start":13,"end":17,"cssClass":"pl-en"},{"start":18,"end":22,"cssClass":"pl-s1"},{"start":23,"end":24,"cssClass":"pl-c1"},{"start":27,"end":35,"cssClass":"pl-c1"}],[{"start":1,"end":8,"cssClass":"pl-s1"},{"start":9,"end":10,"cssClass":"pl-c1"},{"start":11,"end":15,"cssClass":"pl-en"},{"start":16,"end":20,"cssClass":"pl-s1"},{"start":21,"end":22,"cssClass":"pl-c1"},{"start":25,"end":32,"cssClass":"pl-c1"},{"start":35,"end":43,"cssClass":"pl-c1"},{"start":46,"end":53,"cssClass":"pl-c1"},{"start":56,"end":64,"cssClass":"pl-c1"},{"start":66,"end":70,"cssClass":"pl-c1"}],[{"start":1,"end":11,"cssClass":"pl-en"},{"start":12,"end":21,"cssClass":"pl-s1"},{"start":23,"end":30,"cssClass":"pl-s1"},{"start":32,"end":36,"cssClass":"pl-s1"}],[],[{"start":1,"end":7,"cssClass":"pl-s1"},{"start":8,"end":9,"cssClass":"pl-c1"},{"start":10,"end":14,"cssClass":"pl-c1"}],[{"start":1,"end":6,"cssClass":"pl-k"},{"start":8,"end":14,"cssClass":"pl-s1"},{"start":15,"end":17,"cssClass":"pl-c1"},{"start":18,"end":22,"cssClass":"pl-c1"}],[],[{"start":2,"end":8,"cssClass":"pl-s1"},{"start":9,"end":10,"cssClass":"pl-c1"},{"start":11,"end":15,"cssClass":"pl-en"},{"start":16,"end":25,"cssClass":"pl-s1"},{"start":27,"end":30,"cssClass":"pl-s1"},{"start":32,"end":36,"cssClass":"pl-c1"}],[{"start":2,"end":4,"cssClass":"pl-k"},{"start":6,"end":12,"cssClass":"pl-s1"},{"start":13,"end":15,"cssClass":"pl-c1"},{"start":16,"end":18,"cssClass":"pl-c1"}],[{"start":3,"end":13,"cssClass":"pl-en"},{"start":14,"end":16,"cssClass":"pl-c1"},{"start":18,"end":19,"cssClass":"pl-c1"},{"start":21,"end":25,"cssClass":"pl-s1"}],[{"start":2,"end":5,"cssClass":"pl-s1"},{"start":6,"end":7,"cssClass":"pl-c1"},{"start":8,"end":13,"cssClass":"pl-en"},{"start":14,"end":21,"cssClass":"pl-s1"},{"start":23,"end":26,"cssClass":"pl-s1"},{"start":28,"end":34,"cssClass":"pl-s1"}],[{"start":2,"end":4,"cssClass":"pl-k"},{"start":6,"end":9,"cssClass":"pl-s1"},{"start":10,"end":12,"cssClass":"pl-c1"},{"start":13,"end":15,"cssClass":"pl-c1"}],[{"start":3,"end":13,"cssClass":"pl-en"},{"start":14,"end":15,"cssClass":"pl-c1"},{"start":17,"end":19,"cssClass":"pl-c1"},{"start":21,"end":25,"cssClass":"pl-s1"}],[],[],[{"start":1,"end":10,"cssClass":"pl-s1"},{"start":11,"end":12,"cssClass":"pl-c1"},{"start":13,"end":18,"cssClass":"pl-en"},{"start":19,"end":28,"cssClass":"pl-s1"}],[{"start":1,"end":3,"cssClass":"pl-k"},{"start":5,"end":14,"cssClass":"pl-s1"},{"start":15,"end":17,"cssClass":"pl-c1"},{"start":18,"end":20,"cssClass":"pl-c1"}],[],[{"start":2,"end":9,"cssClass":"pl-en"},{"start":10,"end":23,"cssClass":"pl-c1"},{"start":25,"end":53,"cssClass":"pl-s"},{"start":55,"end":64,"cssClass":"pl-s1"}],[{"start":2,"end":6,"cssClass":"pl-en"},{"start":7,"end":10,"cssClass":"pl-c1"}],[],[],[{"start":1,"end":10,"cssClass":"pl-s1"},{"start":11,"end":12,"cssClass":"pl-c1"},{"start":13,"end":18,"cssClass":"pl-en"},{"start":19,"end":26,"cssClass":"pl-s1"}],[{"start":1,"end":3,"cssClass":"pl-k"},{"start":5,"end":14,"cssClass":"pl-s1"},{"start":15,"end":17,"cssClass":"pl-c1"},{"start":18,"end":20,"cssClass":"pl-c1"}],[],[{"start":2,"end":9,"cssClass":"pl-en"},{"start":10,"end":23,"cssClass":"pl-c1"},{"start":25,"end":53,"cssClass":"pl-s"},{"start":55,"end":64,"cssClass":"pl-s1"}],[{"start":2,"end":6,"cssClass":"pl-en"},{"start":7,"end":10,"cssClass":"pl-c1"}],[],[{"start":1,"end":7,"cssClass":"pl-k"},{"start":9,"end":10,"cssClass":"pl-c1"}],[]],"csv":null,"csvError":null,"dependabotInfo":{"showConfigurationBanner":false,"configFilePath":null,"networkDependabotPath":"/cupa007/alx-low_level_programming-1/network/updates","dismissConfigurationNoticePath":"/settings/dismiss-notice/dependabot_configuration_notice","configurationNoticeDismissed":null,"repoAlertsPath":"/cupa007/alx-low_level_programming-1/security/dependabot","repoSecurityAndAnalysisPath":"/cupa007/alx-low_level_programming-1/settings/security_analysis","repoOwnerIsOrg":false,"currentUserCanAdminRepo":false},"displayName":"3-cp.c","displayUrl":"https://github.com/cupa007/alx-low_level_programming-1/blob/master/0x15-file_io/3-cp.c?raw=true","headerInfo":{"blobSize":"1.45 KB","deleteInfo":{"deleteTooltip":"You must be signed in to make or propose changes"},"editInfo":{"editTooltip":"You must be signed in to make or propose changes"},"ghDesktopPath":"https://desktop.github.com","gitLfsPath":null,"onBranch":true,"shortPath":"e6f569f","siteNavLoginPath":"/login?return_to=https%3A%2F%2Fgithub.com%2Fcupa007%2Falx-low_level_programming-1%2Fblob%2Fmaster%2F0x15-file_io%2F3-cp.c","isCSV":false,"isRichtext":false,"toc":null,"lineInfo":{"truncatedLoc":"72","truncatedSloc":"65"},"mode":"executable file"},"image":false,"isCodeownersFile":null,"isPlain":false,"isValidLegacyIssueTemplate":false,"issueTemplateHelpUrl":"https://docs.github.com/articles/about-issue-and-pull-request-templates","issueTemplate":null,"discussionTemplate":null,"language":"C","languageID":41,"large":false,"loggedIn":false,"newDiscussionPath":"/cupa007/alx-low_level_programming-1/discussions/new","newIssuePath":"/cupa007/alx-low_level_programming-1/issues/new","planSupportInfo":{"repoIsFork":null,"repoOwnedByCurrentUser":null,"requestFullPath":"/cupa007/alx-low_level_programming-1/blob/master/0x15-file_io/3-cp.c","showFreeOrgGatedFeatureMessage":null,"showPlanSupportBanner":null,"upgradeDataAttributes":null,"upgradePath":null},"publishBannersInfo":{"dismissActionNoticePath":"/settings/dismiss-notice/publish_action_from_dockerfile","dismissStackNoticePath":"/settings/dismiss-notice/publish_stack_from_file","releasePath":"/cupa007/alx-low_level_programming-1/releases/new?marketplace=true","showPublishActionBanner":false,"showPublishStackBanner":false},"rawBlobUrl":"https://github.com/cupa007/alx-low_level_programming-1/raw/master/0x15-file_io/3-cp.c","renderImageOrRaw":false,"richText":null,"renderedFileInfo":null,"shortPath":null,"tabSize":8,"topBannersInfo":{"overridingGlobalFundingFile":false,"globalPreferredFundingPath":null,"repoOwner":"cupa007","repoName":"alx-low_level_programming-1","showInvalidCitationWarning":false,"citationHelpUrl":"https://docs.github.com/en/github/creating-cloning-and-archiving-repositories/creating-a-repository-on-github/about-citation-files","showDependabotConfigurationBanner":false,"actionsOnboardingTip":null},"truncated":false,"viewable":true,"workflowRedirectUrl":null,"symbols":{"timedOut":false,"notAnalyzed":false,"symbols":[{"name":"error_file","kind":"function","identStart":196,"identEnd":206,"extentStart":196,"extentEnd":248,"fullyQualifiedName":"error_file","identUtf16":{"start":{"lineNumber":10,"utf16Col":5},"end":{"lineNumber":10,"utf16Col":15}},"extentUtf16":{"start":{"lineNumber":10,"utf16Col":5},"end":{"lineNumber":10,"utf16Col":57}}},{"name":"main","kind":"function","identStart":616,"identEnd":620,"extentStart":616,"extentEnd":644,"fullyQualifiedName":"main","identUtf16":{"start":{"lineNumber":30,"utf16Col":4},"end":{"lineNumber":30,"utf16Col":8}},"extentUtf16":{"start":{"lineNumber":30,"utf16Col":4},"end":{"lineNumber":30,"utf16Col":32}}}]}},"copilotInfo":null,"copilotAccessAllowed":false,"csrf_tokens":{"/cupa007/alx-low_level_programming-1/branches":{"post":"UY5r7TUO9--vSxbw6GS4hI2XIBVqBNooSgHV3qqem9arJOmt0NLbvxJmvkR3kTe4Hj8BGJD6HUukIjUhv-HG3A"},"/repos/preferences":{"post":"JhUdhb7Zi3I-GPqDD01TYjp7_8UwFdcli3nSqJwB433gNG18PfXTE4HUq8sasXZsX2yPk2Da5t5LQBJcZMldTg"}}},"title":"alx-low_level_programming-1/0x15-file_io/3-cp.c at master · cupa007/alx-low_level_programming-1"}