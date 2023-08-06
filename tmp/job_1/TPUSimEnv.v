// Generator : SpinalHDL v1.9.0    git head : 7d30dbacbd3aa1be42fb2a3d4da5675703aae2ae
// Component : TPUSimEnv

`timescale 1ns/1ps

module TPUSimEnv (
  input               io_tpu_start,
  output              io_tpu_done,
  input               reset,
  input               clk
);

  wire       [6:0]    sramW0_io_addr;
  wire       [6:0]    sramW1_io_addr;
  wire       [6:0]    sramD0_io_addr;
  wire       [6:0]    sramD1_io_addr;
  wire       [3:0]    sramRes0_io_addr;
  wire       [3:0]    sramRes1_io_addr;
  wire       [3:0]    sramRes2_io_addr;
  wire       [9:0]    tpu_1_io_sram_raddr_w0;
  wire       [9:0]    tpu_1_io_sram_raddr_w1;
  wire       [9:0]    tpu_1_io_sram_raddr_d0;
  wire       [9:0]    tpu_1_io_sram_raddr_d1;
  wire                tpu_1_io_sram_write_enable_a;
  wire       [127:0]  tpu_1_io_sram_wdata_a;
  wire       [5:0]    tpu_1_io_sram_waddr_a;
  wire                tpu_1_io_sram_write_enable_b;
  wire       [127:0]  tpu_1_io_sram_wdata_b;
  wire       [5:0]    tpu_1_io_sram_waddr_b;
  wire                tpu_1_io_sram_write_enable_c;
  wire       [127:0]  tpu_1_io_sram_wdata_c;
  wire       [5:0]    tpu_1_io_sram_waddr_c;
  wire                tpu_1_io_tpu_done;
  wire       [31:0]   sramW0_io_rdata;
  wire       [31:0]   sramW1_io_rdata;
  wire       [31:0]   sramD0_io_rdata;
  wire       [31:0]   sramD1_io_rdata;

  TPU tpu_1 (
    .io_tpu_start           (io_tpu_start                ), //i
    .io_sram_rdata_w0       (sramW0_io_rdata[31:0]       ), //i
    .io_sram_rdata_w1       (sramW1_io_rdata[31:0]       ), //i
    .io_sram_rdata_d0       (sramD0_io_rdata[31:0]       ), //i
    .io_sram_rdata_d1       (sramD1_io_rdata[31:0]       ), //i
    .io_sram_raddr_w0       (tpu_1_io_sram_raddr_w0[9:0] ), //o
    .io_sram_raddr_w1       (tpu_1_io_sram_raddr_w1[9:0] ), //o
    .io_sram_raddr_d0       (tpu_1_io_sram_raddr_d0[9:0] ), //o
    .io_sram_raddr_d1       (tpu_1_io_sram_raddr_d1[9:0] ), //o
    .io_sram_write_enable_a (tpu_1_io_sram_write_enable_a), //o
    .io_sram_wdata_a        (tpu_1_io_sram_wdata_a[127:0]), //o
    .io_sram_waddr_a        (tpu_1_io_sram_waddr_a[5:0]  ), //o
    .io_sram_write_enable_b (tpu_1_io_sram_write_enable_b), //o
    .io_sram_wdata_b        (tpu_1_io_sram_wdata_b[127:0]), //o
    .io_sram_waddr_b        (tpu_1_io_sram_waddr_b[5:0]  ), //o
    .io_sram_write_enable_c (tpu_1_io_sram_write_enable_c), //o
    .io_sram_wdata_c        (tpu_1_io_sram_wdata_c[127:0]), //o
    .io_sram_waddr_c        (tpu_1_io_sram_waddr_c[5:0]  ), //o
    .io_tpu_done            (tpu_1_io_tpu_done           ), //o
    .reset                  (reset                       ), //i
    .clk                    (clk                         )  //i
  );
  SRAMReadOnly sramW0 (
    .io_addr  (sramW0_io_addr[6:0]  ), //i
    .io_rdata (sramW0_io_rdata[31:0]), //o
    .clk      (clk                  ), //i
    .reset    (reset                )  //i
  );
  SRAMReadOnly_1 sramW1 (
    .io_addr  (sramW1_io_addr[6:0]  ), //i
    .io_rdata (sramW1_io_rdata[31:0]), //o
    .clk      (clk                  ), //i
    .reset    (reset                )  //i
  );
  SRAMReadOnly_2 sramD0 (
    .io_addr  (sramD0_io_addr[6:0]  ), //i
    .io_rdata (sramD0_io_rdata[31:0]), //o
    .clk      (clk                  ), //i
    .reset    (reset                )  //i
  );
  SRAMReadOnly_3 sramD1 (
    .io_addr  (sramD1_io_addr[6:0]  ), //i
    .io_rdata (sramD1_io_rdata[31:0]), //o
    .clk      (clk                  ), //i
    .reset    (reset                )  //i
  );
  SRAMWriteOnly sramRes0 (
    .io_valid (tpu_1_io_sram_write_enable_a), //i
    .io_addr  (sramRes0_io_addr[3:0]       ), //i
    .io_wdata (tpu_1_io_sram_wdata_a[127:0]), //i
    .clk      (clk                         ), //i
    .reset    (reset                       )  //i
  );
  SRAMWriteOnly_1 sramRes1 (
    .io_valid (tpu_1_io_sram_write_enable_b), //i
    .io_addr  (sramRes1_io_addr[3:0]       ), //i
    .io_wdata (tpu_1_io_sram_wdata_b[127:0]), //i
    .clk      (clk                         ), //i
    .reset    (reset                       )  //i
  );
  SRAMWriteOnly_2 sramRes2 (
    .io_valid (tpu_1_io_sram_write_enable_c), //i
    .io_addr  (sramRes2_io_addr[3:0]       ), //i
    .io_wdata (tpu_1_io_sram_wdata_c[127:0]), //i
    .clk      (clk                         ), //i
    .reset    (reset                       )  //i
  );
  assign io_tpu_done = tpu_1_io_tpu_done;
  assign sramW0_io_addr = tpu_1_io_sram_raddr_w0[6:0];
  assign sramW1_io_addr = tpu_1_io_sram_raddr_w1[6:0];
  assign sramD0_io_addr = tpu_1_io_sram_raddr_d0[6:0];
  assign sramD1_io_addr = tpu_1_io_sram_raddr_d1[6:0];
  assign sramRes0_io_addr = tpu_1_io_sram_waddr_a[3:0];
  assign sramRes1_io_addr = tpu_1_io_sram_waddr_b[3:0];
  assign sramRes2_io_addr = tpu_1_io_sram_waddr_c[3:0];

endmodule

module SRAMWriteOnly_2 (
  input               io_valid,
  input      [3:0]    io_addr,
  input      [127:0]  io_wdata,
  input               clk,
  input               reset
);

  reg [127:0] mem [0:15] /* verilator public */ ;

  initial begin
    $readmemb("/home/rick/NTTAccelerator/example/TPU_verification/tmp/job_1/TPUSimEnv.v_toplevel_sramRes2_mem.bin",mem);
  end
  always @(posedge clk) begin
    if(io_valid) begin
      mem[io_addr] <= io_wdata;
    end
  end


endmodule

module SRAMWriteOnly_1 (
  input               io_valid,
  input      [3:0]    io_addr,
  input      [127:0]  io_wdata,
  input               clk,
  input               reset
);

  reg [127:0] mem [0:15] /* verilator public */ ;

  initial begin
    $readmemb("/home/rick/NTTAccelerator/example/TPU_verification/tmp/job_1/TPUSimEnv.v_toplevel_sramRes1_mem.bin",mem);
  end
  always @(posedge clk) begin
    if(io_valid) begin
      mem[io_addr] <= io_wdata;
    end
  end


endmodule

module SRAMWriteOnly (
  input               io_valid,
  input      [3:0]    io_addr,
  input      [127:0]  io_wdata,
  input               clk,
  input               reset
);

  reg [127:0] mem [0:15] /* verilator public */ ;

  initial begin
    $readmemb("/home/rick/NTTAccelerator/example/TPU_verification/tmp/job_1/TPUSimEnv.v_toplevel_sramRes0_mem.bin",mem);
  end
  always @(posedge clk) begin
    if(io_valid) begin
      mem[io_addr] <= io_wdata;
    end
  end


endmodule

module SRAMReadOnly_3 (
  input      [6:0]    io_addr,
  output     [31:0]   io_rdata,
  input               clk,
  input               reset
);

  reg        [31:0]   _zz_mem_port0;
  wire                _zz_mem_port;
  wire                _zz_io_rdata;
  reg [31:0] mem [0:127] /* verilator public */ ;

  assign _zz_io_rdata = 1'b1;
  initial begin
    $readmemb("/home/rick/NTTAccelerator/example/TPU_verification/tmp/job_1/TPUSimEnv.v_toplevel_sramD1_mem.bin",mem);
  end
  always @(posedge clk) begin
    if(_zz_io_rdata) begin
      _zz_mem_port0 <= mem[io_addr];
    end
  end

  assign io_rdata = _zz_mem_port0;

endmodule

module SRAMReadOnly_2 (
  input      [6:0]    io_addr,
  output     [31:0]   io_rdata,
  input               clk,
  input               reset
);

  reg        [31:0]   _zz_mem_port0;
  wire                _zz_mem_port;
  wire                _zz_io_rdata;
  reg [31:0] mem [0:127] /* verilator public */ ;

  assign _zz_io_rdata = 1'b1;
  initial begin
    $readmemb("/home/rick/NTTAccelerator/example/TPU_verification/tmp/job_1/TPUSimEnv.v_toplevel_sramD0_mem.bin",mem);
  end
  always @(posedge clk) begin
    if(_zz_io_rdata) begin
      _zz_mem_port0 <= mem[io_addr];
    end
  end

  assign io_rdata = _zz_mem_port0;

endmodule

module SRAMReadOnly_1 (
  input      [6:0]    io_addr,
  output     [31:0]   io_rdata,
  input               clk,
  input               reset
);

  reg        [31:0]   _zz_mem_port0;
  wire                _zz_mem_port;
  wire                _zz_io_rdata;
  reg [31:0] mem [0:127] /* verilator public */ ;

  assign _zz_io_rdata = 1'b1;
  initial begin
    $readmemb("/home/rick/NTTAccelerator/example/TPU_verification/tmp/job_1/TPUSimEnv.v_toplevel_sramW1_mem.bin",mem);
  end
  always @(posedge clk) begin
    if(_zz_io_rdata) begin
      _zz_mem_port0 <= mem[io_addr];
    end
  end

  assign io_rdata = _zz_mem_port0;

endmodule

module SRAMReadOnly (
  input      [6:0]    io_addr,
  output     [31:0]   io_rdata,
  input               clk,
  input               reset
);

  reg        [31:0]   _zz_mem_port0;
  wire                _zz_mem_port;
  wire                _zz_io_rdata;
  reg [31:0] mem [0:127] /* verilator public */ ;

  assign _zz_io_rdata = 1'b1;
  initial begin
    $readmemb("/home/rick/NTTAccelerator/example/TPU_verification/tmp/job_1/TPUSimEnv.v_toplevel_sramW0_mem.bin",mem);
  end
  always @(posedge clk) begin
    if(_zz_io_rdata) begin
      _zz_mem_port0 <= mem[io_addr];
    end
  end

  assign io_rdata = _zz_mem_port0;

endmodule

module TPU (
  input               io_tpu_start,
  input      [31:0]   io_sram_rdata_w0,
  input      [31:0]   io_sram_rdata_w1,
  input      [31:0]   io_sram_rdata_d0,
  input      [31:0]   io_sram_rdata_d1,
  output     [9:0]    io_sram_raddr_w0,
  output     [9:0]    io_sram_raddr_w1,
  output     [9:0]    io_sram_raddr_d0,
  output     [9:0]    io_sram_raddr_d1,
  output              io_sram_write_enable_a,
  output     [127:0]  io_sram_wdata_a,
  output     [5:0]    io_sram_waddr_a,
  output              io_sram_write_enable_b,
  output     [127:0]  io_sram_wdata_b,
  output     [5:0]    io_sram_waddr_b,
  output              io_sram_write_enable_c,
  output     [127:0]  io_sram_wdata_c,
  output     [5:0]    io_sram_waddr_c,
  output              io_tpu_done,
  input               reset,
  input               clk
);

  wire                tpuVerilog_srstn;
  wire       [9:0]    tpuVerilog_sram_raddr_w0;
  wire       [9:0]    tpuVerilog_sram_raddr_w1;
  wire       [9:0]    tpuVerilog_sram_raddr_d0;
  wire       [9:0]    tpuVerilog_sram_raddr_d1;
  wire                tpuVerilog_sram_write_enable_a0;
  wire       [127:0]  tpuVerilog_sram_wdata_a;
  wire       [5:0]    tpuVerilog_sram_waddr_a;
  wire                tpuVerilog_sram_write_enable_b0;
  wire       [127:0]  tpuVerilog_sram_wdata_b;
  wire       [5:0]    tpuVerilog_sram_waddr_b;
  wire                tpuVerilog_sram_write_enable_c0;
  wire       [127:0]  tpuVerilog_sram_wdata_c;
  wire       [5:0]    tpuVerilog_sram_waddr_c;
  wire                tpuVerilog_tpu_done;

  tpu_top #(
    .ARRAY_SIZE(8),
    .SRAM_DATA_WIDTH(32),
    .DATA_WIDTH(8),
    .OUTPUT_DATA_WIDTH(16)
  ) tpuVerilog (
    .clk                  (clk                            ), //i
    .srstn                (tpuVerilog_srstn               ), //i
    .tpu_start            (io_tpu_start                   ), //i
    .sram_rdata_w0        (io_sram_rdata_w0[31:0]         ), //i
    .sram_rdata_w1        (io_sram_rdata_w1[31:0]         ), //i
    .sram_rdata_d0        (io_sram_rdata_d0[31:0]         ), //i
    .sram_rdata_d1        (io_sram_rdata_d1[31:0]         ), //i
    .sram_raddr_w0        (tpuVerilog_sram_raddr_w0[9:0]  ), //o
    .sram_raddr_w1        (tpuVerilog_sram_raddr_w1[9:0]  ), //o
    .sram_raddr_d0        (tpuVerilog_sram_raddr_d0[9:0]  ), //o
    .sram_raddr_d1        (tpuVerilog_sram_raddr_d1[9:0]  ), //o
    .sram_write_enable_a0 (tpuVerilog_sram_write_enable_a0), //o
    .sram_wdata_a         (tpuVerilog_sram_wdata_a[127:0] ), //o
    .sram_waddr_a         (tpuVerilog_sram_waddr_a[5:0]   ), //o
    .sram_write_enable_b0 (tpuVerilog_sram_write_enable_b0), //o
    .sram_wdata_b         (tpuVerilog_sram_wdata_b[127:0] ), //o
    .sram_waddr_b         (tpuVerilog_sram_waddr_b[5:0]   ), //o
    .sram_write_enable_c0 (tpuVerilog_sram_write_enable_c0), //o
    .sram_wdata_c         (tpuVerilog_sram_wdata_c[127:0] ), //o
    .sram_waddr_c         (tpuVerilog_sram_waddr_c[5:0]   ), //o
    .tpu_done             (tpuVerilog_tpu_done            )  //o
  );
  assign tpuVerilog_srstn = (! reset);
  assign io_sram_raddr_w0 = tpuVerilog_sram_raddr_w0;
  assign io_sram_raddr_w1 = tpuVerilog_sram_raddr_w1;
  assign io_sram_raddr_d0 = tpuVerilog_sram_raddr_d0;
  assign io_sram_raddr_d1 = tpuVerilog_sram_raddr_d1;
  assign io_sram_write_enable_a = tpuVerilog_sram_write_enable_a0;
  assign io_sram_wdata_a = tpuVerilog_sram_wdata_a;
  assign io_sram_waddr_a = tpuVerilog_sram_waddr_a;
  assign io_sram_write_enable_b = tpuVerilog_sram_write_enable_b0;
  assign io_sram_wdata_b = tpuVerilog_sram_wdata_b;
  assign io_sram_waddr_b = tpuVerilog_sram_waddr_b;
  assign io_sram_write_enable_c = tpuVerilog_sram_write_enable_c0;
  assign io_sram_wdata_c = tpuVerilog_sram_wdata_c;
  assign io_sram_waddr_c = tpuVerilog_sram_waddr_c;
  assign io_tpu_done = tpuVerilog_tpu_done;

endmodule
