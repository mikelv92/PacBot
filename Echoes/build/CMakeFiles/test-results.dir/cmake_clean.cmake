FILE(REMOVE_RECURSE
  "../msg_gen"
  "../srv_gen"
  "../msg_gen"
  "../srv_gen"
  "../src/Echoes/msg"
  "../src/Echoes/srv"
  "CMakeFiles/test-results"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/test-results.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
