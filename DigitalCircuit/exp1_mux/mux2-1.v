module mux2-1(
    input a,
    input b,
    input s,
    output y
);
always@(*)
begin
    if(s)
        y <= b;
    else
        y <= a;
end
endmodule
