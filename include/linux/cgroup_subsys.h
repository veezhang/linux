/* SPDX-License-Identifier: GPL-2.0 */
/*
 * List of cgroup subsystems.
 *
 * DO NOT ADD ANY SUBSYSTEM WITHOUT EXPLICIT ACKS FROM CGROUP MAINTAINERS.
 */

/*
 * This file *must* be included with SUBSYS() defined.
 */

/* cgroup 子系统包含：
 * cpuset       : 此cgroup可用于将cgroup中的进程绑定到一组指定的CPU和NUMA节点。
 * cpu          : 限制进程的 cpu 使用率
 * cpuacct      : 可以统计 cgroups 中的进程的 cpu 使用报告
 * io           : 控制块设备IO访问，可以限制上限，也可以按比例限制
 * memory       : 限制、报告 cgroup 使用的 process memory, kernel memory, and swap memory
 * devices      : 控制设备的访问
 * freezer      : 可以挂起或者恢复cgroup中所有的额进程
 * net_cls      : 这个子系统使用等级识别符（classid）标记网络数据包, 可允许 Linux 流量控制程序（tc）识别从具体 cgroup 中生成的数据包
 * perf_event   : 控制perf监控
 * net_prio     : 控制每个网络设备的优先级
 * hugetlb      : 针对于 HugeTLB 系统进行限制, 这是一个大页文件系统
 * pids         : 限制pid数量
 * rdma         : 限制rdma（RemoteDirect Memory Access）资源
 */

#if IS_ENABLED(CONFIG_CPUSETS)
SUBSYS(cpuset)
#endif

#if IS_ENABLED(CONFIG_CGROUP_SCHED)
SUBSYS(cpu)
#endif

#if IS_ENABLED(CONFIG_CGROUP_CPUACCT)
SUBSYS(cpuacct)
#endif

#if IS_ENABLED(CONFIG_BLK_CGROUP)
SUBSYS(io)
#endif

#if IS_ENABLED(CONFIG_MEMCG)
SUBSYS(memory)
#endif

#if IS_ENABLED(CONFIG_CGROUP_DEVICE)
SUBSYS(devices)
#endif

#if IS_ENABLED(CONFIG_CGROUP_FREEZER)
SUBSYS(freezer)
#endif

#if IS_ENABLED(CONFIG_CGROUP_NET_CLASSID)
SUBSYS(net_cls)
#endif

#if IS_ENABLED(CONFIG_CGROUP_PERF)
SUBSYS(perf_event)
#endif

#if IS_ENABLED(CONFIG_CGROUP_NET_PRIO)
SUBSYS(net_prio)
#endif

#if IS_ENABLED(CONFIG_CGROUP_HUGETLB)
SUBSYS(hugetlb)
#endif

#if IS_ENABLED(CONFIG_CGROUP_PIDS)
SUBSYS(pids)
#endif

#if IS_ENABLED(CONFIG_CGROUP_RDMA)
SUBSYS(rdma)
#endif

/*
 * The following subsystems are not supported on the default hierarchy.
 */
#if IS_ENABLED(CONFIG_CGROUP_DEBUG)
SUBSYS(debug)
#endif

/*
 * DO NOT ADD ANY SUBSYSTEM WITHOUT EXPLICIT ACKS FROM CGROUP MAINTAINERS.
 */
