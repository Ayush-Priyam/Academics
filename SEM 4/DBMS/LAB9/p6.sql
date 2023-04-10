declare 
    year number(4); 
begin 
    year :=&year; 
    IF(MOD (year,400)=0) THEN
        dbms_output.put_line(year||' is Leap year.'); 
    ELSIF(MOD (year,100)=0) THEN
        dbms_output.put_line(year|| ' is not leap year.'); 
    ELSIF(MOD (year,4)=0) THEN
        dbms_output.put_line(year||' is Leap year.'); 
    else 
        dbms_output.put_line(year|| ' is not leap year.'); 
    end if;
end;
/