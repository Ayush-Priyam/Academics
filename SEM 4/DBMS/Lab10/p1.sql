declare 
    a number(4);
    b number(4);
    c number(4);
begin 
    a :=&a;
    b :=&b; 
    c :=&c; 
    IF(a >= b AND a>=c) THEN
        dbms_output.put_line(a||' is the largest'); 
    ELSIF(b >= a AND b>=c) THEN
        dbms_output.put_line(b|| ' is the largest'); 
    else
        dbms_output.put_line(c||' is the largest'); 
    end if;
end;
/