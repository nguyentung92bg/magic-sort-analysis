/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottleCongratsPopUp$$<PlayCongratsSecondPart>b__19_0
void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleCongratsPopUp___PlayCongratsSecondPart_b__19_0 (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleCongratsPopUp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottleCongratsPopUp$$<PlayCongratsSecondPart>b__19_0
   void 
   Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleCongratsPopUp___PlayCongratsSecondPart_b__19_0
   (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleCongratsPopUp_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleCongratsPopUp___PlayCongratsSecondPart_b__19_0_375f06c
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c37e93 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057974a0,0,0);
    FUN_012d0dc8(PTR_DAT_057af350);
    FUN_012d0dc8(PTR_DAT_0580dff8);
    FUN_012d0dc8(PTR_DAT_057faca0);
    bRam0000000005c37e93 = 1;
  }
  puVar2 = PTR_DAT_057af350;
  puVar1 = PTR_DAT_057974a0;
  uStack_30 = 0;
  lStack_28 = 0;
  uStack_38 = 0;
  lVar3 = *(long *)(lVar3 + 0x38);
  if (lVar3 != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_38,lVar3,*(undefined8 *)PTR_DAT_057faca0);
    while (uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_38,*(undefined8 *)puVar2), (uVar4 & 1) != 0) {
      if (lStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      lVar3 = UnityEngine_Component__get_gameObject_408b480(lStack_28,0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      UnityEngine_GameObject__SetActive_408e318(lVar3,0,0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_38,*(undefined8 *)puVar1);
  }
  return;
}

