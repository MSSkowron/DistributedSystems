//
// Copyright (c) ZeroC, Inc. All rights reserved.
//
//
// Ice version 3.7.9
//
// <auto-generated>
//
// Generated from file `bookstore.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

package Bookstore;

public class Book extends com.zeroc.Ice.Value
{
    public Book()
    {
        this.title = "";
        this.author = "";
    }

    public Book(String title, String author)
    {
        this.title = title;
        this.author = author;
    }

    public Book(String title, String author, int year)
    {
        this.title = title;
        this.author = author;
        setYear(year);
    }

    public String title;

    public String author;

    private int year;
    private boolean _year;

    public int getYear()
    {
        if(!_year)
        {
            throw new java.util.NoSuchElementException("year is not set");
        }
        return year;
    }

    public void setYear(int year)
    {
        _year = true;
        this.year = year;
    }

    public boolean hasYear()
    {
        return _year;
    }

    public void clearYear()
    {
        _year = false;
    }

    public void optionalYear(java.util.OptionalInt v)
    {
        if(v == null || !v.isPresent())
        {
            _year = false;
        }
        else
        {
            _year = true;
            year = v.getAsInt();
        }
    }

    public java.util.OptionalInt optionalYear()
    {
        if(_year)
        {
            return java.util.OptionalInt.of(year);
        }
        else
        {
            return java.util.OptionalInt.empty();
        }
    }

    public Book clone()
    {
        return (Book)super.clone();
    }

    public static String ice_staticId()
    {
        return "::Bookstore::Book";
    }

    @Override
    public String ice_id()
    {
        return ice_staticId();
    }

    /** @hidden */
    public static final long serialVersionUID = 2083472499L;

    /** @hidden */
    @Override
    protected void _iceWriteImpl(com.zeroc.Ice.OutputStream ostr_)
    {
        ostr_.startSlice(ice_staticId(), -1, true);
        ostr_.writeString(title);
        ostr_.writeString(author);
        if(_year)
        {
            ostr_.writeInt(1, year);
        }
        ostr_.endSlice();
    }

    /** @hidden */
    @Override
    protected void _iceReadImpl(com.zeroc.Ice.InputStream istr_)
    {
        istr_.startSlice();
        title = istr_.readString();
        author = istr_.readString();
        if(_year = istr_.readOptional(1, com.zeroc.Ice.OptionalFormat.F4))
        {
            year = istr_.readInt();
        }
        istr_.endSlice();
    }
}
