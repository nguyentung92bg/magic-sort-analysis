/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Common.Serialization.BottleCollectionConverter$$ReadJson
Il2CppObject* Modules_Contexts_GamePlay_Board_Items_Scripts_Common_Serialization_BottleCollectionConverter__ReadJson (Modules_Contexts_GamePlay_Board_Items_Scripts_Common_Serialization_BottleCollectionConverter_o* __this, Newtonsoft_Json_JsonReader_o* reader, System_Type_o* objectType, Il2CppObject* existingValue, Newtonsoft_Json_JsonSerializer_o* serializer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Common.Serialization.BottleCollectionConverter$$ReadJson
   Il2CppObject*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Common_Serialization_BottleCollectionConverter__ReadJson
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Common_Serialization_BottleCollectionConverter_o*
   __this, Newtonsoft_Json_JsonReader_o* reader, System_Type_o* objectType, Il2CppObject*
   existingValue, Newtonsoft_Json_JsonSerializer_o* serializer, const MethodInfo* method); */

long Modules_Contexts_GamePlay_Board_Items_Scripts_Common_Serialization_BottleCollectionConverter__ReadJson_2f54e90
               (void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_057f38d8;
  if ((bRam0000000005c308a2 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f38d8);
    bRam0000000005c308a2 = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection___ctor_2f54ef0(lVar2,0,0);
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

