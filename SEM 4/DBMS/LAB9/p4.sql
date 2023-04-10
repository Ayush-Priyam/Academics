declare 
    h number(2); 
    r decimal(3);
    gp decimal(3); 
    np decimal(3);
BEGIN
    h :=&hr; 
    r :=&r;
    gp := h *r;
    np := gp- (0.28 *gp );
    dbms_output.put_line('Gross Pay : '||gp||' and Net Pay : '|| np); 
END;
/