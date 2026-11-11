/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Common.Serialization.BottleItemModelListConverter$$CanConvert
bool Modules_Contexts_GamePlay_Board_Items_Scripts_Common_Serialization_BottleItemModelListConverter__CanConvert (Modules_Contexts_GamePlay_Board_Items_Scripts_Common_Serialization_BottleItemModelListConverter_o* __this, System_Type_o* objectType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Common.Serialization.BottleItemModelListConverter$$CanConvert
   bool 
   Modules_Contexts_GamePlay_Board_Items_Scripts_Common_Serialization_BottleItemModelListConverter__CanConvert
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Common_Serialization_BottleItemModelListConverter_o*
   __this, System_Type_o* objectType, const MethodInfo* method); */

bool Modules_Contexts_GamePlay_Board_Items_Scripts_Common_Serialization_BottleItemModelListConverter__CanConvert_2f56498
               (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_DAT_0578a3a8;
  puVar1 = PTR_DAT_0575aeb0;
  if ((bRam0000000005c308a6 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575aeb0);
    FUN_012d0dc8(PTR_DAT_0578a3a8);
    bRam0000000005c308a6 = 1;
  }
  uVar4 = *(undefined8 *)puVar1;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar3 = System_Type__GetTypeFromHandle_2690398(uVar4,0);
  return param_2 == lVar3;
}

