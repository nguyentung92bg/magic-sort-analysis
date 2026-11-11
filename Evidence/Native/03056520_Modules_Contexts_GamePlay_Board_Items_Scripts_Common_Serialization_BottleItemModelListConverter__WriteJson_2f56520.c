/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Common.Serialization.BottleItemModelListConverter$$WriteJson
void Modules_Contexts_GamePlay_Board_Items_Scripts_Common_Serialization_BottleItemModelListConverter__WriteJson (Modules_Contexts_GamePlay_Board_Items_Scripts_Common_Serialization_BottleItemModelListConverter_o* __this, Newtonsoft_Json_JsonWriter_o* writer, Il2CppObject* value, Newtonsoft_Json_JsonSerializer_o* serializer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Common.Serialization.BottleItemModelListConverter$$WriteJson
   void 
   Modules_Contexts_GamePlay_Board_Items_Scripts_Common_Serialization_BottleItemModelListConverter__WriteJson
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Common_Serialization_BottleItemModelListConverter_o*
   __this, Newtonsoft_Json_JsonWriter_o* writer, Il2CppObject* value,
   Newtonsoft_Json_JsonSerializer_o* serializer, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Common_Serialization_BottleItemModelListConverter__WriteJson_2f56520
               (undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  
  puVar2 = PTR_DAT_0575e550;
  if ((bRam0000000005c308a7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0581a568);
    FUN_012d0dc8(PTR_DAT_0575a1e8);
    FUN_012d0dc8(PTR_DAT_057b0a30);
    FUN_012d0dc8(PTR_DAT_057d3d10);
    FUN_012d0dc8(PTR_DAT_057d4c98);
    FUN_012d0dc8(PTR_DAT_057cc6b0);
    FUN_012d0dc8(PTR_DAT_0575e550);
    bRam0000000005c308a7 = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_057b0a30;
  if (lVar3 != 0) {
    System_Object___ctor_23dfe5c(lVar3,0);
    *(undefined8 *)(lVar3 + 0x10) = param_4;
    FUN_012d0d74((undefined8 *)(lVar3 + 0x10),param_4);
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    if (lVar4 != 0) {
      System_Func_object__object____ctor_33820ac(lVar4,lVar3,*(undefined8 *)PTR_DAT_057cc6b0,0);
      puVar2 = PTR_DAT_057d3d10;
      if (param_3 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_057d4c98 + 300);
        if ((*(byte *)(*param_3 + 300) < bVar1) ||
           (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)PTR_DAT_057d4c98)) {
                    /* WARNING: Subroutine does not return */
          FUN_012d1288(param_3);
        }
      }
      uVar5 = System_Linq_Enumerable__Select_object__object__2427df8
                        (param_3,lVar4,*(undefined8 *)PTR_DAT_0575a1e8);
      plVar6 = (long *)thunk_FUN_01320e48(*(undefined8 *)puVar2);
      puVar2 = PTR_DAT_0581a568;
      if (plVar6 != (long *)0x0) {
        Newtonsoft_Json_Linq_JArray___ctor_1378574(plVar6,uVar5,0);
        lVar4 = *(long *)puVar2;
        lVar3 = **(long **)(lVar4 + 0x38);
        if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
          lVar3 = FUN_0131942c();
        }
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        lVar3 = **(long **)(lVar4 + 0x38);
        if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
          lVar3 = FUN_0131942c();
        }
                    /* WARNING: Could not recover jumptable at 0x030566e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x2b8))
                  (plVar6,param_2,**(undefined8 **)(lVar3 + 0xb8),*(undefined8 *)(*plVar6 + 0x2c0));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

