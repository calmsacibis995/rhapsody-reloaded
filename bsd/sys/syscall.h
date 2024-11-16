/*
 * Copyright (c) 1999 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * Portions Copyright (c) 1999 Apple Computer, Inc.  All Rights
 * Reserved.  This file contains Original Code and/or Modifications of
 * Original Code as defined in and that are subject to the Apple Public
 * Source License Version 1.1 (the "License").  You may not use this file
 * except in compliance with the License.  Please obtain a copy of the
 * License at http://www.apple.com/publicsource and read it before using
 * this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE OR NON- INFRINGEMENT.  Please see the
 * License for the specific language governing rights and limitations
 * under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */

/* Copyright (c) 1992,1995 NeXT Computer, Inc.  All rights resereved. */
/*
 *
 * The NEXTSTEP Software License Agreement specifies the terms
 * and conditions for redistribution.
 *
 */

#define	SYS_syscall	0
#define	SYS_exit	1
#define	SYS_fork	2
#define	SYS_read	3
#define	SYS_write	4
#define	SYS_open	5
#define	SYS_close	6
#define	SYS_wait4	7
				/* 8 is old creat */
#define	SYS_link	9
#define	SYS_unlink	10
				/* 11 is obsolete execv */
#define	SYS_chdir	12
#define	SYS_fchdir	13
#define	SYS_mknod	14
#define	SYS_chmod	15
#define	SYS_chown	16
				/* 17 is obsolete sbreak */
#define	SYS_getfsstat	18
				/* 19 is old lseek */
#define	SYS_getpid	20
				/* 21 is obsolete mount */
				/* 22 is obsolete umount */
#define	SYS_setuid	23
#define	SYS_getuid	24
#define	SYS_geteuid	25
#define	SYS_ptrace	26
#define	SYS_recvmsg	27
#define	SYS_sendmsg	28
#define	SYS_recvfrom	29
#define	SYS_accept	30
#define	SYS_getpeername	31
#define	SYS_getsockname	32
#define	SYS_access	33
#define	SYS_chflags	34
#define	SYS_fchflags	35
#define	SYS_sync	36
#define	SYS_kill	37
				/* 38 is old stat */
#define	SYS_getppid	39
				/* 40 is old lstat */
#define	SYS_dup	41
#define	SYS_pipe	42
#define	SYS_getegid	43
#define	SYS_profil	44
#define	SYS_ktrace	45
#define	SYS_sigaction	46
#define	SYS_getgid	47
#define	SYS_sigprocmask	48
#define	SYS_getlogin	49
#define	SYS_setlogin	50
#define	SYS_acct	51
#define	SYS_sigpending	52
#define	SYS_sigaltstack	53
#define	SYS_ioctl	54
#define	SYS_reboot	55
#define	SYS_revoke	56
#define	SYS_symlink	57
#define	SYS_readlink	58
#define	SYS_execve	59
#define	SYS_umask	60
#define	SYS_chroot	61
				/* 62 is old fstat */
				/* 63 is unused */
				/* 64 is old getpagesize */
#define	SYS_msync	65
#define	SYS_vfork	66
				/* 67 is obsolete vread */
				/* 68 is obsolete vwrite */
#define	SYS_sbrk	69
#define	SYS_sstk	70
				/* 71 is old mmap */
				/* 72 is obsolete vadvise */
#define	SYS_munmap	73
#define	SYS_mprotect	74
#define	SYS_madvise	75
				/* 76 is obsolete vhangup */
				/* 77 is obsolete vlimit */
#define	SYS_mincore	78
#define	SYS_getgroups	79
#define	SYS_setgroups	80
#define	SYS_getpgrp	81
#define	SYS_setpgid	82
#define	SYS_setitimer	83
				/* 84 is old wait */
#define	SYS_swapon	85
#define	SYS_getitimer	86
				/* 87 is old gethostname */
				/* 88 is old sethostname */
				/* 89 is old getdtablesize */
#define	SYS_dup2	90
#define	SYS_fcntl	92
#define	SYS_select	93
				/* 94 is obsolete setdopt */
#define	SYS_fsync	95
#define	SYS_setpriority	96
#define	SYS_socket	97
#define	SYS_connect	98
				/* 99 is old accept */
