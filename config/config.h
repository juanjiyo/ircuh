/*
 * Automatically generated C config: don't edit
 */
#define AUTOCONF_INCLUDED
#define CHANGE_CONFIG

/*
 * Compile stuff
 */
#define CC "gcc"
#define CFLAGS "-g -O3 -pipe"
#define cflags_O3_remark done
#define EXTRA_INCLUDEDIRS "none"
#define LDFLAGS "none"
#define IRCDLIBS "-lresolv -lcrypt"
#define BINDIR "/home/irc/ircu/bin"
#define SYMLINK "ircd"
#define IRCDMODE "711"
#define IRCDOWN "irc"
#define IRCDGRP "irc"
#define MANDIR "/home/irc/ircu/share/man"
#define FORCEINLINE

/*
 * Host specific defines
 */
#define DOMAINNAME "irc.mundichat.com"

/*
 * General defines
 */
#undef  CHROOTDIR
#define CONFIG_SETUGID
#define IRC_UID (1001)
#define IRC_GID (1001)
#undef  VIRTUAL_HOST
#define HUB

/*
 * Debugging (do not define this on production servers)
 */
#undef  DEBUGMODE
#undef  DEBUGMALLOC
#undef  NODNS

/*
 * Paths and files
 */
#define DPATH "/home/irc/ircu/etc"
#define SPATH "/home/irc/ircu/bin/ircd"
#define CPATH "ircd.conf"
#define MPATH "ircd.motd"
#define RPATH "remote.motd"
#define PPATH "ircd.pid"

/*
 * Logging (filenames are either full paths or files within DPATH)
 */
#define CONFIG_LOG_WHOX
#define WPATH "whox.log"
#undef  CONFIG_LOG_GLINES
#undef  CONFIG_LOG_USERS
#undef  CONFIG_LOG_OPERS
#undef  USE_SYSLOG

/*
 * Configuration
 */
#define CRYPT_OPER_PASSWORD
#define BUFFERPOOL (27000000)
#undef  FERGUSON_FLUSHER
#define CLIENT_FLOOD (1536)
#define MAXCONNECTIONS (3500)
#define PORTNUM (6667)
#define NICKNAMEHISTORYLENGTH (800)
#undef  ALLOW_SNO_CONNEXIT
#undef  R_LINES
#define NODEFAULTMOTD

/*
 * Oper commands
 */
#define SHOW_INVISIBLE_USERS
#define SHOW_ALL_INVISIBLE_USERS
#define WHOX_HELPERS
#define OPERS_SEE_IN_SECRET_CHANNELS
#undef  LOCOP_SEE_IN_SECRET_CHANNELS
#undef  UNLIMIT_OPER_QUERY
#define OPER_KILL
#define OPER_REHASH
#define OPER_RESTART
#define OPER_DIE
#define OPER_LGLINE
#define OPER_REMOTE
#define OPER_JOIN_GOD_ESNET
#define OPER_CHANNEL_SERVICE_ESNET
#define CS_NO_FLOOD_ESNET
#define LOCOP_REHASH
#define LOCOP_RESTART
#define LOCOP_DIE
#define LOCOP_LGLINE
#define OPER_NO_CHAN_LIMIT
#define OPER_MODE_LCHAN
#undef  OPER_WALK_THROUGH_LMODES
#undef  NO_OPER_DEOP_LCHAN

/*
 * Server characteristics
 */
#define CONFIG_LIST
#define DEFAULT_LIST "T<10"
#define DEFAULT_LIST_PARAM "T<10"
#define COMMENT_IS_FILE
#define IDLE_FROM_MSG
#define CHECK_TS_LINKS

/*
 * Mandatory defines (you should leave these untouched)
 */
#define DBPATH "database"
#define BDD_MMAP
#define BDD_MMAP_PATH "ircd-database.mmap"
#define BDD_MMAP_SIZE (16)
#define BDD_CLONES
#define BDD_CHAN_HACK
#define BDD_OPER_HACK
#define BDD_OPER_HACK_KMODE
#define BDD_VIP
#undef  BDD_VIP3
#define BDD_VIP2
#define ESNET_NEG
#define ZLIB_ESNET
#undef  WEBCHAT
#define MAXIMUM_LINKS (2)
#undef  MSGLOG_ENABLED
#undef  LOCAL_KILL_ONLY
#define KILLCHASETIMELIMIT (30)
#define MAXCHANNELSPERUSER (10)
#define MAXSILES (25)
#define MAXWATCH (96)
#define AVBANLEN (40)
#define MAXSILELENGTH (40 * MAXSILES)
#define TIMESEC (60)
#define PINGFREQUENCY (120)
#define CONNECTFREQUENCY (600)
#define HANGONGOODLINK (300)
#define HANGONRETRYDELAY (10)
#define CONNECTTIMEOUT (90)
#define DEFAULTMAXSENDQLENGTH (40000)
