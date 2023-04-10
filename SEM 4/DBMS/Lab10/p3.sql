DECLARE
    n number(5); 
    sq number; 
    c number;
BEGIN 
    n := &n;
    sq := n*n; 
    c := n*n*n; 
    dbms_output.put_line('Original Number: '||n); 
    dbms_output.put_line('Square : '||sq); 
    dbms_output.put_line('Cube: '||c);
END;
/