#define	SYS_getpriority	100
				/* 101 is old send */
				/* 102 is old recv */
#define	SYS_sigreturn	103
#define	SYS_bind	104
#define	SYS_setsockopt	105
#define	SYS_listen	106
				/* 107 is obsolete vtimes */
				/* 108 is old sigvec */
				/* 109 is old sigblock */
				/* 110 is old sigsetmask */
#define	SYS_sigsuspend	111
				/* 112 is old sigstack */
				/* 113 is old recvmsg */
				/* 114 is old sendmsg */
				/* 115 is obsolete vtrace */
#define	SYS_gettimeofday	116
#define	SYS_getrusage	117
#define	SYS_getsockopt	118
				/* 119 is obsolete resuba */
#define	SYS_readv	120
#define	SYS_writev	121
#define	SYS_settimeofday	122
#define	SYS_fchown	123
#define	SYS_fchmod	124
				/* 125 is old recvfrom */
				/* 126 is old setreuid */
				/* 127 is old setregid */
#define	SYS_rename	128
				/* 129 is old truncate */
				/* 130 is old ftruncate */
#define	SYS_flock	131
#define	SYS_mkfifo	132
#define	SYS_sendto	133
#define	SYS_shutdown	134
#define	SYS_socketpair	135
#define	SYS_mkdir	136
#define	SYS_rmdir	137
#define	SYS_utimes	138
				/* 139 is unused */
#define	SYS_adjtime	140
				/* 141 is old getpeername */
				/* 142 is old gethostid */
				/* 143 is old sethostid */
				/* 144 is old getrlimit */
				/* 145 is old setrlimit */
				/* 146 is old killpg */
#define	SYS_setsid	147
				/* 148 is obsolete setquota */
				/* 149 is obsolete quota */
				/* 150 is old getsockname */
				/* 151 is reserved */
#define SYS_setprivexec 152
				/* 153 is reserved */
				/* 154 is reserved */
#define	SYS_nfssvc	155
				/* 156 is old getdirentries */
#define	SYS_statfs	157
#define	SYS_fstatfs	158
#define SYS_unmount	159
				/* 160 is obsolete async_daemon */
#define	SYS_getfh	161
				/* 162 is old getdomainname */
				/* 163 is old setdomainname */
				/* 164 is obsolete pcfs_mount */
#define SYS_quotactl	165
				/* 166 is obsolete exportfs	*/
#define SYS_mount	167
				/* 168 is obsolete ustat */
				/* 169 is unused */
#define SYS_table	170
				/* 171 is old wait_3 */
				/* 172 is obsolete rpause */
				/* 173 is unused */
				/* 174 is obsolete getdents */
#define SYS_gc_control	175
#define SYS_add_profil	176
				/* 177 is unused */
				/* 178 is unused */
				/* 179 is unused */
#if KDEBUG
#define SYS_kern_debug
#else
				/* 180 is unused */
#endif
#define	SYS_setgid	181
#define	SYS_setegid	182
#define	SYS_seteuid	183
#define	SYS_lfs_bmapv	184
#define	SYS_lfs_markv	185
#define	SYS_lfs_segclean	186
#define	SYS_lfs_segwait	187
#define	SYS_stat	188
#define	SYS_fstat	189
#define	SYS_lstat	190
#define	SYS_pathconf	191
#define	SYS_fpathconf	192
				/* 193 is unused */
#define	SYS_getrlimit	194
#define	SYS_setrlimit	195
#define SYS_getdirentries	196
#define	SYS_mmap	197
#define	SYS___syscall	198
#define	SYS_lseek	199
#define	SYS_truncate	200
#define	SYS_ftruncate	201
#define	SYS___sysctl	202
#define SYS_getdtablesize 203	/* 203 is unused */
				/* 204 is unused */
#define	SYS_undelete	205
				/* 206-215 are used/reserved for AppleTalk */
#define SYS_mkcomplex	216 
#define SYS_statv	217		
#define SYS_lstatv	218 			
#define SYS_fstatv	219 			
#define SYS_getattrlist	220 		
#define SYS_setattrlist	221		
#define SYS_getdirentryattr	222 	
#define SYS_exchangedata	223 				
#define SYS_checkuseraccess	224 
#define SYS_searchfs	 225

       				/* 226 - 230 are reserved for HFS expansion */
