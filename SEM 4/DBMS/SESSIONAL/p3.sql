declare 
    a number;
    b number;
    c number;
    d number;
    m number;
begin 
    a :=&a;
    b :=&b; 
    c :=&c; 
    d := &d;
    m:= a;
    IF m<b THEN
        m:=b;
    end if;
    IF m<c THEN
        m:= c;
    end if;
    IF m<d THEN
        m:= d; 
    end if;
    dbms_output.put_line(m||' is the larrgest');
end;
/