onst Player &obj)   // shallow copy 
    {
        name = obj.name;
        data=new int;
        *data = &obj.data;
    }