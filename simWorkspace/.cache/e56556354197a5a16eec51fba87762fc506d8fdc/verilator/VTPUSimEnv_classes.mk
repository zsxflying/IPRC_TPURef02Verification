# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VTPUSimEnv.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VTPUSimEnv \
	VTPUSimEnv___024root__DepSet_h5a3887d4__0 \
	VTPUSimEnv___024root__DepSet_hd2cd2af6__0 \
	VTPUSimEnv_TPUSimEnv__DepSet_h71449a34__0 \
	VTPUSimEnv_TPUSimEnv__DepSet_h71449a34__1 \
	VTPUSimEnv_TPUSimEnv__DepSet_he6809fd1__0 \
	VTPUSimEnv_SRAMWriteOnly_2__DepSet_ha93176f4__0 \
	VTPUSimEnv_SRAMWriteOnly_1__DepSet_ha397f8a3__0 \
	VTPUSimEnv_SRAMWriteOnly__DepSet_hdf67a0a3__0 \
	VTPUSimEnv_SRAMReadOnly_3__DepSet_ha295d0dc__0 \
	VTPUSimEnv_SRAMReadOnly_2__DepSet_ha0a6b7a6__0 \
	VTPUSimEnv_SRAMReadOnly_1__DepSet_hf2f0487d__0 \
	VTPUSimEnv_SRAMReadOnly__DepSet_h0b568f29__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VTPUSimEnv__ConstPool_0 \
	VTPUSimEnv___024root__Slow \
	VTPUSimEnv___024root__DepSet_h5a3887d4__0__Slow \
	VTPUSimEnv___024root__DepSet_hd2cd2af6__0__Slow \
	VTPUSimEnv_TPUSimEnv__Slow \
	VTPUSimEnv_TPUSimEnv__DepSet_h71449a34__0__Slow \
	VTPUSimEnv_TPUSimEnv__DepSet_h71449a34__1__Slow \
	VTPUSimEnv_TPUSimEnv__DepSet_he6809fd1__0__Slow \
	VTPUSimEnv_SRAMWriteOnly_2__Slow \
	VTPUSimEnv_SRAMWriteOnly_2__DepSet_hf3cefde5__0__Slow \
	VTPUSimEnv_SRAMWriteOnly_1__Slow \
	VTPUSimEnv_SRAMWriteOnly_1__DepSet_h46a4f5f6__0__Slow \
	VTPUSimEnv_SRAMWriteOnly__Slow \
	VTPUSimEnv_SRAMWriteOnly__DepSet_h271195f6__0__Slow \
	VTPUSimEnv_SRAMReadOnly_3__Slow \
	VTPUSimEnv_SRAMReadOnly_3__DepSet_hdc75d905__0__Slow \
	VTPUSimEnv_SRAMReadOnly_2__Slow \
	VTPUSimEnv_SRAMReadOnly_2__DepSet_h9ba72df2__0__Slow \
	VTPUSimEnv_SRAMReadOnly_1__Slow \
	VTPUSimEnv_SRAMReadOnly_1__DepSet_hdb22f6bb__0__Slow \
	VTPUSimEnv_SRAMReadOnly__Slow \
	VTPUSimEnv_SRAMReadOnly__DepSet_h584af5ab__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VTPUSimEnv__Dpi \
	VTPUSimEnv__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VTPUSimEnv__Syms \
	VTPUSimEnv__Trace__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
