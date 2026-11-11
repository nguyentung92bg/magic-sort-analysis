/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleCompleteAnimationController$$PlayWinParticles
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController__PlayWinParticles (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController_o* __this, int32_t bottleHeight, Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* winParticleColor, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleCompleteAnimationController$$PlayWinParticles
   void 
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController__PlayWinParticles
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController_o* __this,
   int32_t bottleHeight,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* winParticleColor,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController__PlayWinParticles_24923c0
               (long param_1,int param_2,long param_3)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  undefined8 uVar9;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2b2b5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d9070);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c2b2b5 = 1;
  }
  if (((((**(long **)(*(long *)puVar2 + 0xb8) == 0) ||
        (lVar3 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar3 == 0)) ||
       (lVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                          (lVar3,*(undefined8 *)PTR_DAT_057d9070), lVar3 == 0)) ||
      ((*(long *)(lVar3 + 0x18) == 0 ||
       (lVar3 = *(long *)(*(long *)(lVar3 + 0x18) + 0x10), lVar3 == 0)))) ||
     (lVar6 = *(long *)(param_1 + 0x18), lVar6 == 0)) goto LAB_02592598;
  cVar1 = *(char *)(lVar3 + 0x3b);
  lVar3 = *(long *)(param_1 + 0x20);
  lVar5 = lVar3;
  if (0 < *(int *)(lVar6 + 0x18)) {
    iVar8 = 0;
    plVar7 = (long *)(lVar6 + 0x28);
    do {
      if ((int)plVar7[-1] == param_2) {
        lVar5 = *plVar7;
        break;
      }
      iVar8 = iVar8 + 1;
      plVar7 = plVar7 + 2;
    } while (iVar8 < *(int *)(lVar6 + 0x18));
  }
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  if (cVar1 != '\0' || param_2 != 4) {
    lVar3 = lVar5;
  }
  if (*(int *)(*(long *)PTR_DAT_0576c200 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar4 = UnityEngine_Object__op_Inequality_408e110(uVar9,0,0);
  if ((uVar4 & 1) != 0) {
    lVar6 = *(long *)(param_1 + 0x40);
    if ((param_2 == 4) && (cVar1 != '\0')) {
      if ((param_3 == 0) || (lVar6 == 0)) goto LAB_02592598;
      UnityEngine_SpriteRenderer__set_color_4095de0
                (*(undefined4 *)(param_3 + 0x30),*(undefined4 *)(param_3 + 0x34),
                 *(undefined4 *)(param_3 + 0x38),*(undefined4 *)(param_3 + 0x3c),lVar6,0);
      if ((*(long *)(param_1 + 0x40) == 0) ||
         (lVar6 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x40),0),
         lVar6 == 0)) goto LAB_02592598;
      uVar9 = 1;
    }
    else {
      if ((lVar6 == 0) ||
         (lVar6 = UnityEngine_Component__get_gameObject_408b480(lVar6,0), lVar6 == 0))
      goto LAB_02592598;
      uVar9 = 0;
    }
    UnityEngine_GameObject__SetActive_408e318(lVar6,uVar9,0);
  }
  if ((lVar3 != 0) && (lVar6 = UnityEngine_Component__get_gameObject_408b480(lVar3,0), lVar6 != 0))
  {
    UnityEngine_GameObject__SetActive_408e318(lVar6,1,0);
    Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_WinParticle__SetColorOfWinParticles_2300334
              (lVar3,param_3,cVar1 != '\0',0);
    lVar3 = *(long *)(lVar3 + 0x48);
    if (lVar3 != 0) {
      if (pcRam0000000005c35e30 == (code *)0x0) {
        pcRam0000000005c35e30 = (code *)FUN_012d0d84(&UNK_043e020e,0);
      }
                    /* WARNING: Could not recover jumptable at 0x03bbc604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c35e30)(lVar3,1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0(0,0);
  }
LAB_02592598:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

