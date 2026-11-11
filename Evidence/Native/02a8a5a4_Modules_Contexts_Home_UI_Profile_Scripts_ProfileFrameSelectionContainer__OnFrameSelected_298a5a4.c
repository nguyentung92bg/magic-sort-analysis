/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileFrameSelectionContainer$$OnFrameSelected
void Modules_Contexts_Home_UI_Profile_Scripts_ProfileFrameSelectionContainer__OnFrameSelected (Modules_Contexts_Home_UI_Profile_Scripts_ProfileFrameSelectionContainer_o* __this, Modules_Contexts_Application_Player_Scripts_ProfileFrameInfo_o* info, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileFrameSelectionContainer$$OnFrameSelected
   void Modules_Contexts_Home_UI_Profile_Scripts_ProfileFrameSelectionContainer__OnFrameSelected
   (Modules_Contexts_Home_UI_Profile_Scripts_ProfileFrameSelectionContainer_o* __this,
   Modules_Contexts_Application_Player_Scripts_ProfileFrameInfo_o* info, const MethodInfo* method);
    */

void Modules_Contexts_Home_UI_Profile_Scripts_ProfileFrameSelectionContainer__OnFrameSelected_298a5a4
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar1 = PTR_DAT_05780740;
  if ((bRam0000000005c2d7b6 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057829a0);
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_05810c48);
    FUN_012d0dc8(PTR_DAT_057e7270);
    FUN_012d0dc8(PTR_DAT_05780740);
    bRam0000000005c2d7b6 = 1;
  }
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_05810c48;
  if (lVar4 != 0) {
    System_Object___ctor_23dfe5c(lVar4,0);
    puVar7 = (undefined8 *)(lVar4 + 0x10);
    *puVar7 = param_2;
    FUN_012d0d74(puVar7,param_2);
    lVar8 = *(long *)(param_1 + 0x18);
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if ((lVar5 != 0) &&
       (System_Predicate_object____ctor_30fcf30(lVar5,lVar4,*(undefined8 *)PTR_DAT_057e7270,0),
       puVar1 = PTR_DAT_0576c200, lVar8 != 0)) {
      lVar4 = System_Collections_Generic_List_object___Find_21fd130
                        (lVar8,lVar5,*(undefined8 *)PTR_DAT_057829a0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)puVar1);
      }
      uVar6 = UnityEngine_Object__op_Inequality_408e110(lVar4,0,0);
      if ((uVar6 & 1) != 0) {
        if (lVar4 == 0) goto LAB_02a8a714;
        if (*(char *)(lVar4 + 0x48) == '\0') {
          if (*(long *)(lVar4 + 0x40) == 0) goto LAB_02a8a714;
          uVar6 = Modules_Contexts_Application_Player_Scripts_ProfileFrameInfo__get_IsValid_1379e0c
                            (*(long *)(lVar4 + 0x40),0);
          if ((uVar6 & 1) != 0) {
            *(undefined8 *)(param_1 + 0x20) = *puVar7;
            FUN_012d0d74();
            if ((bRam0000000005c2d7b7 & 1) == 0) {
              FUN_012d0dc8(PTR_DAT_05772930);
              FUN_012d0dc8(PTR_DAT_057e6198);
              FUN_012d0dc8(PTR_DAT_057f5360);
              FUN_012d0dc8(PTR_DAT_05778128);
              bRam0000000005c2d7b7 = 1;
            }
            puVar2 = PTR_DAT_057e6198;
            puVar1 = PTR_DAT_05772930;
            uStack_40 = 0;
            lStack_38 = 0;
            uStack_48 = 0;
            if (*(long *)(param_1 + 0x18) != 0) {
              System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                        (&uStack_48,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_05778128);
              while( true ) {
                uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                  (&uStack_48,*(undefined8 *)puVar2);
                lVar4 = lStack_38;
                if ((uVar6 & 1) == 0) {
                  System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                            (&uStack_48,*(undefined8 *)puVar1);
                  return;
                }
                if (lStack_38 == 0) break;
                uVar3 = System_Object__Equals_23edf0c
                                  (*(undefined8 *)(lStack_38 + 0x40),*(undefined8 *)(param_1 + 0x20)
                                   ,0);
                Modules_Contexts_Home_UI_Profile_Scripts_ProfileFrameSpriteSelectionFrame__SetFrameActive_298a720
                          (lVar4,uVar3 & 1);
              }
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
        }
      }
      return;
    }
  }
LAB_02a8a714:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

