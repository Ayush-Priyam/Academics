DECLARE
    n number(5); 
    sq number; 
    c number;
    d number; 
BEGIN 
    n := &n;
    sq := n*n; 
    c := n*n*n; 
    d :=2*n;
    dbms_output.put_line('Original Number: '||n); 
    dbms_output.put_line('Square : '||sq); 
    dbms_output.put_line('Double: '|| d); 
    dbms_output.put_line('Cube: '||c);
END;
/