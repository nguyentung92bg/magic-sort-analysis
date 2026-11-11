/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileSpriteSelectionContainer$$InitializeSprites
void Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer__InitializeSprites (Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer_o* __this, System_Collections_Generic_List_ProfileSprite__o* profileSprites, Modules_Contexts_Home_UI_Profile_Scripts_ProfileSprite_o* faceBookProfileSprite, bool isSignedInToFacebook, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.UI.Profile.Scripts.ProfileSpriteSelectionContainer$$InitializeSprites
   void Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer__InitializeSprites
   (Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer_o* __this,
   System_Collections_Generic_List_ProfileSprite__o* profileSprites,
   Modules_Contexts_Home_UI_Profile_Scripts_ProfileSprite_o* faceBookProfileSprite, bool
   isSignedInToFacebook, const MethodInfo* method); */

void Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer__InitializeSprites_298d938
               (long param_1,long param_2,long param_3,uint param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000005c2d7e6 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c7a38);
    FUN_012d0dc8(PTR_DAT_057884f0);
    FUN_012d0dc8(PTR_DAT_0576c340);
    bRam0000000005c2d7e6 = 1;
  }
  puVar2 = PTR_DAT_057884f0;
  puVar1 = PTR_DAT_0576c340;
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 != 0) {
    iVar8 = 0;
    while (iVar8 < *(int *)(lVar4 + 0x18)) {
      lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar4,iVar8,*(undefined8 *)puVar2);
      if ((param_2 == 0) ||
         (uVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (param_2,iVar8,*(undefined8 *)puVar1), lVar4 == 0)) goto LAB_02a8da4c;
      Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionFrame__Initialize_2adc644
                (lVar4,uVar5,0);
      lVar4 = *(long *)(param_1 + 0x20);
                    /* try { // try from 02a8d9f8 to 02b8da47 has its CatchHandler @ 02a8d9f8
                       catch() { ... } // from try @ 02a8d9f8 with catch @ 02a8d9f8
                       catch() { ... } // from try @ 02a8da8c with catch @ 02a8d9f8
                       catch() { ... } // from try @ 02a8dac4 with catch @ 02a8d9f8
                       catch() { ... } // from try @ 02a8daf4 with catch @ 02a8d9f8
                       catch() { ... } // from try @ 02a8db68 with catch @ 02a8d9f8 */
      iVar8 = iVar8 + 1;
      if (lVar4 == 0) goto LAB_02a8da4c;
    }
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar4 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x18),0),
       lVar4 != 0)) {
      UnityEngine_GameObject__SetActive_408e318(lVar4,param_4 & 1,0);
      lVar4 = *(long *)(param_1 + 0x18);
      if (lVar4 != 0) {
        lVar6 = lVar4;
        if (param_3 != 0) {
          lVar6 = 0;
          if (*(long *)(lVar4 + 0x20) != 0) {
            UnityEngine_SpriteRenderer__set_sprite_4095b64
                      (*(long *)(lVar4 + 0x20),*(undefined8 *)(param_3 + 0x10),0);
            *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)(param_3 + 0x18);
            FUN_012d0d74();
            if ((bRam0000000005c2eaf2 & 1) == 0) {
              FUN_012d0dc8(PTR_DAT_057a5ca0);
              FUN_012d0dc8(PTR_DAT_05778ae0);
              FUN_012d0dc8(PTR_DAT_057c0828);
              FUN_012d0dc8(PTR_DAT_057a6c70);
              bRam0000000005c2eaf2 = 1;
            }
            puVar3 = PTR_DAT_057a6c70;
            puVar2 = PTR_DAT_057a5ca0;
            puVar1 = PTR_DAT_05778ae0;
            uStack_58 = 0;
            uStack_60 = 0;
            if (*(long *)(lVar4 + 0x28) != 0) {
              System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                        (&uStack_78,*(long *)(lVar4 + 0x28),*(undefined8 *)PTR_DAT_057a6c70);
              lVar6 = lStack_68;
              uStack_58 = uStack_70;
              uStack_60 = uStack_78;
              while (uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                       (&uStack_60,*(undefined8 *)puVar1), (uVar7 & 1) != 0) {
                if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_012d0ef0();
                }
                UnityEngine_GameObject__SetActive_408e318(lVar6,0,0);
              }
              System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                        (&uStack_60,*(undefined8 *)puVar2);
              if (*(long *)(lVar4 + 0x30) != 0) {
                System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                          (&uStack_78,*(long *)(lVar4 + 0x30),*(undefined8 *)puVar3);
                uStack_58 = uStack_70;
                uStack_60 = uStack_78;
                while( true ) {
                  uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                    (&uStack_60,*(undefined8 *)puVar1);
                  if ((uVar7 & 1) == 0) {
                    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                              (&uStack_60,*(undefined8 *)puVar2);
                    return;
                  }
                  if (lStack_68 == 0) break;
                  UnityEngine_GameObject__SetActive_408e318(lStack_68,1,0);
                }
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0();
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0(lVar6,param_3,0);
      }
    }
  }
LAB_02a8da4c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

