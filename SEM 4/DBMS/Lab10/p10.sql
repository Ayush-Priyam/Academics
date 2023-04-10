DECLARE
    n number;
    i number;
    c number;
BEGIN
    n:= &n;
    c:=0;
    for i in 1..n loop
        c:= c+i;
    end loop;
    dbms_output.put_line(c|| ' is the reuslt');
END;
/