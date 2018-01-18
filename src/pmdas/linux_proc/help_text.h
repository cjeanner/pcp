typedef struct {
char *name;
char *shorthelp;
char *longhelp;
} help_text_t;
/*
 * This struct should only contain help text for metrics listed in proc_dynamic.c
 * Help text for non-dynamic metrics still goes in "help"
 */
help_text_t  help_text[] = {
{ .name = "memory.share",            .shorthelp = "instantaneous amount of memory shared by this process with other processes ",        .longhelp = "" },
{ .name = "psinfo.sname",            .shorthelp = "process state identifier (see ps(1)). See also proc.runq metrics.",        .longhelp = "" },
{ .name = "id.uid",            .shorthelp = "real user ID from /proc/<pid>/status",        .longhelp = "" },
{ .name = "fd.count",            .shorthelp = "open file descriptors",        .longhelp = "Number of file descriptors this process has open.\n" },
{ .name = "psinfo.rss",            .shorthelp = "resident set size (i.e. physical memory) of the process",        .longhelp = "" },
{ .name = "psinfo.eip",            .shorthelp = "the value in the eip field of struct task_struct for the process",        .longhelp = "" },
{ .name = "psinfo.sigcatch",            .shorthelp = "the value in the sigcatch field of struct task_struct for the process",        .longhelp = "" },
{ .name = "psinfo.session",            .shorthelp = "process session identifier",        .longhelp = "" },
{ .name = "psinfo.esp",            .shorthelp = "the value in the esp field of struct task_struct for the process",        .longhelp = "" },
{ .name = "psinfo.guest_time",            .shorthelp = "Guest time of the process",        .longhelp = "Time spent running a virtual CPU for a guest operating system.\n" },
{ .name = "psinfo.sigignore",            .shorthelp = "the value in the sigignore field of struct task_struct for the process",        .longhelp = "" },
{ .name = "memory.maps",            .shorthelp = "table of memory mapped by process in string form from /proc/<pid>/maps",        .longhelp = "" },
{ .name = "psinfo.blocked_s",            .shorthelp = "blocked signals mask in string form (from /proc/<pid>/status)",        .longhelp = "" },
{ .name = "memory.vmexe",            .shorthelp = "virtual memory used for non-library executable code (from /proc/<pid>/status)",        .longhelp = "" },
{ .name = "id.egid_nm",            .shorthelp = "effective group name based on effective group ID from /proc/<pid>/status",        .longhelp = "" },
{ .name = "memory.vmswap",            .shorthelp = "virtual memory size currently swapped out (from /proc/<pid>/status)",        .longhelp = "" },
{ .name = "memory.vmreal",            .shorthelp = "sum of resident set size and virtual memory swapped out",        .longhelp = "" },
{ .name = "memory.vmnonlib",            .shorthelp = "difference between process real memory use (vmreal) and libraries (vmlib)",        .longhelp = "" },
{ .name = "psinfo.sigcatch_s",            .shorthelp = "caught signals mask in string form (from /proc/<pid>/status)",        .longhelp = "" },
{ .name = "id.egid",            .shorthelp = "effective group ID from /proc/<pid>/status",        .longhelp = "" },
{ .name = "psinfo.minflt",            .shorthelp = "count of minor page faults (i.e. reclaims)",        .longhelp = "" },
{ .name = "nprocs",            .shorthelp = "instantaneous number of processes",        .longhelp = "" },
{ .name = "memory.vmdata",            .shorthelp = "virtual memory used for data (from /proc/<pid>/status)",        .longhelp = "" },
{ .name = "psinfo.ttyname",            .shorthelp = "name of controlling tty device, or ? if none. See also proc.psinfo.tty.",        .longhelp = "" },
{ .name = "psinfo.cmd",            .shorthelp = "command name",        .longhelp = "" },
{ .name = "memory.vmlib",            .shorthelp = "virtual memory used for libraries (from /proc/<pid>/status)",        .longhelp = "" },
{ .name = "psinfo.signal_s",            .shorthelp = "pending signals mask in string form (from /proc/<pid>/status)",        .longhelp = "" },
{ .name = "psinfo.vsize",            .shorthelp = "virtual size of the process in Kbytes",        .longhelp = "" },
{ .name = "psinfo.start_code",            .shorthelp = "address of the start of the code segment for the process",        .longhelp = "" },
{ .name = "id.suid",            .shorthelp = "saved user ID from /proc/<pid>/status",        .longhelp = "" },
{ .name = "psinfo.tty_pgrp",            .shorthelp = "controlling tty process group identifier",        .longhelp = "" },
{ .name = "id.gid_nm",            .shorthelp = "real group name based on real group ID from /proc/<pid>/status",        .longhelp = "" },
{ .name = "psinfo.nice",            .shorthelp = "process nice value (negative nice values are lower priority)",        .longhelp = "" },
{ .name = "schedstat.cpu_time",            .shorthelp = "runnable (scheduled) + run time",        .longhelp = "Length of time in nanoseconds that a process has been running, including\nscheduling time.\n" },
{ .name = "io.rchar",            .shorthelp = "read(), readv() and sendfile() receive bytes",        .longhelp = "Extended accounting information - count of the number of bytes that\nhave passed over the read(2), readv(2) and sendfile(2) syscalls by\neach process.\n" },
{ .name = "psinfo.delayacct_blkio_time",            .shorthelp = "Aggregated block I/O delays",        .longhelp = "" },
{ .name = "psinfo.cmaj_flt",            .shorthelp = "count of page faults other than reclaims of all exited children",        .longhelp = "" },
{ .name = "memory.dirty",            .shorthelp = "instantaneous amount of memory that has been modified by the process, in Kbytes",        .longhelp = "" },
{ .name = "psinfo.cgroups",            .shorthelp = "list of processes cgroups (from /proc/<pid>/cgroup)",        .longhelp = "" },
{ .name = "id.container",            .shorthelp = "name of processes container (from /proc/<pid>/cgroup heuristics)",        .longhelp = "" },
{ .name = "schedstat.pcount",            .shorthelp = "number of times a process is allowed to run",        .longhelp = "Number of times a process has been scheduled to run on a CPU (this is\nincremented when a task actually reaches a CPU to run on, not simply\nwhen it is added to the run queue).\n" },
{ .name = "id.fsuid_nm",            .shorthelp = "filesystem user name based on filesystem user ID from /proc/<pid>/status",        .longhelp = "" },
{ .name = "memory.vmlock",            .shorthelp = "locked virtual memory (from /proc/<pid>/status)",        .longhelp = "" },
{ .name = "psinfo.exit_signal",            .shorthelp = "the value in the exit_signal field of struct task_struct for the process",        .longhelp = "" },
{ .name = "memory.vmsize",            .shorthelp = "total virtual memory (from /proc/<pid>/status)",        .longhelp = "" },
{ .name = "psinfo.signal",            .shorthelp = "the value in the signal field of struct task_struct for the process",        .longhelp = "" },
{ .name = "psinfo.pid",            .shorthelp = "process identifier",        .longhelp = "" },
{ .name = "psinfo.rss_rlim",            .shorthelp = "limit on resident set size of process",        .longhelp = "" },
{ .name = "io.syscw",            .shorthelp = "write(), writev() and sendfile() send system calls",        .longhelp = "Extended accounting information - count of number of calls to the\nwrite(2), writev(2) and sendfile(2) syscalls by each process.\n" },
{ .name = "id.suid_nm",            .shorthelp = "saved user name based on saved user ID from /proc/<pid>/status",        .longhelp = "" },
{ .name = "id.euid",            .shorthelp = "effective user ID from /proc/<pid>/status",        .longhelp = "" },
{ .name = "memory.vmstack",            .shorthelp = "virtual memory used for stack (from /proc/<pid>/status)",        .longhelp = "" },
{ .name = "schedstat.run_delay",            .shorthelp = "run queue time",        .longhelp = "Length of time in nanoseconds that a process spent waiting to be scheduled\nto run in the run queue.\n" },
{ .name = "id.sgid_nm",            .shorthelp = "saved group name based on saved group ID from /proc/<pid>/status",        .longhelp = "" },
{ .name = "id.fsgid_nm",            .shorthelp = "filesystem group name based on filesystem group ID from /proc/<pid>/status",        .longhelp = "" },
{ .name = "cgroup.subsys.count",            .shorthelp = "count of known subsystems in /proc/cgroups",        .longhelp = "" },
{ .name = "psinfo.wchan",            .shorthelp = "wait channel, kernel address this process is blocked or sleeping on",        .longhelp = "" },
{ .name = "psinfo.wchan_s",            .shorthelp = "name of an event for which the process is sleeping (if blank, the process is running).",        .longhelp = "This field needs access to a namelist file for proper \naddress-to-symbol name translation. If no namelist file\nis available, the address is printed instead. The namelist\nfile must match the current Linux kernel exactly.\nThe search path for the namelist file is as follows:\n	/boot/System.map-`uname -r`\n	/boot/System.map\n	/lib/modules/`uname -r`/System.map\n	/usr/src/linux/System.map\n	/System.map\n" },
{ .name = "psinfo.vctxsw",            .shorthelp = "number of voluntary context switches (from /proc/<pid>/status)",        .longhelp = "" },
{ .name = "io.write_bytes",            .shorthelp = "physical device write bytes",        .longhelp = "Number of bytes physically written to devices on behalf of this process.\nThis must be reduced by any truncated I/O (proc.io.cancelled_write_bytes).\n" },
{ .name = "memory.textrss",            .shorthelp = "instantaneous resident size of process code segment in Kbytes",        .longhelp = "" },
{ .name = "psinfo.tty",            .shorthelp = "controlling tty device number (zero if none)",        .longhelp = "" },
{ .name = "psinfo.cmin_flt",            .shorthelp = "count of minor page faults (i.e. reclaims) of all exited children",        .longhelp = "" },
{ .name = "psinfo.stime",            .shorthelp = "time (in ms) spent executing system code (calls) since process started",        .longhelp = "" },
{ .name = "psinfo.policy",            .shorthelp = "Scheduling policy",        .longhelp = "" },
{ .name = "psinfo.cguest_time",            .shorthelp = "Guest time of the process’s children",        .longhelp = "" },
{ .name = "psinfo.environ",           .shorthelp = "process environment (from /proc/<pid>/environ ascii space replaces null).",        .longhelp = "" },
{ .name = "psinfo.labels",            .shorthelp = "list of processes security labels (from /proc/<pid>/attr/current)",        .longhelp = "" },
{ .name = "psinfo.blocked",            .shorthelp = "the value in the blocked field of struct task_struct for the process",        .longhelp = "" },
{ .name = "cgroup.subsys.hierarchy",            .shorthelp = "subsystem hierarchy from /proc/cgroups",        .longhelp = "" },
{ .name = "id.sgid",            .shorthelp = "saved group ID from /proc/<pid>/status",        .longhelp = "" },
{ .name = "id.gid",            .shorthelp = "real group ID from /proc/<pid>/status",        .longhelp = "" },
{ .name = "psinfo.rt_priority",            .shorthelp = "Real-time scheduling priority, a number in the range 1 to 99",        .longhelp = "" },
{ .name = "id.euid_nm",            .shorthelp = "effective user name based on effective user ID from /proc/<pid>/status",        .longhelp = "" },
{ .name = "psinfo.nswap",            .shorthelp = "count of page swap operations",        .longhelp = "" },
{ .name = "psinfo.threads",            .shorthelp = "number of threads (from /proc/<pid>/status)",        .longhelp = "" },
{ .name = "id.uid_nm",            .shorthelp = "real user name based on real user ID from /proc/<pid>/status",        .longhelp = "" },
{ .name = "io.cancelled_write_bytes",            .shorthelp = "physical device write cancelled bytes",        .longhelp = "Number of bytes cancelled via truncate by this process.  Actual physical\nwrites for an individual process can be calculated as:\n	proc.io.write_bytes - proc.io.cancelled_write_bytes.\n" },
{ .name = "io.wchar",            .shorthelp = "write(), writev() and sendfile() send bytes",        .longhelp = "Extended accounting information - count of the number of bytes that\nhave passed over the write(2), writev(2) and sendfile(2) syscalls by\neach process.\n" },
{ .name = "psinfo.cutime",            .shorthelp = "time (in ms) spent executing user code of all exited children",        .longhelp = "" },
{ .name = "memory.vmrss",            .shorthelp = "resident virtual memory (from /proc/<pid>/status)",        .longhelp = "" },
{ .name = "psinfo.end_code",            .shorthelp = "address of the end of the code segment for the process",        .longhelp = "" },
{ .name = "io.read_bytes",            .shorthelp = "physical device read bytes",        .longhelp = "Number of bytes physically read on by devices on behalf of this process.\n" },
{ .name = "psinfo.start_time",            .shorthelp = "start time of the process relative to system boot time (in ms)",        .longhelp = "" },
{ .name = "psinfo.psargs",            .shorthelp = "full command string",        .longhelp = "" },
{ .name = "memory.librss",            .shorthelp = "instantaneous resident size of library code mapped by the process, in Kbytes",        .longhelp = "" },
{ .name = "memory.rss",            .shorthelp = "instantaneous resident size of process, excluding page table and task structure.",        .longhelp = "" },
{ .name = "psinfo.priority",            .shorthelp = "scheduling priority value",        .longhelp = "" },
{ .name = "psinfo.cstime",            .shorthelp = "time (in ms) spent executing system code of all exited children",        .longhelp = "" },
{ .name = "cgroup.mounts.subsys",            .shorthelp = "mount points for each cgroup subsystem",        .longhelp = "" },
{ .name = "psinfo.maj_flt",            .shorthelp = "count of page faults other than reclaims",        .longhelp = "" },
{ .name = "psinfo.processor",            .shorthelp = "last CPU the process was running on",        .longhelp = "" },
{ .name = "psinfo.start_stack",            .shorthelp = "address of the stack segment for the process",        .longhelp = "" },
{ .name = "psinfo.flags",            .shorthelp = "process state flags, as a bitmap",        .longhelp = "" },
{ .name = "io.syscr",            .shorthelp = "read(), readv() and sendfile() receive system calls",        .longhelp = "Extended accounting information - count of number of calls to the\nread(2), readv(2) and sendfile(2) syscalls by each process.\n" },
{ .name = "psinfo.ppid",            .shorthelp = "parent process identifier",        .longhelp = "" },
{ .name = "psinfo.pgrp",            .shorthelp = "process group identifier",        .longhelp = "" },
{ .name = "psinfo.tgid",            .shorthelp = "thread group identifier",        .longhelp = "" },
{ .name = "id.fsgid",            .shorthelp = "filesystem group ID from /proc/<pid>/status",        .longhelp = "" },
{ .name = "psinfo.cnswap",            .shorthelp = "count of page swap operations of all exited children",        .longhelp = "" },
{ .name = "memory.size",            .shorthelp = "instantaneous virtual size of process, excluding page table and task structure.",        .longhelp = "" },
{ .name = "cgroup.mounts.count",            .shorthelp = "count of cgroup filesystem mount points",        .longhelp = "" },
{ .name = "psinfo.sigignore_s",            .shorthelp = "ignored signals mask in string form (from /proc/<pid>/status)",        .longhelp = "" },
{ .name = "id.fsuid",            .shorthelp = "filesystem user ID from /proc/<pid>/status",        .longhelp = "" },
{ .name = "psinfo.it_real_value",            .shorthelp = "current interval timer value (zero if none)",        .longhelp = "" },
{ .name = "psinfo.utime",            .shorthelp = "time (in ms) spent executing user code since process started",        .longhelp = "" },
{ .name = "memory.datrss",            .shorthelp = "instantaneous resident size of process data segment, in Kbytes",        .longhelp = "" },
{ .name = "psinfo.nvctxsw",            .shorthelp = "number of non-voluntary context switches (from /proc/<pid>/status)",        .longhelp = "" },
{ .name = "psinfo.cpusallowed",   .shorthelp = "the cpus allowed list (from /proc/<pid>/status)", .longhelp = "" },
{ .name = "psinfo.ngid",   .shorthelp = "NUMA group identifier (from /proc/<pid>/status)", .longhelp = "" },
{ .name = "memory.vmpeak",	.shorthelp = "peak virtual memory size (from /proc/<pid>/status)",        .longhelp = "" },
{ .name = "memory.vmpin",	.shorthelp = "fixed physical address unswappable pages (from /proc/<pid>/status)",        .longhelp = "" },
{ .name = "memory.vmhwm",	.shorthelp = "peak usage of physical memory (from /proc/<pid>/status)",        .longhelp = "" },
{ .name = "memory.vmpte",	.shorthelp = "memory occupied by page table entries (from /proc/<pid>/status)",        .longhelp = "" },
{ .name = "namespaces.tgid",   .shorthelp = "descendant namespace thread group ID hierarchy (/proc/<pid>/status)", .longhelp = "" },
{ .name = "namespaces.pid",   .shorthelp = "descendant namespace process ID hierarchy (/proc/<pid>/status)", .longhelp = "" },
{ .name = "namespaces.pgid",   .shorthelp = "descendant namespace process group ID hierarchy (/proc/<pid>/status)", .longhelp = "" },
{ .name = "namespaces.sid",   .shorthelp = "descendant namespace session ID hierarchy (/proc/<pid>/status)", .longhelp = "" },
{ .name = "namespaces.envid", .shorthelp = "OpenVZ container identifier", .longhelp = "" },
};
