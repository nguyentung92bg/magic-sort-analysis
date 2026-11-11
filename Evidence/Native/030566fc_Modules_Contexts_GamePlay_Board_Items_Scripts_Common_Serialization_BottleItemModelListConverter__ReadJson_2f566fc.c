/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Common.Serialization.BottleItemModelListConverter$$ReadJson
Il2CppObject* Modules_Contexts_GamePlay_Board_Items_Scripts_Common_Serialization_BottleItemModelListConverter__ReadJson (Modules_Contexts_GamePlay_Board_Items_Scripts_Common_Serialization_BottleItemModelListConverter_o* __this, Newtonsoft_Json_JsonReader_o* reader, System_Type_o* objectType, Il2CppObject* existingValue, Newtonsoft_Json_JsonSerializer_o* serializer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Common.Serialization.BottleItemModelListConverter$$ReadJson
   Il2CppObject*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Common_Serialization_BottleItemModelListConverter__ReadJson
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Common_Serialization_BottleItemModelListConverter_o*
   __this, Newtonsoft_Json_JsonReader_o* reader, System_Type_o* objectType, Il2CppObject*
   existingValue, Newtonsoft_Json_JsonSerializer_o* serializer, const MethodInfo* method); */

long Modules_Contexts_GamePlay_Board_Items_Scripts_Common_Serialization_BottleItemModelListConverter__ReadJson_2f566fc
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_057e3110;
  if ((bRam0000000005c308a8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f9c08);
    FUN_012d0dc8(PTR_DAT_05761ab0);
    FUN_012d0dc8(PTR_DAT_057e7fd0);
    FUN_012d0dc8(PTR_DAT_05772818);
    FUN_012d0dc8(PTR_DAT_057e3110);
    bRam0000000005c308a8 = 1;
  }
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_057e7fd0;
  if (lVar5 != 0) {
    System_Object___ctor_23dfe5c(lVar5,0);
    *(undefined8 *)(lVar5 + 0x10) = param_5;
    FUN_012d0d74((undefined8 *)(lVar5 + 0x10),param_5);
    uVar6 = Newtonsoft_Json_Linq_JArray__Load_1378720(param_2,0);
    lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    puVar2 = PTR_DAT_057f9c08;
    puVar1 = PTR_DAT_05761ab0;
    if (lVar7 != 0) {
      System_Func_object__object____ctor_33820ac(lVar7,lVar5,*(undefined8 *)PTR_DAT_05772818,0);
      lVar5 = System_Linq_Enumerable__Select_object__object__2427df8
                        (uVar6,lVar7,*(undefined8 *)puVar2);
      lVar7 = *(long *)puVar1;
      if (lVar5 == 0) {
        uVar6 = thunk_FUN_0136d790(PTR_DAT_057ab1a0);
        uVar6 = System_Linq_Error__ArgumentNull_3d79794(uVar6,0);
        uVar4 = thunk_FUN_0136d790(PTR_DAT_058031f8);
                    /* WARNING: Subroutine does not return */
        FUN_012d0eb8(uVar6,uVar4);
      }
      if ((*(byte *)(**(long **)(lVar7 + 0x38) + 0x132) & 1) == 0) {
        FUN_0131942c();
      }
      lVar3 = thunk_FUN_01320e48();
      if (lVar3 != 0) {
        (**(code **)(*(long *)(*(long *)(lVar7 + 0x38) + 8) + 8))(lVar3,lVar5);
        return lVar3;
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

