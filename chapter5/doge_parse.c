#include <stdio.h>
#include <stdlib.h>

/* Build a parser 'Adjective' to recognize descriptions */
mpc_parser_t* Adjective = mpc_or(4,
  mpc_sym("wow"), mpc_sym("many"),
  mpc_sym("so"),  mpc_sym("such")
);

/* Build a parser 'Noun' to recognize things */
mpc_parser_t* Noun = mpc_or(5,
  mpc_sym("lisp"), mpc_sym("language"),
  mpc_sym("book"),mpc_sym("build"),
  mpc_sym("c")
);

mpc_parser_t* Protocol = mpc_new("protocol");
mpc_parser_t* Host      = mpc_new("host");
mpc_parser_t* Path    = mpc_new("path");
mpc_parser_t* Query      = mpc_new("query");

mpca_lang(MPCA_LANG_DEFAULT,
  "                                           \
    protocol  : \"http\" | \"https\"          \
    host      : [a-z].[a-z0-9]+.com           \
    path      : \"/\"[a-z]+                   \
    url       : <protocol> <host> <path>;     \
  ", Protocol, Host, Path, URL);

/* Do some parsing here... */

mpc_cleanup(4, Adjective, Noun, Phrase, Doge);
