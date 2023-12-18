module test(
    input i_clk,
    input i_rst,
    input i_a,
    input i_b,
    output o_f
);
reg ro_f;
assign o_f = ro_f;
always@(posedge i_clk or posedge i_rst)
begin
    if(i_rst)
        ro_f <= 1;
    else
        ro_f <= i_a ^ i_b;
end
endmodule
