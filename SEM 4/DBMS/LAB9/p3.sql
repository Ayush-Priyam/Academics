declare 
    a number; 
    b number; 
    x number;
begin
    a:=&a; 
    b:=&b;
    dbms_output.put_line('Original nos: '|| a ||' and '|| b);
    x := a; 
    a := b;
    b := x;
    dbms_output.put_line('After swapping: '|| a ||' and '|| b);
end; 
/