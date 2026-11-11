/* IL2CPP: Modules.Contexts.GamePlay.SuperCharger.UI.InLevelSuperChargerView$$SetVariant
void Modules_Contexts_GamePlay_SuperCharger_UI_InLevelSuperChargerView__SetVariant (Modules_Contexts_GamePlay_SuperCharger_UI_InLevelSuperChargerView_o* __this, int32_t type, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.SuperCharger.UI.InLevelSuperChargerView$$SetVariant
   void Modules_Contexts_GamePlay_SuperCharger_UI_InLevelSuperChargerView__SetVariant
   (Modules_Contexts_GamePlay_SuperCharger_UI_InLevelSuperChargerView_o* __this, int32_t type, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_SuperCharger_UI_InLevelSuperChargerView__SetVariant_20e5670
               (long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  if ((bRam0000000005c29703 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577f4e8);
    FUN_012d0dc8(PTR_DAT_057b5200);
    FUN_012d0dc8(PTR_DAT_057b4d38);
    FUN_012d0dc8(PTR_DAT_057a0ee0);
    bRam0000000005c29703 = 1;
  }
  puVar3 = PTR_DAT_057b5200;
  puVar2 = PTR_DAT_057a0ee0;
  puVar1 = PTR_DAT_0577f4e8;
  uStack_58 = 0;
  lStack_50 = 0;
  uStack_60 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_78,*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_057a0ee0);
    uStack_58 = uStack_70;
    uStack_60 = uStack_78;
    lStack_50 = lStack_68;
    while (uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_60,*(undefined8 *)puVar3), (uVar4 & 1) != 0) {
      if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      if (*(long *)(lStack_50 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      lVar5 = UnityEngine_Component__get_gameObject_408b480(*(long *)(lStack_50 + 0x18),0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      UnityEngine_GameObject__SetActive_408e318(lVar5,0,0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_60,*(undefined8 *)puVar1);
    if (*(long *)(param_1 + 0x28) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_78,*(long *)(param_1 + 0x28),*(undefined8 *)puVar2);
      uStack_58 = uStack_70;
      uStack_60 = uStack_78;
      lStack_50 = lStack_68;
      while( true ) {
        do {
          uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                            (&uStack_60,*(undefined8 *)puVar3);
          if ((uVar4 & 1) == 0) {
            System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                      (&uStack_60,*(undefined8 *)puVar1);
            return;
          }
          if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
        } while (*(int *)(lStack_50 + 0x10) != param_2);
        if (*(long *)(lStack_50 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        lVar5 = UnityEngine_Component__get_gameObject_408b480(*(long *)(lStack_50 + 0x18),0);
        if (lVar5 == 0) break;
        UnityEngine_GameObject__SetActive_408e318(lVar5,1,0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

