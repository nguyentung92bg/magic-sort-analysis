/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Regular.RegularSelectionAnimationHandler$$OnDeselect
void Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_RegularSelectionAnimationHandler__OnDeselect (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_RegularSelectionAnimationHandler_o* __this, Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* selection, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Regular.RegularSelectionAnimationHandler$$OnDeselect
   void 
   Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_RegularSelectionAnimationHandler__OnDeselect
   (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_RegularSelectionAnimationHandler_o*
   __this, Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* selection, const
   MethodInfo* method); */

long Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_RegularSelectionAnimationHandler__OnDeselect_16138a4
               (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  
  puVar1 = PTR_DAT_057da028;
  if ((bRam0000000005c24492 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0578afb0);
    FUN_012d0dc8(PTR_DAT_057ba5f0);
    FUN_012d0dc8(PTR_DAT_057da028);
    bRam0000000005c24492 = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    System_Object___ctor_23dfe5c(lVar2,0);
    plVar7 = (long *)(lVar2 + 0x18);
    *plVar7 = param_2;
    FUN_012d0d74(plVar7,param_2);
    if (*plVar7 != 0) {
      plVar6 = (long *)(lVar2 + 0x10);
      *plVar6 = *(long *)(*plVar7 + 0x10);
      FUN_012d0d74(plVar6);
      puVar1 = PTR_DAT_057606c8;
      if (*plVar6 != 0) {
        lVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__MoveDown_2499028
                          (*plVar6,0);
        lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        puVar1 = PTR_DAT_0578afb0;
        if (lVar4 != 0) {
          DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,lVar2,*(undefined8 *)PTR_DAT_057ba5f0,0);
          uVar5 = *(undefined8 *)puVar1;
          if ((lVar3 != 0) && (*(char *)(lVar3 + 0xe8) != '\0')) {
            *(long *)(lVar3 + 0x80) = lVar4;
            FUN_012d0d74((long *)(lVar3 + 0x80),lVar4,uVar5);
          }
          return lVar3;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

