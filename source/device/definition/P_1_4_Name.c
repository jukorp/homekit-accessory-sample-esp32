/**
 * Copyright (C) 2013-2015
 *
 * @author jxfengzi@gmail.com
 * @date   2013-11-19
 *
 * @file   P_1_4_Name.h
 *
 * @remark
 *
 */

#include "P_1_4_Name.h"

Property * P_1_4_Name(void)
{
    Property *thiz = NULL;

    do
    {
        thiz = Property_NewInstance(4, "homekit-spec", "name", 0x00000023, NULL);
        if (thiz == NULL)
        {
            break;
        }

        thiz->access = ACCESS_READ;
        thiz->format = FORMAT_STRING;
    } while (false);

    return thiz;
}